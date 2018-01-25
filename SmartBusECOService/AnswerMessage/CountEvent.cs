using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Name = "count_event", Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountEvent
    {

        private CountEventType count_event_typeField;

        private uint deltaField;

        public CountEvent()
        {
            this.deltaField = ((uint)(1));
        }



        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public CountEventType count_event_type
        {
            get
            {
                return this.count_event_typeField;
            }
            set
            {
                this.count_event_typeField = value;
            }
        }

     
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        //[System.ComponentModel.DefaultValueAttribute(typeof(uint), "1")]
       [DataMember]
        public uint delta
        {
            get
            {
                return this.deltaField;
            }
            set
            {
                this.deltaField = value;
            }
        }
    }

  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum CountEventType
    {

        /// <remarks/>
        COUNT_EVENT_ALWAYS,

        /// <remarks/>
        COUNT_EVENT_DELTA_IN,

        /// <remarks/>
        COUNT_EVENT_DELTA_OUT,

        /// <remarks/>
        COUNT_EVENT_DELTA_SUM_IN_OUT,

        /// <remarks/>
        COUNT_EVENT_DELTA_MAX_IN_OUT,
    }
}
