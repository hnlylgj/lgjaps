using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;
namespace SmartBusECOService.AnswerMessage
{
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FillEvent
    {

        private FillEventType fill_event_typeField;

        private uint thresholdField;

        private bool thresholdFieldSpecified;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public FillEventType fill_event_type
        {
            get
            {
                return this.fill_event_typeField;
            }
            set
            {
                this.fill_event_typeField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint threshold
        {
            get
            {
                return this.thresholdField;
            }
            set
            {
                this.thresholdField = value;
            }
        }

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public bool thresholdSpecified
        {
            get
            {
                return this.thresholdFieldSpecified;
            }
            set
            {
                this.thresholdFieldSpecified = value;
            }
        }
    }

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum FillEventType
    {

        /// <remarks/>
        FILL_EVENT_ABOVE_THRESHOLD,

        /// <remarks/>
        FILL_EVENT_BELOW_THRESHOLD,

        /// <remarks/>
        FILL_EVENT_ANY,
    }
}
