
namespace LGJHellaAPCSOAPdServiceInterface
{
    using System.Xml.Serialization;
    using System.Web.Services;
    using System.ComponentModel;
    using System.Web.Services.Protocols;
    using System;
    using System.Diagnostics;
    
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.Web.Services.WebServiceBindingAttribute(Name="SOAPdServiceSoap12Binding", Namespace="http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/")]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(Object))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(NotificationBase))]
    public interface ISOAPdServiceSoap12Binding
    {
        
        
        //第一个
        [System.Web.Services.WebMethodAttribute()]
        [System.Web.Services.Protocols.SoapDocumentMethodAttribute("http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest", Use=System.Web.Services.Description.SoapBindingUse.Literal, ParameterStyle=System.Web.Services.Protocols.SoapParameterStyle.Bare)]
        [return: System.Xml.Serialization.XmlElementAttribute("answer_message", Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        AnswerContainer Notification([System.Xml.Serialization.XmlElementAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")] NotificationContainer notification_message);
        
     

        //第二个
        [System.Web.Services.WebMethodAttribute()]
        [System.Web.Services.Protocols.SoapDocumentMethodAttribute("http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/ErrorRequest", Use=System.Web.Services.Description.SoapBindingUse.Literal, ParameterStyle=System.Web.Services.Protocols.SoapParameterStyle.Bare)]
        [return: System.Xml.Serialization.XmlArrayAttribute("task_message", Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_delete_all_notifications", typeof(TaskDeleteAllNotifications), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_delete_all_tasks", typeof(TaskDeleteAllTasks), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_reboot_now", typeof(TaskRebootNow), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_request_parameters", typeof(TaskRequestParameters), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_request_update", typeof(TaskRequestUpdate), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_set_date_time", typeof(TaskSetDateTime), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_set_digital_output", typeof(TaskSetDigitalOutput), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_alive", typeof(TaskSubscribeAlive), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_camera_images", typeof(TaskSubscribeCameraImages), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_clear_zone", typeof(TaskSubscribeClearZone), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_count_channels", typeof(TaskSubscribeCountChannels), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_counting", typeof(TaskSubscribeCounting), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_digital_input", typeof(TaskSubscribeDigitalInput), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_error_log", typeof(TaskSubscribeErrorLog), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_features_info", typeof(TaskSubscribeFeaturesInfo), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_fill", typeof(TaskSubscribeFill), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_logfiles", typeof(TaskSubscribeLogfiles), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_objlist", typeof(TaskSubscribeObjectList), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_send_parameters", typeof(TaskSubscribeSendParameters), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_video_store", typeof(TaskSubscribeVideoStore), IsNullable=false)]
        [return: System.Xml.Serialization.XmlArrayItemAttribute("task_subscribe_zone_channels", typeof(TaskSubscribeZoneChannels), IsNullable=false)]
        Task[] Error([System.Xml.Serialization.XmlElementAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")] ErrorContainer error_message);
    }
    

    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class NotificationContainer {
        
        private NotificationBase itemField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("alive_notification", typeof(AliveNotification))]
        [System.Xml.Serialization.XmlElementAttribute("camera_images_notification", typeof(CameraImagesNotification))]
        [System.Xml.Serialization.XmlElementAttribute("clear_zone_notification", typeof(ClearZoneNotification))]
        [System.Xml.Serialization.XmlElementAttribute("count_channels_notification", typeof(CountChannelsNotification))]
        [System.Xml.Serialization.XmlElementAttribute("count_notification", typeof(CountNotification))]
        [System.Xml.Serialization.XmlElementAttribute("curr_objlist_notification", typeof(CurrentObjectListNotification))]
        [System.Xml.Serialization.XmlElementAttribute("digital_input_notification", typeof(DigitalInputNotification))]
        [System.Xml.Serialization.XmlElementAttribute("error_logfiles_notification", typeof(ErrorLogfilesNotification))]
        [System.Xml.Serialization.XmlElementAttribute("features_info_notification", typeof(FeatureInfoNotification))]
        [System.Xml.Serialization.XmlElementAttribute("fill_notification", typeof(FillNotification))]
        [System.Xml.Serialization.XmlElementAttribute("hist_objlist_notification", typeof(HistoricObjectListNotification))]
        [System.Xml.Serialization.XmlElementAttribute("logfiles_notification", typeof(LogfilesNotification))]
        [System.Xml.Serialization.XmlElementAttribute("parameter_notification", typeof(ParameterNotification))]
        [System.Xml.Serialization.XmlElementAttribute("startup_notification", typeof(StartupNotification))]
        [System.Xml.Serialization.XmlElementAttribute("zone_channels_notification", typeof(ZoneChannelsNotification))]
        public NotificationBase Item {
            get {
                return this.itemField;
            }
            set {
                this.itemField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class AliveNotification : ExtendedNotificationBase {
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorContainer))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(FeatureInfoNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(StartupNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(AliveNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorLogfilesNotification))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class ExtendedNotificationBase : NotificationWithOSDState {
        
        private string ip_addressField;
        
        private string firmware_versionField;
        
        private string customer_versionField;
        
        private decimal versionField;
        
        private bool versionFieldSpecified;
        
        public ExtendedNotificationBase() {
            this.versionField = ((decimal)(1.0m));
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string ip_address {
            get {
                return this.ip_addressField;
            }
            set {
                this.ip_addressField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string firmware_version {
            get {
                return this.firmware_versionField;
            }
            set {
                this.firmware_versionField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string customer_version {
            get {
                return this.customer_versionField;
            }
            set {
                this.customer_versionField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public decimal version {
            get {
                return this.versionField;
            }
            set {
                this.versionField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlIgnoreAttribute()]
        public bool versionSpecified {
            get {
                return this.versionFieldSpecified;
            }
            set {
                this.versionFieldSpecified = value;
            }
        }
    }
    
    /// <remarks/>
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
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(AliveNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorLogfilesNotification))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class NotificationWithOSDState : NotificationBase {
        
        private OSD_State osd_stateField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public OSD_State osd_state {
            get {
                return this.osd_stateField;
            }
            set {
                this.osd_stateField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum OSD_State {
        
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
    
    /// <remarks/>
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
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(AliveNotification))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(ErrorLogfilesNotification))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
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
        public string mac_address {
            get {
                return this.mac_addressField;
            }
            set {
                this.mac_addressField = value;
            }
        }
        
      
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string customer_ID {
            get {
                return this.customer_IDField;
            }
            set {
                this.customer_IDField = value;
            }
        }
        
       
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskType task_type {
            get {
                return this.task_typeField;
            }
            set {
                this.task_typeField = value;
            }
        }
        
       
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint notification_ID {
            get {
                return this.notification_IDField;
            }
            set {
                this.notification_IDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint serverTask_ID {
            get {
                return this.serverTask_IDField;
            }
            set {
                this.serverTask_IDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string callerType_ID {
            get {
                return this.callerType_IDField;
            }
            set {
                this.callerType_IDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime timestamp {
            get {
                return this.timestampField;
            }
            set {
                this.timestampField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum TaskType {
        
        /// <remarks/>
        TASK_STARTUP,
        
        /// <remarks/>
        TASK_UPDATE,
        
        /// <remarks/>
        TASK_COUNT,
        
        /// <remarks/>
        TASK_FILL_LEVEL,
        
        /// <remarks/>
        TASK_DIGIT_INPUT,
        
        /// <remarks/>
        TASK_DIGIT_OUTPUT,
        
        /// <remarks/>
        TASK_CAM_IMAGE,
        
        /// <remarks/>
        TASK_PARAM,
        
        /// <remarks/>
        TASK_SEND_PARAM,
        
        /// <remarks/>
        TASK_LOG,
        
        /// <remarks/>
        TASK_ERR_LOG,
        
        /// <remarks/>
        TASK_VIDEO_STORE,
        
        /// <remarks/>
        TASK_SET_DATE_TIME,
        
        /// <remarks/>
        TASK_CURRENT_OBJECT_LIST,
        
        /// <remarks/>
        TASK_HISTORIC_OBJECT_LIST,
        
        /// <remarks/>
        TASK_ALIVE,
        
        /// <remarks/>
        TASK_REBOOT_NOW,
        
        /// <remarks/>
        TASK_CLEAR_ZONE,
        
        /// <remarks/>
        TASK_COUNT_CHANNELS,
        
        /// <remarks/>
        TASK_ZONE_CHANNELS,
        
        /// <remarks/>
        TASK_FEATURES_INFO,
        
        /// <remarks/>
        TASK_DELETE_ALL_TASKS,
        
        /// <remarks/>
        TASK_DELETE_ALL_NOTIFICATIONS,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class CounterListItemType {
        
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
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string mac_address {
            get {
                return this.mac_addressField;
            }
            set {
                this.mac_addressField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string ip_address {
            get {
                return this.ip_addressField;
            }
            set {
                this.ip_addressField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string customer_ID {
            get {
                return this.customer_IDField;
            }
            set {
                this.customer_IDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime registered_timestamp {
            get {
                return this.registered_timestampField;
            }
            set {
                this.registered_timestampField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime updated_timestamp {
            get {
                return this.updated_timestampField;
            }
            set {
                this.updated_timestampField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint last_notification_ID {
            get {
                return this.last_notification_IDField;
            }
            set {
                this.last_notification_IDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime last_notification_timestamp {
            get {
                return this.last_notification_timestampField;
            }
            set {
                this.last_notification_timestampField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskType last_notification_type {
            get {
                return this.last_notification_typeField;
            }
            set {
                this.last_notification_typeField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint notifications_count {
            get {
                return this.notifications_countField;
            }
            set {
                this.notifications_countField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint last_error_ID {
            get {
                return this.last_error_IDField;
            }
            set {
                this.last_error_IDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime last_error_timestamp {
            get {
                return this.last_error_timestampField;
            }
            set {
                this.last_error_timestampField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public SOAP_DeviceError last_error_reason {
            get {
                return this.last_error_reasonField;
            }
            set {
                this.last_error_reasonField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint errors_count {
            get {
                return this.errors_countField;
            }
            set {
                this.errors_countField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public bool changed {
            get {
                return this.changedField;
            }
            set {
                this.changedField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum SOAP_DeviceError {
        
        /// <remarks/>
        SOAP_DEVICE_OK,
        
        /// <remarks/>
        SOAP_ERROR_UNKNOWN_TASK,
        
        /// <remarks/>
        SOAP_ERROR_UNKNOWN_PARAM,
        
        /// <remarks/>
        SOAP_ERROR_OUT_OF_RESSOURCES,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class CounterListSynchronizeType {
        
        private CounterListItemType[] changedCounterListItemsField;
        
        private string[] removedCounterListIdsField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlArrayItemAttribute("counterListItem", IsNullable=false)]
        public CounterListItemType[] changedCounterListItems {
            get {
                return this.changedCounterListItemsField;
            }
            set {
                this.changedCounterListItemsField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlArrayItemAttribute("counter_mac_address", IsNullable=false)]
        public string[] removedCounterListIds {
            get {
                return this.removedCounterListIdsField;
            }
            set {
                this.removedCounterListIdsField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class ServerParameterType {
        
        private int maxServerNotificationsField;
        
        private int maxTransferNotificationsField;
        
        private string logFilePathField;
        
        private long logFileSizeField;
        
        /// <remarks/>
        public int maxServerNotifications {
            get {
                return this.maxServerNotificationsField;
            }
            set {
                this.maxServerNotificationsField = value;
            }
        }
        
        /// <remarks/>
        public int maxTransferNotifications {
            get {
                return this.maxTransferNotificationsField;
            }
            set {
                this.maxTransferNotificationsField = value;
            }
        }
        
        /// <remarks/>
        public string logFilePath {
            get {
                return this.logFilePathField;
            }
            set {
                this.logFilePathField = value;
            }
        }
        
        /// <remarks/>
        public long logFileSize {
            get {
                return this.logFileSizeField;
            }
            set {
                this.logFileSizeField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class ServerNotificationListItemType {
        
        private NotificationContainer notificationListItemField;
        
        private ErrorContainer errorListItemField;
        
        private Task[] taskListField;
        
        private string serverTimeField;
        
        /// <remarks/>
        public NotificationContainer notificationListItem {
            get {
                return this.notificationListItemField;
            }
            set {
                this.notificationListItemField = value;
            }
        }
        
        /// <remarks/>
        public ErrorContainer errorListItem {
            get {
                return this.errorListItemField;
            }
            set {
                this.errorListItemField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlArrayItemAttribute("task", IsNullable=false)]
        public Task[] taskList {
            get {
                return this.taskListField;
            }
            set {
                this.taskListField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string serverTime {
            get {
                return this.serverTimeField;
            }
            set {
                this.serverTimeField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ErrorContainer : ExtendedNotificationBase {
        
        private SOAP_DeviceError error_reasonField;
        
        private string error_textField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public SOAP_DeviceError error_reason {
            get {
                return this.error_reasonField;
            }
            set {
                this.error_reasonField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string error_text {
            get {
                return this.error_textField;
            }
            set {
                this.error_textField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskDeleteAllNotifications))]
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
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class Task {
        
        private TaskType task_typeField;
        
        private uint serverTask_IDField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskType task_type {
            get {
                return this.task_typeField;
            }
            set {
                this.task_typeField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint serverTask_ID {
            get {
                return this.serverTask_IDField;
            }
            set {
                this.serverTask_IDField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskDeleteAllNotifications : Task {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskDeleteAllTasks : Task {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSetDateTime : Task {
        
        private System.DateTime time_to_setField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime time_to_set {
            get {
                return this.time_to_setField;
            }
            set {
                this.time_to_setField = value;
            }
        }
    }
    
    /// <remarks/>
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
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class TaskWithActivity : Task {
        
        private bool activity_stateField;
        
        private bool store_taskField;
        
        private bool store_taskFieldSpecified;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public bool activity_state {
            get {
                return this.activity_stateField;
            }
            set {
                this.activity_stateField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public bool store_task {
            get {
                return this.store_taskField;
            }
            set {
                this.store_taskField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlIgnoreAttribute()]
        public bool store_taskSpecified {
            get {
                return this.store_taskFieldSpecified;
            }
            set {
                this.store_taskFieldSpecified = value;
            }
        }
    }
    
    /// <remarks/>
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
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class TaskSubscribeTriggered : TaskWithActivity {
        
        private Trigger triggerField;
        
        /// <remarks/>
        public Trigger trigger {
            get {
                return this.triggerField;
            }
            set {
                this.triggerField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class Trigger {
        
        private object itemField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("event_trigger", typeof(EventTrigger))]
        [System.Xml.Serialization.XmlElementAttribute("time_trigger", typeof(TimeTrigger))]
        public object Item {
            get {
                return this.itemField;
            }
            set {
                this.itemField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class EventTrigger {
        
        private object itemField;
        
        /// <remarks/>
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
        public object Item {
            get {
                return this.itemField;
            }
            set {
                this.itemField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ClearZoneEvent {
        
        private ClearZoneEventType clear_zone_event_typeField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public ClearZoneEventType clear_zone_event_type {
            get {
                return this.clear_zone_event_typeField;
            }
            set {
                this.clear_zone_event_typeField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum ClearZoneEventType {
        
        /// <remarks/>
        CLEAR_ZONE_EVENT_FREE,
        
        /// <remarks/>
        CLEAR_ZONE_EVENT_BLOCKED,
        
        /// <remarks/>
        CLEAR_ZONE_EVENT_ANY,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountChannelsEvent {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountEvent {
        
        private CountEventType count_event_typeField;
        
        private uint deltaField;
        
        public CountEvent() {
            this.deltaField = ((uint)(1));
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public CountEventType count_event_type {
            get {
                return this.count_event_typeField;
            }
            set {
                this.count_event_typeField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(typeof(uint), "1")]
        public uint delta {
            get {
                return this.deltaField;
            }
            set {
                this.deltaField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum CountEventType {
        
        /// <remarks/>
        COUNT_EVENT_ALWAYS,
        
        /// <remarks/>
        COUNT_EVENT_DELTA_IN,
        
        /// <remarks/>
        COUNT_EVENT_DELTA_OUT,
        
        /// <remarks/>
        COUNT_EVENT_DELTA_SUM_IN_OUT,
        
        /// <remarks/>
        COUNT_EVENT_DELTA_MAX_IN_OUT,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CurrentObjectListEvent {
        
        private uint skipField;
        
        public CurrentObjectListEvent() {
            this.skipField = ((uint)(0));
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(typeof(uint), "0")]
        public uint skip {
            get {
                return this.skipField;
            }
            set {
                this.skipField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class DigitalInputEvent {
        
        private DigitalInputEventType[] eventField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("event")]
        public DigitalInputEventType[] @event {
            get {
                return this.eventField;
            }
            set {
                this.eventField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum DigitalInputEventType {
        
        /// <remarks/>
        DIGITAL_INPUT_EVENT_INACTIVE,
        
        /// <remarks/>
        DIGITAL_INPUT_EVENT_ACTIVE,
        
        /// <remarks/>
        DIGITAL_INPUT_EVENT_ANY,
        
        /// <remarks/>
        DIGITAL_INPUT_EVENT_IGNORE,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FeatureChangedEvent {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FillEvent {
        
        private FillEventType fill_event_typeField;
        
        private uint thresholdField;
        
        private bool thresholdFieldSpecified;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public FillEventType fill_event_type {
            get {
                return this.fill_event_typeField;
            }
            set {
                this.fill_event_typeField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint threshold {
            get {
                return this.thresholdField;
            }
            set {
                this.thresholdField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlIgnoreAttribute()]
        public bool thresholdSpecified {
            get {
                return this.thresholdFieldSpecified;
            }
            set {
                this.thresholdFieldSpecified = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum FillEventType {
        
        /// <remarks/>
        FILL_EVENT_ABOVE_THRESHOLD,
        
        /// <remarks/>
        FILL_EVENT_BELOW_THRESHOLD,
        
        /// <remarks/>
        FILL_EVENT_ANY,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class OneTimeEvent {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class OSD_Event {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ZoneChannelsEvent {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TimeTrigger {
        
        private Date dateField;
        
        private ClockTime startField;
        
        private string cycleField;
        
        private string random_offsetField;
        
        /// <remarks/>
        public Date date {
            get {
                return this.dateField;
            }
            set {
                this.dateField = value;
            }
        }
        
        /// <remarks/>
        public ClockTime start {
            get {
                return this.startField;
            }
            set {
                this.startField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(DataType="duration")]
        public string cycle {
            get {
                return this.cycleField;
            }
            set {
                this.cycleField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(DataType="duration")]
        public string random_offset {
            get {
                return this.random_offsetField;
            }
            set {
                this.random_offsetField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class Date {
        
        private DateType kindField;
        
        private DayOfWeek day_of_weekField;
        
        private bool day_of_weekFieldSpecified;
        
        private uint day_of_monthField;
        
        private bool day_of_monthFieldSpecified;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public DateType kind {
            get {
                return this.kindField;
            }
            set {
                this.kindField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public DayOfWeek day_of_week {
            get {
                return this.day_of_weekField;
            }
            set {
                this.day_of_weekField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlIgnoreAttribute()]
        public bool day_of_weekSpecified {
            get {
                return this.day_of_weekFieldSpecified;
            }
            set {
                this.day_of_weekFieldSpecified = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint day_of_month {
            get {
                return this.day_of_monthField;
            }
            set {
                this.day_of_monthField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlIgnoreAttribute()]
        public bool day_of_monthSpecified {
            get {
                return this.day_of_monthFieldSpecified;
            }
            set {
                this.day_of_monthFieldSpecified = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum DateType {
        
        /// <remarks/>
        DATE_DONT_CARE,
        
        /// <remarks/>
        DATE_DAY_OF_WEEK,
        
        /// <remarks/>
        DATE_DAY_OF_MONTH,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum DayOfWeek {
        
        /// <remarks/>
        MONDAY,
        
        /// <remarks/>
        TUESDAY,
        
        /// <remarks/>
        WEDNESDAY,
        
        /// <remarks/>
        THURSDAY,
        
        /// <remarks/>
        FRIDAY,
        
        /// <remarks/>
        SATURDAY,
        
        /// <remarks/>
        SUNDAY,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ClockTime {
        
        private uint hoursField;
        
        private uint minutesField;
        
        private uint secondsField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint hours {
            get {
                return this.hoursField;
            }
            set {
                this.hoursField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint minutes {
            get {
                return this.minutesField;
            }
            set {
                this.minutesField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint seconds {
            get {
                return this.secondsField;
            }
            set {
                this.secondsField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeFeaturesInfo : TaskSubscribeTriggered {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeObjectList : TaskSubscribeTriggered {
        
        private TransferType transfer_typeField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TransferType transfer_type {
            get {
                return this.transfer_typeField;
            }
            set {
                this.transfer_typeField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum TransferType {
        
        /// <remarks/>
        TRANSFER_INLINE,
        
        /// <remarks/>
        TRANSFER_BINARY,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeAlive : TaskSubscribeTriggered {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeVideoStore : TaskSubscribeTriggered {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeSendParameters : TaskSubscribeTriggered {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeCameraImages : TaskSubscribeTriggered {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeErrorLog : TaskSubscribeTriggered {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeLogfiles : TaskSubscribeTriggered {
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeDigitalInput))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeClearZone))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeFill))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeZoneChannels))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCountChannels))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(TaskSubscribeCounting))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class TaskSubscribeTriggeredSafe : TaskSubscribeTriggered {
        
        private bool store_on_transmission_errorField;
        
        public TaskSubscribeTriggeredSafe() {
            this.store_on_transmission_errorField = false;
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute(false)]
        public bool store_on_transmission_error {
            get {
                return this.store_on_transmission_errorField;
            }
            set {
                this.store_on_transmission_errorField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeDigitalInput : TaskSubscribeTriggeredSafe {
        
        private DigitalInputControl[] digital_input_portField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("digital_input_port")]
        public DigitalInputControl[] digital_input_port {
            get {
                return this.digital_input_portField;
            }
            set {
                this.digital_input_portField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class DigitalInputControl {
        
        private bool activity_stateField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public bool activity_state {
            get {
                return this.activity_stateField;
            }
            set {
                this.activity_stateField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeClearZone : TaskSubscribeTriggeredSafe {
        
        private ClearZoneID clear_zone_idField;
        
        /// <remarks/>
        public ClearZoneID clear_zone_id {
            get {
                return this.clear_zone_idField;
            }
            set {
                this.clear_zone_idField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ClearZoneID {
        
        private string idField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string id {
            get {
                return this.idField;
            }
            set {
                this.idField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeFill : TaskSubscribeTriggeredSafe {
        
        private FillRegionID fill_region_idField;
        
        /// <remarks/>
        public FillRegionID fill_region_id {
            get {
                return this.fill_region_idField;
            }
            set {
                this.fill_region_idField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FillRegionID {
        
        private string idField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string id {
            get {
                return this.idField;
            }
            set {
                this.idField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeZoneChannels : TaskSubscribeTriggeredSafe {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeCountChannels : TaskSubscribeTriggeredSafe {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeCounting : TaskSubscribeTriggeredSafe {
        
        private CountingGateID counting_gate_idField;
        
        /// <remarks/>
        public CountingGateID counting_gate_id {
            get {
                return this.counting_gate_idField;
            }
            set {
                this.counting_gate_idField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountingGateID {
        
        private string idField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string id {
            get {
                return this.idField;
            }
            set {
                this.idField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSetDigitalOutput : TaskWithActivity {
        
        private DigitalOutputElement[] digital_output_portField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("digital_output_port")]
        public DigitalOutputElement[] digital_output_port {
            get {
                return this.digital_output_portField;
            }
            set {
                this.digital_output_portField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class DigitalOutputElement {
        
        private DigitalOutputActivity activityField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public DigitalOutputActivity activity {
            get {
                return this.activityField;
            }
            set {
                this.activityField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum DigitalOutputActivity {
        
        /// <remarks/>
        DIGITAL_OUTPUT_LOW,
        
        /// <remarks/>
        DIGITAL_OUTPUT_HIGH,
        
        /// <remarks/>
        DIGITAL_OUTPUT_HOLD_LOW,
        
        /// <remarks/>
        DIGITAL_OUTPUT_HOLD_HIGH,
        
        /// <remarks/>
        DIGITAL_OUTPUT_UNTOUCHED,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskRequestParameters : Task {
        
        private string packet_urlField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string packet_url {
            get {
                return this.packet_urlField;
            }
            set {
                this.packet_urlField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskRequestUpdate : Task {
        
        private UpdateType update_typeField;
        
        private string packet_urlField;
        
        private uint validityField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public UpdateType update_type {
            get {
                return this.update_typeField;
            }
            set {
                this.update_typeField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string packet_url {
            get {
                return this.packet_urlField;
            }
            set {
                this.packet_urlField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint validity {
            get {
                return this.validityField;
            }
            set {
                this.validityField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum UpdateType {
        
        /// <remarks/>
        UPDATE_FIRMWARE,
        
        /// <remarks/>
        UPDATE_CUSTOMER_SOFTWARE,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskRebootNow : Task {
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class ServerNotificationListType {
        
        private ServerNotificationListItemType[] itemsField;
        
        private TaskStatusItemType[] taskStatusListField;
        
        private int remainingNotificationsField;
        
        private int removedNotificationsField;
        
        private long logFileSizeField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("serverNotificationListItem")]
        public ServerNotificationListItemType[] Items {
            get {
                return this.itemsField;
            }
            set {
                this.itemsField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlArrayItemAttribute("taskStatusItem", IsNullable=false)]
        public TaskStatusItemType[] taskStatusList {
            get {
                return this.taskStatusListField;
            }
            set {
                this.taskStatusListField = value;
            }
        }
        
        /// <remarks/>
        public int remainingNotifications {
            get {
                return this.remainingNotificationsField;
            }
            set {
                this.remainingNotificationsField = value;
            }
        }
        
        /// <remarks/>
        public int removedNotifications {
            get {
                return this.removedNotificationsField;
            }
            set {
                this.removedNotificationsField = value;
            }
        }
        
        /// <remarks/>
        public long logFileSize {
            get {
                return this.logFileSizeField;
            }
            set {
                this.logFileSizeField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class TaskStatusItemType {
        
        private uint taskIdField;
        
        private TaskStatusType taskStatusField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint taskId {
            get {
                return this.taskIdField;
            }
            set {
                this.taskIdField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskStatusType taskStatus {
            get {
                return this.taskStatusField;
            }
            set {
                this.taskStatusField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum TaskStatusType {
        
        /// <remarks/>
        CONTROL,
        
        /// <remarks/>
        SERVER,
        
        /// <remarks/>
        COUNTER,
        
        /// <remarks/>
        CONTROL_DEL,
        
        /// <remarks/>
        SERVER_DEL,
        
        /// <remarks/>
        COUNTER_DEL,
        
        /// <remarks/>
        CONFLICT,
        
        /// <remarks/>
        CONFLICT_DEL_NON_EXISTENT,
        
        /// <remarks/>
        CONFLICT_CREATE_EXISTENT,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public partial class ServerTaskListItemType {
        
        private Task taskField;
        
        private TaskDestinationMatchingFieldType taskDestinationMatchingFieldField;
        
        private string taskDestinationMatchingFieldValueField;
        
        private TaskStatusType taskStatusField;
        
        /// <remarks/>
        public Task task {
            get {
                return this.taskField;
            }
            set {
                this.taskField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskDestinationMatchingFieldType taskDestinationMatchingField {
            get {
                return this.taskDestinationMatchingFieldField;
            }
            set {
                this.taskDestinationMatchingFieldField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string taskDestinationMatchingFieldValue {
            get {
                return this.taskDestinationMatchingFieldValueField;
            }
            set {
                this.taskDestinationMatchingFieldValueField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public TaskStatusType taskStatus {
            get {
                return this.taskStatusField;
            }
            set {
                this.taskStatusField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum TaskDestinationMatchingFieldType {
        
        /// <remarks/>
        DONT_CARE,
        
        /// <remarks/>
        CUSTOMER_ID,
        
        /// <remarks/>
        MAC_ADDRESS,
        
        /// <remarks/>
        IP_ADDRESS,
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(AnswerContainer))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskContainer {
        
        private Task[] itemsField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("task_delete_all_notifications", typeof(TaskDeleteAllNotifications))]
        [System.Xml.Serialization.XmlElementAttribute("task_delete_all_tasks", typeof(TaskDeleteAllTasks))]
        [System.Xml.Serialization.XmlElementAttribute("task_reboot_now", typeof(TaskRebootNow))]
        [System.Xml.Serialization.XmlElementAttribute("task_request_parameters", typeof(TaskRequestParameters))]
        [System.Xml.Serialization.XmlElementAttribute("task_request_update", typeof(TaskRequestUpdate))]
        [System.Xml.Serialization.XmlElementAttribute("task_set_date_time", typeof(TaskSetDateTime))]
        [System.Xml.Serialization.XmlElementAttribute("task_set_digital_output", typeof(TaskSetDigitalOutput))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_alive", typeof(TaskSubscribeAlive))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_camera_images", typeof(TaskSubscribeCameraImages))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_clear_zone", typeof(TaskSubscribeClearZone))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_count_channels", typeof(TaskSubscribeCountChannels))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_counting", typeof(TaskSubscribeCounting))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_digital_input", typeof(TaskSubscribeDigitalInput))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_error_log", typeof(TaskSubscribeErrorLog))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_features_info", typeof(TaskSubscribeFeaturesInfo))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_fill", typeof(TaskSubscribeFill))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_logfiles", typeof(TaskSubscribeLogfiles))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_objlist", typeof(TaskSubscribeObjectList))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_send_parameters", typeof(TaskSubscribeSendParameters))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_video_store", typeof(TaskSubscribeVideoStore))]
        [System.Xml.Serialization.XmlElementAttribute("task_subscribe_zone_channels", typeof(TaskSubscribeZoneChannels))]
        public Task[] Items {
            get {
                return this.itemsField;
            }
            set {
                this.itemsField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class AnswerContainer : TaskContainer {
        
        private uint referenced_notification_IDField;
        
        private SOAP_ServerError server_response_typeField;
        
        private decimal versionField;
        
        private bool versionFieldSpecified;
        
        public AnswerContainer() {
            this.versionField = ((decimal)(1.0m));
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint referenced_notification_ID {
            get {
                return this.referenced_notification_IDField;
            }
            set {
                this.referenced_notification_IDField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public SOAP_ServerError server_response_type {
            get {
                return this.server_response_typeField;
            }
            set {
                this.server_response_typeField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public decimal version {
            get {
                return this.versionField;
            }
            set {
                this.versionField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlIgnoreAttribute()]
        public bool versionSpecified {
            get {
                return this.versionFieldSpecified;
            }
            set {
                this.versionFieldSpecified = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum SOAP_ServerError {
        
        /// <remarks/>
        SOAP_SERVER_OK,
        
        /// <remarks/>
        SOAP_ERROR_UNKNOWN_RESPONSE,
        
        /// <remarks/>
        SOAP_ERROR_UNKNOWN_MESSAGE,
        
        /// <remarks/>
        SOAP_ERROR_UNKNOWN_DEVICE,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class DigitalInputElement {
        
        private DigitalInputValue valueField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public DigitalInputValue value {
            get {
                return this.valueField;
            }
            set {
                this.valueField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum DigitalInputValue {
        
        /// <remarks/>
        DIGITAL_INPUT_ACTIVE,
        
        /// <remarks/>
        DIGITAL_INPUT_INACTIVE,
        
        /// <remarks/>
        DIGITAL_INPUT_NOT_AVAIL,
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(Coordinate_3D))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class Coordinate_2D {
        
        private int xField;
        
        private int yField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public int x {
            get {
                return this.xField;
            }
            set {
                this.xField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public int y {
            get {
                return this.yField;
            }
            set {
                this.yField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class Coordinate_3D : Coordinate_2D {
        
        private int zField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public int z {
            get {
                return this.zField;
            }
            set {
                this.zField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(HistoricObject))]
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(CurrentObject))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public abstract partial class Object {
        
        private Coordinate_3D entryField;
        
        private uint idField;
        
        private string objClassField;
        
        private string zoneField;
        
        private string dwellField;
        
        public Object() {
            this.zoneField = "0";
        }
        
        /// <remarks/>
        public Coordinate_3D entry {
            get {
                return this.entryField;
            }
            set {
                this.entryField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint id {
            get {
                return this.idField;
            }
            set {
                this.idField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string objClass {
            get {
                return this.objClassField;
            }
            set {
                this.objClassField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        [System.ComponentModel.DefaultValueAttribute("0")]
        public string zone {
            get {
                return this.zoneField;
            }
            set {
                this.zoneField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string dwell {
            get {
                return this.dwellField;
            }
            set {
                this.dwellField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class HistoricObject : Object {
        
        private Coordinate_3D exitField;
        
        private System.DateTime exit_timeField;
        
        private uint heightField;
        
        /// <remarks/>
        public Coordinate_3D exit {
            get {
                return this.exitField;
            }
            set {
                this.exitField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public System.DateTime exit_time {
            get {
                return this.exit_timeField;
            }
            set {
                this.exit_timeField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint height {
            get {
                return this.heightField;
            }
            set {
                this.heightField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CurrentObject : Object {
        
        private Coordinate_3D posField;
        
        private Coordinate_2D movField;
        
        /// <remarks/>
        public Coordinate_3D pos {
            get {
                return this.posField;
            }
            set {
                this.posField = value;
            }
        }
        
        /// <remarks/>
        public Coordinate_2D mov {
            get {
                return this.movField;
            }
            set {
                this.movField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ZoneData {
        
        private string zone_nameField;
        
        private string objClassField;
        
        private uint fill_levelField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string zone_name {
            get {
                return this.zone_nameField;
            }
            set {
                this.zone_nameField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string objClass {
            get {
                return this.objClassField;
            }
            set {
                this.objClassField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint fill_level {
            get {
                return this.fill_levelField;
            }
            set {
                this.fill_levelField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountChannelData {
        
        private string channel_nameField;
        
        private string objClassField;
        
        private uint count_inField;
        
        private uint count_outField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string channel_name {
            get {
                return this.channel_nameField;
            }
            set {
                this.channel_nameField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string objClass {
            get {
                return this.objClassField;
            }
            set {
                this.objClassField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint count_in {
            get {
                return this.count_inField;
            }
            set {
                this.count_inField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint count_out {
            get {
                return this.count_outField;
            }
            set {
                this.count_outField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ZoneChannelFeatureInfo {
        
        private string nameField;
        
        private string objClassField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string name {
            get {
                return this.nameField;
            }
            set {
                this.nameField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string objClass {
            get {
                return this.objClassField;
            }
            set {
                this.objClassField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountChannelFeatureInfo {
        
        private string nameField;
        
        private string objClassField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string name {
            get {
                return this.nameField;
            }
            set {
                this.nameField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string objClass {
            get {
                return this.objClassField;
            }
            set {
                this.objClassField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class BinaryData {
        
        private byte[] bin_dataField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute(DataType="base64Binary")]
        public byte[] bin_data {
            get {
                return this.bin_dataField;
            }
            set {
                this.bin_dataField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.Xml.Serialization.XmlIncludeAttribute(typeof(HistoricObjectListNotification))]
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class HistoricObjectListNotificationBase : NotificationBase {
        
        private object[] itemsField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("binary_data", typeof(BinaryData))]
        [System.Xml.Serialization.XmlElementAttribute("obj", typeof(HistoricObject))]
        public object[] Items {
            get {
                return this.itemsField;
            }
            set {
                this.itemsField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class HistoricObjectListNotification : HistoricObjectListNotificationBase {
        
        private uint lost_countField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint lost_count {
            get {
                return this.lost_countField;
            }
            set {
                this.lost_countField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ParameterNotification : NotificationBase {
        
        private BinaryData parameter_dataField;
        
        /// <remarks/>
        public BinaryData parameter_data {
            get {
                return this.parameter_dataField;
            }
            set {
                this.parameter_dataField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class LogfilesNotification : NotificationBase {
        
        private BinaryData log_dataField;
        
        /// <remarks/>
        public BinaryData log_data {
            get {
                return this.log_dataField;
            }
            set {
                this.log_dataField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class DigitalInputNotification : NotificationBase {
        
        private DigitalInputElement[] digital_input_portField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("digital_input_port")]
        public DigitalInputElement[] digital_input_port {
            get {
                return this.digital_input_portField;
            }
            set {
                this.digital_input_portField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CurrentObjectListNotification : NotificationWithOSDState {
        
        private object[] itemsField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("binary_data", typeof(BinaryData))]
        [System.Xml.Serialization.XmlElementAttribute("obj", typeof(CurrentObject))]
        public object[] Items {
            get {
                return this.itemsField;
            }
            set {
                this.itemsField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CameraImagesNotification : NotificationWithOSDState {
        
        private BinaryData camera_imagesField;
        
        private BinaryData eval_mapField;
        
        /// <remarks/>
        public BinaryData camera_images {
            get {
                return this.camera_imagesField;
            }
            set {
                this.camera_imagesField = value;
            }
        }
        
        /// <remarks/>
        public BinaryData eval_map {
            get {
                return this.eval_mapField;
            }
            set {
                this.eval_mapField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ClearZoneNotification : NotificationWithOSDState {
        
        private ClearZoneID clear_zone_idField;
        
        private bool is_blockedField;
        
        /// <remarks/>
        public ClearZoneID clear_zone_id {
            get {
                return this.clear_zone_idField;
            }
            set {
                this.clear_zone_idField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public bool is_blocked {
            get {
                return this.is_blockedField;
            }
            set {
                this.is_blockedField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FillNotification : NotificationWithOSDState {
        
        private FillRegionID fill_region_idField;
        
        private uint fill_levelField;
        
        /// <remarks/>
        public FillRegionID fill_region_id {
            get {
                return this.fill_region_idField;
            }
            set {
                this.fill_region_idField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint fill_level {
            get {
                return this.fill_levelField;
            }
            set {
                this.fill_levelField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ZoneChannelsNotification : NotificationWithOSDState {
        
        private ZoneData[] zone_channelField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("zone_channel")]
        public ZoneData[] zone_channel {
            get {
                return this.zone_channelField;
            }
            set {
                this.zone_channelField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountChannelsNotification : NotificationWithOSDState {
        
        private CountChannelData[] count_channelField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlElementAttribute("count_channel")]
        public CountChannelData[] count_channel {
            get {
                return this.count_channelField;
            }
            set {
                this.count_channelField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CountNotification : NotificationWithOSDState {
        
        private CountingGateID counting_gate_idField;
        
        private uint count_inField;
        
        private uint count_outField;
        
        /// <remarks/>
        public CountingGateID counting_gate_id {
            get {
                return this.counting_gate_idField;
            }
            set {
                this.counting_gate_idField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint count_in {
            get {
                return this.count_inField;
            }
            set {
                this.count_inField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public uint count_out {
            get {
                return this.count_outField;
            }
            set {
                this.count_outField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FeatureInfoNotification : ExtendedNotificationBase {
        
        private CountChannelFeatureInfo[] active_count_channelsField;
        
        private ZoneChannelFeatureInfo[] active_zone_channelsField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlArrayItemAttribute("count_channel", IsNullable=false)]
        public CountChannelFeatureInfo[] active_count_channels {
            get {
                return this.active_count_channelsField;
            }
            set {
                this.active_count_channelsField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlArrayItemAttribute("zone_channel", IsNullable=false)]
        public ZoneChannelFeatureInfo[] active_zone_channels {
            get {
                return this.active_zone_channelsField;
            }
            set {
                this.active_zone_channelsField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class StartupNotification : ExtendedNotificationBase {
        
        private RebootType reboot_typeField;
        
        private string xml_versionField;
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public RebootType reboot_type {
            get {
                return this.reboot_typeField;
            }
            set {
                this.reboot_typeField = value;
            }
        }
        
        /// <remarks/>
        [System.Xml.Serialization.XmlAttributeAttribute()]
        public string xml_version {
            get {
                return this.xml_versionField;
            }
            set {
                this.xml_versionField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum RebootType {
        
        /// <remarks/>
        SOAP_REBOOT_POWERON,
        
        /// <remarks/>
        SOAP_REBOOT_WATCHDOG,
        
        /// <remarks/>
        SOAP_REBOOT_UPDATE,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Diagnostics.DebuggerStepThroughAttribute()]
    [System.ComponentModel.DesignerCategoryAttribute("code")]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ErrorLogfilesNotification : ExtendedNotificationBase {
        
        private BinaryData error_log_dataField;
        
        /// <remarks/>
        public BinaryData error_log_data {
            get {
                return this.error_log_dataField;
            }
            set {
                this.error_log_dataField = value;
            }
        }
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum ServerActionType {
        
        /// <remarks/>
        CLEAR_ALL_TASKS,
        
        /// <remarks/>
        CLEAR_ALL_NOTIFICATIONS,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum NotificationListRequestType {
        
        /// <remarks/>
        NOTIFICATION_LIST_DEFAULT,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum ServerParameterRequestType {
        
        /// <remarks/>
        SERVER_PARAMETER_DEFAULT,
    }
    
    /// <remarks/>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("wsdl", "2.0.50727.3038")]
    [System.SerializableAttribute()]
    [System.Xml.Serialization.XmlTypeAttribute(Namespace="http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd")]
    public enum NotificationsCountRequestType {
        
        /// <remarks/>
        NOTIFICATIONS_COUNT_DEFAULT,
    }
}
