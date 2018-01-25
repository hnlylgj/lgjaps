using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;
namespace SmartBusECOService.NotificationMessage
{
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(CurrentObjectListNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(CameraImagesNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(ClearZoneNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(FillNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(ZoneChannelsNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(CountChannelsNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(CountNotification))]
    //[System.Xml.Serialization.XmlIncludeAttribute(typeof(ExtendedNotificationBase))]
    // [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorContainer))]
    // [System.Xml.Serialization.XmlIncludeAttribute(typeof(FeatureInfoNotification))]
    // [System.Xml.Serialization.XmlIncludeAttribute(typeof(StartupNotification))]
    // [System.Xml.Serialization.XmlIncludeAttribute(typeof(AliveNotification))]
    // [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorLogfilesNotification))]
    // [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [KnownType(typeof(CurrentObjectListNotification))]
    [KnownType(typeof(CameraImagesNotification))]
    [KnownType(typeof(ClearZoneNotification))]
    [KnownType(typeof(FillNotification))]
    [KnownType(typeof(ZoneChannelsNotification))]
    [KnownType(typeof(CountChannelsNotification))]
    [KnownType(typeof(CountNotification))]
    [KnownType(typeof(ExtendedNotificationBase))]
    [KnownType(typeof(ErrorContainer))]
    [KnownType(typeof(FeatureInfoNotification))]
    [KnownType(typeof(StartupNotification))]
    [KnownType(typeof(AliveNotification))]
    [KnownType(typeof(ErrorLogfilesNotification))]
    public abstract partial class NotificationWithOSDState : NotificationBase
    {

        private OSD_State osd_stateField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]

        public OSD_State osd_state
        {
            get
            {
                return this.osd_stateField;
            }
            set
            {
                this.osd_stateField = value;
            }
        }
    }


    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum OSD_State
    {

        /// <remarks/>
        OSD_STATE_OK,

        /// <remarks/>
        OSD_STATE_ERROR_SENSOR_FAIL,

        /// <remarks/>
        OSD_STATE_WARNING_DARK,

        /// <remarks/>
        OSD_STATE_ERROR_DARK,

        /// <remarks/>
        OSD_STATE_WARNING_BRIGHT,

        /// <remarks/>
        OSD_STATE_ERROR_BRIGHT,

        /// <remarks/>
        OSD_STATE_NOT_AVAIL,

        /// <remarks/>
        OSD_STATE_INVALID,
    }
}
