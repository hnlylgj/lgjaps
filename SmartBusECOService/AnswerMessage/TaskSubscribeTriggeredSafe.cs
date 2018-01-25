using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeDigitalInput))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeClearZone))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFill))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeZoneChannels))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCountChannels))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCounting))]
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [KnownType(typeof(TaskSubscribeDigitalInput))]
    [KnownType(typeof(TaskSubscribeClearZone))]
    [KnownType(typeof(TaskSubscribeFill))]
    [KnownType(typeof(TaskSubscribeZoneChannels))]
    [KnownType(typeof(TaskSubscribeCountChannels))]
    [KnownType(typeof(TaskSubscribeCounting))]
    public abstract partial class TaskSubscribeTriggeredSafe : TaskSubscribeTriggered
    {

        private bool store_on_transmission_errorField;


        public TaskSubscribeTriggeredSafe()
        {
            this.store_on_transmission_errorField = false;
        }

       
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        //[System.ComponentModel.DefaultValueAttribute(false)]
        [DataMember]
        public bool store_on_transmission_error
        {
            get
            {
                return this.store_on_transmission_errorField;
            }
            set
            {
                this.store_on_transmission_errorField = value;
            }
        }
    }
}
