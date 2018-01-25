using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorContainer))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(FeatureInfoNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(StartupNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(AliveNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorLogfilesNotification))]
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [KnownType(typeof(ErrorContainer))]
    [KnownType(typeof(FeatureInfoNotification))]
    [KnownType(typeof(StartupNotification))]
    [KnownType(typeof(AliveNotification))]
    [KnownType(typeof(ErrorLogfilesNotification))]
    public abstract partial class ExtendedNotificationBase : NotificationWithOSDState
    {

        private string ip_addressField;

        private string firmware_versionField;

        private string customer_versionField;

        private decimal versionField;

        private bool versionFieldSpecified;

        public ExtendedNotificationBase()
        {
            this.versionField = ((decimal)(1.0m));
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string ip_address
        {
            get
            {
                return this.ip_addressField;
            }
            set
            {
                this.ip_addressField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string firmware_version
        {
            get
            {
                return this.firmware_versionField;
            }
            set
            {
                this.firmware_versionField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string customer_version
        {
            get
            {
                return this.customer_versionField;
            }
            set
            {
                this.customer_versionField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public decimal version
        {
            get
            {
                return this.versionField;
            }
            set
            {
                this.versionField = value;
            }
        }


        //[System.Xml.Serialization.XmlIgnoreAttribute()]
        [DataMember]
        public bool versionSpecified
        {
            get
            {
                return this.versionFieldSpecified;
            }
            set
            {
                this.versionFieldSpecified = value;
            }
        }
    }
}
