using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{
  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountChannelsNotification : NotificationWithOSDState
    {

        private CountChannelData[] count_channelField;


        //[System.Xml.Serialization.XmlElementAttribute("count_channel")]
        [DataMember]
        public CountChannelData[] count_channel
        {
            get
            {
                return this.count_channelField;
            }
            set
            {
                this.count_channelField = value;
            }
        }
    }


    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountChannelData
    {

        private string channel_nameField;

        private string objClassField;

        private uint count_inField;

        private uint count_outField;

     
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string channel_name
        {
            get
            {
                return this.channel_nameField;
            }
            set
            {
                this.channel_nameField = value;
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
}
