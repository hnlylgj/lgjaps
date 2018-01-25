using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSetDigitalOutput : TaskWithActivity
    {

        private DigitalOutputElement[] digital_output_portField;

    
        //[System.Xml.Serialization.XmlElementAttribute("digital_output_port")]
        [DataMember]
        public DigitalOutputElement[] digital_output_port
        {
            get
            {
                return this.digital_output_portField;
            }
            set
            {
                this.digital_output_portField = value;
            }
        }
    }

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
   
    public partial class DigitalOutputElement
    {

        private DigitalOutputActivity activityField;

      
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public DigitalOutputActivity activity
        {
            get
            {
                return this.activityField;
            }
            set
            {
                this.activityField = value;
            }
        }
    }


  
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum DigitalOutputActivity
    {

        /// <remarks/>
        DIGITAL_OUTPUT_LOW,

        /// <remarks/>
        DIGITAL_OUTPUT_HIGH,

        /// <remarks/>
        DIGITAL_OUTPUT_HOLD_LOW,

        /// <remarks/>
        DIGITAL_OUTPUT_HOLD_HIGH,

        /// <remarks/>
        DIGITAL_OUTPUT_UNTOUCHED,
    }
}
