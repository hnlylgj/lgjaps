using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Xml.Serialization;

using System.IO;
using MESACloudAPILib;
using MESACloudAPILib.SmartBusCloud;

namespace SmartDeviceTest
{
    public partial class MainForm : Form
    {
        int ClientCallCount = 0;
        string CounterID = "C11200987654321";
        string OrderID = "XY12345678912";
        uint mClount;

        uint ServerTaskID = 0;//1011;

        int ReturnValue =0;

        int mIncoming = 0, mOutgoing = 0, KIncoming = 0, KOutgoing = 0;
        public MainForm()
        {
            InitializeComponent();

            mClount = 0;
        }

        private void Startupbutton_Click(object sender, EventArgs e)
        {
            if(ModeCheckBox.Checked)
             Startup1();

            Startup2();


        }

        private void Startup1()
        {
            mClount++;
            NotificationContainer MyNotificationContainer = new NotificationContainer();

            StartupNotification MyStartupNotification = new StartupNotification();
            MyStartupNotification.serverTask_ID = 0;
            MyStartupNotification.customer_ID = CounterID;// "C11200987654321";
            MyStartupNotification.ip_address = "168.223.110.101";
            MyStartupNotification.notification_ID = mClount;
            MyStartupNotification.mac_address = "AB-09-23-ED-F0-88";

            MyStartupNotification.timestamp = DateTime.Now;
            MyNotificationContainer.Item = MyStartupNotification;
            AnswerContainer MyAnswerContainer;

            LGJCloudAPIHelper MyLGJCloudAPIHelper = new LGJCloudAPIHelper();

            MyAnswerContainer = MyLGJCloudAPIHelper.Notification(MyNotificationContainer);

            if (MyAnswerContainer.Items != null)
                ServerTaskID = MyAnswerContainer.Items[0].serverTask_ID;


            OutPutXMLInfor(MyAnswerContainer.Items);

            OutMessage(null, 2);


        }

        private void Startup2()
        {
            mClount++;
            SmartBusECOService.LGJHellaAPCECO.NotificationContainer MyNotificationContainer = new SmartBusECOService.LGJHellaAPCECO.NotificationContainer();

            SmartBusECOService.LGJHellaAPCECO.StartupNotification MyStartupNotification = new SmartBusECOService.LGJHellaAPCECO.StartupNotification();
            MyStartupNotification.serverTask_ID = 0;
            MyStartupNotification.customer_ID = CounterID;// "C11200987654321";
            MyStartupNotification.ip_address = "168.223.110.101";
            MyStartupNotification.notification_ID = mClount;
            MyStartupNotification.mac_address = "AB-09-23-ED-F0-FF";

            MyStartupNotification.timestamp = DateTime.Now;
            MyNotificationContainer.Item = MyStartupNotification;


            SmartBusECOService.LGJHellaAPCECO.AnswerContainer MyAnswerContainer;
           
            SmartBusECOService.LGJHellaAPCECO.HellaAPCECOSOAPdServiceClient MySmartBusCloudClient;
            MySmartBusCloudClient = new SmartBusECOService.LGJHellaAPCECO.HellaAPCECOSOAPdServiceClient("SmartBusAPCECOClientSoap12Binding2");

            MyAnswerContainer = MySmartBusCloudClient.Notification(MyNotificationContainer);     



            if (MyAnswerContainer.Items != null)
                ServerTaskID = MyAnswerContainer.Items[0].serverTask_ID;


            OutPutXMLInfor2(MyAnswerContainer.Items);

            OutMessage(null, 2);


        }

        private void Countbutton_Click(object sender, EventArgs e)
        {
            if (ModeCheckBox.Checked)
               Count1();

                Count2();



        }

        private void Count1()
        {
            mClount++;
            NotificationContainer MyNotificationContainer = new NotificationContainer();

            CountNotification MyCountNotification = new CountNotification();
            MyCountNotification.serverTask_ID = ServerTaskID;
            MyCountNotification.customer_ID = CounterID;// "C11200987654321";
            MyCountNotification.notification_ID = mClount;
            MyCountNotification.count_in = 1;
            MyCountNotification.count_out = 1;
            MyCountNotification.timestamp = DateTime.Now;
            CountingGateID MyCountingGateID = new CountingGateID();
            MyCountingGateID.id = "10";
            MyCountNotification.counting_gate_id = MyCountingGateID;

            MyNotificationContainer.Item = MyCountNotification;
            AnswerContainer MyAnswerContainer;

            LGJCloudAPIHelper MyLGJCloudAPIHelper = new LGJCloudAPIHelper();
            MyAnswerContainer = MyLGJCloudAPIHelper.Notification(MyNotificationContainer);


            if (MyAnswerContainer != null)
                OutMessage(MyAnswerContainer.server_response_type.ToString(), 4);

            OutPutXMLInfor(MyAnswerContainer.Items);





        }

        private void Count2()
        {
            mClount++;
            SmartBusECOService.LGJHellaAPCECO.NotificationContainer MyNotificationContainer = new SmartBusECOService.LGJHellaAPCECO.NotificationContainer();

            SmartBusECOService.LGJHellaAPCECO.CountNotification MyCountNotification = new SmartBusECOService.LGJHellaAPCECO.CountNotification();
            MyCountNotification.serverTask_ID = ServerTaskID;
            MyCountNotification.customer_ID = CounterID;// "C11200987654321";
            MyCountNotification.notification_ID = mClount;
            MyCountNotification.count_in = 1;
            MyCountNotification.count_out = 1;
            MyCountNotification.timestamp = DateTime.Now;
            SmartBusECOService.LGJHellaAPCECO.CountingGateID MyCountingGateID = new SmartBusECOService.LGJHellaAPCECO.CountingGateID();
            MyCountingGateID.id = "10";
            MyCountNotification.counting_gate_id = MyCountingGateID;

            MyNotificationContainer.Item = MyCountNotification;
            SmartBusECOService.LGJHellaAPCECO.AnswerContainer MyAnswerContainer;

            SmartBusECOService.LGJHellaAPCECO.HellaAPCECOSOAPdServiceClient MySmartBusCloudClient;
            MySmartBusCloudClient = new SmartBusECOService.LGJHellaAPCECO.HellaAPCECOSOAPdServiceClient("SmartBusAPCECOClientSoap12Binding2");

            MyAnswerContainer = MySmartBusCloudClient.Notification(MyNotificationContainer);


            if (MyAnswerContainer != null)
                OutMessage(MyAnswerContainer.server_response_type.ToString(), 4);

            OutPutXMLInfor2(MyAnswerContainer.Items);





        }

        private void Alivebutton_Click(object sender, EventArgs e)
        {
            if (ModeCheckBox.Checked)
               Alive1();

                Alive2();


        }
        private void Alive1()
        {

            NotificationContainer MyNotificationContainer = new NotificationContainer();

            AliveNotification MyAliveNotification = new AliveNotification();
            MyAliveNotification.serverTask_ID = 0;
            MyAliveNotification.customer_ID = CounterID;// "C11200987654321";
            MyAliveNotification.ip_address = "168.223.110.101";
            MyAliveNotification.notification_ID = mClount;
            MyAliveNotification.mac_address = "AB-09-23-ED-F0-88";
            MyAliveNotification.timestamp = DateTime.Now;

            MyNotificationContainer.Item = MyAliveNotification;
            AnswerContainer MyAnswerContainer;

         
            LGJCloudAPIHelper MyLGJCloudAPIHelper = new LGJCloudAPIHelper();
            MyAnswerContainer = MyLGJCloudAPIHelper.Notification(MyNotificationContainer);

            if (MyAnswerContainer != null)
            {
                if (MyAnswerContainer.Items[1] != null)
                    ServerTaskID = MyAnswerContainer.Items[1].serverTask_ID;
                OutMessage(MyAnswerContainer.server_response_type.ToString(), 4);
            }



            OutPutXMLInfor(MyAnswerContainer.Items);

          



        }
        private void Alive2()
        {

            SmartBusECOService.LGJHellaAPCECO.NotificationContainer MyNotificationContainer = new SmartBusECOService.LGJHellaAPCECO.NotificationContainer();

            SmartBusECOService.LGJHellaAPCECO.AliveNotification MyAliveNotification = new SmartBusECOService.LGJHellaAPCECO.AliveNotification();
            MyAliveNotification.serverTask_ID = 0;
            MyAliveNotification.customer_ID = CounterID;// "C11200987654321";
            MyAliveNotification.ip_address = "168.223.110.101";
            MyAliveNotification.notification_ID = mClount;
            MyAliveNotification.mac_address = "AB-09-23-ED-F0-FF";
            MyAliveNotification.timestamp = DateTime.Now;

            MyNotificationContainer.Item = MyAliveNotification;
            SmartBusECOService.LGJHellaAPCECO.AnswerContainer MyAnswerContainer;

            SmartBusECOService.LGJHellaAPCECO.HellaAPCECOSOAPdServiceClient MySmartBusCloudClient;
            MySmartBusCloudClient = new SmartBusECOService.LGJHellaAPCECO.HellaAPCECOSOAPdServiceClient("SmartBusAPCECOClientSoap12Binding2");

            MyAnswerContainer = MySmartBusCloudClient.Notification(MyNotificationContainer);

            if (MyAnswerContainer != null)
            {
                if (MyAnswerContainer.Items[1] != null)
                    ServerTaskID = MyAnswerContainer.Items[1].serverTask_ID;
                OutMessage(MyAnswerContainer.server_response_type.ToString(), 4);
            }



            OutPutXMLInfor2(MyAnswerContainer.Items);





        }

        private void OutPutXMLInfor(Task[] Mytasks)
        {
            //Task[] Mytasks = CreateCounterTaskList();
            string info = "";

            XmlSerializer ser = new XmlSerializer(typeof(Task[]));
            Stream mem = new MemoryStream();
            ser.Serialize(mem, Mytasks);
            StreamReader sr = new StreamReader(mem);
            sr.BaseStream.Seek(0, SeekOrigin.Begin);
            info += sr.ReadToEnd();
            XMLTextBox.Text = info;
        }


        private void OutPutXMLInfor2(Task[] Mytasks)
        {
            //Task[] Mytasks = CreateCounterTaskList();
            string info = "";

            XmlSerializer ser = new XmlSerializer(typeof(Task[]));
            Stream mem = new MemoryStream();
            ser.Serialize(mem, Mytasks);
            StreamReader sr = new StreamReader(mem);
            sr.BaseStream.Seek(0, SeekOrigin.Begin);
            info += sr.ReadToEnd();
            XMLTextBox.Text = info;
        }
        private void OutPutXMLInfor2(SmartBusECOService.LGJHellaAPCECO.Task[] Mytasks)
        {
            //Task[] Mytasks = CreateCounterTaskList();
            string info = "";

            XmlSerializer ser = new XmlSerializer(typeof(SmartBusECOService.LGJHellaAPCECO.Task[]));
            Stream mem = new MemoryStream();
            ser.Serialize(mem, Mytasks);
            StreamReader sr = new StreamReader(mem);
            sr.BaseStream.Seek(0, SeekOrigin.Begin);
            info += sr.ReadToEnd();
            XMLTextBox.Text = info;


        }

        private void OutMessage(string Resultstr, int flag = 0)
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



            if (flag == 4)
            {
               
                PrintString = string.Format("[{0}][{1}]TaskID:[{2}]Return:[{3}]", ClientCallCount, MyTimeMarkerStr, ServerTaskID, Resultstr);
                OutInforRichTextBox.AppendText(PrintString + "\n");
            }


        }

    }
}
