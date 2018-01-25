using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{
    
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class HistoricObjectListNotification : HistoricObjectListNotificationBase
    {

        private uint lost_countField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint lost_count
        {
            get
            {
                return this.lost_countField;
            }
            set
            {
                this.lost_countField = value;
            }
        }
    }
}
