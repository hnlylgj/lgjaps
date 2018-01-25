using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;
namespace SmartBusECOService.NotificationMessage
{
   
    [DataContract(Name= "count_notification", Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountNotification : NotificationWithOSDState
    {

        private CountingGateID counting_gate_idField;

        private uint count_inField;

        private uint count_outField;

     
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

      
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint count_in
        {
            get
            {
                return this.count_inField;
            }
            set
            {
                this.count_inField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint count_out
        {
            get
            {
                return this.count_outField;
            }
            set
            {
                this.count_outField = value;
            }
        }
    }

  
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

}
