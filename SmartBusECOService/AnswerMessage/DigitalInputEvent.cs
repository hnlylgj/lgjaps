using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class DigitalInputEvent
    {

        private DigitalInputEventType[] eventField;

        
        //[System.Xml.Serialization.XmlElementAttribute("event")]
        [DataMember]
        public DigitalInputEventType[] @event
        {
            get
            {
                return this.eventField;
            }
            set
            {
                this.eventField = value;
            }
        }
    }

   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    public enum DigitalInputEventType
    {

        /// <remarks/>
        DIGITAL_INPUT_EVENT_INACTIVE,

        /// <remarks/>
        DIGITAL_INPUT_EVENT_ACTIVE,

        /// <remarks/>
        DIGITAL_INPUT_EVENT_ANY,

        /// <remarks/>
        DIGITAL_INPUT_EVENT_IGNORE,
    }
}
