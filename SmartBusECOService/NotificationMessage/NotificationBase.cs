using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
//using System.Xml.Serialization;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [KnownType(typeof(HistoricObjectListNotificationBase))]
    [KnownType(typeof(HistoricObjectListNotification))]
    [KnownType(typeof(ParameterNotification))]
    [KnownType(typeof(LogfilesNotification))]
    [KnownType(typeof(DigitalInputNotification))]
    [KnownType(typeof(NotificationWithOSDState))]
    [KnownType(typeof(CurrentObjectListNotification))]
    [KnownType(typeof(CameraImagesNotification))]
    [KnownType(typeof(ClearZoneNotification))]
    [KnownType(typeof(FillNotification))]
    [KnownType(typeof(ZoneChannelsNotification))]
    [KnownType(typeof(CountChannelsNotification))]
    [KnownType(typeof(CountNotification))]
    [KnownType(typeof(ExtendedNotificationBase))]
    [KnownType(typeof(ErrorContainer))]
    [KnownType(typeof(FeatureInfoNotification))]
    [KnownType(typeof(StartupNotification))]
    [KnownType(typeof(AliveNotification))]
    [KnownType(typeof(ErrorLogfilesNotification))]
    public abstract partial class NotificationBase
    {

        private string mac_addressField;

        private string customer_IDField;

        private TaskType task_typeField;

        private uint notification_IDField;

        private uint serverTask_IDField;

        private string callerType_IDField;

        private DateTime timestampField;

        [DataMember]
       
        public string mac_address
        {
            get
            {
                return this.mac_addressField;
            }
            set
            {
                this.mac_addressField = value;
            }
        }

        [DataMember]
       
        public string customer_ID
        {
            get
            {
                return this.customer_IDField;
            }
            set
            {
                this.customer_IDField = value;
            }
        }

        [DataMember]
      
        public TaskType task_type
        {
            get
            {
                return this.task_typeField;
            }
            set
            {
                this.task_typeField = value;
            }
        }

        [DataMember]
      
        public uint notification_ID
        {
            get
            {
                return this.notification_IDField;
            }
            set
            {
                this.notification_IDField = value;
            }
        }

        [DataMember]
     
        public uint serverTask_ID
        {
            get
            {
                return this.serverTask_IDField;
            }
            set
            {
                this.serverTask_IDField = value;
            }
        }

         [DataMember]
           public string callerType_ID
        {
            get
            {
                return this.callerType_IDField;
            }
            set
            {
                this.callerType_IDField = value;
            }
        }

        [DataMember]
      
        public DateTime timestamp
        {
            get
            {
                return this.timestampField;
            }
            set
            {
                this.timestampField = value;
            }
        }
    }


    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum TaskType
    {


        TASK_STARTUP,


        TASK_UPDATE,


        TASK_COUNT,


        TASK_FILL_LEVEL,


        TASK_DIGIT_INPUT,


        TASK_DIGIT_OUTPUT,


        TASK_CAM_IMAGE,


        TASK_PARAM,


        TASK_SEND_PARAM,


        TASK_LOG,


        TASK_ERR_LOG,


        TASK_VIDEO_STORE,


        TASK_SET_DATE_TIME,


        TASK_CURRENT_OBJECT_LIST,


        TASK_HISTORIC_OBJECT_LIST,


        TASK_ALIVE,


        TASK_REBOOT_NOW,


        TASK_CLEAR_ZONE,


        TASK_COUNT_CHANNELS,


        TASK_ZONE_CHANNELS,


        TASK_FEATURES_INFO,


        TASK_DELETE_ALL_TASKS,


        TASK_DELETE_ALL_NOTIFICATIONS,
    }
}
