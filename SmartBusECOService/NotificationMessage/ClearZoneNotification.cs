using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ClearZoneNotification : NotificationWithOSDState
    {

        private ClearZoneID clear_zone_idField;

        private bool is_blockedField;

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

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public bool is_blocked
        {
            get
            {
                return this.is_blockedField;
            }
            set
            {
                this.is_blockedField = value;
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
