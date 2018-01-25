using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FeatureInfoNotification : ExtendedNotificationBase
    {

        private CountChannelFeatureInfo[] active_count_channelsField;

        private ZoneChannelFeatureInfo[] active_zone_channelsField;

       
        //[System.Xml.Serialization.XmlArrayItemAttribute("count_channel", IsNullable = false)]
        [DataMember]
        public CountChannelFeatureInfo[] active_count_channels
        {
            get
            {
                return this.active_count_channelsField;
            }
            set
            {
                this.active_count_channelsField = value;
            }
        }


        //[System.Xml.Serialization.XmlArrayItemAttribute("zone_channel", IsNullable = false)]
        [DataMember]
        public ZoneChannelFeatureInfo[] active_zone_channels
        {
            get
            {
                return this.active_zone_channelsField;
            }
            set
            {
                this.active_zone_channelsField = value;
            }
        }
    }

   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountChannelFeatureInfo
    {

        private string nameField;

        private string objClassField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string name
        {
            get
            {
                return this.nameField;
            }
            set
            {
                this.nameField = value;
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
    }


  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ZoneChannelFeatureInfo
    {

        private string nameField;

        private string objClassField;

       
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string name
        {
            get
            {
                return this.nameField;
            }
            set
            {
                this.nameField = value;
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
    }

}
