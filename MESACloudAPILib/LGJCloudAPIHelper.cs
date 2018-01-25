using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MESACloudAPILib
{
    
    public class LGJCloudAPIHelper
    {

        public void StatupDevice(SmartBusCloud.NotificationContainer MyNotificationContainer)
        {
           
            
            //启动2   
            SmartBusCloud.HellaAPCECOSOAPdServiceClient MySmartBusCloudClient;
            MySmartBusCloudClient = new SmartBusCloud.HellaAPCECOSOAPdServiceClient("SmartBusAPCECOClientSoap12Binding");
            MySmartBusCloudClient.Notification(MyNotificationContainer);


            /*
           SmartBusCloud.NotificationContainer MyNotificationContainer = new SmartBusCloud.NotificationContainer();

            HellaAPCECOSOAPdServiceClient.StartupNotification MyStartupNotification = new HellaAPCECOSOAPdServiceClient.StartupNotification();
            MyStartupNotification.serverTask_ID = 0;
            MyStartupNotification.customer_ID = CounterID;// "C11200987654321";
            MyStartupNotification.ip_address = "192.168.1.20";
            MyStartupNotification.notification_ID = 123456789;

            MyNotificationContainer.Item = MyStartupNotification;
            HellaAPCECOSOAPdServiceClient.AnswerContainer MyAnswerContainer;

            MyAnswerContainer = MySoap12BindingClient.Notification(MyNotificationContainer);

            if (MyAnswerContainer.Items != null)
                ServerTaskID = MyAnswerContainer.Items[0].serverTask_ID;
                */


        }

        public SmartBusCloud.AnswerContainer Notification(SmartBusCloud.NotificationContainer MyNotificationContainer)
        {

            //---  
            SmartBusCloud.HellaAPCECOSOAPdServiceClient MySmartBusCloudClient;
            MySmartBusCloudClient = new SmartBusCloud.HellaAPCECOSOAPdServiceClient("SmartBusAPCECOClientSoap12Binding");
            return MySmartBusCloudClient.Notification(MyNotificationContainer);



        }
        public SmartBusCloud.Task[] Error(SmartBusCloud.ErrorContainer MyErrorContainer)
        {

            //--  
            SmartBusCloud.HellaAPCECOSOAPdServiceClient MySmartBusCloudClient;
            MySmartBusCloudClient = new SmartBusCloud.HellaAPCECOSOAPdServiceClient("SmartBusAPCECOClientSoap12Binding");
            return MySmartBusCloudClient.Error(MyErrorContainer);



        }



    }
}
