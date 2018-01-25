using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [KnownType(typeof(ClearZoneEvent))]
    [KnownType(typeof(CountChannelsEvent))]
    [KnownType(typeof(CountEvent))]
    [KnownType(typeof(CurrentObjectListEvent))]
    [KnownType(typeof(DigitalInputEvent))]
    [KnownType(typeof(FeatureChangedEvent))]
    [KnownType(typeof(FillEvent))]
    [KnownType(typeof(OneTimeEvent))]
    [KnownType(typeof(OSD_Event))]
    [KnownType(typeof(ZoneChannelsEvent))]
    public partial class EventTrigger
    {

        private object itemField;

       /*
        [System.Xml.Serialization.XmlElementAttribute("clear_zone_event", typeof(ClearZoneEvent))]
        [System.Xml.Serialization.XmlElementAttribute("count_channels_event", typeof(CountChannelsEvent))]
        [System.Xml.Serialization.XmlElementAttribute("count_event", typeof(CountEvent))]
        [System.Xml.Serialization.XmlElementAttribute("current_object_list_event", typeof(CurrentObjectListEvent))]
        [System.Xml.Serialization.XmlElementAttribute("digital_input_event", typeof(DigitalInputEvent))]
        [System.Xml.Serialization.XmlElementAttribute("feature_changed_event", typeof(FeatureChangedEvent))]
        [System.Xml.Serialization.XmlElementAttribute("fill_event", typeof(FillEvent))]
        [System.Xml.Serialization.XmlElementAttribute("one_time_event", typeof(OneTimeEvent))]
        [System.Xml.Serialization.XmlElementAttribute("osd_event", typeof(OSD_Event))]
        [System.Xml.Serialization.XmlElementAttribute("zone_channels_event", typeof(ZoneChannelsEvent))]
        */

        public object Item
        {
            get
            {
                return this.itemField;
            }
            set
            {
                this.itemField = value;
            }
        }
    }
}
