using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class DigitalInputNotification : NotificationBase
    {

        private DigitalInputElement[] digital_input_portField;

       
        //[System.Xml.Serialization.XmlElementAttribute("digital_input_port")]
        [DataMember]
        public DigitalInputElement[] digital_input_port
        {
            get
            {
                return this.digital_input_portField;
            }
            set
            {
                this.digital_input_portField = value;
            }
        }
    }


    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class DigitalInputElement
    {

        private DigitalInputValue valueField;

     
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public DigitalInputValue value
        {
            get
            {
                return this.valueField;
            }
            set
            {
                this.valueField = value;
            }
        }
    }


    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum DigitalInputValue
    {

        /// <remarks/>
        DIGITAL_INPUT_ACTIVE,

        /// <remarks/>
        DIGITAL_INPUT_INACTIVE,

        /// <remarks/>
        DIGITAL_INPUT_NOT_AVAIL,
    }


}
