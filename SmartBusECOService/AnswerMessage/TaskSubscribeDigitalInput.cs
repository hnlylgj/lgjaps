using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeDigitalInput : TaskSubscribeTriggeredSafe
    {

        private DigitalInputControl[] digital_input_portField;

      
        // [System.Xml.Serialization.XmlElementAttribute("digital_input_port")]
        [DataMember]
        public DigitalInputControl[] digital_input_port
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
    public partial class DigitalInputControl
    {

        private bool activity_stateField;

      
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
    }

}
