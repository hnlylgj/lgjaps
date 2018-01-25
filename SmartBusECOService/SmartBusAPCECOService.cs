using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
//using SmartBusECOService.NotificationMessage;
//using SmartBusECOService.AnswerMessage;

using SmartBusECOService.LGJHellaAPCECO;
using HellaApcECOLib;
namespace SmartBusECOService
{
    public  class SmartBusAPCECOService : IHellaAPCECOInterface  /*IHellaAPCECO*/
    {

        //用于保存UI线程的同步上下文
        public static SynchronizationContext UIContext = null;
        //外界传入的用于更新可视化界面的函数
        public static SendOrPostCallback UpdateCallAccount = null;
        public static SendOrPostCallback UpdateCallLogin = null;
        public static SendOrPostCallback UpdateCallBind = null;

        public static SendOrPostCallback UpdateCallSendAlarm = null;
        public static SendOrPostCallback UpdateCallPostAlarm = null;

        public static SendOrPostCallback UpdateCallSendRunState = null;
        public static SendOrPostCallback UpdateCallPostRunState = null;


        public static SendOrPostCallback UpdateUIFuncEx = null;


        //调用计数
        public static int CallCount; public static int AccountCount;


        #region HellaAPCECO Members
        NotificationResponse IHellaAPCECOInterface.Notification(NotificationRequest notificationrequest)
        {


            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;          
            SendReceiveString = string.Format("Notification:{0}", CallCount);  //更新可视化界面
            OutPut(SendReceiveString);
            Task[] MyTaskList=null;
            if (notificationrequest != null&& notificationrequest.notification_message!=null)
            {
                 MyTaskList = Preprocessing(notificationrequest.notification_message.Item);
            }
         
            else
            {
                OutPut("NotificationContainer is null");
            }


            NotificationResponse MyNotificationResponse = new NotificationResponse();
            AnswerContainer MyAnswerContainer = new AnswerContainer();
            MyAnswerContainer.Items = MyTaskList;
            MyAnswerContainer.referenced_notification_ID = notificationrequest.notification_message.Item.notification_ID;
            MyAnswerContainer.server_response_type = SOAP_ServerError.SOAP_SERVER_OK;

            MyNotificationResponse.answer_message = MyAnswerContainer;

      

            return MyNotificationResponse;
           


        }

        ErrorResponse IHellaAPCECOInterface.Error(ErrorRequest errorrequest)
        {

            ErrorResponse MyErrorResponse = new ErrorResponse();
            Task[] MyTaskList = null;//无任务应答
            MyErrorResponse.task_message = MyTaskList;
            Preprocessing2(errorrequest.error_message);
          
            return MyErrorResponse;
            
        }

        #endregion
        private Task[] Preprocessing(NotificationBase notification)
        {
          
            string MessageTypeStr = notification.ToString();
            MessageTypeStr = MessageTypeStr.Substring(MessageTypeStr.LastIndexOf(".") + 1);           
            OutPut(MessageTypeStr);
            string NotificationStr = null;

            uint GetTaskID = 0;
            uint OldTaskID = 0;
            if (notification is CountNotification)
            {
                CountNotification MyCountNotifi = notification as CountNotification;
                NotificationStr = "count#" + MyCountNotifi.customer_ID + ",IN:" + string.Format("{0:D3}",MyCountNotifi.count_in) + ";OUT:" + string.Format("{0:D3}", MyCountNotifi.count_out) + ",TaskID:" + string.Format("{0:D8}", MyCountNotifi.serverTask_ID) + ",NotificationID:" + MyCountNotifi.notification_ID.ToString() + ",Date:" + string.Format("{0:yyyy-MM-dd HH:mm:ss}", MyCountNotifi.timestamp);
                OutPut(NotificationStr);

                OldTaskID = MyCountNotifi.serverTask_ID;
                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                CountingHelper MyCountingHelper = new CountingHelper(MyCountNotifi.customer_ID, MyCountNotifi.serverTask_ID, (int)MyCountNotifi.count_in, (int)MyCountNotifi.count_out);
                GetTaskID = (uint)CountingHelper.DoUpdateWork(MyHellaAPCECOManager, MyCountingHelper);

                if (GetTaskID > 0)
                    return CreateCounterTaskList4(OldTaskID, GetTaskID);
                else
                    return null;


            }

            if (notification is StartupNotification)
            {
                StartupNotification MyStartNotifi = notification as StartupNotification;
                NotificationStr = "start#" + MyStartNotifi.customer_ID + ",TaskID:" + MyStartNotifi.serverTask_ID.ToString()  + ",NotificationID:" + MyStartNotifi.notification_ID.ToString() + ",IP:" + MyStartNotifi.ip_address + ",MAC:" + MyStartNotifi.mac_address+",[Date:" + string.Format("{0:yyyy-MM-dd HH:mm:ss}", MyStartNotifi.timestamp) + ":" + string.Format("{0:D3}]", MyStartNotifi.timestamp.Millisecond);
                OutPut(NotificationStr);

                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                HellaApcHelper MyHellaApcHelper = new HellaApcHelper(MyStartNotifi.customer_ID, "startup");
                GetTaskID = HellaApcHelper.DoUpdateWork(MyHellaAPCECOManager, MyHellaApcHelper);
                if (GetTaskID > 0)
                    return CreateCounterTaskList3(GetTaskID);
                else
                    return null;

            }

            if (notification is AliveNotification)
            {
                AliveNotification MyAliveNotifi = notification as AliveNotification;
                NotificationStr = "keepalive#" + MyAliveNotifi.customer_ID + ",TaskID:" + MyAliveNotifi.serverTask_ID.ToString() + ",NotificationID:" + MyAliveNotifi.notification_ID.ToString() + "," + MyAliveNotifi.ip_address + "," + MyAliveNotifi.mac_address + ",Date:" + string.Format("{0:yyyy-MM-dd HH:mm:ss}", MyAliveNotifi.timestamp);
                OutPut(NotificationStr);


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


           

        }

        private void Preprocessing2(NotificationBase notificationError)
        {

           
            string MessageTypeStr = notificationError.ToString();
            MessageTypeStr = MessageTypeStr.Substring(MessageTypeStr.LastIndexOf(".") + 1) + ",NoteID:"+notificationError.customer_ID + ",TaskID:"+notificationError.serverTask_ID.ToString()+",NotificationID:"+ notificationError.notification_ID.ToString();
            OutPut("Error#" + MessageTypeStr);

            /*
            string NotificationStr = null;
            if (notificationError is CountNotification)
            {
                CountNotification MyCountNotifi = notificationError as CountNotification;
                NotificationStr = "count#" + MyCountNotifi.customer_ID + ",IN:" + MyCountNotifi.count_in.ToString() + ";OUT:" + MyCountNotifi.count_out.ToString() + ",TaskID:" + MyCountNotifi.serverTask_ID.ToString() + ",GateID:" + MyCountNotifi.counting_gate_id.id;

                HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                CountingHelper MyCountingHelper = new CountingHelper(MyCountNotifi.customer_ID, MyCountNotifi.serverTask_ID, (int)MyCountNotifi.count_in, (int)MyCountNotifi.count_out);
                //CountingMannager MyCountingMannager = new CountingMannager("ABC987654321", 1000, 1, 1);
                CountingHelper.DoUpdateWork(MyHellaAPCECOManager, MyCountingHelper);

            }

            if (notificationError is StartupNotification)
            {
                StartupNotification MyStartNotifi = notificationError as StartupNotification;
                NotificationStr = "start#" + MyStartNotifi.customer_ID + ",TaskID:" + MyStartNotifi.serverTask_ID.ToString() + "," + MyStartNotifi.ip_address + "," + MyStartNotifi.mac_address;


            }

            if (notificationError is AliveNotification)
            {
                AliveNotification MyAliveNotifi = notificationError as AliveNotification;
                NotificationStr = "keepalive#" + MyAliveNotifi.customer_ID + ",TaskID:" + MyAliveNotifi.serverTask_ID.ToString() + "," + MyAliveNotifi.ip_address + "," + MyAliveNotifi.mac_address;


            }


            if (NotificationStr != null)
            {
                OutPut(NotificationStr);

                //SoapMessageLogExtension MySoapMessageLogExtension = new SoapMessageLogExtension();
                //MySoapMessageLogExtension.LGJLogTextMessage(NotificationStr, notification.Item.GetType());

            }
            */

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
        private Task[] CreateCounterTaskList4(uint mOldTaskid, uint mNewTaskid)
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

        private void OutPut(string SendReceiveString)
        {
            //if (UIContext != null && UpdateUIFunc != null)
            //UIContext.Post(UpdateUIFunc, NewCallCount);
            if (UIContext != null && UpdateUIFuncEx != null)
                UIContext.Post(UpdateUIFuncEx, SendReceiveString);

        }

    }
}
