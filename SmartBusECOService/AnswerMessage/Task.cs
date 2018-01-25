using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;
using SmartBusECOService.NotificationMessage;

namespace SmartBusECOService.AnswerMessage
{

    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    [KnownType(typeof(TaskDeleteAllNotifications))]
    [KnownType(typeof(TaskDeleteAllTasks))]
    [KnownType(typeof(TaskSetDateTime))]
    [KnownType(typeof(TaskWithActivity))]
    [KnownType(typeof(TaskSubscribeTriggered))]
    [KnownType(typeof(TaskSubscribeFeaturesInfo))]
    [KnownType(typeof(TaskSubscribeObjectList))]
    [KnownType(typeof(TaskSubscribeAlive))]
    [KnownType(typeof(TaskSubscribeVideoStore))]
    [KnownType(typeof(TaskSubscribeSendParameters))]
    [KnownType(typeof(TaskSubscribeCameraImages))]
    [KnownType(typeof(TaskSubscribeErrorLog))]
    [KnownType(typeof(TaskSubscribeLogfiles))]
    [KnownType(typeof(TaskSubscribeTriggeredSafe))]
    [KnownType(typeof(TaskSubscribeDigitalInput))]
    [KnownType(typeof(TaskSubscribeClearZone))]
    [KnownType(typeof(TaskSubscribeFill))]
    [KnownType(typeof(TaskSubscribeZoneChannels))]
    [KnownType(typeof(TaskSubscribeCountChannels))]
    [KnownType(typeof(TaskSubscribeCounting))]
    [KnownType(typeof(TaskSetDigitalOutput))]
    [KnownType(typeof(TaskRequestParameters))]
    [KnownType(typeof(TaskRequestUpdate))]
    [KnownType(typeof(TaskRebootNow))]  
    public abstract partial class Task
    {

        private TaskType task_typeField;

        private uint serverTask_IDField;


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
    }

    /*
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum TaskType
    {

        /// <remarks/>
        TASK_STARTUP,

        /// <remarks/>
        TASK_UPDATE,

        /// <remarks/>
        TASK_COUNT,

        /// <remarks/>
        TASK_FILL_LEVEL,

        /// <remarks/>
        TASK_DIGIT_INPUT,

        /// <remarks/>
        TASK_DIGIT_OUTPUT,

        /// <remarks/>
        TASK_CAM_IMAGE,

        /// <remarks/>
        TASK_PARAM,

        /// <remarks/>
        TASK_SEND_PARAM,

        /// <remarks/>
        TASK_LOG,

        /// <remarks/>
        TASK_ERR_LOG,

        /// <remarks/>
        TASK_VIDEO_STORE,

        /// <remarks/>
        TASK_SET_DATE_TIME,

        /// <remarks/>
        TASK_CURRENT_OBJECT_LIST,

        /// <remarks/>
        TASK_HISTORIC_OBJECT_LIST,

        /// <remarks/>
        TASK_ALIVE,

        /// <remarks/>
        TASK_REBOOT_NOW,

        /// <remarks/>
        TASK_CLEAR_ZONE,

        /// <remarks/>
        TASK_COUNT_CHANNELS,

        /// <remarks/>
        TASK_ZONE_CHANNELS,

        /// <remarks/>
        TASK_FEATURES_INFO,

        /// <remarks/>
        TASK_DELETE_ALL_TASKS,

        /// <remarks/>
        TASK_DELETE_ALL_NOTIFICATIONS,
    }
    */
}
