using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ZoneChannelsNotification : NotificationWithOSDState
    {

        private ZoneData[] zone_channelField;


        //[System.Xml.Serialization.XmlElementAttribute("zone_channel")]
        [DataMember]
        public ZoneData[] zone_channel
        {
            get
            {
                return this.zone_channelField;
            }
            set
            {
                this.zone_channelField = value;
            }
        }
    }

   
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ZoneData
    {

        private string zone_nameField;

        private string objClassField;

        private uint fill_levelField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string zone_name
        {
            get
            {
                return this.zone_nameField;
            }
            set
            {
                this.zone_nameField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string objClass
        {
            get
            {
                return this.objClassField;
            }
            set
            {
                this.objClassField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint fill_level
        {
            get
            {
                return this.fill_levelField;
            }
            set
            {
                this.fill_levelField = value;
            }
        }
    }
}
