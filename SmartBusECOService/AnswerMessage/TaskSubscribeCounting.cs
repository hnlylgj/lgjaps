using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;
using SmartBusECOService.NotificationMessage;

namespace SmartBusECOService.AnswerMessage
{

    
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Name = "task_subscribe_counting", Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeCounting : TaskSubscribeTriggeredSafe
    {

        private CountingGateID counting_gate_idField;

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public CountingGateID counting_gate_id
        {
            get
            {
                return this.counting_gate_idField;
            }
            set
            {
                this.counting_gate_idField = value;
            }
        }
    }

    /*
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountingGateID
    {

        private string idField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string id
        {
            get
            {
                return this.idField;
            }
            set
            {
                this.idField = value;
            }
        }
    }
    */

}
