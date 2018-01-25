using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Name = "task_message", Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    [KnownType(typeof(TaskDeleteAllNotifications))]
    [KnownType(typeof(TaskDeleteAllTasks))]
    [KnownType(typeof(TaskRebootNow))]
    [KnownType(typeof(TaskRequestParameters))]
    [KnownType(typeof(TaskRequestUpdate))]
    [KnownType(typeof(TaskSetDateTime))]
    [KnownType(typeof(TaskSetDigitalOutput))]
    [KnownType(typeof(TaskSubscribeAlive))]
    [KnownType(typeof(TaskSubscribeCameraImages))]
    [KnownType(typeof(TaskSubscribeClearZone))]
    [KnownType(typeof(TaskSubscribeCountChannels))]
    [KnownType(typeof(TaskSubscribeCounting))]
    [KnownType(typeof(TaskSubscribeDigitalInput))]
    [KnownType(typeof(TaskSubscribeErrorLog))]
    [KnownType(typeof(TaskSubscribeFeaturesInfo))]
    [KnownType(typeof(TaskSubscribeFill))]
    [KnownType(typeof(TaskSubscribeLogfiles))]
    [KnownType(typeof(TaskSubscribeObjectList))]
    [KnownType(typeof(TaskSubscribeSendParameters))]
    [KnownType(typeof(TaskSubscribeVideoStore))]
    [KnownType(typeof(TaskSubscribeZoneChannels))]
    public partial class TaskContainer
    {

        private Task[] itemsField;

        /*
         [System.Xml.Serialization.XmlElementAttribute("task_delete_all_notifications", typeof(TaskDeleteAllNotifications))]
         [System.Xml.Serialization.XmlElementAttribute("task_delete_all_tasks", typeof(TaskDeleteAllTasks))]
         [System.Xml.Serialization.XmlElementAttribute("task_reboot_now", typeof(TaskRebootNow))]
         [System.Xml.Serialization.XmlElementAttribute("task_request_parameters", typeof(TaskRequestParameters))]
         [System.Xml.Serialization.XmlElementAttribute("task_request_update", typeof(TaskRequestUpdate))]
         [System.Xml.Serialization.XmlElementAttribute("task_set_date_time", typeof(TaskSetDateTime))]
         [System.Xml.Serialization.XmlElementAttribute("task_set_digital_output", typeof(TaskSetDigitalOutput))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_alive", typeof(TaskSubscribeAlive))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_camera_images", typeof(TaskSubscribeCameraImages))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_clear_zone", typeof(TaskSubscribeClearZone))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_count_channels", typeof(TaskSubscribeCountChannels))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_counting", typeof(TaskSubscribeCounting))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_digital_input", typeof(TaskSubscribeDigitalInput))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_error_log", typeof(TaskSubscribeErrorLog))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_features_info", typeof(TaskSubscribeFeaturesInfo))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_fill", typeof(TaskSubscribeFill))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_logfiles", typeof(TaskSubscribeLogfiles))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_objlist", typeof(TaskSubscribeObjectList))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_send_parameters", typeof(TaskSubscribeSendParameters))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_video_store", typeof(TaskSubscribeVideoStore))]
         [System.Xml.Serialization.XmlElementAttribute("task_subscribe_zone_channels", typeof(TaskSubscribeZoneChannels))]
         */     
        [DataMember]
        public Task[] Items
        {
            get
            {
                return this.itemsField;
            }
            set
            {
                this.itemsField = value;
            }
        }
    }
}
