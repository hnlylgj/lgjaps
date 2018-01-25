using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;
namespace SmartBusECOService.AnswerMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    public partial class ClearZoneEvent
    {

        private ClearZoneEventType clear_zone_event_typeField;

    
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public ClearZoneEventType clear_zone_event_type
        {
            get
            {
                return this.clear_zone_event_typeField;
            }
            set
            {
                this.clear_zone_event_typeField = value;
            }
        }
    }

    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum ClearZoneEventType
    {

      
        CLEAR_ZONE_EVENT_FREE,

        
        CLEAR_ZONE_EVENT_BLOCKED,

       
        CLEAR_ZONE_EVENT_ANY,
    }

}
