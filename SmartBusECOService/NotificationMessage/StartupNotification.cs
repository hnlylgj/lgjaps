using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Name = "startup_notification", Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    public partial class StartupNotification : ExtendedNotificationBase
    {

        private RebootType reboot_typeField;

        private string xml_versionField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public RebootType reboot_type
        {
            get
            {
                return this.reboot_typeField;
            }
            set
            {
                this.reboot_typeField = value;
            }
        }

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string xml_version
        {
            get
            {
                return this.xml_versionField;
            }
            set
            {
                this.xml_versionField = value;
            }
        }
    }
   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum RebootType
    {

        /// <remarks/>
        SOAP_REBOOT_POWERON,

        /// <remarks/>
        SOAP_REBOOT_WATCHDOG,

        /// <remarks/>
        SOAP_REBOOT_UPDATE,
    }
}
