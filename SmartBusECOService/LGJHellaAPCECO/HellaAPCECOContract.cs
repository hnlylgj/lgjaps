

namespace SmartBusECOService.LGJHellaAPCECO
{

     /*HellaAPCECOSOAPdService */
    [System.CodeDom.Compiler.GeneratedCode("System.ServiceModel", "4.0.0.0")]
    [System.ServiceModel.ServiceContract(Name = "HellaAPCECOSOAPdService", Namespace = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/")]
    public interface IHellaAPCECOInterface  /*SOAPdServiceSoap12Binding*/  
    {

        // 操作 Notification 
        [System.ServiceModel.OperationContractAttribute(Action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest")]
        [System.ServiceModel.XmlSerializerFormatAttribute(SupportFaults = true)]
        [System.ServiceModel.ServiceKnownTypeAttribute(typeof(TaskContainer))]
        [System.ServiceModel.ServiceKnownTypeAttribute(typeof(Object))]
        [System.ServiceModel.ServiceKnownTypeAttribute(typeof(NotificationBase))]
        NotificationResponse Notification(NotificationRequest Request);



        // 操作 Error 
        [System.ServiceModel.OperationContract(Action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/ErrorRequest")]
        [System.ServiceModel.XmlSerializerFormatAttribute(SupportFaults = true)]
        [System.ServiceModel.ServiceKnownTypeAttribute(typeof(TaskContainer))]
        [System.ServiceModel.ServiceKnownTypeAttribute(typeof(Object))]
        [System.ServiceModel.ServiceKnownTypeAttribute(typeof(NotificationBase))]
        ErrorResponse Error(ErrorRequest Request);

    }

    //---------------------------------------------------------------------------------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class NotificationContainer
    {

        private NotificationBase itemField;


        [System.Xml.Serialization.XmlElementAttribute("alive_notification", typeof(AliveNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("camera_images_notification", typeof(CameraImagesNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("clear_zone_notification", typeof(ClearZoneNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("count_channels_notification", typeof(CountChannelsNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("count_notification", typeof(CountNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("curr_objlist_notification", typeof(CurrentObjectListNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("digital_input_notification", typeof(DigitalInputNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("error_logfiles_notification", typeof(ErrorLogfilesNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("features_info_notification", typeof(FeatureInfoNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("fill_notification", typeof(FillNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("hist_objlist_notification", typeof(HistoricObjectListNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("logfiles_notification", typeof(LogfilesNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("parameter_notification", typeof(ParameterNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("startup_notification", typeof(StartupNotification), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("zone_channels_notification", typeof(ZoneChannelsNotification), Order = 0)]
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







        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

        protected void RaisePropertyChanged(string propertyName)
        {
            System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ((propertyChanged != null))
            {
                propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
    }

    //------------------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CameraImagesNotification : NotificationWithOSDState
    {

        private BinaryData camera_imagesField;

        private BinaryData eval_mapField;

        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
        public BinaryData camera_images
        {
            get
            {
                return this.camera_imagesField;
            }
            set
            {
                this.camera_imagesField = value;

            }
        }

        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(Order = 1)]
        public BinaryData eval_map
        {
            get
            {
                return this.eval_mapField;
            }
            set
            {
                this.eval_mapField = value;

            }
        }
    }

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ClearZoneNotification : NotificationWithOSDState
    {

        private ClearZoneID clear_zone_idField;

        private bool is_blockedField;

        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
        public ClearZoneID clear_zone_id
        {
            get
            {
                return this.clear_zone_idField;
            }
            set
            {
                this.clear_zone_idField = value;

            }
        }

        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public bool is_blocked
        {
            get
            {
                return this.is_blockedField;
            }
            set
            {
                this.is_blockedField = value;

            }
        }
    }

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FillNotification : NotificationWithOSDState
    {

        private FillRegionID fill_region_idField;

        private uint fill_levelField;

        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
        public FillRegionID fill_region_id
        {
            get
            {
                return this.fill_region_idField;
            }
            set
            {
                this.fill_region_idField = value;
               
            }
        }

        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
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

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ZoneChannelsNotification : NotificationWithOSDState
    {

        private ZoneData[] zone_channelField;

        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("zone_channel", Order = 0)]
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

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountChannelsNotification : NotificationWithOSDState
    {

        private CountChannelData[] count_channelField;

        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("count_channel", Order = 0)]
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

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountNotification : NotificationWithOSDState
    {

        private CountingGateID counting_gate_idField;

        private uint count_inField;

        private uint count_outField;

        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
        public CountingGateID counting_gate_id
        {
            get
            {
                return this.counting_gate_idField;
            }
            set
            {
                this.counting_gate_idField = value;
                
            }
        }

        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
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

        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
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

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FeatureInfoNotification : ExtendedNotificationBase
    {

        private CountChannelFeatureInfo[] active_count_channelsField;

        private ZoneChannelFeatureInfo[] active_zone_channelsField;

        /// <remarks/>
        [System.Xml.Serialization.XmlArrayAttribute(Order = 0)]
        [System.Xml.Serialization.XmlArrayItemAttribute("count_channel", IsNullable = false)]
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

        /// <remarks/>
        [System.Xml.Serialization.XmlArrayAttribute(Order = 1)]
        [System.Xml.Serialization.XmlArrayItemAttribute("zone_channel", IsNullable = false)]
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

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class StartupNotification : ExtendedNotificationBase
    {

        private RebootType reboot_typeField;

        private string xml_versionField;

        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
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

        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
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

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum RebootType
    {

        /// <remarks/>
        SOAP_REBOOT_POWERON,

        /// <remarks/>
        SOAP_REBOOT_WATCHDOG,

        /// <remarks/>
        SOAP_REBOOT_UPDATE,
    }

    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ErrorLogfilesNotification : ExtendedNotificationBase
    {

        private BinaryData error_log_dataField;

        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
        public BinaryData error_log_data
        {
            get
            {
                return this.error_log_dataField;
            }
            set
            {
                this.error_log_dataField = value;
               
            }
        }
    }


    //---------------------


    [System.Xml.Serialization.XmlIncludeAttribute(typeof(AnswerContainer))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskContainer
    {

        private Task[] itemsField;

        [System.Xml.Serialization.XmlElementAttribute("task_delete_all_notifications", typeof(TaskDeleteAllNotifications), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_delete_all_tasks", typeof(TaskDeleteAllTasks), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_reboot_now", typeof(TaskRebootNow), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_request_parameters", typeof(TaskRequestParameters), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_request_update", typeof(TaskRequestUpdate), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_set_date_time", typeof(TaskSetDateTime), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_set_digital_output", typeof(TaskSetDigitalOutput), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_alive", typeof(TaskSubscribeAlive), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_camera_images", typeof(TaskSubscribeCameraImages), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_clear_zone", typeof(TaskSubscribeClearZone), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_count_channels", typeof(TaskSubscribeCountChannels), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_counting", typeof(TaskSubscribeCounting), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_digital_input", typeof(TaskSubscribeDigitalInput), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_error_log", typeof(TaskSubscribeErrorLog), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_features_info", typeof(TaskSubscribeFeaturesInfo), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_fill", typeof(TaskSubscribeFill), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_logfiles", typeof(TaskSubscribeLogfiles), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_objlist", typeof(TaskSubscribeObjectList), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_send_parameters", typeof(TaskSubscribeSendParameters), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_video_store", typeof(TaskSubscribeVideoStore), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_zone_channels", typeof(TaskSubscribeZoneChannels), Order = 0)]
        public Task[] Items
        {
            get
            {
                return this.itemsField;
            }
            set
            {
                this.itemsField = value;

            }
        }

        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

        protected void RaisePropertyChanged(string propertyName)
        {
            System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ((propertyChanged != null))
            {
                propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
    }


    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ErrorContainer : ExtendedNotificationBase
    {

        private SOAP_DeviceError error_reasonField;

        private string error_textField;


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public SOAP_DeviceError error_reason
        {
            get
            {
                return this.error_reasonField;
            }
            set
            {
                this.error_reasonField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string error_text
        {
            get
            {
                return this.error_textField;
            }
            set
            {
                this.error_textField = value;

            }
        }
    }



    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    
    public partial class AnswerContainer : TaskContainer
    {

        private uint referenced_notification_IDField;

        private SOAP_ServerError server_response_typeField;

        private decimal versionField;

        private bool versionFieldSpecified;


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint referenced_notification_ID
        {
            get
            {
                return this.referenced_notification_IDField;
            }
            set
            {
                this.referenced_notification_IDField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public SOAP_ServerError server_response_type
        {
            get
            {
                return this.server_response_typeField;
            }
            set
            {
                this.server_response_typeField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
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


        [System.Xml.Serialization.XmlIgnoreAttribute()]
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


    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class AliveNotification : ExtendedNotificationBase
    {
    }


    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorContainer))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(FeatureInfoNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(StartupNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorLogfilesNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(AliveNotification))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class ExtendedNotificationBase : NotificationWithOSDState
    {

        private string ip_addressField;

        private string firmware_versionField;

        private string customer_versionField;

        private decimal versionField;

        private bool versionFieldSpecified;


        [System.Xml.Serialization.XmlAttributeAttribute()]
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


        [System.Xml.Serialization.XmlAttributeAttribute()]
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

        //--------------
        [System.Xml.Serialization.XmlAttributeAttribute()]
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


        [System.Xml.Serialization.XmlAttributeAttribute()]
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


        [System.Xml.Serialization.XmlIgnoreAttribute()]
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


    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CurrentObjectListNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CameraImagesNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ClearZoneNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(FillNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ZoneChannelsNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CountChannelsNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CountNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ExtendedNotificationBase))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorContainer))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(FeatureInfoNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(StartupNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorLogfilesNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(AliveNotification))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class NotificationWithOSDState : NotificationBase
    {

        private OSD_State osd_stateField;


        [System.Xml.Serialization.XmlAttributeAttribute()]
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


    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum OSD_State
    {

        OSD_STATE_OK,


        OSD_STATE_ERROR_SENSOR_FAIL,


        OSD_STATE_WARNING_DARK,


        OSD_STATE_ERROR_DARK,

        OSD_STATE_WARNING_BRIGHT,


        OSD_STATE_ERROR_BRIGHT,

        OSD_STATE_NOT_AVAIL,


        OSD_STATE_INVALID,
    }


    [System.Xml.Serialization.XmlIncludeAttribute(typeof(HistoricObjectListNotificationBase))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(HistoricObjectListNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ParameterNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(LogfilesNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(DigitalInputNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(NotificationWithOSDState))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CurrentObjectListNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CameraImagesNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ClearZoneNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(FillNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ZoneChannelsNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CountChannelsNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CountNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ExtendedNotificationBase))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorContainer))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(FeatureInfoNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(StartupNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorLogfilesNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(AliveNotification))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class NotificationBase
    {

        private string mac_addressField;

        private string customer_IDField;

        private TaskType task_typeField;

        private uint notification_IDField;

        private uint serverTask_IDField;

        private string callerType_IDField;

        private System.DateTime timestampField;


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string mac_address
        {
            get
            {
                return this.mac_addressField;
            }
            set
            {
                this.mac_addressField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string customer_ID
        {
            get
            {
                return this.customer_IDField;
            }
            set
            {
                this.customer_IDField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskType task_type
        {
            get
            {
                return this.task_typeField;
            }
            set
            {
                this.task_typeField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint notification_ID
        {
            get
            {
                return this.notification_IDField;
            }
            set
            {
                this.notification_IDField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint serverTask_ID
        {
            get
            {
                return this.serverTask_IDField;
            }
            set
            {
                this.serverTask_IDField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string callerType_ID
        {
            get
            {
                return this.callerType_IDField;
            }
            set
            {
                this.callerType_IDField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime timestamp
        {
            get
            {
                return this.timestampField;
            }
            set
            {
                this.timestampField = value;

            }
        }


    }


    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum TaskType
    {


        TASK_STARTUP,


        TASK_UPDATE,


        TASK_COUNT,


        TASK_FILL_LEVEL,

        TASK_DIGIT_INPUT,


        TASK_DIGIT_OUTPUT,


        TASK_CAM_IMAGE,


        TASK_PARAM,


        TASK_SEND_PARAM,


        TASK_LOG,


        TASK_ERR_LOG,


        TASK_VIDEO_STORE,


        TASK_SET_DATE_TIME,


        TASK_CURRENT_OBJECT_LIST,


        TASK_HISTORIC_OBJECT_LIST,


        TASK_ALIVE,


        TASK_REBOOT_NOW,


        TASK_CLEAR_ZONE,


        TASK_COUNT_CHANNELS,


        TASK_ZONE_CHANNELS,


        TASK_FEATURES_INFO,


        TASK_DELETE_ALL_TASKS,


        TASK_DELETE_ALL_NOTIFICATIONS,
    }




    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum SOAP_DeviceError
    {


        SOAP_DEVICE_OK,


        SOAP_ERROR_UNKNOWN_TASK,


        SOAP_ERROR_UNKNOWN_PARAM,


        SOAP_ERROR_OUT_OF_RESSOURCES,
    }

    //------------------------------------------------
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(HistoricObjectListNotification))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class HistoricObjectListNotificationBase : NotificationBase
    {

        private object[] itemsField;

        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("binary_data", typeof(BinaryData), Order = 0)]
        [System.Xml.Serialization.XmlElementAttribute("obj", typeof(HistoricObject), Order = 0)]
        public object[] Items
        {
            get
            {
                return this.itemsField;
            }
            set
            {
                this.itemsField = value;
               
            }
        }
    }





    //=============================================

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class ErrorResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd", Order = 0)]
        [System.Xml.Serialization.XmlArrayAttribute("task_message", Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_delete_all_notifications", typeof(TaskDeleteAllNotifications), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_delete_all_tasks", typeof(TaskDeleteAllTasks), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_reboot_now", typeof(TaskRebootNow), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_request_parameters", typeof(TaskRequestParameters), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_request_update", typeof(TaskRequestUpdate), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_set_date_time", typeof(TaskSetDateTime), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_set_digital_output", typeof(TaskSetDigitalOutput), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_alive", typeof(TaskSubscribeAlive), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_camera_images", typeof(TaskSubscribeCameraImages), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_clear_zone", typeof(TaskSubscribeClearZone), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_count_channels", typeof(TaskSubscribeCountChannels), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_counting", typeof(TaskSubscribeCounting), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_digital_input", typeof(TaskSubscribeDigitalInput), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_error_log", typeof(TaskSubscribeErrorLog), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_features_info", typeof(TaskSubscribeFeaturesInfo), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_fill", typeof(TaskSubscribeFill), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_logfiles", typeof(TaskSubscribeLogfiles), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_objlist", typeof(TaskSubscribeObjectList), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_send_parameters", typeof(TaskSubscribeSendParameters), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_video_store", typeof(TaskSubscribeVideoStore), IsNullable = false)]
        [System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_zone_channels", typeof(TaskSubscribeZoneChannels), IsNullable = false)]
        public Task[] task_message;

        public ErrorResponse()
        {
        }

        public ErrorResponse(Task[] task_message)
        {
            this.task_message = task_message;
        }
    }
    //--------------
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskDeleteAllTasks))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSetDateTime))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskWithActivity))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeTriggered))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFeaturesInfo))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeObjectList))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeAlive))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeVideoStore))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeSendParameters))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCameraImages))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeErrorLog))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeLogfiles))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeTriggeredSafe))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeDigitalInput))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeClearZone))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFill))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeZoneChannels))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCountChannels))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCounting))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSetDigitalOutput))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskRequestParameters))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskRequestUpdate))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskRebootNow))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskDeleteAllNotifications))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class Task
    {

        private TaskType task_typeField;

        private uint serverTask_IDField;

        //--------------
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskType task_type
        {
            get
            {
                return this.task_typeField;
            }
            set
            {
                this.task_typeField = value;
                this.RaisePropertyChanged("task_type");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint serverTask_ID
        {
            get
            {
                return this.serverTask_IDField;
            }
            set
            {
                this.serverTask_IDField = value;

            }
        }

        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

        protected void RaisePropertyChanged(string propertyName)
        {
            System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ((propertyChanged != null))
            {
                propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
    }

    //--------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskDeleteAllTasks : Task
    {
    }

    //--------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSetDateTime : Task
    {

        private System.DateTime time_to_setField;

        //--------------
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime time_to_set
        {
            get
            {
                return this.time_to_setField;
            }
            set
            {
                this.time_to_setField = value;

            }
        }
    }

    //--------------
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeTriggered))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFeaturesInfo))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeObjectList))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeAlive))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeVideoStore))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeSendParameters))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCameraImages))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeErrorLog))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeLogfiles))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeTriggeredSafe))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeDigitalInput))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeClearZone))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFill))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeZoneChannels))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCountChannels))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCounting))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSetDigitalOutput))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class TaskWithActivity : Task
    {

        private bool activity_stateField;

        private bool store_taskField;

        private bool store_taskFieldSpecified;

        //--------------
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public bool activity_state
        {
            get
            {
                return this.activity_stateField;
            }
            set
            {
                this.activity_stateField = value;
                this.RaisePropertyChanged("activity_state");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public bool store_task
        {
            get
            {
                return this.store_taskField;
            }
            set
            {
                this.store_taskField = value;

            }
        }

        //--------------
        [System.Xml.Serialization.XmlIgnoreAttribute()]
        public bool store_taskSpecified
        {
            get
            {
                return this.store_taskFieldSpecified;
            }
            set
            {
                this.store_taskFieldSpecified = value;

            }
        }
    }

        //--------------
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFeaturesInfo))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeObjectList))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeAlive))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeVideoStore))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeSendParameters))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCameraImages))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeErrorLog))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeLogfiles))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeTriggeredSafe))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeDigitalInput))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeClearZone))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFill))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeZoneChannels))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCountChannels))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCounting))]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public abstract partial class TaskSubscribeTriggered : TaskWithActivity
        {

            private Trigger triggerField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public Trigger trigger
            {
                get
                {
                    return this.triggerField;
                }
                set
                {
                    this.triggerField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class Trigger
        {

            private object itemField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute("event_trigger", typeof(EventTrigger), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("time_trigger", typeof(TimeTrigger), Order = 0)]
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

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class EventTrigger
        {

            private object itemField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute("clear_zone_event", typeof(ClearZoneEvent), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("count_channels_event", typeof(CountChannelsEvent), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("count_event", typeof(CountEvent), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("current_object_list_event", typeof(CurrentObjectListEvent), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("digital_input_event", typeof(DigitalInputEvent), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("feature_changed_event", typeof(FeatureChangedEvent), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("fill_event", typeof(FillEvent), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("one_time_event", typeof(OneTimeEvent), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("osd_event", typeof(OSD_Event), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("zone_channels_event", typeof(ZoneChannelsEvent), Order = 0)]
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

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class ClearZoneEvent
        {

            private ClearZoneEventType clear_zone_event_typeField;

            //--------------
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

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum ClearZoneEventType
        {

            //--------------
            CLEAR_ZONE_EVENT_FREE,

            //--------------
            CLEAR_ZONE_EVENT_BLOCKED,

            //--------------
            CLEAR_ZONE_EVENT_ANY,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class CountChannelsEvent
        {

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class CountEvent
        {

            private CountEventType count_event_typeField;

            private uint deltaField;

            public CountEvent()
            {
                this.deltaField = ((uint)(1));
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public CountEventType count_event_type
            {
                get
                {
                    return this.count_event_typeField;
                }
                set
                {
                    this.count_event_typeField = value;
                    this.RaisePropertyChanged("count_event_type");
                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            [System.ComponentModel.DefaultValueAttribute(typeof(uint), "1")]
            public uint delta
            {
                get
                {
                    return this.deltaField;
                }
                set
                {
                    this.deltaField = value;

                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum CountEventType
        {

            //--------------
            COUNT_EVENT_ALWAYS,

            //--------------
            COUNT_EVENT_DELTA_IN,

            //--------------
            COUNT_EVENT_DELTA_OUT,

            //--------------
            COUNT_EVENT_DELTA_SUM_IN_OUT,

            //--------------
            COUNT_EVENT_DELTA_MAX_IN_OUT,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class CurrentObjectListEvent
        {

            private uint skipField;

            public CurrentObjectListEvent()
            {
                this.skipField = ((uint)(0));
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            [System.ComponentModel.DefaultValueAttribute(typeof(uint), "0")]
            public uint skip
            {
                get
                {
                    return this.skipField;
                }
                set
                {
                    this.skipField = value;

                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class DigitalInputEvent
        {

            private DigitalInputEventType[] eventField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute("event", Order = 0)]
            public DigitalInputEventType[] @event
            {
                get
                {
                    return this.eventField;
                }
                set
                {
                    this.eventField = value;

                }
            }


        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum DigitalInputEventType
        {

            //--------------
            DIGITAL_INPUT_EVENT_INACTIVE,

            //--------------
            DIGITAL_INPUT_EVENT_ACTIVE,

            //--------------
            DIGITAL_INPUT_EVENT_ANY,

            //--------------
            DIGITAL_INPUT_EVENT_IGNORE,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class FeatureChangedEvent
        {

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class FillEvent
        {

            private FillEventType fill_event_typeField;

            private uint thresholdField;

            private bool thresholdFieldSpecified;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public FillEventType fill_event_type
            {
                get
                {
                    return this.fill_event_typeField;
                }
                set
                {
                    this.fill_event_typeField = value;
                    
                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public uint threshold
            {
                get
                {
                    return this.thresholdField;
                }
                set
                {
                    this.thresholdField = value;
                    
                }
            }

            //--------------
            [System.Xml.Serialization.XmlIgnoreAttribute()]
            public bool thresholdSpecified
            {
                get
                {
                    return this.thresholdFieldSpecified;
                }
                set
                {
                    this.thresholdFieldSpecified = value;

                }
            }


        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum FillEventType
        {

            //--------------
            FILL_EVENT_ABOVE_THRESHOLD,

            //--------------
            FILL_EVENT_BELOW_THRESHOLD,

            //--------------
            FILL_EVENT_ANY,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class OneTimeEvent
        {

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class OSD_Event
        {

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class ZoneChannelsEvent
        {

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TimeTrigger
        {

            private Date dateField;

            private ClockTime startField;

            private string cycleField;

            private string random_offsetField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public Date date
            {
                get
                {
                    return this.dateField;
                }
                set
                {
                    this.dateField = value;
                   
                }
            }

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 1)]
            public ClockTime start
            {
                get
                {
                    return this.startField;
                }
                set
                {
                    this.startField = value;
                   
                }
            }

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(DataType = "duration", Order = 2)]
            public string cycle
            {
                get
                {
                    return this.cycleField;
                }
                set
                {
                    this.cycleField = value;
                   
                }
            }

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(DataType = "duration", Order = 3)]
            public string random_offset
            {
                get
                {
                    return this.random_offsetField;
                }
                set
                {
                    this.random_offsetField = value;

                }
            }


        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class Date
        {

            private DateType kindField;

            private DayOfWeek day_of_weekField;

            private bool day_of_weekFieldSpecified;

            private uint day_of_monthField;

            private bool day_of_monthFieldSpecified;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public DateType kind
            {
                get
                {
                    return this.kindField;
                }
                set
                {
                    this.kindField = value;
                   
                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public DayOfWeek day_of_week
            {
                get
                {
                    return this.day_of_weekField;
                }
                set
                {
                    this.day_of_weekField = value;
                   
                }
            }

            //--------------
            [System.Xml.Serialization.XmlIgnoreAttribute()]
            public bool day_of_weekSpecified
            {
                get
                {
                    return this.day_of_weekFieldSpecified;
                }
                set
                {
                    this.day_of_weekFieldSpecified = value;
                    
                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public uint day_of_month
            {
                get
                {
                    return this.day_of_monthField;
                }
                set
                {
                    this.day_of_monthField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlIgnoreAttribute()]
            public bool day_of_monthSpecified
            {
                get
                {
                    return this.day_of_monthFieldSpecified;
                }
                set
                {
                    this.day_of_monthFieldSpecified = value;

                }
            }


        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum DateType
        {

            //--------------
            DATE_DONT_CARE,

            //--------------
            DATE_DAY_OF_WEEK,

            //--------------
            DATE_DAY_OF_MONTH,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum DayOfWeek
        {

            //--------------
            MONDAY,

            //--------------
            TUESDAY,

            //--------------
            WEDNESDAY,

            //--------------
            THURSDAY,

            //--------------
            FRIDAY,

            //--------------
            SATURDAY,

            //--------------
            SUNDAY,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class ClockTime
        {

            private uint hoursField;

            private uint minutesField;

            private uint secondsField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public uint hours
            {
                get
                {
                    return this.hoursField;
                }
                set
                {
                    this.hoursField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public uint minutes
            {
                get
                {
                    return this.minutesField;
                }
                set
                {
                    this.minutesField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public uint seconds
            {
                get
                {
                    return this.secondsField;
                }
                set
                {
                    this.secondsField = value;

                }
            }


        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeFeaturesInfo : TaskSubscribeTriggered
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeObjectList : TaskSubscribeTriggered
        {

            private TransferType transfer_typeField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public TransferType transfer_type
            {
                get
                {
                    return this.transfer_typeField;
                }
                set
                {
                    this.transfer_typeField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum TransferType
        {

            //--------------
            TRANSFER_INLINE,

            //--------------
            TRANSFER_BINARY,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeAlive : TaskSubscribeTriggered
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeVideoStore : TaskSubscribeTriggered
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeSendParameters : TaskSubscribeTriggered
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeCameraImages : TaskSubscribeTriggered
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeErrorLog : TaskSubscribeTriggered
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeLogfiles : TaskSubscribeTriggered
        {
        }

        //--------------
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeDigitalInput))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeClearZone))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFill))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeZoneChannels))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCountChannels))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCounting))]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public abstract partial class TaskSubscribeTriggeredSafe : TaskSubscribeTriggered
        {

            private bool store_on_transmission_errorField;

            public TaskSubscribeTriggeredSafe()
            {
                this.store_on_transmission_errorField = false;
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            [System.ComponentModel.DefaultValueAttribute(false)]
            public bool store_on_transmission_error
            {
                get
                {
                    return this.store_on_transmission_errorField;
                }
                set
                {
                    this.store_on_transmission_errorField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeDigitalInput : TaskSubscribeTriggeredSafe
        {

            private DigitalInputControl[] digital_input_portField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute("digital_input_port", Order = 0)]
            public DigitalInputControl[] digital_input_port
            {
                get
                {
                    return this.digital_input_portField;
                }
                set
                {
                    this.digital_input_portField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class DigitalInputControl
        {

            private bool activity_stateField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public bool activity_state
            {
                get
                {
                    return this.activity_stateField;
                }
                set
                {
                    this.activity_stateField = value;

                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeClearZone : TaskSubscribeTriggeredSafe
        {

            private ClearZoneID clear_zone_idField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public ClearZoneID clear_zone_id
            {
                get
                {
                    return this.clear_zone_idField;
                }
                set
                {
                    this.clear_zone_idField = value;
                    this.RaisePropertyChanged("clear_zone_id");
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class ClearZoneID
        {

            private string idField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string id
            {
                get
                {
                    return this.idField;
                }
                set
                {
                    this.idField = value;
                    this.RaisePropertyChanged("id");
                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeFill : TaskSubscribeTriggeredSafe
        {

            private FillRegionID fill_region_idField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public FillRegionID fill_region_id
            {
                get
                {
                    return this.fill_region_idField;
                }
                set
                {
                    this.fill_region_idField = value;
                    this.RaisePropertyChanged("fill_region_id");
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class FillRegionID
        {

            private string idField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string id
            {
                get
                {
                    return this.idField;
                }
                set
                {
                    this.idField = value;

                }
            }


        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeZoneChannels : TaskSubscribeTriggeredSafe
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeCountChannels : TaskSubscribeTriggeredSafe
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSubscribeCounting : TaskSubscribeTriggeredSafe
        {

            private CountingGateID counting_gate_idField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public CountingGateID counting_gate_id
            {
                get
                {
                    return this.counting_gate_idField;
                }
                set
                {
                    this.counting_gate_idField = value;
                    this.RaisePropertyChanged("counting_gate_id");
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class CountingGateID
        {

            private string idField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string id
            {
                get
                {
                    return this.idField;
                }
                set
                {
                    this.idField = value;

                }
            }


        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskSetDigitalOutput : TaskWithActivity
        {

            private DigitalOutputElement[] digital_output_portField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute("digital_output_port", Order = 0)]
            public DigitalOutputElement[] digital_output_port
            {
                get
                {
                    return this.digital_output_portField;
                }
                set
                {
                    this.digital_output_portField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class DigitalOutputElement
        {

            private DigitalOutputActivity activityField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public DigitalOutputActivity activity
            {
                get
                {
                    return this.activityField;
                }
                set
                {
                    this.activityField = value;

                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum DigitalOutputActivity
        {

            //--------------
            DIGITAL_OUTPUT_LOW,

            //--------------
            DIGITAL_OUTPUT_HIGH,

            //--------------
            DIGITAL_OUTPUT_HOLD_LOW,

            //--------------
            DIGITAL_OUTPUT_HOLD_HIGH,

            //--------------
            DIGITAL_OUTPUT_UNTOUCHED,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskRequestParameters : Task
        {

            private string packet_urlField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string packet_url
            {
                get
                {
                    return this.packet_urlField;
                }
                set
                {
                    this.packet_urlField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskRequestUpdate : Task
        {

            private UpdateType update_typeField;

            private string packet_urlField;

            private uint validityField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public UpdateType update_type
            {
                get
                {
                    return this.update_typeField;
                }
                set
                {
                    this.update_typeField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string packet_url
            {
                get
                {
                    return this.packet_urlField;
                }
                set
                {
                    this.packet_urlField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public uint validity
            {
                get
                {
                    return this.validityField;
                }
                set
                {
                    this.validityField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum UpdateType
        {

            //--------------
            UPDATE_FIRMWARE,

            //--------------
            UPDATE_CUSTOMER_SOFTWARE,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskRebootNow : Task
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class TaskDeleteAllNotifications : Task
        {
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
        public enum TaskDestinationMatchingFieldType
        {

            //--------------
            DONT_CARE,

            //--------------
            CUSTOMER_ID,

            //--------------
            MAC_ADDRESS,

            //--------------
            IP_ADDRESS,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
        public enum TaskStatusType
        {

            //--------------
            CONTROL,

            //--------------
            SERVER,

            //--------------
            COUNTER,

            //--------------
            CONTROL_DEL,

            //--------------
            SERVER_DEL,

            //--------------
            COUNTER_DEL,

            //--------------
            CONFLICT,

            //--------------
            CONFLICT_DEL_NON_EXISTENT,

            //--------------
            CONFLICT_CREATE_EXISTENT,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
        public partial class TaskStatusItemType
        {

            private uint taskIdField;

            private TaskStatusType taskStatusField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public uint taskId
            {
                get
                {
                    return this.taskIdField;
                }
                set
                {
                    this.taskIdField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public TaskStatusType taskStatus
            {
                get
                {
                    return this.taskStatusField;
                }
                set
                {
                    this.taskStatusField = value;

                }
            }


        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
        public partial class ServerNotificationListItemType
        {

            private NotificationContainer notificationListItemField;

            private ErrorContainer errorListItemField;

            private Task[] taskListField;

            private string serverTimeField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public NotificationContainer notificationListItem
            {
                get
                {
                    return this.notificationListItemField;
                }
                set
                {
                    this.notificationListItemField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 1)]
            public ErrorContainer errorListItem
            {
                get
                {
                    return this.errorListItemField;
                }
                set
                {
                    this.errorListItemField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlArrayAttribute(Order = 2)]
            [System.Xml.Serialization.XmlArrayItemAttribute("task", IsNullable = false)]
            public Task[] taskList
            {
                get
                {
                    return this.taskListField;
                }
                set
                {
                    this.taskListField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string serverTime
            {
                get
                {
                    return this.serverTimeField;
                }
                set
                {
                    this.serverTimeField = value;

                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }


      



        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum SOAP_ServerError
        {

            //--------------
            SOAP_SERVER_OK,

            //--------------
            SOAP_ERROR_UNKNOWN_RESPONSE,

            //--------------
            SOAP_ERROR_UNKNOWN_MESSAGE,

            //--------------
            SOAP_ERROR_UNKNOWN_DEVICE,
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class DigitalInputElement
        {

            private DigitalInputValue valueField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public DigitalInputValue value
            {
                get
                {
                    return this.valueField;
                }
                set
                {
                    this.valueField = value;

                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public enum DigitalInputValue
        {

            //--------------
            DIGITAL_INPUT_ACTIVE,

            //--------------
            DIGITAL_INPUT_INACTIVE,

            //--------------
            DIGITAL_INPUT_NOT_AVAIL,
        }

        //--------------
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(Coordinate_3D))]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class Coordinate_2D
        {

            private int xField;

            private int yField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public int x
            {
                get
                {
                    return this.xField;
                }
                set
                {
                    this.xField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public int y
            {
                get
                {
                    return this.yField;
                }
                set
                {
                    this.yField = value;

                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class Coordinate_3D : Coordinate_2D
        {

            private int zField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public int z
            {
                get
                {
                    return this.zField;
                }
                set
                {
                    this.zField = value;
                    this.RaisePropertyChanged("z");
                }
            }
        }

        //--------------
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(CurrentObject))]
        [System.Xml.Serialization.XmlIncludeAttribute(typeof(HistoricObject))]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public abstract partial class Object
        {

            private Coordinate_3D entryField;

            private uint idField;

            private string objClassField;

            private string zoneField;

            private string dwellField;

            public Object()
            {
                this.zoneField = "0";
            }

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public Coordinate_3D entry
            {
                get
                {
                    return this.entryField;
                }
                set
                {
                    this.entryField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public uint id
            {
                get
                {
                    return this.idField;
                }
                set
                {
                    this.idField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
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

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            [System.ComponentModel.DefaultValueAttribute("0")]
            public string zone
            {
                get
                {
                    return this.zoneField;
                }
                set
                {
                    this.zoneField = value;
                   
                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string dwell
            {
                get
                {
                    return this.dwellField;
                }
                set
                {
                    this.dwellField = value;

                }
            }


        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class CurrentObject
        {

            private Coordinate_3D posField;

            private Coordinate_2D movField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public Coordinate_3D pos
            {
                get
                {
                    return this.posField;
                }
                set
                {
                    this.posField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 1)]
            public Coordinate_2D mov
            {
                get
                {
                    return this.movField;
                }
                set
                {
                    this.movField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class HistoricObject
        {

            private Coordinate_3D exitField;

            private System.DateTime exit_timeField;

            private uint heightField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public Coordinate_3D exit
            {
                get
                {
                    return this.exitField;
                }
                set
                {
                    this.exitField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public System.DateTime exit_time
            {
                get
                {
                    return this.exit_timeField;
                }
                set
                {
                    this.exit_timeField = value;

                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public uint height
            {
                get
                {
                    return this.heightField;
                }
                set
                {
                    this.heightField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class ZoneData
        {

            private string zone_nameField;

            private string objClassField;

            private uint fill_levelField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
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

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
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

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
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

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class CountChannelData
        {

            private string channel_nameField;

            private string objClassField;

            private uint count_inField;

            private uint count_outField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
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

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
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

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
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

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
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

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class ZoneChannelFeatureInfo
        {

            private string nameField;

            private string objClassField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string name
            {
                get
                {
                    return this.nameField;
                }
                set
                {
                    this.nameField = value;
                    this.RaisePropertyChanged("name");
                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string objClass
            {
                get
                {
                    return this.objClassField;
                }
                set
                {
                    this.objClassField = value;
                    this.RaisePropertyChanged("objClass");
                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class CountChannelFeatureInfo
        {

            private string nameField;

            private string objClassField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string name
            {
                get
                {
                    return this.nameField;
                }
                set
                {
                    this.nameField = value;
                    this.RaisePropertyChanged("name");
                }
            }

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
            public string objClass
            {
                get
                {
                    return this.objClassField;
                }
                set
                {
                    this.objClassField = value;
                    this.RaisePropertyChanged("objClass");
                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class BinaryData
        {

            private byte[] bin_dataField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(DataType = "base64Binary", Order = 0)]
            public byte[] bin_data
            {
                get
                {
                    return this.bin_dataField;
                }
                set
                {
                    this.bin_dataField = value;
                    this.RaisePropertyChanged("bin_data");
                }
            }

            public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

            protected void RaisePropertyChanged(string propertyName)
            {
                System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
                if ((propertyChanged != null))
                {
                    propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
                }
            }
        }

      

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class HistoricObjectListNotification : HistoricObjectListNotificationBase
        {

            private uint lost_countField;

            //--------------
            [System.Xml.Serialization.XmlAttributeAttribute()]
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

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class ParameterNotification : NotificationBase
        {

            private BinaryData parameter_dataField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public BinaryData parameter_data
            {
                get
                {
                    return this.parameter_dataField;
                }
                set
                {
                    this.parameter_dataField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class LogfilesNotification : NotificationBase
        {

            private BinaryData log_dataField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
            public BinaryData log_data
            {
                get
                {
                    return this.log_dataField;
                }
                set
                {
                    this.log_dataField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class DigitalInputNotification : NotificationBase
        {

            private DigitalInputElement[] digital_input_portField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute("digital_input_port", Order = 0)]
            public DigitalInputElement[] digital_input_port
            {
                get
                {
                    return this.digital_input_portField;
                }
                set
                {
                    this.digital_input_portField = value;

                }
            }
        }

        //--------------
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
        [System.SerializableAttribute()]
        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.ComponentModel.DesignerCategoryAttribute("code")]
        [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        public partial class CurrentObjectListNotification : NotificationWithOSDState
        {

            private object[] itemsField;

            //--------------
            [System.Xml.Serialization.XmlElementAttribute("binary_data", typeof(BinaryData), Order = 0)]
            [System.Xml.Serialization.XmlElementAttribute("obj", typeof(CurrentObject), Order = 0)]
            public object[] Items
            {
                get
                {
                    return this.itemsField;
                }
                set
                {
                    this.itemsField = value;

                }
            }
        }

     

      

        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
        public partial class NotificationRequest
        {

            [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd", Order = 0)]
            public NotificationContainer notification_message;

            public NotificationRequest()
            {
            }

            public NotificationRequest(NotificationContainer notification_message)
            {
                this.notification_message = notification_message;
            }
        }


        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
        public partial class NotificationResponse
        {

            [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd", Order = 0)]
            public AnswerContainer answer_message;

            public NotificationResponse()
            {
            }

            public NotificationResponse(AnswerContainer answer_message)
            {
                this.answer_message = answer_message;
            }
        }

        [System.Diagnostics.DebuggerStepThroughAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
        public partial class ErrorRequest
        {

            [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd", Order = 0)]
            public ErrorContainer error_message;

            public ErrorRequest()
            {
            }

            public ErrorRequest(ErrorContainer error_message)
            {
                this.error_message = error_message;
            }
        }




    /*
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class CounterListSynchronizeType
    {

        private CounterListItemType[] changedCounterListItemsField;

        private string[] removedCounterListIdsField;

        //--------------
        [System.Xml.Serialization.XmlArrayAttribute(Order = 0)]
        [System.Xml.Serialization.XmlArrayItemAttribute("counterListItem", IsNullable = false)]
        public CounterListItemType[] changedCounterListItems
        {
            get
            {
                return this.changedCounterListItemsField;
            }
            set
            {
                this.changedCounterListItemsField = value;
                this.RaisePropertyChanged("changedCounterListItems");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlArrayAttribute(Order = 1)]
        [System.Xml.Serialization.XmlArrayItemAttribute("counter_mac_address", IsNullable = false)]
        public string[] removedCounterListIds
        {
            get
            {
                return this.removedCounterListIdsField;
            }
            set
            {
                this.removedCounterListIdsField = value;
                this.RaisePropertyChanged("removedCounterListIds");
            }
        }

        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

        protected void RaisePropertyChanged(string propertyName)
        {
            System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ((propertyChanged != null))
            {
                propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
    }

    //--------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class ServerParameterType
    {

        private int maxServerNotificationsField;

        private int maxTransferNotificationsField;

        private string logFilePathField;

        private long logFileSizeField;

        //--------------
        [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
        public int maxServerNotifications
        {
            get
            {
                return this.maxServerNotificationsField;
            }
            set
            {
                this.maxServerNotificationsField = value;
                this.RaisePropertyChanged("maxServerNotifications");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlElementAttribute(Order = 1)]
        public int maxTransferNotifications
        {
            get
            {
                return this.maxTransferNotificationsField;
            }
            set
            {
                this.maxTransferNotificationsField = value;
                this.RaisePropertyChanged("maxTransferNotifications");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlElementAttribute(Order = 2)]
        public string logFilePath
        {
            get
            {
                return this.logFilePathField;
            }
            set
            {
                this.logFilePathField = value;
                this.RaisePropertyChanged("logFilePath");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlElementAttribute(Order = 3)]
        public long logFileSize
        {
            get
            {
                return this.logFileSizeField;
            }
            set
            {
                this.logFileSizeField = value;
                this.RaisePropertyChanged("logFileSize");
            }
        }

        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

        protected void RaisePropertyChanged(string propertyName)
        {
            System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ((propertyChanged != null))
            {
                propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
    }

    //--------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class ServerTaskListItemType
    {

        private Task taskField;

        private TaskDestinationMatchingFieldType taskDestinationMatchingFieldField;

        private string taskDestinationMatchingFieldValueField;

        private TaskStatusType taskStatusField;

        //--------------
        [System.Xml.Serialization.XmlElementAttribute(Order = 0)]
        public Task task
        {
            get
            {
                return this.taskField;
            }
            set
            {
                this.taskField = value;
                this.RaisePropertyChanged("task");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskDestinationMatchingFieldType taskDestinationMatchingField
        {
            get
            {
                return this.taskDestinationMatchingFieldField;
            }
            set
            {
                this.taskDestinationMatchingFieldField = value;
                this.RaisePropertyChanged("taskDestinationMatchingField");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string taskDestinationMatchingFieldValue
        {
            get
            {
                return this.taskDestinationMatchingFieldValueField;
            }
            set
            {
                this.taskDestinationMatchingFieldValueField = value;
                this.RaisePropertyChanged("taskDestinationMatchingFieldValue");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskStatusType taskStatus
        {
            get
            {
                return this.taskStatusField;
            }
            set
            {
                this.taskStatusField = value;
                this.RaisePropertyChanged("taskStatus");
            }
        }

        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

        protected void RaisePropertyChanged(string propertyName)
        {
            System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ((propertyChanged != null))
            {
                propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
    }



    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class ServerNotificationListType
    {

        private ServerNotificationListItemType[] serverNotificationListItemField;

        private TaskStatusItemType[] taskStatusListField;

        private int remainingNotificationsField;

        private int removedNotificationsField;

        private long logFileSizeField;

        //--------------
        [System.Xml.Serialization.XmlElementAttribute("serverNotificationListItem", Order = 0)]
        public ServerNotificationListItemType[] serverNotificationListItem
        {
            get
            {
                return this.serverNotificationListItemField;
            }
            set
            {
                this.serverNotificationListItemField = value;
                this.RaisePropertyChanged("serverNotificationListItem");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlArrayAttribute(Order = 1)]
        [System.Xml.Serialization.XmlArrayItemAttribute("taskStatusItem", IsNullable = false)]
        public TaskStatusItemType[] taskStatusList
        {
            get
            {
                return this.taskStatusListField;
            }
            set
            {
                this.taskStatusListField = value;
                this.RaisePropertyChanged("taskStatusList");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlElementAttribute(Order = 2)]
        public int remainingNotifications
        {
            get
            {
                return this.remainingNotificationsField;
            }
            set
            {
                this.remainingNotificationsField = value;
                this.RaisePropertyChanged("remainingNotifications");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlElementAttribute(Order = 3)]
        public int removedNotifications
        {
            get
            {
                return this.removedNotificationsField;
            }
            set
            {
                this.removedNotificationsField = value;
                this.RaisePropertyChanged("removedNotifications");
            }
        }

        //--------------
        [System.Xml.Serialization.XmlElementAttribute(Order = 4)]
        public long logFileSize
        {
            get
            {
                return this.logFileSizeField;
            }
            set
            {
                this.logFileSizeField = value;
                this.RaisePropertyChanged("logFileSize");
            }
        }

        public event System.ComponentModel.PropertyChangedEventHandler PropertyChanged;

        protected void RaisePropertyChanged(string propertyName)
        {
            System.ComponentModel.PropertyChangedEventHandler propertyChanged = this.PropertyChanged;
            if ((propertyChanged != null))
            {
                propertyChanged(this, new System.ComponentModel.PropertyChangedEventArgs(propertyName));
            }
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class SendConnectionHelloRequest
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public string ConnectionHello;

        public SendConnectionHelloRequest()
        {
        }

        public SendConnectionHelloRequest(string ConnectionHello)
        {
            this.ConnectionHello = ConnectionHello;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class SendConnectionHelloResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public string ServerInfo;

        public SendConnectionHelloResponse()
        {
        }

        public SendConnectionHelloResponse(string ServerInfo)
        {
            this.ServerInfo = ServerInfo;
        }
    }

    //--------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum NotificationListRequestType
    {

        //--------------
        NOTIFICATION_LIST_DEFAULT,
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetNotificationListRequest
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.NotificationListRequestType NotificationListRequest;

        public GetNotificationListRequest()
        {
        }

        public GetNotificationListRequest(WinTestApp.HellaAPCECOSOAPdServiceClient.NotificationListRequestType NotificationListRequest)
        {
            this.NotificationListRequest = NotificationListRequest;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetNotificationListResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerNotificationListType ServerNotificationList;

        public GetNotificationListResponse()
        {
        }

        public GetNotificationListResponse(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerNotificationListType ServerNotificationList)
        {
            this.ServerNotificationList = ServerNotificationList;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class SetTaskListRequest
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        [System.Xml.Serialization.XmlArrayItemAttribute("serverTaskListItem", IsNullable = false)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerTaskListItemType[] ServerTaskList;

        public SetTaskListRequest()
        {
        }

        public SetTaskListRequest(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerTaskListItemType[] ServerTaskList)
        {
            this.ServerTaskList = ServerTaskList;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class SetTaskListResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        [System.Xml.Serialization.XmlArrayItemAttribute("taskStatusItem", IsNullable = false)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.TaskStatusItemType[] TaskStatusList;

        public SetTaskListResponse()
        {
        }

        public SetTaskListResponse(WinTestApp.HellaAPCECOSOAPdServiceClient.TaskStatusItemType[] TaskStatusList)
        {
            this.TaskStatusList = TaskStatusList;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetTaskListRequest
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        [System.Xml.Serialization.XmlArrayItemAttribute("id", IsNullable = false)]
        public uint[] GetTaskListIdList;

        public GetTaskListRequest()
        {
        }

        public GetTaskListRequest(uint[] GetTaskListIdList)
        {
            this.GetTaskListIdList = GetTaskListIdList;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetTaskListResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        [System.Xml.Serialization.XmlArrayItemAttribute("serverTaskListItem", IsNullable = false)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerTaskListItemType[] ServerTaskList;

        public GetTaskListResponse()
        {
        }

        public GetTaskListResponse(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerTaskListItemType[] ServerTaskList)
        {
            this.ServerTaskList = ServerTaskList;
        }
    }

    //--------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum ServerActionType
    {

        //--------------
        CLEAR_ALL_TASKS,

        //--------------
        CLEAR_ALL_NOTIFICATIONS,
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class DoActionRequest
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerActionType ServerAction;

        public DoActionRequest()
        {
        }

        public DoActionRequest(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerActionType ServerAction)
        {
            this.ServerAction = ServerAction;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class DoActionResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Name = "DoActionResponse", Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public string DoActionResponse1;

        public DoActionResponse()
        {
        }

        public DoActionResponse(string DoActionResponse1)
        {
            this.DoActionResponse1 = DoActionResponse1;
        }
    }

    //--------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum ServerParameterRequestType
    {

        //--------------
        SERVER_PARAMETER_DEFAULT,
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetServerParameterRequest
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterRequestType ServerParameterRequest;

        public GetServerParameterRequest()
        {
        }

        public GetServerParameterRequest(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterRequestType ServerParameterRequest)
        {
            this.ServerParameterRequest = ServerParameterRequest;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetServerParameterResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterType ServerParameter;

        public GetServerParameterResponse()
        {
        }

        public GetServerParameterResponse(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterType ServerParameter)
        {
            this.ServerParameter = ServerParameter;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class SetServerParameterRequest
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterType ServerParameter;

        public SetServerParameterRequest()
        {
        }

        public SetServerParameterRequest(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterType ServerParameter)
        {
            this.ServerParameter = ServerParameter;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class SetServerParameterResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public string ServerParameterResponse;

        public SetServerParameterResponse()
        {
        }

        public SetServerParameterResponse(string ServerParameterResponse)
        {
            this.ServerParameterResponse = ServerParameterResponse;
        }
    }

    //--------------
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum NotificationsCountRequestType
    {

        //--------------
        NOTIFICATIONS_COUNT_DEFAULT,
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetNotificationsCountRequest
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.NotificationsCountRequestType NotificationsCountRequest;

        public GetNotificationsCountRequest()
        {
        }

        public GetNotificationsCountRequest(WinTestApp.HellaAPCECOSOAPdServiceClient.NotificationsCountRequestType NotificationsCountRequest)
        {
            this.NotificationsCountRequest = NotificationsCountRequest;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetNotificationsCountResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public int NotificationsCount;

        public GetNotificationsCountResponse()
        {
        }

        public GetNotificationsCountResponse(int NotificationsCount)
        {
            this.NotificationsCount = NotificationsCount;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetCounterListRequest
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public string CounterListRequest;

        public GetCounterListRequest()
        {
        }

        public GetCounterListRequest(string CounterListRequest)
        {
            this.CounterListRequest = CounterListRequest;
        }
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
    [System.ServiceModel.MessageContractAttribute(IsWrapped = false)]
    public partial class GetCounterListResponse
    {

        [System.ServiceModel.MessageBodyMemberAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd", Order = 0)]
        public WinTestApp.HellaAPCECOSOAPdServiceClient.CounterListSynchronizeType CounterListSynchronize;

        public GetCounterListResponse()
        {
        }

        public GetCounterListResponse(WinTestApp.HellaAPCECOSOAPdServiceClient.CounterListSynchronizeType CounterListSynchronize)
        {
            this.CounterListSynchronize = CounterListSynchronize;
        }
    }

    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    public interface SOAPdControl_BindingChannel : WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding, System.ServiceModel.IClientChannel
    {
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    public partial class SOAPdControl_BindingClient : System.ServiceModel.ClientBase<WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding>, WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding
    {

        public SOAPdControl_BindingClient()
        {
        }

        public SOAPdControl_BindingClient(string endpointConfigurationName) :
                base(endpointConfigurationName)
        {
        }

        public SOAPdControl_BindingClient(string endpointConfigurationName, string remoteAddress) :
                base(endpointConfigurationName, remoteAddress)
        {
        }

        public SOAPdControl_BindingClient(string endpointConfigurationName, System.ServiceModel.EndpointAddress remoteAddress) :
                base(endpointConfigurationName, remoteAddress)
        {
        }

        public SOAPdControl_BindingClient(System.ServiceModel.Channels.Binding binding, System.ServiceModel.EndpointAddress remoteAddress) :
                base(binding, remoteAddress)
        {
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloResponse WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.SendConnectionHello(WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloRequest request)
        {
            return base.Channel.SendConnectionHello(request);
        }

        public string SendConnectionHello(string ConnectionHello)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloRequest();
            inValue.ConnectionHello = ConnectionHello;
            WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloResponse retVal = ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).SendConnectionHello(inValue);
            return retVal.ServerInfo;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloResponse> WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.SendConnectionHelloAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloRequest request)
        {
            return base.Channel.SendConnectionHelloAsync(request);
        }

        public System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloResponse> SendConnectionHelloAsync(string ConnectionHello)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.SendConnectionHelloRequest();
            inValue.ConnectionHello = ConnectionHello;
            return ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).SendConnectionHelloAsync(inValue);
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListResponse WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetNotificationList(WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListRequest request)
        {
            return base.Channel.GetNotificationList(request);
        }

        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerNotificationListType GetNotificationList(WinTestApp.HellaAPCECOSOAPdServiceClient.NotificationListRequestType NotificationListRequest)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListRequest();
            inValue.NotificationListRequest = NotificationListRequest;
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListResponse retVal = ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetNotificationList(inValue);
            return retVal.ServerNotificationList;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListResponse> WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetNotificationListAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListRequest request)
        {
            return base.Channel.GetNotificationListAsync(request);
        }

        public System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListResponse> GetNotificationListAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.NotificationListRequestType NotificationListRequest)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationListRequest();
            inValue.NotificationListRequest = NotificationListRequest;
            return ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetNotificationListAsync(inValue);
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListResponse WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.SetTaskList(WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListRequest request)
        {
            return base.Channel.SetTaskList(request);
        }

        public WinTestApp.HellaAPCECOSOAPdServiceClient.TaskStatusItemType[] SetTaskList(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerTaskListItemType[] ServerTaskList)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListRequest();
            inValue.ServerTaskList = ServerTaskList;
            WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListResponse retVal = ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).SetTaskList(inValue);
            return retVal.TaskStatusList;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListResponse> WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.SetTaskListAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListRequest request)
        {
            return base.Channel.SetTaskListAsync(request);
        }

        public System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListResponse> SetTaskListAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerTaskListItemType[] ServerTaskList)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.SetTaskListRequest();
            inValue.ServerTaskList = ServerTaskList;
            return ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).SetTaskListAsync(inValue);
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListResponse WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetTaskList(WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListRequest request)
        {
            return base.Channel.GetTaskList(request);
        }

        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerTaskListItemType[] GetTaskList(uint[] GetTaskListIdList)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListRequest();
            inValue.GetTaskListIdList = GetTaskListIdList;
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListResponse retVal = ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetTaskList(inValue);
            return retVal.ServerTaskList;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListResponse> WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetTaskListAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListRequest request)
        {
            return base.Channel.GetTaskListAsync(request);
        }

        public System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListResponse> GetTaskListAsync(uint[] GetTaskListIdList)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetTaskListRequest();
            inValue.GetTaskListIdList = GetTaskListIdList;
            return ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetTaskListAsync(inValue);
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionResponse WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.DoAction(WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionRequest request)
        {
            return base.Channel.DoAction(request);
        }

        public string DoAction(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerActionType ServerAction)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionRequest();
            inValue.ServerAction = ServerAction;
            WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionResponse retVal = ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).DoAction(inValue);
            return retVal.DoActionResponse1;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionResponse> WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.DoActionAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionRequest request)
        {
            return base.Channel.DoActionAsync(request);
        }

        public System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionResponse> DoActionAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerActionType ServerAction)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.DoActionRequest();
            inValue.ServerAction = ServerAction;
            return ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).DoActionAsync(inValue);
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterResponse WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetServerParameter(WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterRequest request)
        {
            return base.Channel.GetServerParameter(request);
        }

        public WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterType GetServerParameter(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterRequestType ServerParameterRequest)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterRequest();
            inValue.ServerParameterRequest = ServerParameterRequest;
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterResponse retVal = ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetServerParameter(inValue);
            return retVal.ServerParameter;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterResponse> WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetServerParameterAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterRequest request)
        {
            return base.Channel.GetServerParameterAsync(request);
        }

        public System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterResponse> GetServerParameterAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterRequestType ServerParameterRequest)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetServerParameterRequest();
            inValue.ServerParameterRequest = ServerParameterRequest;
            return ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetServerParameterAsync(inValue);
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterResponse WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.SetServerParameter(WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterRequest request)
        {
            return base.Channel.SetServerParameter(request);
        }

        public string SetServerParameter(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterType ServerParameter)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterRequest();
            inValue.ServerParameter = ServerParameter;
            WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterResponse retVal = ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).SetServerParameter(inValue);
            return retVal.ServerParameterResponse;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterResponse> WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.SetServerParameterAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterRequest request)
        {
            return base.Channel.SetServerParameterAsync(request);
        }

        public System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterResponse> SetServerParameterAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.ServerParameterType ServerParameter)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.SetServerParameterRequest();
            inValue.ServerParameter = ServerParameter;
            return ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).SetServerParameterAsync(inValue);
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountResponse WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetNotificationsCount(WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountRequest request)
        {
            return base.Channel.GetNotificationsCount(request);
        }

        public int GetNotificationsCount(WinTestApp.HellaAPCECOSOAPdServiceClient.NotificationsCountRequestType NotificationsCountRequest)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountRequest();
            inValue.NotificationsCountRequest = NotificationsCountRequest;
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountResponse retVal = ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetNotificationsCount(inValue);
            return retVal.NotificationsCount;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountResponse> WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetNotificationsCountAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountRequest request)
        {
            return base.Channel.GetNotificationsCountAsync(request);
        }

        public System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountResponse> GetNotificationsCountAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.NotificationsCountRequestType NotificationsCountRequest)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetNotificationsCountRequest();
            inValue.NotificationsCountRequest = NotificationsCountRequest;
            return ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetNotificationsCountAsync(inValue);
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListResponse WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetCounterList(WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListRequest request)
        {
            return base.Channel.GetCounterList(request);
        }

        public WinTestApp.HellaAPCECOSOAPdServiceClient.CounterListSynchronizeType GetCounterList(string CounterListRequest)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListRequest();
            inValue.CounterListRequest = CounterListRequest;
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListResponse retVal = ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetCounterList(inValue);
            return retVal.CounterListSynchronize;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListResponse> WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding.GetCounterListAsync(WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListRequest request)
        {
            return base.Channel.GetCounterListAsync(request);
        }

        public System.Threading.Tasks.Task<WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListResponse> GetCounterListAsync(string CounterListRequest)
        {
            WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListRequest inValue = new WinTestApp.HellaAPCECOSOAPdServiceClient.GetCounterListRequest();
            inValue.CounterListRequest = CounterListRequest;
            return ((WinTestApp.HellaAPCECOSOAPdServiceClient.SOAPdControl_Binding)(this)).GetCounterListAsync(inValue);
        }
    }


    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.Xml", "4.6.1055.0")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class CounterListItemType
    {

        private string mac_addressField;

        private string ip_addressField;

        private string customer_IDField;

        private System.DateTime registered_timestampField;

        private System.DateTime updated_timestampField;

        private uint last_notification_IDField;

        private System.DateTime last_notification_timestampField;

        private TaskType last_notification_typeField;

        private uint notifications_countField;

        private uint last_error_IDField;

        private System.DateTime last_error_timestampField;

        private SOAP_DeviceError last_error_reasonField;

        private uint errors_countField;

        private bool changedField;


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string mac_address
        {
            get
            {
                return this.mac_addressField;
            }
            set
            {
                this.mac_addressField = value;
                this.RaisePropertyChanged("mac_address");
            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string ip_address
        {
            get
            {
                return this.ip_addressField;
            }
            set
            {
                this.ip_addressField = value;
                this.RaisePropertyChanged("ip_address");
            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string customer_ID
        {
            get
            {
                return this.customer_IDField;
            }
            set
            {
                this.customer_IDField = value;
                this.RaisePropertyChanged("customer_ID");
            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime registered_timestamp
        {
            get
            {
                return this.registered_timestampField;
            }
            set
            {
                this.registered_timestampField = value;
                this.RaisePropertyChanged("registered_timestamp");
            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime updated_timestamp
        {
            get
            {
                return this.updated_timestampField;
            }
            set
            {
                this.updated_timestampField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint last_notification_ID
        {
            get
            {
                return this.last_notification_IDField;
            }
            set
            {
                this.last_notification_IDField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime last_notification_timestamp
        {
            get
            {
                return this.last_notification_timestampField;
            }
            set
            {
                this.last_notification_timestampField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskType last_notification_type
        {
            get
            {
                return this.last_notification_typeField;
            }
            set
            {
                this.last_notification_typeField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint notifications_count
        {
            get
            {
                return this.notifications_countField;
            }
            set
            {
                this.notifications_countField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint last_error_ID
        {
            get
            {
                return this.last_error_IDField;
            }
            set
            {
                this.last_error_IDField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime last_error_timestamp
        {
            get
            {
                return this.last_error_timestampField;
            }
            set
            {
                this.last_error_timestampField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public SOAP_DeviceError last_error_reason
        {
            get
            {
                return this.last_error_reasonField;
            }
            set
            {
                this.last_error_reasonField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint errors_count
        {
            get
            {
                return this.errors_countField;
            }
            set
            {
                this.errors_countField = value;

            }
        }


        [System.Xml.Serialization.XmlAttributeAttribute()]
        public bool changed
        {
            get
            {
                return this.changedField;
            }
            set
            {
                this.changedField = value;

            }
        }


    }

   */


    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    public interface HellaAPCECOSOAPdServiceChannel : IHellaAPCECOInterface, System.ServiceModel.IClientChannel
    {
    }

    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("System.ServiceModel", "4.0.0.0")]
    public partial class HellaAPCECOSOAPdServiceClient : System.ServiceModel.ClientBase<IHellaAPCECOInterface>, IHellaAPCECOInterface
    {

        public HellaAPCECOSOAPdServiceClient()
        {
        }

        public HellaAPCECOSOAPdServiceClient(string endpointConfigurationName) :
                base(endpointConfigurationName)
        {
        }

        public HellaAPCECOSOAPdServiceClient(string endpointConfigurationName, string remoteAddress) :
                base(endpointConfigurationName, remoteAddress)
        {
        }

        public HellaAPCECOSOAPdServiceClient(string endpointConfigurationName, System.ServiceModel.EndpointAddress remoteAddress) :
                base(endpointConfigurationName, remoteAddress)
        {
        }

        public HellaAPCECOSOAPdServiceClient(System.ServiceModel.Channels.Binding binding, System.ServiceModel.EndpointAddress remoteAddress) :
                base(binding, remoteAddress)
        {
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        NotificationResponse IHellaAPCECOInterface.Notification(NotificationRequest request)
        {
            return base.Channel.Notification(request);
        }

        public AnswerContainer Notification(NotificationContainer notification_message)
        {
            NotificationRequest inValue = new NotificationRequest();
            inValue.notification_message = notification_message;
            NotificationResponse retVal = ((IHellaAPCECOInterface)(this)).Notification(inValue);
            return retVal.answer_message;
        }

        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Advanced)]
        ErrorResponse IHellaAPCECOInterface.Error(ErrorRequest request)
        {
            return base.Channel.Error(request);
        }

        public Task[] Error(ErrorContainer error_message)
        {
            ErrorRequest inValue = new ErrorRequest();
            inValue.error_message = error_message;
            ErrorResponse retVal = ((IHellaAPCECOInterface)(this)).Error(inValue);
            return retVal.task_message;
        }
    }



}
