using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml.Serialization;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    /*
    [KnownType(typeof(AliveNotification))]
    [KnownType(typeof(CameraImagesNotification))]
    [KnownType(typeof(ClearZoneNotification))]
    [KnownType(typeof(CountChannelsNotification))]
    [KnownType(typeof(CountNotification))]
    [KnownType(typeof(CurrentObjectListNotification))]
    [KnownType(typeof(DigitalInputNotification))]
    [KnownType(typeof(ErrorLogfilesNotification))]
    [KnownType(typeof(FeatureInfoNotification))]
    [KnownType(typeof(FillNotification))]
    [KnownType(typeof(HistoricObjectListNotification))]
    [KnownType(typeof(LogfilesNotification))]
    [KnownType(typeof(ParameterNotification))]
    [KnownType(typeof(StartupNotification))]
    [KnownType(typeof(ZoneChannelsNotification))]
    */
    public partial class NotificationContainer
    {
        private NotificationBase itemField;

        //[KnownType("alive_notification", typeof(AliveNotification))]
        //[KnownType("camera_images_notification", typeof(CameraImagesNotification))]
        //[KnownType"clear_zone_notification", typeof(ClearZoneNotification))]
        //[KnownType"count_channels_notification", typeof(CountChannelsNotification))]
        //[KnownType"count_notification", typeof(CountNotification))]
        //[KnownType"curr_objlist_notification", typeof(CurrentObjectListNotification))]
        //[KnownType"digital_input_notification", typeof(DigitalInputNotification))]
        //[KnownType"error_logfiles_notification", typeof(ErrorLogfilesNotification))]
        //[KnownType"features_info_notification", typeof(FeatureInfoNotification))]
        //[KnownType"fill_notification", typeof(FillNotification))]
        //[KnownType"hist_objlist_notification", typeof(HistoricObjectListNotification))]
        //[KnownType"logfiles_notification", typeof(LogfilesNotification))]
        //[KnownType("parameter_notification", typeof(ParameterNotification))]
        //[KnownType("startup_notification", typeof(StartupNotification))]
        //[KnownType("zone_channels_notification", typeof(ZoneChannelsNotification))]
        [DataMember]
        public NotificationBase Item
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
