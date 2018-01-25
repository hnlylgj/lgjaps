using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskRequestUpdate : Task
    {

        private UpdateType update_typeField;

        private string packet_urlField;

        private uint validityField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public UpdateType update_type
        {
            get
            {
                return this.update_typeField;
            }
            set
            {
                this.update_typeField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string packet_url
        {
            get
            {
                return this.packet_urlField;
            }
            set
            {
                this.packet_urlField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint validity
        {
            get
            {
                return this.validityField;
            }
            set
            {
                this.validityField = value;
            }
        }
    }

    
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum UpdateType
    {

      
        UPDATE_FIRMWARE,

      
        UPDATE_CUSTOMER_SOFTWARE,
    }
}
