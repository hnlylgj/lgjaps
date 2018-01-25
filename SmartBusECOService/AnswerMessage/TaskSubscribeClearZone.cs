using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
   
    //System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    public partial class TaskSubscribeClearZone : TaskSubscribeTriggeredSafe
    {

        private ClearZoneID clear_zone_idField;

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public ClearZoneID clear_zone_id
        {
            get
            {
                return this.clear_zone_idField;
            }
            set
            {
                this.clear_zone_idField = value;
            }
        }
    }

  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ClearZoneID
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
