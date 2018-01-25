using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
//using System.Threading.Tasks;
using System.IO;
using System.Windows.Forms;
using System.Xml.Serialization;
using LGJHellaAPCSOAPdServiceInterface;
using System.Runtime.InteropServices;
using HellaApcECOLib;
//using WinTestApp.HellaAPCECOSOAPdServiceClient;
namespace WinTestApp
{
    public partial class TestMainForm : Form
    {
        int ClientCallCount = 0;
        uint ServerTaskID = 0;//1011;
        int ReturnValue = -1;

        int mIncoming = 0, mOutgoing = 0, KIncoming = 0, KOutgoing = 0;

        string CounterID= "C11200987654321"; string OrderID= "XY12345678912";


        
        [DllImport("winmm.dll", EntryPoint = "PlaySound")]
        private static extern bool PlaySound(string pszSound, IntPtr hmod, uint fdwSound);
        string strCurrentPath;

        public TestMainForm()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            HellaAPCECOMannager MyHellaAPCECOMannager = new HellaAPCECOMannager();
            CountingHelper MyCountingHelper = new CountingHelper(CounterID, ServerTaskID, 1, 1);
            ReturnValue = CountingHelper.DoUpdateWork(MyHellaAPCECOMannager, MyCountingHelper);
            OutMessage(null, 3);
            //OutInforRichTextBox.AppendText(nn.ToString()+"\n");

        }

        private void button2_Click(object sender, EventArgs e)
        {

            HellaAPCECOMannager MyHellaAPCECOMannager = new HellaAPCECOMannager();
            HellaApcHelper MyHellaApcHelper = new HellaApcHelper(CounterID, "startup");
            ReturnValue = (int)HellaApcHelper.DoUpdateWork(MyHellaAPCECOMannager, MyHellaApcHelper);
            OutMessage(null, 3);
            

        }

        private void button3_Click(object sender, EventArgs e)
        {


            HellaAPCECOMannager MyHellaAPCECOMannager = new HellaAPCECOMannager();
            HellaApcHelper MyHellaApcHelper = new HellaApcHelper(CounterID, "keepalive");
            ReturnValue = (int)HellaApcHelper.DoUpdateWork(MyHellaAPCECOMannager, MyHellaApcHelper);
            OutMessage(null, 3);
           

        }
        private void button4_Click(object sender, EventArgs e)
        {
            //计数2  SmartBusAPCECOClientBinding   SOAPdServiceSoap12Binding
            HellaAPCECOSOAPdServiceClient.SOAPdServiceSoap12BindingClient MySoap12BindingClient;

            MySoap12BindingClient = new HellaAPCECOSOAPdServiceClient.SOAPdServiceSoap12BindingClient("SmartBusAPCECOClientSoap12Binding");

            HellaAPCECOSOAPdServiceClient.NotificationContainer MyNotificationContainer = new HellaAPCECOSOAPdServiceClient.NotificationContainer();

            HellaAPCECOSOAPdServiceClient.CountNotification MyCountNotification = new HellaAPCECOSOAPdServiceClient.CountNotification();
            MyCountNotification.serverTask_ID = ServerTaskID;
            MyCountNotification.customer_ID = CounterID;// "C11200987654321";
            MyCountNotification.notification_ID = 123456789;
            MyCountNotification.count_in=1;
            MyCountNotification.count_out= 1;
            HellaAPCECOSOAPdServiceClient.CountingGateID MyCountingGateID = new HellaAPCECOSOAPdServiceClient.CountingGateID();
            MyCountingGateID.id = "10";
            MyCountNotification.counting_gate_id= MyCountingGateID;

            MyNotificationContainer.Item = MyCountNotification;
            HellaAPCECOSOAPdServiceClient.AnswerContainer MyAnswerContainer;

            MyAnswerContainer = MySoap12BindingClient.Notification(MyNotificationContainer);
            OutPutXMLInfor(MyAnswerContainer.Items);





        }
        private void button5_Click(object sender, EventArgs e)
        {
            //启动2   SmartBusAPCECOClientBinding   SOAPdServiceSoap12Binding
            HellaAPCECOSOAPdServiceClient.SOAPdServiceSoap12BindingClient MySoap12BindingClient;

           

            MySoap12BindingClient = new HellaAPCECOSOAPdServiceClient.SOAPdServiceSoap12BindingClient("SmartBusAPCECOClientSoap12Binding");

            HellaAPCECOSOAPdServiceClient.NotificationContainer MyNotificationContainer = new HellaAPCECOSOAPdServiceClient.NotificationContainer();

            HellaAPCECOSOAPdServiceClient.StartupNotification MyStartupNotification = new HellaAPCECOSOAPdServiceClient.StartupNotification();
            MyStartupNotification.serverTask_ID = 0;
            MyStartupNotification.customer_ID = CounterID;// "C11200987654321";
            MyStartupNotification.ip_address = "192.168.1.20";
            MyStartupNotification.notification_ID = 123456789;

            MyNotificationContainer.Item = MyStartupNotification;
            HellaAPCECOSOAPdServiceClient.AnswerContainer MyAnswerContainer;

            MyAnswerContainer=MySoap12BindingClient.Notification(MyNotificationContainer);

            if(MyAnswerContainer.Items!=null)
            ServerTaskID = MyAnswerContainer.Items[0].serverTask_ID;


            OutPutXMLInfor(MyAnswerContainer.Items);

            OutMessage(null, 2);

        }
                     

        private void button6_Click(object sender, EventArgs e)
        {
            //心跳2
            HellaAPCECOSOAPdServiceClient.SOAPdServiceSoap12BindingClient MySoap12BindingClient;



            MySoap12BindingClient = new HellaAPCECOSOAPdServiceClient.SOAPdServiceSoap12BindingClient("SmartBusAPCECOClientSoap12Binding");

            HellaAPCECOSOAPdServiceClient.NotificationContainer MyNotificationContainer = new HellaAPCECOSOAPdServiceClient.NotificationContainer();

            HellaAPCECOSOAPdServiceClient.AliveNotification MyAliveNotification = new HellaAPCECOSOAPdServiceClient.AliveNotification();
            MyAliveNotification.serverTask_ID = 0;
            MyAliveNotification.customer_ID = CounterID;// "C11200987654321";
            MyAliveNotification.ip_address = "192.168.1.20";
            MyAliveNotification.notification_ID = 123456789;

            MyNotificationContainer.Item = MyAliveNotification;
            HellaAPCECOSOAPdServiceClient.AnswerContainer MyAnswerContainer;

            MyAnswerContainer = MySoap12BindingClient.Notification(MyNotificationContainer);

            if (MyAnswerContainer.Items != null)
                ServerTaskID = MyAnswerContainer.Items[1].serverTask_ID;


            OutPutXMLInfor(MyAnswerContainer.Items);

            OutMessage(null, 2);



        }

        private void button7_Click(object sender, EventArgs e)
        {
            //启动3 
            /*
            LGJAPCECOSOAPdService.HellaAPCECOSOAPdServiceClient MyHellaAPCECOSOAPdServiceClient;
            MyHellaAPCECOSOAPdServiceClient = new LGJAPCECOSOAPdService.HellaAPCECOSOAPdServiceClient("LGJHellaAPCECOSOAPdService");



            LGJAPCECOSOAPdService.NotificationContainer MyNotificationContainer = new LGJAPCECOSOAPdService.NotificationContainer();

            LGJAPCECOSOAPdService.startup_notification MyStartupNotification = new LGJAPCECOSOAPdService.startup_notification();
            MyStartupNotification.serverTask_ID = 0;
            MyStartupNotification.customer_ID = "C11200987654321";
            MyStartupNotification.ip_address = "192.168.1.20";


            MyNotificationContainer.Item = MyStartupNotification;
            LGJAPCECOSOAPdService.answer_message MyAnswerContainer;

            MyAnswerContainer = MyHellaAPCECOSOAPdServiceClient.Notification(MyNotificationContainer);

            OutPutXMLInfor2(MyAnswerContainer.Items);
            */

        }
        private void button8_Click(object sender, EventArgs e)
        {
            //启动4 WinTestApp.LGJTestHellaAPC
            //WinTestApp.LGJDemoHellaAPC.HellaAPCECOSOAPdServiceClient
            /*
            LGJDemoHellaAPC.HellaAPCECOSOAPdServiceClient MyHellaAPCECOSOAPdServiceClient;
            MyHellaAPCECOSOAPdServiceClient = new LGJDemoHellaAPC.HellaAPCECOSOAPdServiceClient("LGJDemoHellaAPCECOSOAPdService");



            LGJDemoHellaAPC.StartupNotification MyStartupNotification = new LGJDemoHellaAPC.StartupNotification();
            MyStartupNotification.serverTask_ID = 0;
            MyStartupNotification.customer_ID = "C11200987654321";
            MyStartupNotification.ip_address = "192.168.1.20";

            LGJDemoHellaAPC.NotificationContainer MyNotificationContainer = new LGJDemoHellaAPC.NotificationContainer();
            LGJDemoHellaAPC.AnswerContainer MyAnswerContainer;

            MyNotificationContainer.Item = MyStartupNotification;

            MyAnswerContainer = MyHellaAPCECOSOAPdServiceClient.Notification(MyNotificationContainer);
            */
            //OutPutXMLInfor2(MyAnswerContainer.Items);
        }



        private void TestMainForm_Shown(object sender, EventArgs e)
        {
            APCComboBox.SelectedIndex = 0;
            Reflesh();
            AutoCheckBox.Checked = true;

            TaskIDTextBox.Text = ServerTaskID.ToString();

        }

        private void SchedulingButton_Click(object sender, EventArgs e)
        {
            //-1.----------------------------
            CounterID = APCComboBox.Text.TrimEnd();
            OrderID = LGJUUIDUtis.GetMobileIDNumberCode15()+LGJUUIDUtis.GetMobileIDCode6();;
         
            OutMessage(null);
            //--2.---------------------------
            uint mTaskID = 0;
            HellaServiceDriver MyHellaServiceDriver = new HellaServiceDriver();
            ReturnValue=MyHellaServiceDriver.InsertNewTask(CounterID, OrderID, ref mTaskID);
            ServerTaskID = mTaskID;

            OutMessage(null,1);

            UpdateUI();

        }

       private void UpdateUI()
        {           

            OrderIDTextBox.Text = OrderID;
            TaskIDTextBox.Text = ServerTaskID.ToString();
        }
        

        private void OutMessage(string Resultstr, int flag=0)
        {
            ClientCallCount++;
            string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now);
            string PrintString = null;
            if (flag == 0)
            {

                PrintString = string.Format("[{0}][{1}]CounterID:[{2}]OrderID:[{3}]", ClientCallCount, MyTimeMarkerStr, CounterID, OrderID);
                OutInforRichTextBox.AppendText(PrintString + "\n");
            }
            if (flag == 1)
            {
               
                PrintString = string.Format("[{0}][{1}]NewTaskID:[{2}]ReturnValue:[{3}]", ClientCallCount, MyTimeMarkerStr, ServerTaskID, ReturnValue);
                OutInforRichTextBox.AppendText(PrintString + "\n");
            }
            if (flag == 2)
            {

                PrintString = string.Format("[{0}][{1}]GetTaskID:[{2}]Incoming:[{3}]Outgoing:[{4}]", ClientCallCount, MyTimeMarkerStr, ServerTaskID, mIncoming, mOutgoing);
                OutInforRichTextBox.AppendText(PrintString + "\n");
            }


            if (flag == 3)
            {

                PrintString = string.Format("[{0}][{1}]TaskID:[{2}]Return:[{3}]", ClientCallCount, MyTimeMarkerStr, ServerTaskID, ReturnValue);
                OutInforRichTextBox.AppendText(PrintString + "\n");
            }


        }

        private void TestXMLbutton_Click(object sender, EventArgs e)
        {
            Task[] Mytasks = CreateCounterTaskList();
            string info = "";

            XmlSerializer ser = new XmlSerializer(typeof(Task[]));
            Stream mem = new MemoryStream();
            ser.Serialize(mem, Mytasks);
            StreamReader sr = new StreamReader(mem);
            sr.BaseStream.Seek(0, SeekOrigin.Begin);
            info += sr.ReadToEnd();
            XMLTextBox.Text = info;


        }

        private void OutPutXMLInfor(HellaAPCECOSOAPdServiceClient.Task[] Mytasks)
        {
            //Task[] Mytasks = CreateCounterTaskList();
            string info = "";

            XmlSerializer ser = new XmlSerializer(typeof(HellaAPCECOSOAPdServiceClient.Task[]));
            Stream mem = new MemoryStream();
            ser.Serialize(mem, Mytasks);
            StreamReader sr = new StreamReader(mem);
            sr.BaseStream.Seek(0, SeekOrigin.Begin);
            info += sr.ReadToEnd();
            XMLTextBox.Text = info;
        }
        private void OutPutXMLInfor2(LGJAPCECOSOAPdService.Task[] Mytasks)
        {
            //Task[] Mytasks = CreateCounterTaskList();
            string info = "";

            XmlSerializer ser = new XmlSerializer(typeof(LGJAPCECOSOAPdService.Task[]));
            Stream mem = new MemoryStream();
            ser.Serialize(mem, Mytasks);
            StreamReader sr = new StreamReader(mem);
            sr.BaseStream.Seek(0, SeekOrigin.Begin);
            info += sr.ReadToEnd();
            XMLTextBox.Text = info;


        }


        private Task[] CreateCounterTaskList()
        {
               List<Task> tasks = new List<Task>();

            
                //2.--关于计数任务------------------------------------------------------------
                //StartupNotification MyStartNotifi = notification as StartupNotification;
                //HellaAPCECOMannager MyHellaAPCECOManager = new HellaAPCECOMannager();
                //HellaApcHelper MyHellaApcHelper = new HellaApcHelper(MyStartNotifi.customer_ID, "startup");
                //uint GetTaskID = HellaApcHelper.DoUpdateWork(MyHellaAPCECOManager, MyHellaApcHelper);

                TaskSubscribeCounting MyTaskCount = new TaskSubscribeCounting();

                MyTaskCount.task_type = TaskType.TASK_COUNT;
                MyTaskCount.serverTask_ID = 1000;
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
                return tasks.ToArray();
        }

        private void Refleshbutton_Click(object sender, EventArgs e)
        {
            Reflesh();
        }

        private void MainTestTimer_Tick(object sender, EventArgs e)
        {
            Reflesh();
        }

        private void APCComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {

            CounterID = APCComboBox.Text.TrimEnd();
        }

        private void AutoCheckBox_CheckedChanged(object sender, EventArgs e)
        {
            MainTestTimer.Enabled = AutoCheckBox.Checked;
        }

        private void Reflesh()
        {

            KIncoming = mIncoming;
            KOutgoing = mOutgoing;

            HellaServiceDriver MyHellaServiceDriver = new HellaServiceDriver();
            int tempTaskID= MyHellaServiceDriver.GetLastCounting(CounterID, ServerTaskID, ref mIncoming, ref mOutgoing);
            INnumberlabel.Text = mIncoming.ToString();
            OutGolabel.Text = mOutgoing.ToString();

            if(ServerTaskID==0)
            {
                TaskIDTextBox.Text = tempTaskID.ToString();
                ServerTaskID =(uint)tempTaskID;
            }
       

             if (mIncoming> KIncoming||mOutgoing > KOutgoing)
             {
                if(SoundCheckBox.Checked)PlaySpund();

                OutMessage(null, 2);

            }



        }
        private void PlaySpund()
        {
            strCurrentPath = AppDomain.CurrentDomain.SetupInformation.ApplicationBase;
            string strPath;
            strPath = strCurrentPath + "doorling.wav";
            PlaySound(strPath, IntPtr.Zero, 0);

        }



    }
}
