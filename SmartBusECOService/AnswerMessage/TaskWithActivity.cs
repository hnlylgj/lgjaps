using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
    /*
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeTriggered))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFeaturesInfo))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeObjectList))]

    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeAlive))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeVideoStore))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeSendParameters))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCameraImages))]

    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeErrorLog))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeLogfiles))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeTriggeredSafe))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeDigitalInput))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeClearZone))]

    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFill))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeZoneChannels))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCountChannels))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCounting))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSetDigitalOutput))]

    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    */

    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [KnownType(typeof(TaskSubscribeTriggered))]
    [KnownType(typeof(TaskSubscribeFeaturesInfo))]
    [KnownType(typeof(TaskSubscribeObjectList))]

    [KnownType(typeof(TaskSubscribeVideoStore))]
    [KnownType(typeof(TaskSubscribeSendParameters))]
    [KnownType(typeof(TaskSubscribeCameraImages))]
    [KnownType(typeof(TaskSubscribeAlive))]

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
      

    public abstract partial class TaskWithActivity : Task
    {

        private bool activity_stateField;

        private bool store_taskField;

        private bool store_taskFieldSpecified;

    
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public bool activity_state
        {
            get
            {
                return this.activity_stateField;
            }
            set
            {
                this.activity_stateField = value;
            }
        }

     
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public bool store_task
        {
            get
            {
                return this.store_taskField;
            }
            set
            {
                this.store_taskField = value;
            }
        }

      
        //[System.Xml.Serialization.XmlIgnoreAttribute()]
        [DataMember]
        public bool store_taskSpecified
        {
            get
            {
                return this.store_taskFieldSpecified;
            }
            set
            {
                this.store_taskFieldSpecified = value;
            }
        }
    }
}
