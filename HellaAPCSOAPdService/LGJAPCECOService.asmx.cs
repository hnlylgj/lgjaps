using System;
using System.Collections.Generic;
using System.Data;
using System.Web;
using System.Collections;
using System.Web.Services;
using System.Web.Services.Protocols;
using System.ComponentModel;
using LGJHellaAPCSOAPdServiceInterface;
using System.IO;
using System.Diagnostics;
using HellaApcECOLib;


namespace LGJHellaAPCSOAPdService
{
    /// <summary>
    /// Summary description for Service
    /// </summary>
    [WebService(Namespace = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/",
                Name = "SOAPd Web Service",
                Description = "Web Service for testing SOAPd Client")]
    [WebServiceBinding(ConformsTo = WsiProfiles.BasicProfile1_1)]
    [ToolboxItem(false)]
    public class LGJHellaAPCECOService : System.Web.Services.WebService, ISOAPdServiceSoap12Binding
    {
        static List<ServerTaskListItemType> taskList;
        static List<ServerNotificationListItemType> serverNotificationList;
        static List<CounterListItemType> counterList;
        static int maxServerNotifications = 10000;
        static int maxTransferNotifications = 100;
        static int removedNotifications = 0;
        static string logFilePath = null;
        static System.Object taskListLock = new System.Object();
        static System.Object notificationListLock = new System.Object();

        static LGJHellaAPCECOService()
        {
            taskList = new List<ServerTaskListItemType>();
            serverNotificationList = new List<ServerNotificationListItemType>();
            counterList = new List<CounterListItemType>();
        }

        private string GetTimestamp()
        {
            return string.Format("{0}", DateTime.Now.ToString("HH:mm:ss.ff"));
        }

        private string GetLogFilePath()
        {
            if (logFilePath != null)
            {
                return logFilePath;
            }
            else
            {
                string logPath = "";
                try
                {
                    // Get log file path from web.config
                    System.Configuration.Configuration rootWebConfig = System.Web.Configuration.WebConfigurationManager.OpenWebConfiguration("~");
                    if (rootWebConfig.AppSettings.Settings.Count > 0)
                    {
                        System.Configuration.KeyValueConfigurationElement logPathElem = rootWebConfig.AppSettings.Settings["LogPath"];
                        if (logPathElem != null)
                        {
                            logPath = logPathElem.Value;
                        }
                    }

                    // create default log file path and store in web.config
                    if (logPath == "")
                    {
                        logPath = @"C:\Inetpub\Log";
                        rootWebConfig.AppSettings.Settings.Add("LogPath", logPath);
                        rootWebConfig.Save();
                    }

                    // create directory if not exists
                    if (!Directory.Exists(logPath))
                    {
                        Directory.CreateDirectory(logPath);
                    }
                }
                catch { }

                logFilePath = Path.Combine(logPath, string.Format("{0}.log", this.GetType().ToString()));

                return logFilePath;
            }
        }

        long GetLogFileSize()
        {
            long size = 0;
            try
            {
                FileInfo fi = new FileInfo(GetLogFilePath());
                size = fi.Length;
            }
            catch { }

            return size;
        }


        private Task[] CreateCounterTaskList(NotificationBase notification)
        {
            List<Task> tasks = new List<Task>();

            if (notification != null)
            {
                foreach (ServerTaskListItemType taskItem in taskList)
                {
                    if ((taskItem.taskStatus == TaskStatusType.SERVER) ||
                        ((taskItem.taskStatus == TaskStatusType.SERVER_DEL) && (taskItem.task is TaskWithActivity)))
                    {
                        if (taskItem.taskStatus == TaskStatusType.SERVER_DEL)
                        {
                            (taskItem.task as TaskWithActivity).activity_state = false;
                        }

                        bool addItem = false;
                        switch (taskItem.taskDestinationMatchingField)
                        {
                            case TaskDestinationMatchingFieldType.DONT_CARE:
                                addItem = true;
                                break;
                            case TaskDestinationMatchingFieldType.CUSTOMER_ID:
                                if (notification.customer_ID == taskItem.taskDestinationMatchingFieldValue)
                                {
                                    addItem = true;
                                }
                                break;
                            case TaskDestinationMatchingFieldType.IP_ADDRESS:
                                if ((notification is ExtendedNotificationBase) &&
                                    ((notification as ExtendedNotificationBase).ip_address == taskItem.taskDestinationMatchingFieldValue))
                                {
                                    addItem = true;
                                }
                                else
                                {
                                    CounterListItemType counterItem = GetCounterListItemByIpAddress(taskItem.taskDestinationMatchingFieldValue);
                                    if ((counterItem != null) && (counterItem.mac_address.ToUpper() == notification.mac_address.ToUpper()))
                                    {
                                        addItem = true;
                                    }
                                }
                                break;
                            case TaskDestinationMatchingFieldType.MAC_ADDRESS:
                                if (notification.mac_address.ToUpper() == taskItem.taskDestinationMatchingFieldValue.ToUpper())
                                {
                                    addItem = true;
                                }
                                break;
                        }

                        if (addItem)
                        {
                            if (taskItem.taskStatus == TaskStatusType.SERVER)
                                taskItem.taskStatus = TaskStatusType.COUNTER;
                            else if (taskItem.taskStatus == TaskStatusType.SERVER_DEL)
                                taskItem.taskStatus = TaskStatusType.COUNTER_DEL;

                            tasks.Add(taskItem.task);
                        }
                    }
                }
            }

            return tasks.ToArray();
        }


        private Task[] CreateCounterTaskList2(NotificationBase notification)
        {
            List<Task> tasks = new List<Task>();

            if (notification is StartupNotification)
            {
                //2.--关于计数任务------------------------------------------------------------
                StartupNotification MyStartNotifi = notification as StartupNotification;
                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                HellaApcHelper MyHellaApcHelper = new HellaApcHelper(MyStartNotifi.customer_ID, "startup");
                uint GetTaskID = HellaApcHelper.DoUpdateWork(MyHellaAPCECOManager, MyHellaApcHelper);

                TaskSubscribeCounting MyTaskCount = new TaskSubscribeCounting();

                MyTaskCount.task_type = TaskType.TASK_COUNT;
                MyTaskCount.serverTask_ID = GetTaskID; //1000;
                MyTaskCount.activity_state = true;
                MyTaskCount.store_taskSpecified = true;
                MyTaskCount.store_task = true;

                CountingGateID MyCountingGateID = new CountingGateID();
                MyCountingGateID.id = "10";
                MyTaskCount.counting_gate_id = MyCountingGateID;

                CountEvent MyCountEvent = new CountEvent();
                MyCountEvent.count_event_type = CountEventType.COUNT_EVENT_DELTA_SUM_IN_OUT;

                EventTrigger MyEventTrigger = new EventTrigger();
                MyEventTrigger.Item = MyCountEvent;
                
                Trigger MyTrigger = new Trigger();
                MyTrigger.Item = MyEventTrigger;

                MyTaskCount.trigger = MyTrigger;
                tasks.Add(MyTaskCount);

                //2.--关于心跳任务------------------------------------------------------------
                TaskSubscribeAlive MyTaskAlive = new TaskSubscribeAlive();
                MyTaskAlive.task_type = TaskType.TASK_ALIVE;
                MyTaskAlive.serverTask_ID = 100;// GetTaskID; 
                MyTaskAlive.activity_state = true;
                MyTaskAlive.store_taskSpecified = true;
                MyTaskAlive.store_task = true;

                Date MyDate = new Date();
                MyDate.kind = DateType.DATE_DONT_CARE;
                MyDate.day_of_monthSpecified = false;
                MyDate.day_of_weekSpecified = false;

                ClockTime MyStartTime = new ClockTime();
                MyStartTime.hours = 0;
                MyStartTime.minutes = 0;
                MyStartTime.seconds = 20;    

                TimeTrigger MyTimeTrigger = new TimeTrigger();
                MyTimeTrigger.date = MyDate;
                MyTimeTrigger.cycle = "PT10M";              
                MyTimeTrigger.random_offset = "PT0S";
                MyTimeTrigger.start = MyStartTime;

                Trigger MyTrigger2 = new Trigger();
                MyTrigger2.Item = MyTimeTrigger;
                MyTaskAlive.trigger = MyTrigger2;

                tasks.Add(MyTaskAlive);

                //-----------------------------------------------------------------------------

            }

            if (notification is AliveNotification)
            {

                StartupNotification MyStartNotifi = notification as StartupNotification;

                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                HellaApcHelper MyHellaApcHelper = new HellaApcHelper(MyStartNotifi.customer_ID, "keepalive");
                uint GetTaskID = HellaApcHelper.DoUpdateWork(MyHellaAPCECOManager, MyHellaApcHelper);

              
                TaskSubscribeCounting MyTaskCount = new TaskSubscribeCounting();

                MyTaskCount.task_type = TaskType.TASK_COUNT;
                MyTaskCount.serverTask_ID = GetTaskID; //1000;
                MyTaskCount.activity_state = true;
                MyTaskCount.store_taskSpecified = true;
                MyTaskCount.store_task = true;

                CountingGateID MyCountingGateID = new CountingGateID();
                MyCountingGateID.id = "10";
                MyTaskCount.counting_gate_id = MyCountingGateID;

                CountEvent MyCountEvent = new CountEvent();
                MyCountEvent.count_event_type = CountEventType.COUNT_EVENT_DELTA_SUM_IN_OUT;

                EventTrigger MyEventTrigger = new EventTrigger();
                MyEventTrigger.Item = MyCountEvent;

                Trigger MyTrigger = new Trigger();
                MyTrigger.Item = MyEventTrigger;

                MyTaskCount.trigger = MyTrigger;

                tasks.Add(MyTaskCount);

            }

            return tasks.ToArray();
        }

        private Task[] CreateCounterTaskList3(uint mTaskid)
        {
               //启动时请求任务
               List<Task> tasks = new List<Task>();
               //2.--关于计数任务------------------------------------------------------------
               TaskSubscribeCounting MyTaskCount = new TaskSubscribeCounting();

                MyTaskCount.task_type = TaskType.TASK_COUNT;
                MyTaskCount.serverTask_ID = mTaskid;
                MyTaskCount.activity_state = true;
                MyTaskCount.store_taskSpecified = true;
                MyTaskCount.store_task = true;

                CountingGateID MyCountingGateID = new CountingGateID();
                MyCountingGateID.id = "10";
                MyTaskCount.counting_gate_id = MyCountingGateID;

                CountEvent MyCountEvent = new CountEvent();
                MyCountEvent.count_event_type = CountEventType.COUNT_EVENT_DELTA_SUM_IN_OUT;
                MyCountEvent.delta = 1;
                EventTrigger MyEventTrigger = new EventTrigger();
                MyEventTrigger.Item = MyCountEvent;

                Trigger MyTrigger = new Trigger();
                MyTrigger.Item = MyEventTrigger;

                MyTaskCount.trigger = MyTrigger;
                tasks.Add(MyTaskCount);

                //2.--关于心跳任务------------------------------------------------------------
                TaskSubscribeAlive MyTaskAlive = new TaskSubscribeAlive();
                MyTaskAlive.task_type = TaskType.TASK_ALIVE;
                MyTaskAlive.serverTask_ID = mTaskid;
                MyTaskAlive.activity_state = true;
                MyTaskAlive.store_taskSpecified = true;
                MyTaskAlive.store_task = true;

                Date MyDate = new Date();
                MyDate.kind = DateType.DATE_DONT_CARE;
                MyDate.day_of_monthSpecified = false;
                MyDate.day_of_weekSpecified = false;

                ClockTime MyStartTime = new ClockTime();
                MyStartTime.hours = 0;
                MyStartTime.minutes = 0;
                MyStartTime.seconds = 20;

                TimeTrigger MyTimeTrigger = new TimeTrigger();
                MyTimeTrigger.date = MyDate;
                MyTimeTrigger.cycle = "PT10M";
                MyTimeTrigger.random_offset = "PT0S";
                MyTimeTrigger.start = MyStartTime;

                Trigger MyTrigger2 = new Trigger();
                MyTrigger2.Item = MyTimeTrigger;
                MyTaskAlive.trigger = MyTrigger2;

                tasks.Add(MyTaskAlive);
                return tasks.ToArray();
        }

        private Task[] CreateCounterTaskList4(uint mOldTaskid,uint mNewTaskid)
        {
            //服务端变化时请求任务（先删除老任务后增加新任务）
            List<Task> tasks = new List<Task>();
            //2.--删除老计数任务------------------------------------------------------------
            TaskSubscribeCounting MyOldTaskCount = new TaskSubscribeCounting();

            MyOldTaskCount.task_type = TaskType.TASK_COUNT;
            MyOldTaskCount.serverTask_ID = mOldTaskid;
            MyOldTaskCount.activity_state = false;
            MyOldTaskCount.store_taskSpecified = false;
            MyOldTaskCount.store_task = false;
          
            tasks.Add(MyOldTaskCount);

            //---增加新任务-------------------------------------------
            TaskSubscribeCounting MyTaskCount = new TaskSubscribeCounting();

            MyTaskCount.task_type = TaskType.TASK_COUNT;
            MyTaskCount.serverTask_ID = mNewTaskid;
            MyTaskCount.activity_state = true;
            MyTaskCount.store_taskSpecified = true;
            MyTaskCount.store_task = true;

            CountingGateID MyCountingGateID = new CountingGateID();
            MyCountingGateID.id = "10";
            MyTaskCount.counting_gate_id = MyCountingGateID;

            CountEvent MyCountEvent = new CountEvent();
            MyCountEvent.count_event_type = CountEventType.COUNT_EVENT_DELTA_SUM_IN_OUT;
            MyCountEvent.delta = 1;

            EventTrigger MyEventTrigger = new EventTrigger();
            MyEventTrigger.Item = MyCountEvent;

            Trigger MyTrigger = new Trigger();
            MyTrigger.Item = MyEventTrigger;

            MyTaskCount.trigger = MyTrigger;
            tasks.Add(MyTaskCount);

          

            return tasks.ToArray();
        }

        [WebMethod]
        public AnswerContainer Notification(NotificationContainer notification_message)
        {
            //lock (notificationListLock)
            //{
            //lock (taskListLock)
            //{
                    //Task[] tasks = CreateCounterTaskList2(notification_message.Item);
                    //AddNotificationToList(notification_message, null, tasks);

                    //Preprocessing(notification_message, tasks);//Test-LGJ

                    Task[] tasks = PreprocessingEx(notification_message);

                    AnswerContainer MyAnswer = new AnswerContainer();
                    MyAnswer.Items = tasks;
                    MyAnswer.referenced_notification_ID = notification_message.Item.notification_ID;
                    MyAnswer.server_response_type = SOAP_ServerError.SOAP_SERVER_OK;

                    return MyAnswer;
              //  }
           // }
        }

        private Task[] PreprocessingEx(NotificationContainer notification)
        {
            LGJSynchTcpClient MyLGJSynchTcpClient = new LGJSynchTcpClient(null, null, null, "8000");
            string MessageTypeStr = notification.Item.ToString();
            MessageTypeStr = MessageTypeStr.Substring(MessageTypeStr.IndexOf(".") + 1);
            MyLGJSynchTcpClient.SendMessage("APC-Types#" + MessageTypeStr);

            string NotificationStr = null;

            uint GetTaskID = 0;
            uint OldTaskID = 0;
            if (notification.Item is CountNotification)
            {
                CountNotification MyCountNotifi = notification.Item as CountNotification;
                NotificationStr = "APC-count#" + MyCountNotifi.customer_ID + ",IN:" + MyCountNotifi.count_in.ToString() + ";OUT:" + MyCountNotifi.count_out.ToString() + ",TaskID:" + MyCountNotifi.serverTask_ID.ToString() + ",GateID:" + MyCountNotifi.counting_gate_id.id;
                MyLGJSynchTcpClient.SendMessage(NotificationStr);

                OldTaskID = MyCountNotifi.serverTask_ID;
                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                CountingHelper MyCountingHelper = new CountingHelper(MyCountNotifi.customer_ID, MyCountNotifi.serverTask_ID, (int)MyCountNotifi.count_in, (int)MyCountNotifi.count_out);
                GetTaskID = (uint)CountingHelper.DoUpdateWork(MyHellaAPCECOManager, MyCountingHelper);

                if (GetTaskID > 0)
                    return CreateCounterTaskList4(OldTaskID, GetTaskID);
                else
                    return null;


            }

            if (notification.Item is StartupNotification)
            {
                StartupNotification MyStartNotifi = notification.Item as StartupNotification;
                NotificationStr = "APC-start#" + MyStartNotifi.customer_ID + ",TaskID:" + MyStartNotifi.serverTask_ID.ToString() + "," + MyStartNotifi.ip_address + "," + MyStartNotifi.mac_address;
                MyLGJSynchTcpClient.SendMessage(NotificationStr);

                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                HellaApcHelper MyHellaApcHelper = new HellaApcHelper(MyStartNotifi.customer_ID, "startup");
                GetTaskID = HellaApcHelper.DoUpdateWork(MyHellaAPCECOManager, MyHellaApcHelper);
                if (GetTaskID > 0)
                    return CreateCounterTaskList3(GetTaskID);
                else
                    return null;

            }

            if (notification.Item is AliveNotification)
            {
                AliveNotification MyAliveNotifi = notification.Item as AliveNotification;
                NotificationStr = "APC-keepalive#" + MyAliveNotifi.customer_ID + ",TaskID:" + MyAliveNotifi.serverTask_ID.ToString() + "," + MyAliveNotifi.ip_address + "," + MyAliveNotifi.mac_address;
                MyLGJSynchTcpClient.SendMessage(NotificationStr);


                OldTaskID = MyAliveNotifi.serverTask_ID;
                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                HellaApcHelper MyHellaApcHelper = new HellaApcHelper(MyAliveNotifi.customer_ID, "keepalive");
                GetTaskID = HellaApcHelper.DoUpdateWork(MyHellaAPCECOManager, MyHellaApcHelper);

                if (GetTaskID > 0)
                    return CreateCounterTaskList4(OldTaskID, GetTaskID);
                else
                    return null;


            }
            else
            {
                return null;
            }


            /*
            if (NotificationStr != null)
            {
                MyLGJSynchTcpClient.SendMessage(NotificationStr);

                //SoapMessageLogExtension MySoapMessageLogExtension = new SoapMessageLogExtension();
                //MySoapMessageLogExtension.LGJLogTextMessage(NotificationStr, notification.Item.GetType());

            }
            */
            //------最后返回数据库-------------------------------------------------------------
            /*
            if (GetTaskID > 0)
                return CreateCounterTaskList3(GetTaskID);
            else
                return null;
            */

        }



        private void Preprocessing(NotificationContainer notification, Task[] Mytasks)
        {
          
             LGJSynchTcpClient MyLGJSynchTcpClient = new LGJSynchTcpClient(null, null, null, "8000");
            //Type MyType = notification.Item.GetType();
            //MyLGJSynchTcpClient.SendMessage("xxxx#"+MyType..FullName+"  Tasks:"+ Mytasks.Length.ToString()); 
            string MessageTypeStr = notification.Item.ToString();
            MessageTypeStr = MessageTypeStr.Substring(MessageTypeStr.IndexOf(".")+1);
            MyLGJSynchTcpClient.SendMessage("Types#" + MessageTypeStr + "  Tasks:" + Mytasks.Length.ToString());

            string NotificationStr=null;
            if (notification.Item is CountNotification)
            {
               CountNotification MyCountNotifi = notification.Item as CountNotification;
               NotificationStr = "count#" + MyCountNotifi.customer_ID + ",IN:" + MyCountNotifi.count_in.ToString() + ";OUT:" + MyCountNotifi.count_out.ToString() + ",TaskID:" + MyCountNotifi.serverTask_ID.ToString() + ",GateID:" + MyCountNotifi.counting_gate_id.id;

                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
               CountingHelper MyCountingHelper = new CountingHelper(MyCountNotifi.customer_ID, MyCountNotifi.serverTask_ID, (int)MyCountNotifi.count_in, (int)MyCountNotifi.count_out);
                //CountingMannager MyCountingMannager = new CountingMannager("ABC987654321", 1000, 1, 1);
               CountingHelper.DoUpdateWork(MyHellaAPCECOManager, MyCountingHelper);

            }

            if (notification.Item is StartupNotification)
            {
                StartupNotification MyStartNotifi= notification.Item as StartupNotification;
                NotificationStr ="start#"+ MyStartNotifi.customer_ID +  ",TaskID:" + MyStartNotifi.serverTask_ID.ToString() + "," + MyStartNotifi.ip_address + "," + MyStartNotifi.mac_address;


            }

            if (notification.Item is AliveNotification)
            {
                AliveNotification MyAliveNotifi = notification.Item as AliveNotification;
                NotificationStr = "keepalive#" + MyAliveNotifi.customer_ID + ",TaskID:" + MyAliveNotifi.serverTask_ID.ToString() + "," + MyAliveNotifi.ip_address + "," + MyAliveNotifi.mac_address;
                

            }

            if (NotificationStr!=null)
            {
                MyLGJSynchTcpClient.SendMessage(NotificationStr);

                //SoapMessageLogExtension MySoapMessageLogExtension = new SoapMessageLogExtension();
                //MySoapMessageLogExtension.LGJLogTextMessage(NotificationStr, notification.Item.GetType());

            }
            

        }

       private void Preprocessing2(NotificationBase notificationError)
        {

            LGJSynchTcpClient MyLGJSynchTcpClient = new LGJSynchTcpClient(null, null, null, "8000");
            string MessageTypeStr = notificationError.ToString();
            MessageTypeStr = MessageTypeStr.Substring(MessageTypeStr.IndexOf(".") + 1);
            MyLGJSynchTcpClient.SendMessage("APC-Error#" + MessageTypeStr);

            string NotificationStr = null;
            if (notificationError is CountNotification)
            {
                CountNotification MyCountNotifi = notificationError as CountNotification;
                NotificationStr = "APC-count#" + MyCountNotifi.customer_ID + ",IN:" + MyCountNotifi.count_in.ToString() + ";OUT:" + MyCountNotifi.count_out.ToString() + ",TaskID:" + MyCountNotifi.serverTask_ID.ToString() + ",GateID:" + MyCountNotifi.counting_gate_id.id;

                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                CountingHelper MyCountingHelper = new CountingHelper(MyCountNotifi.customer_ID, MyCountNotifi.serverTask_ID, (int)MyCountNotifi.count_in, (int)MyCountNotifi.count_out);
                //CountingMannager MyCountingMannager = new CountingMannager("ABC987654321", 1000, 1, 1);
                CountingHelper.DoUpdateWork(MyHellaAPCECOManager, MyCountingHelper);

            }

            if (notificationError is StartupNotification)
            {
                StartupNotification MyStartNotifi = notificationError as StartupNotification;
                NotificationStr = "APC-start#" + MyStartNotifi.customer_ID + ",TaskID:" + MyStartNotifi.serverTask_ID.ToString() + "," + MyStartNotifi.ip_address + "," + MyStartNotifi.mac_address;


            }

            if (notificationError is AliveNotification)
            {
                AliveNotification MyAliveNotifi = notificationError as AliveNotification;
                NotificationStr = "APC-keepalive#" + MyAliveNotifi.customer_ID + ",TaskID:" + MyAliveNotifi.serverTask_ID.ToString() + "," + MyAliveNotifi.ip_address + "," + MyAliveNotifi.mac_address;


            }

            if (NotificationStr != null)
            {
                MyLGJSynchTcpClient.SendMessage(NotificationStr);

                //SoapMessageLogExtension MySoapMessageLogExtension = new SoapMessageLogExtension();
                //MySoapMessageLogExtension.LGJLogTextMessage(NotificationStr, notification.Item.GetType());

            }


        }


        [WebMethod]
        public Task[] Error(ErrorContainer error_message)
        {
            //lock (notificationListLock)
            //{
            //lock (taskListLock)
            //{
            //Task[] tasks = CreateCounterTaskList(error_message);

              Task[] tasks = null;// CreateCounterTaskList2(error_message);
              Preprocessing2(error_message);
              //AddNotificationToList(null, error_message, tasks);

              return tasks;


               // }
            //}
        }

        private void AddNotificationToList(NotificationContainer notification, ErrorContainer error, Task[] tList)
        {
            ServerNotificationListItemType listItem = new ServerNotificationListItemType();
            listItem.notificationListItem = notification;
            listItem.errorListItem = error;
            listItem.serverTime = GetTimestamp();
            listItem.taskList = tList;
            serverNotificationList.Add(listItem);
            removedNotifications += CleanUpNotificationList();

            CreateOrUpdateCounterListItem(notification, error);
        }

     
        public string SendConnectionHello(string ConnectionHello)
        {
            return "Connection successful!";
        }

        private TaskStatusItemType[] CreateTaskStatusList()
        {
            List<TaskStatusItemType> statusList = new List<TaskStatusItemType>();
            foreach (ServerTaskListItemType taskItem in taskList)
            {
                TaskStatusItemType statusItem = new TaskStatusItemType();
                statusItem.taskId = taskItem.task.serverTask_ID;
                statusItem.taskStatus = taskItem.taskStatus;
                statusList.Add(statusItem);
            }

            return statusList.ToArray();
        }

      
        public ServerNotificationListType GetNotificationList(NotificationListRequestType NotificationListRequest)
        {
            lock (notificationListLock)
            {
                lock (taskListLock)
                {
                    ServerNotificationListType serverNotificationObj = new ServerNotificationListType();

                    if (NotificationListRequest == NotificationListRequestType.NOTIFICATION_LIST_DEFAULT)
                    {
                        int transferElements = (serverNotificationList.Count < maxTransferNotifications) ? serverNotificationList.Count : maxTransferNotifications;
                        serverNotificationObj.Items = serverNotificationList.GetRange(0, transferElements).ToArray();
                        serverNotificationObj.taskStatusList = CreateTaskStatusList();
                        serverNotificationList.RemoveRange(0, transferElements);
                        serverNotificationObj.remainingNotifications = serverNotificationList.Count;
                        serverNotificationObj.removedNotifications = removedNotifications;
                        removedNotifications = 0;
                    }
                    serverNotificationObj.logFileSize = GetLogFileSize();

                    return serverNotificationObj;
                }
            }
        }

       
        public TaskStatusItemType[] SetTaskList(ServerTaskListItemType[] ControlTaskList)
        {
            lock (taskListLock)
            {
                List<TaskStatusItemType> statusList = new List<TaskStatusItemType>();
                List<uint> delIdList = new List<uint>();

                foreach (ServerTaskListItemType controlTaskItem in ControlTaskList)
                {
                    bool exists = false;
                    bool del = false;
                    TaskStatusItemType statusItem = new TaskStatusItemType();
                    statusItem.taskId = controlTaskItem.task.serverTask_ID;

                    foreach (ServerTaskListItemType taskItem in taskList)
                    {
                        if (controlTaskItem.task.serverTask_ID == taskItem.task.serverTask_ID)
                        {
                            exists = true;
                            if (controlTaskItem.taskStatus == TaskStatusType.CONTROL_DEL)
                            {
                                if (!(controlTaskItem.task is TaskWithActivity))
                                {
                                    delIdList.Add(controlTaskItem.task.serverTask_ID);
                                    del = true;
                                }
                                else
                                {
                                    taskItem.taskStatus = TaskStatusType.SERVER_DEL;
                                    statusItem.taskStatus = TaskStatusType.SERVER_DEL;
                                }
                            }
                            else
                            {
                                statusItem.taskStatus = TaskStatusType.CONFLICT_CREATE_EXISTENT;
                            }
                            break;
                        }
                    }

                    if (!exists)
                    {
                        if (controlTaskItem.taskStatus == TaskStatusType.CONTROL)
                        {
                            controlTaskItem.taskStatus = TaskStatusType.SERVER;
                            statusItem.taskStatus = TaskStatusType.SERVER;
                            taskList.Add(controlTaskItem);
                        }
                        else
                        {
                            statusItem.taskStatus = TaskStatusType.CONFLICT_DEL_NON_EXISTENT;
                        }
                    }

                    if (!del)
                    {
                        statusList.Add(statusItem);
                    }
                }

                // delete items without activity
                foreach (uint id in delIdList)
                {
                    for (int i = 0; i < taskList.Count; i++)
                    {
                        if (taskList[i].task.serverTask_ID == id)
                        {
                            taskList.RemoveAt(i);
                            break;
                        }
                    }
                }

                return statusList.ToArray();
            }
        }

       
        public ServerTaskListItemType[] GetTaskList(uint[] idList)
        {
            lock (taskListLock)
            {
                if (idList.Length == 0)
                {
                    return taskList.ToArray();
                }
                else
                {
                    List<ServerTaskListItemType> taskListSelection = new List<ServerTaskListItemType>();
                    foreach (uint id in idList)
                    {
                        foreach (ServerTaskListItemType taskItem in taskList)
                        {
                            if (id == taskItem.task.serverTask_ID)
                            {
                                taskListSelection.Add(taskItem);
                                break;
                            }
                        }
                    }

                    return taskListSelection.ToArray();
                }
            }
        }

     
        public string DoAction(ServerActionType ServerAction)
        {
            string responseMessage = "";
            switch (ServerAction)
            {
                case ServerActionType.CLEAR_ALL_TASKS:
                    lock (taskListLock)
                    {
                        taskList.Clear();
                    }
                    responseMessage += "All Tasks removed from Server!";
                    break;
                case ServerActionType.CLEAR_ALL_NOTIFICATIONS:
                    lock (notificationListLock)
                    {
                        serverNotificationList.Clear();
                    }
                    responseMessage += "All Notifications removed from Server!";
                    break;
            }

            return responseMessage;
        }

     
        public ServerParameterType GetServerParameter(ServerParameterRequestType ServerParameterRequest)
        {
            ServerParameterType serverParameter = new ServerParameterType();
            serverParameter.maxServerNotifications = maxServerNotifications;
            serverParameter.maxTransferNotifications = maxTransferNotifications;
            serverParameter.logFilePath = GetLogFilePath();
            serverParameter.logFileSize = GetLogFileSize();

            return serverParameter;
        }

        private int CleanUpNotificationList()
        {
            int removeCount = serverNotificationList.Count - maxServerNotifications;
            if (removeCount > 0)
            {
                serverNotificationList.RemoveRange(0, removeCount);
            }

            return (removeCount > 0) ? removeCount : 0;
        }

     
        public string SetServerParameter(ServerParameterType ServerParameter)
        {
            string message = "";
            if (ServerParameter.maxServerNotifications > 0)
            {
                maxServerNotifications = ServerParameter.maxServerNotifications;
                message += string.Format("Max Server Notifications set to {0}\n", maxServerNotifications);
                int removedItems = 0;
                lock (notificationListLock)
                {
                    removedItems = CleanUpNotificationList();
                }
                if (removedItems > 0)
                {
                    message += string.Format("{0} Notifications removed from Server!\n", removedItems);
                }
            }
            else
            {
                message += string.Format("Max Server Notifications: no change ({0})\n", maxServerNotifications);
            }

            if (ServerParameter.maxTransferNotifications > 0)
            {
                maxTransferNotifications = ServerParameter.maxTransferNotifications;
                message += string.Format("Max Transfer Notifications set to {0}", maxTransferNotifications);
            }
            else
            {
                message += string.Format("Max Transfer Notifications: no change ({0})", maxTransferNotifications);
            }

            return message;
        }

    
        public int GetNotificationsCount(NotificationsCountRequestType NotificationsCountRequest)
        {
            int notificationsCount = 0;
            lock (notificationListLock)
            {
                notificationsCount = serverNotificationList.Count;
            }

            return notificationsCount;
        }

        private CounterListItemType GetCounterListItemByMacAddress(string macAddress)
        {
            foreach (CounterListItemType counterListItem in counterList)
            {
                if (string.Equals(counterListItem.mac_address, macAddress))
                {
                    return counterListItem;
                }
            }

            return null;
        }

        private CounterListItemType GetCounterListItemByIpAddress(string ipAddress)
        {
            if (!string.IsNullOrEmpty(ipAddress))
            {
                foreach (CounterListItemType counterListItem in counterList)
                {
                    if (string.Equals(counterListItem.ip_address, ipAddress))
                    {
                        return counterListItem;
                    }
                }
            }

            return null;
        }

        private void CreateOrUpdateCounterListItem(NotificationContainer notification, ErrorContainer error)
        {
            CounterListItemType counterListItem = null;
            DateTime now = DateTime.Now;
            string mac_address;
            NotificationBase notificationBase = null;
            ExtendedNotificationBase extNotificationBase = null;

            if (notification != null)
            {
                mac_address = notification.Item.mac_address;
                notificationBase = notification.Item as NotificationBase;
                if (notification.Item is ExtendedNotificationBase)
                {
                    extNotificationBase = notification.Item as ExtendedNotificationBase;
                }
            }
            else if (error != null)
            {
                mac_address = error.mac_address;
                notificationBase = error as NotificationBase;
                extNotificationBase = error as ExtendedNotificationBase;
            }
            else
            {
                return;
            }

            counterListItem = GetCounterListItemByMacAddress(mac_address);
            if (counterListItem == null)
            {
                counterListItem = new CounterListItemType();
                counterList.Add(counterListItem);
                counterListItem.mac_address = mac_address;
                counterListItem.registered_timestamp = now;
                counterListItem.updated_timestamp = now;
                counterListItem.notifications_count = 0;
                counterListItem.errors_count = 0;
            }

            if (extNotificationBase != null)
            {
                if (!string.Equals(extNotificationBase.ip_address, counterListItem.ip_address))
                {
                    counterListItem.ip_address = extNotificationBase.ip_address;
                    counterListItem.updated_timestamp = now;
                }
            }

            if (notificationBase != null)
            {
                if (!string.Equals(notificationBase.customer_ID, counterListItem.customer_ID))
                {
                    counterListItem.customer_ID = notificationBase.customer_ID;
                    counterListItem.updated_timestamp = now;
                }
            }

            if (notification != null)
            {
                counterListItem.last_notification_ID = notification.Item.notification_ID;
                counterListItem.last_notification_timestamp = notification.Item.timestamp;
                counterListItem.last_notification_type = notification.Item.task_type;
                counterListItem.notifications_count++;
            }
            else if (error != null)
            {
                counterListItem.last_error_ID = error.notification_ID;
                counterListItem.last_error_timestamp = error.timestamp;
                counterListItem.last_error_reason = error.error_reason;
                counterListItem.errors_count++;
            }

            counterListItem.changed = true;
        }

        public CounterListSynchronizeType GetCounterList(string CounterListRequest)
        {
            CounterListSynchronizeType retList = new CounterListSynchronizeType();
            List<CounterListItemType> changedList = new List<CounterListItemType>();
            foreach (CounterListItemType item in counterList)
            {
                if (item.changed)
                {
                    changedList.Add(item);
                    item.changed = false;
                }
            }

            retList.changedCounterListItems = changedList.ToArray();

            return retList;
        }

    }
}
