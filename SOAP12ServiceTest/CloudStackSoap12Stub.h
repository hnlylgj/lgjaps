/* soapStub.h

--------------------------------------------------------------------------------
*/

#define SOAP_NAMESPACE_OF_ns2	"http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd"

#ifndef soapStub_H
#define soapStub_H
#include "CloudStackstdsoap2.h"
#if GSOAP_VERSION != 20834
# error "GSOAP VERSION 20834 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Enumeration Types                                                          *
 *                                                                            *
\******************************************************************************/


/* hella.h:418 */
#ifndef SOAP_TYPE_ns2__TaskType
#define SOAP_TYPE_ns2__TaskType (101)
/* ns2:TaskType */
enum ns2__TaskType {
	ns2__TaskType__TASK_USCORESTARTUP = 0,
	ns2__TaskType__TASK_USCOREUPDATE = 1,
	ns2__TaskType__TASK_USCORECOUNT = 2,
	ns2__TaskType__TASK_USCOREFILL_USCORELEVEL = 3,
	ns2__TaskType__TASK_USCOREDIGIT_USCOREINPUT = 4,
	ns2__TaskType__TASK_USCOREDIGIT_USCOREOUTPUT = 5,
	ns2__TaskType__TASK_USCORECAM_USCOREIMAGE = 6,
	ns2__TaskType__TASK_USCOREPARAM = 7,
	ns2__TaskType__TASK_USCORESEND_USCOREPARAM = 8,
	ns2__TaskType__TASK_USCORELOG = 9,
	ns2__TaskType__TASK_USCOREERR_USCORELOG = 10,
	ns2__TaskType__TASK_USCOREVIDEO_USCORESTORE = 11,
	ns2__TaskType__TASK_USCORESET_USCOREDATE_USCORETIME = 12,
	ns2__TaskType__TASK_USCORECURRENT_USCOREOBJECT_USCORELIST = 13,
	ns2__TaskType__TASK_USCOREHISTORIC_USCOREOBJECT_USCORELIST = 14,
	ns2__TaskType__TASK_USCOREALIVE = 15,
	ns2__TaskType__TASK_USCOREREBOOT_USCORENOW = 16,
	ns2__TaskType__TASK_USCORECLEAR_USCOREZONE = 17,
	ns2__TaskType__TASK_USCORECOUNT_USCORECHANNELS = 18,
	ns2__TaskType__TASK_USCOREZONE_USCORECHANNELS = 19,
	ns2__TaskType__TASK_USCOREFEATURES_USCOREINFO = 20,
	ns2__TaskType__TASK_USCOREDELETE_USCOREALL_USCORETASKS = 21,
	ns2__TaskType__TASK_USCOREDELETE_USCOREALL_USCORENOTIFICATIONS = 22
};
#endif

/* hella.h:448 */
#ifndef SOAP_TYPE_ns2__OSD_USCOREState
#define SOAP_TYPE_ns2__OSD_USCOREState (102)
/* ns2:OSD_State */
enum ns2__OSD_USCOREState {
	ns2__OSD_USCOREState__OSD_USCORESTATE_USCOREOK = 0,
	ns2__OSD_USCOREState__OSD_USCORESTATE_USCOREERROR_USCORESENSOR_USCOREFAIL = 1,
	ns2__OSD_USCOREState__OSD_USCORESTATE_USCOREWARNING_USCOREDARK = 2,
	ns2__OSD_USCOREState__OSD_USCORESTATE_USCOREERROR_USCOREDARK = 3,
	ns2__OSD_USCOREState__OSD_USCORESTATE_USCOREWARNING_USCOREBRIGHT = 4,
	ns2__OSD_USCOREState__OSD_USCORESTATE_USCOREERROR_USCOREBRIGHT = 5,
	ns2__OSD_USCOREState__OSD_USCORESTATE_USCORENOT_USCOREAVAIL = 6,
	ns2__OSD_USCOREState__OSD_USCORESTATE_USCOREINVALID = 7
};
#endif

/* hella.h:463 */
#ifndef SOAP_TYPE_ns2__SOAP_USCOREServerError
#define SOAP_TYPE_ns2__SOAP_USCOREServerError (103)
/* ns2:SOAP_ServerError */
enum ns2__SOAP_USCOREServerError {
	ns2__SOAP_USCOREServerError__SOAP_USCORESERVER_USCOREOK = 0,
	ns2__SOAP_USCOREServerError__SOAP_USCOREERROR_USCOREUNKNOWN_USCORERESPONSE = 1,
	ns2__SOAP_USCOREServerError__SOAP_USCOREERROR_USCOREUNKNOWN_USCOREMESSAGE = 2,
	ns2__SOAP_USCOREServerError__SOAP_USCOREERROR_USCOREUNKNOWN_USCOREDEVICE = 3
};
#endif

/* hella.h:474 */
#ifndef SOAP_TYPE_ns2__SOAP_USCOREDeviceError
#define SOAP_TYPE_ns2__SOAP_USCOREDeviceError (104)
/* ns2:SOAP_DeviceError */
enum ns2__SOAP_USCOREDeviceError {
	ns2__SOAP_USCOREDeviceError__SOAP_USCOREDEVICE_USCOREOK = 0,
	ns2__SOAP_USCOREDeviceError__SOAP_USCOREERROR_USCOREUNKNOWN_USCORETASK = 1,
	ns2__SOAP_USCOREDeviceError__SOAP_USCOREERROR_USCOREUNKNOWN_USCOREPARAM = 2,
	ns2__SOAP_USCOREDeviceError__SOAP_USCOREERROR_USCOREOUT_USCOREOF_USCORERESSOURCES = 3
};
#endif

/* hella.h:485 */
#ifndef SOAP_TYPE_ns2__DigitalInputValue
#define SOAP_TYPE_ns2__DigitalInputValue (105)
/* ns2:DigitalInputValue */
enum ns2__DigitalInputValue {
	ns2__DigitalInputValue__DIGITAL_USCOREINPUT_USCOREACTIVE = 0,
	ns2__DigitalInputValue__DIGITAL_USCOREINPUT_USCOREINACTIVE = 1,
	ns2__DigitalInputValue__DIGITAL_USCOREINPUT_USCORENOT_USCOREAVAIL = 2
};
#endif

/* hella.h:495 */
#ifndef SOAP_TYPE_ns2__DigitalOutputActivity
#define SOAP_TYPE_ns2__DigitalOutputActivity (106)
/* ns2:DigitalOutputActivity */
enum ns2__DigitalOutputActivity {
	ns2__DigitalOutputActivity__DIGITAL_USCOREOUTPUT_USCORELOW = 0,
	ns2__DigitalOutputActivity__DIGITAL_USCOREOUTPUT_USCOREHIGH = 1,
	ns2__DigitalOutputActivity__DIGITAL_USCOREOUTPUT_USCOREHOLD_USCORELOW = 2,
	ns2__DigitalOutputActivity__DIGITAL_USCOREOUTPUT_USCOREHOLD_USCOREHIGH = 3,
	ns2__DigitalOutputActivity__DIGITAL_USCOREOUTPUT_USCOREUNTOUCHED = 4
};
#endif

/* hella.h:517 */
#ifndef SOAP_TYPE_ns2__CountEventType
#define SOAP_TYPE_ns2__CountEventType (109)
/* ns2:CountEventType */
enum ns2__CountEventType {
	ns2__CountEventType__COUNT_USCOREEVENT_USCOREALWAYS = 0,
	ns2__CountEventType__COUNT_USCOREEVENT_USCOREDELTA_USCOREIN = 1,
	ns2__CountEventType__COUNT_USCOREEVENT_USCOREDELTA_USCOREOUT = 2,
	ns2__CountEventType__COUNT_USCOREEVENT_USCOREDELTA_USCORESUM_USCOREIN_USCOREOUT = 3,
	ns2__CountEventType__COUNT_USCOREEVENT_USCOREDELTA_USCOREMAX_USCOREIN_USCOREOUT = 4
};
#endif

/* hella.h:529 */
#ifndef SOAP_TYPE_ns2__FillEventType
#define SOAP_TYPE_ns2__FillEventType (110)
/* ns2:FillEventType */
enum ns2__FillEventType {
	ns2__FillEventType__FILL_USCOREEVENT_USCOREABOVE_USCORETHRESHOLD = 0,
	ns2__FillEventType__FILL_USCOREEVENT_USCOREBELOW_USCORETHRESHOLD = 1,
	ns2__FillEventType__FILL_USCOREEVENT_USCOREANY = 2
};
#endif

/* hella.h:539 */
#ifndef SOAP_TYPE_ns2__ClearZoneEventType
#define SOAP_TYPE_ns2__ClearZoneEventType (111)
/* ns2:ClearZoneEventType */
enum ns2__ClearZoneEventType {
	ns2__ClearZoneEventType__CLEAR_USCOREZONE_USCOREEVENT_USCOREFREE = 0,
	ns2__ClearZoneEventType__CLEAR_USCOREZONE_USCOREEVENT_USCOREBLOCKED = 1,
	ns2__ClearZoneEventType__CLEAR_USCOREZONE_USCOREEVENT_USCOREANY = 2
};
#endif

/* hella.h:549 */
#ifndef SOAP_TYPE_ns2__DigitalInputEventType
#define SOAP_TYPE_ns2__DigitalInputEventType (112)
/* ns2:DigitalInputEventType */
enum ns2__DigitalInputEventType {
	ns2__DigitalInputEventType__DIGITAL_USCOREINPUT_USCOREEVENT_USCOREINACTIVE = 0,
	ns2__DigitalInputEventType__DIGITAL_USCOREINPUT_USCOREEVENT_USCOREACTIVE = 1,
	ns2__DigitalInputEventType__DIGITAL_USCOREINPUT_USCOREEVENT_USCOREANY = 2,
	ns2__DigitalInputEventType__DIGITAL_USCOREINPUT_USCOREEVENT_USCOREIGNORE = 3
};
#endif

/* hella.h:560 */
#ifndef SOAP_TYPE_ns2__DateType
#define SOAP_TYPE_ns2__DateType (113)
/* ns2:DateType */
enum ns2__DateType {
	ns2__DateType__DATE_USCOREDONT_USCORECARE = 0,
	ns2__DateType__DATE_USCOREDAY_USCOREOF_USCOREWEEK = 1,
	ns2__DateType__DATE_USCOREDAY_USCOREOF_USCOREMONTH = 2
};
#endif

/* hella.h:570 */
#ifndef SOAP_TYPE_ns2__DayOfWeek
#define SOAP_TYPE_ns2__DayOfWeek (114)
/* ns2:DayOfWeek */
enum ns2__DayOfWeek {
	ns2__DayOfWeek__MONDAY = 0,
	ns2__DayOfWeek__TUESDAY = 1,
	ns2__DayOfWeek__WEDNESDAY = 2,
	ns2__DayOfWeek__THURSDAY = 3,
	ns2__DayOfWeek__FRIDAY = 4,
	ns2__DayOfWeek__SATURDAY = 5,
	ns2__DayOfWeek__SUNDAY = 6
};
#endif

/* hella.h:599 */
#ifndef SOAP_TYPE_ns2__RebootType
#define SOAP_TYPE_ns2__RebootType (118)
/* ns2:RebootType */
enum ns2__RebootType {
	ns2__RebootType__SOAP_USCOREREBOOT_USCOREPOWERON = 0,
	ns2__RebootType__SOAP_USCOREREBOOT_USCOREWATCHDOG = 1,
	ns2__RebootType__SOAP_USCOREREBOOT_USCOREUPDATE = 2
};
#endif

/* hella.h:614 */
#ifndef SOAP_TYPE_ns2__UpdateType
#define SOAP_TYPE_ns2__UpdateType (120)
/* ns2:UpdateType */
enum ns2__UpdateType {
	ns2__UpdateType__UPDATE_USCOREFIRMWARE = 0,
	ns2__UpdateType__UPDATE_USCORECUSTOMER_USCORESOFTWARE = 1
};
#endif

/* hella.h:623 */
#ifndef SOAP_TYPE_ns2__TransferType
#define SOAP_TYPE_ns2__TransferType (121)
/* ns2:TransferType */
enum ns2__TransferType {
	ns2__TransferType__TRANSFER_USCOREINLINE = 0,
	ns2__TransferType__TRANSFER_USCOREBINARY = 1
};
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/* custom/duration.h:90 */
#ifndef SOAP_TYPE_xsd__duration
#define SOAP_TYPE_xsd__duration (15)
typedef LONG64 xsd__duration;
#endif

/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

class xsd__base64Binary;	/* hella.h:132 */
class ns2__DigitalInputElement;	/* hella.h:154 */
class ns2__DigitalOutputElement;	/* hella.h:157 */
class ns2__CountEvent;	/* hella.h:160 */
class ns2__CountChannelsEvent;	/* hella.h:163 */
class ns2__ZoneChannelsEvent;	/* hella.h:166 */
class ns2__FillEvent;	/* hella.h:169 */
class ns2__ClearZoneEvent;	/* hella.h:172 */
class ns2__DigitalInputEvent;	/* hella.h:175 */
class ns2__OneTimeEvent;	/* hella.h:178 */
class ns2__CurrentObjectListEvent;	/* hella.h:181 */
class ns2__OSD_USCOREEvent;	/* hella.h:184 */
class ns2__FeatureChangedEvent;	/* hella.h:187 */
union _ns2__union_EventTrigger;	/* hella.h:911 */
class ns2__EventTrigger;	/* hella.h:190 */
class ns2__Date;	/* hella.h:193 */
class ns2__ClockTime;	/* hella.h:196 */
class ns2__TimeTrigger;	/* hella.h:199 */
union _ns2__union_Trigger;	/* hella.h:1014 */
class ns2__Trigger;	/* hella.h:202 */
class ns2__CountingGateID;	/* hella.h:205 */
class ns2__FillRegionID;	/* hella.h:208 */
class ns2__ClearZoneID;	/* hella.h:211 */
class ns2__BinaryData;	/* hella.h:214 */
class ns2__NotificationBase;	/* hella.h:217 */
class ns2__CountChannelData;	/* hella.h:229 */
class ns2__ZoneData;	/* hella.h:235 */
class ns2__CountChannelFeatureInfo;	/* hella.h:268 */
class ns2__CountChannelsFeatureInfo;	/* hella.h:271 */
class ns2__ZoneChannelFeatureInfo;	/* hella.h:274 */
class ns2__ZoneChannelsFeatureInfo;	/* hella.h:277 */
class ns2__Coordinate_USCORE2D;	/* hella.h:283 */
class ns2__Object;	/* hella.h:289 */
union _ns2__union_NotificationContainer;	/* hella.h:1376 */
class ns2__NotificationContainer;	/* hella.h:307 */
class ns2__Task;	/* hella.h:310 */
class ns2__DigitalInputControl;	/* hella.h:352 */
union _ns2__union_TaskContainer;	/* hella.h:1488 */
class __ns2__union_TaskContainer;	/* hella.h:1440 */
class ns2__TaskContainer;	/* hella.h:388 */
class ns2__NotificationWithOSDState;	/* hella.h:220 */
class ns2__DigitalInputNotification;	/* hella.h:244 */
class ns2__LogfilesNotification;	/* hella.h:253 */
class ns2__ParameterNotification;	/* hella.h:256 */
class ns2__Coordinate_USCORE3D;	/* hella.h:286 */
class ns2__CurrentObject;	/* hella.h:292 */
class ns2__HistoricObject;	/* hella.h:295 */
class ns2__HistoricObjectListNotificationBase;	/* hella.h:301 */
class ns2__TaskRebootNow;	/* hella.h:313 */
class ns2__TaskRequestUpdate;	/* hella.h:316 */
class ns2__TaskRequestParameters;	/* hella.h:319 */
class ns2__TaskWithActivity;	/* hella.h:322 */
class ns2__TaskSetDateTime;	/* hella.h:328 */
class ns2__TaskDeleteAllTasks;	/* hella.h:382 */
class ns2__TaskDeleteAllNotifications;	/* hella.h:385 */
class ns2__AnswerContainer;	/* hella.h:391 */
class ns2__ExtendedNotificationBase;	/* hella.h:223 */
class ns2__CountNotification;	/* hella.h:226 */
class ns2__CountChannelsNotification;	/* hella.h:232 */
class ns2__ZoneChannelsNotification;	/* hella.h:238 */
class ns2__FillNotification;	/* hella.h:241 */
class ns2__ClearZoneNotification;	/* hella.h:247 */
class ns2__CameraImagesNotification;	/* hella.h:250 */
class ns2__CurrentObjectListNotification;	/* hella.h:298 */
class ns2__HistoricObjectListNotification;	/* hella.h:304 */
class ns2__TaskSetDigitalOutput;	/* hella.h:325 */
class ns2__TaskSubscribeTriggered;	/* hella.h:331 */
class ns2__ErrorLogfilesNotification;	/* hella.h:259 */
class ns2__AliveNotification;	/* hella.h:262 */
class ns2__StartupNotification;	/* hella.h:265 */
class ns2__FeatureInfoNotification;	/* hella.h:280 */
class ns2__TaskSubscribeTriggeredSafe;	/* hella.h:334 */
class ns2__TaskSubscribeLogfiles;	/* hella.h:358 */
class ns2__TaskSubscribeErrorLog;	/* hella.h:361 */
class ns2__TaskSubscribeCameraImages;	/* hella.h:364 */
class ns2__TaskSubscribeSendParameters;	/* hella.h:367 */
class ns2__TaskSubscribeVideoStore;	/* hella.h:370 */
class ns2__TaskSubscribeAlive;	/* hella.h:373 */
class ns2__TaskSubscribeObjectList;	/* hella.h:376 */
class ns2__TaskSubscribeFeaturesInfo;	/* hella.h:379 */
class ns2__ErrorContainer;	/* hella.h:394 */
class ns2__TaskSubscribeCounting;	/* hella.h:337 */
class ns2__TaskSubscribeCountChannels;	/* hella.h:340 */
class ns2__TaskSubscribeZoneChannels;	/* hella.h:343 */
class ns2__TaskSubscribeFill;	/* hella.h:346 */
class ns2__TaskSubscribeClearZone;	/* hella.h:349 */
class ns2__TaskSubscribeDigitalInput;	/* hella.h:355 */
struct __ns1__Notification;	/* hella.h:3443 */
struct __ns1__Error;	/* hella.h:3513 */

/* hella.h:132 */
#ifndef SOAP_TYPE_xsd__base64Binary
#define SOAP_TYPE_xsd__base64Binary (7)
/* binary data attached as MTOM/MIME/DIME attachment or included as *`xsd:base64Binary`* base64: */
class SOAP_CMAC xsd__base64Binary {
      public:
        unsigned char *__ptr;
        int __size;
        /// Optional element 'id' of XSD type 'xsd:string'
        char *id;
        /// Optional element 'type' of XSD type 'xsd:string'
        char *type;
        /// Optional element 'options' of XSD type 'xsd:string'
        char *options;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_xsd__base64Binary
        virtual int soap_type(void) const { return SOAP_TYPE_xsd__base64Binary; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type xsd__base64Binary, default initialized and not managed by a soap context
        virtual xsd__base64Binary *soap_alloc(void) const { return SOAP_NEW(xsd__base64Binary); }
      public:
        /// Constructor with initializations
        xsd__base64Binary()
        {
          __ptr = (unsigned char *)0;
          __size = 0;
          id = NULL;
          type = (char *)0;
          options = (char *)0;
          soap = (struct soap *)0;
        }
        virtual ~xsd__base64Binary() { }
        /// Friend allocator used by soap_new_xsd__base64Binary(struct soap*, int)
        friend SOAP_FMAC1 xsd__base64Binary * SOAP_FMAC2 soap_instantiate_xsd__base64Binary(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:154 */
#ifndef SOAP_TYPE_ns2__DigitalInputElement
#define SOAP_TYPE_ns2__DigitalInputElement (18)
/* complex XSD type 'ns2:DigitalInputElement': */
class SOAP_CMAC ns2__DigitalInputElement {
      public:
        /// required attribute 'value' of XSD type 'ns2:DigitalInputValue'
        enum ns2__DigitalInputValue value;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__DigitalInputElement
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__DigitalInputElement; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__DigitalInputElement, default initialized and not managed by a soap context
        virtual ns2__DigitalInputElement *soap_alloc(void) const { return SOAP_NEW(ns2__DigitalInputElement); }
      public:
        /// Constructor with initializations
        ns2__DigitalInputElement()
        {
          value = (enum ns2__DigitalInputValue)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__DigitalInputElement() { }
        /// Friend allocator used by soap_new_ns2__DigitalInputElement(struct soap*, int)
        friend SOAP_FMAC1 ns2__DigitalInputElement * SOAP_FMAC2 soap_instantiate_ns2__DigitalInputElement(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:157 */
#ifndef SOAP_TYPE_ns2__DigitalOutputElement
#define SOAP_TYPE_ns2__DigitalOutputElement (19)
/* complex XSD type 'ns2:DigitalOutputElement': */
class SOAP_CMAC ns2__DigitalOutputElement {
      public:
        /// required attribute 'activity' of XSD type 'ns2:DigitalOutputActivity'
        enum ns2__DigitalOutputActivity activity;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__DigitalOutputElement
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__DigitalOutputElement; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__DigitalOutputElement, default initialized and not managed by a soap context
        virtual ns2__DigitalOutputElement *soap_alloc(void) const { return SOAP_NEW(ns2__DigitalOutputElement); }
      public:
        /// Constructor with initializations
        ns2__DigitalOutputElement()
        {
          activity = (enum ns2__DigitalOutputActivity)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__DigitalOutputElement() { }
        /// Friend allocator used by soap_new_ns2__DigitalOutputElement(struct soap*, int)
        friend SOAP_FMAC1 ns2__DigitalOutputElement * SOAP_FMAC2 soap_instantiate_ns2__DigitalOutputElement(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:160 */
#ifndef SOAP_TYPE_ns2__CountEvent
#define SOAP_TYPE_ns2__CountEvent (20)
/* complex XSD type 'ns2:CountEvent': */
class SOAP_CMAC ns2__CountEvent {
      public:
        /// required attribute 'count_event_type' of XSD type 'ns2:CountEventType'
        enum ns2__CountEventType count_USCOREevent_USCOREtype;
        /// optional attribute 'delta' of XSD type 'xsd:unsignedInt'
        unsigned int delta;	///< default = 1
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CountEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CountEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CountEvent, default initialized and not managed by a soap context
        virtual ns2__CountEvent *soap_alloc(void) const { return SOAP_NEW(ns2__CountEvent); }
      public:
        /// Constructor with initializations
        ns2__CountEvent()
        {
          count_USCOREevent_USCOREtype = (enum ns2__CountEventType)0;
          delta = 1;
          soap = (struct soap *)0;
        }
        virtual ~ns2__CountEvent() { }
        /// Friend allocator used by soap_new_ns2__CountEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__CountEvent * SOAP_FMAC2 soap_instantiate_ns2__CountEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:163 */
#ifndef SOAP_TYPE_ns2__CountChannelsEvent
#define SOAP_TYPE_ns2__CountChannelsEvent (21)
/* complex XSD type 'ns2:CountChannelsEvent': */
class SOAP_CMAC ns2__CountChannelsEvent {
      public:
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CountChannelsEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CountChannelsEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CountChannelsEvent, default initialized and not managed by a soap context
        virtual ns2__CountChannelsEvent *soap_alloc(void) const { return SOAP_NEW(ns2__CountChannelsEvent); }
      public:
        /// Constructor with initializations
        ns2__CountChannelsEvent()
        {
          soap = (struct soap *)0;
        }
        virtual ~ns2__CountChannelsEvent() { }
        /// Friend allocator used by soap_new_ns2__CountChannelsEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__CountChannelsEvent * SOAP_FMAC2 soap_instantiate_ns2__CountChannelsEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:166 */
#ifndef SOAP_TYPE_ns2__ZoneChannelsEvent
#define SOAP_TYPE_ns2__ZoneChannelsEvent (22)
/* complex XSD type 'ns2:ZoneChannelsEvent': */
class SOAP_CMAC ns2__ZoneChannelsEvent {
      public:
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ZoneChannelsEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ZoneChannelsEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ZoneChannelsEvent, default initialized and not managed by a soap context
        virtual ns2__ZoneChannelsEvent *soap_alloc(void) const { return SOAP_NEW(ns2__ZoneChannelsEvent); }
      public:
        /// Constructor with initializations
        ns2__ZoneChannelsEvent()
        {
          soap = (struct soap *)0;
        }
        virtual ~ns2__ZoneChannelsEvent() { }
        /// Friend allocator used by soap_new_ns2__ZoneChannelsEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__ZoneChannelsEvent * SOAP_FMAC2 soap_instantiate_ns2__ZoneChannelsEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:169 */
#ifndef SOAP_TYPE_ns2__FillEvent
#define SOAP_TYPE_ns2__FillEvent (23)
/* complex XSD type 'ns2:FillEvent': */
class SOAP_CMAC ns2__FillEvent {
      public:
        /// required attribute 'fill_event_type' of XSD type 'ns2:FillEventType'
        enum ns2__FillEventType fill_USCOREevent_USCOREtype;
        /// optional attribute 'threshold' of XSD type 'xsd:unsignedInt'
        unsigned int *threshold;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__FillEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__FillEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__FillEvent, default initialized and not managed by a soap context
        virtual ns2__FillEvent *soap_alloc(void) const { return SOAP_NEW(ns2__FillEvent); }
      public:
        /// Constructor with initializations
        ns2__FillEvent()
        {
          fill_USCOREevent_USCOREtype = (enum ns2__FillEventType)0;
          threshold = (unsigned int *)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__FillEvent() { }
        /// Friend allocator used by soap_new_ns2__FillEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__FillEvent * SOAP_FMAC2 soap_instantiate_ns2__FillEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:172 */
#ifndef SOAP_TYPE_ns2__ClearZoneEvent
#define SOAP_TYPE_ns2__ClearZoneEvent (24)
/* complex XSD type 'ns2:ClearZoneEvent': */
class SOAP_CMAC ns2__ClearZoneEvent {
      public:
        /// required attribute 'clear_zone_event_type' of XSD type 'ns2:ClearZoneEventType'
        enum ns2__ClearZoneEventType clear_USCOREzone_USCOREevent_USCOREtype;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ClearZoneEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ClearZoneEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ClearZoneEvent, default initialized and not managed by a soap context
        virtual ns2__ClearZoneEvent *soap_alloc(void) const { return SOAP_NEW(ns2__ClearZoneEvent); }
      public:
        /// Constructor with initializations
        ns2__ClearZoneEvent()
        {
          clear_USCOREzone_USCOREevent_USCOREtype = (enum ns2__ClearZoneEventType)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__ClearZoneEvent() { }
        /// Friend allocator used by soap_new_ns2__ClearZoneEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__ClearZoneEvent * SOAP_FMAC2 soap_instantiate_ns2__ClearZoneEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:175 */
#ifndef SOAP_TYPE_ns2__DigitalInputEvent
#define SOAP_TYPE_ns2__DigitalInputEvent (25)
/* complex XSD type 'ns2:DigitalInputEvent': */
class SOAP_CMAC ns2__DigitalInputEvent {
      public:
        /// Sequence of 1 to 16 elements 'ns2:event' of XSD type 'ns2:DigitalInputEventType' stored in dynamic array event of length __sizeevent
        int __sizeevent;
        enum ns2__DigitalInputEventType *event;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__DigitalInputEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__DigitalInputEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__DigitalInputEvent, default initialized and not managed by a soap context
        virtual ns2__DigitalInputEvent *soap_alloc(void) const { return SOAP_NEW(ns2__DigitalInputEvent); }
      public:
        /// Constructor with initializations
        ns2__DigitalInputEvent()
        {
          __sizeevent = 0;
          event = NULL;
          soap = (struct soap *)0;
        }
        virtual ~ns2__DigitalInputEvent() { }
        /// Friend allocator used by soap_new_ns2__DigitalInputEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__DigitalInputEvent * SOAP_FMAC2 soap_instantiate_ns2__DigitalInputEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:178 */
#ifndef SOAP_TYPE_ns2__OneTimeEvent
#define SOAP_TYPE_ns2__OneTimeEvent (26)
/* complex XSD type 'ns2:OneTimeEvent': */
class SOAP_CMAC ns2__OneTimeEvent {
      public:
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__OneTimeEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__OneTimeEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__OneTimeEvent, default initialized and not managed by a soap context
        virtual ns2__OneTimeEvent *soap_alloc(void) const { return SOAP_NEW(ns2__OneTimeEvent); }
      public:
        /// Constructor with initializations
        ns2__OneTimeEvent()
        {
          soap = (struct soap *)0;
        }
        virtual ~ns2__OneTimeEvent() { }
        /// Friend allocator used by soap_new_ns2__OneTimeEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__OneTimeEvent * SOAP_FMAC2 soap_instantiate_ns2__OneTimeEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:181 */
#ifndef SOAP_TYPE_ns2__CurrentObjectListEvent
#define SOAP_TYPE_ns2__CurrentObjectListEvent (27)
/* complex XSD type 'ns2:CurrentObjectListEvent': */
class SOAP_CMAC ns2__CurrentObjectListEvent {
      public:
        /// optional attribute 'skip' of XSD type 'xsd:unsignedInt'
        unsigned int skip;	///< default = 0
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CurrentObjectListEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CurrentObjectListEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CurrentObjectListEvent, default initialized and not managed by a soap context
        virtual ns2__CurrentObjectListEvent *soap_alloc(void) const { return SOAP_NEW(ns2__CurrentObjectListEvent); }
      public:
        /// Constructor with initializations
        ns2__CurrentObjectListEvent()
        {
          skip = 0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__CurrentObjectListEvent() { }
        /// Friend allocator used by soap_new_ns2__CurrentObjectListEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__CurrentObjectListEvent * SOAP_FMAC2 soap_instantiate_ns2__CurrentObjectListEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:184 */
#ifndef SOAP_TYPE_ns2__OSD_USCOREEvent
#define SOAP_TYPE_ns2__OSD_USCOREEvent (28)
/* complex XSD type 'ns2:OSD_Event': */
class SOAP_CMAC ns2__OSD_USCOREEvent {
      public:
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__OSD_USCOREEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__OSD_USCOREEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__OSD_USCOREEvent, default initialized and not managed by a soap context
        virtual ns2__OSD_USCOREEvent *soap_alloc(void) const { return SOAP_NEW(ns2__OSD_USCOREEvent); }
      public:
        /// Constructor with initializations
        ns2__OSD_USCOREEvent()
        {
          soap = (struct soap *)0;
        }
        virtual ~ns2__OSD_USCOREEvent() { }
        /// Friend allocator used by soap_new_ns2__OSD_USCOREEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__OSD_USCOREEvent * SOAP_FMAC2 soap_instantiate_ns2__OSD_USCOREEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:187 */
#ifndef SOAP_TYPE_ns2__FeatureChangedEvent
#define SOAP_TYPE_ns2__FeatureChangedEvent (29)
/* complex XSD type 'ns2:FeatureChangedEvent': */
class SOAP_CMAC ns2__FeatureChangedEvent {
      public:
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__FeatureChangedEvent
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__FeatureChangedEvent; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__FeatureChangedEvent, default initialized and not managed by a soap context
        virtual ns2__FeatureChangedEvent *soap_alloc(void) const { return SOAP_NEW(ns2__FeatureChangedEvent); }
      public:
        /// Constructor with initializations
        ns2__FeatureChangedEvent()
        {
          soap = (struct soap *)0;
        }
        virtual ~ns2__FeatureChangedEvent() { }
        /// Friend allocator used by soap_new_ns2__FeatureChangedEvent(struct soap*, int)
        friend SOAP_FMAC1 ns2__FeatureChangedEvent * SOAP_FMAC2 soap_instantiate_ns2__FeatureChangedEvent(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:911 */
#ifndef SOAP_TYPE__ns2__union_EventTrigger
#define SOAP_TYPE__ns2__union_EventTrigger (134)
/* union serializable only when used as a member of a struct or class with a union variant selector */
union _ns2__union_EventTrigger
{
        #define SOAP_UNION__ns2__union_EventTrigger_count_USCOREevent	(1)	/**< union variant selector value for member count_USCOREevent */
        ns2__CountEvent *count_USCOREevent;
        #define SOAP_UNION__ns2__union_EventTrigger_fill_USCOREevent	(2)	/**< union variant selector value for member fill_USCOREevent */
        ns2__FillEvent *fill_USCOREevent;
        #define SOAP_UNION__ns2__union_EventTrigger_digital_USCOREinput_USCOREevent	(3)	/**< union variant selector value for member digital_USCOREinput_USCOREevent */
        ns2__DigitalInputEvent *digital_USCOREinput_USCOREevent;
        #define SOAP_UNION__ns2__union_EventTrigger_one_USCOREtime_USCOREevent	(4)	/**< union variant selector value for member one_USCOREtime_USCOREevent */
        ns2__OneTimeEvent *one_USCOREtime_USCOREevent;
        #define SOAP_UNION__ns2__union_EventTrigger_osd_USCOREevent	(5)	/**< union variant selector value for member osd_USCOREevent */
        ns2__OSD_USCOREEvent *osd_USCOREevent;
        #define SOAP_UNION__ns2__union_EventTrigger_current_USCOREobject_USCORElist_USCOREevent	(6)	/**< union variant selector value for member current_USCOREobject_USCORElist_USCOREevent */
        ns2__CurrentObjectListEvent *current_USCOREobject_USCORElist_USCOREevent;
        #define SOAP_UNION__ns2__union_EventTrigger_clear_USCOREzone_USCOREevent	(7)	/**< union variant selector value for member clear_USCOREzone_USCOREevent */
        ns2__ClearZoneEvent *clear_USCOREzone_USCOREevent;
        #define SOAP_UNION__ns2__union_EventTrigger_count_USCOREchannels_USCOREevent	(8)	/**< union variant selector value for member count_USCOREchannels_USCOREevent */
        ns2__CountChannelsEvent *count_USCOREchannels_USCOREevent;
        #define SOAP_UNION__ns2__union_EventTrigger_zone_USCOREchannels_USCOREevent	(9)	/**< union variant selector value for member zone_USCOREchannels_USCOREevent */
        ns2__ZoneChannelsEvent *zone_USCOREchannels_USCOREevent;
        #define SOAP_UNION__ns2__union_EventTrigger_feature_USCOREchanged_USCOREevent	(10)	/**< union variant selector value for member feature_USCOREchanged_USCOREevent */
        ns2__FeatureChangedEvent *feature_USCOREchanged_USCOREevent;
};
#endif

/* hella.h:190 */
#ifndef SOAP_TYPE_ns2__EventTrigger
#define SOAP_TYPE_ns2__EventTrigger (30)
/* Choice: */
class SOAP_CMAC ns2__EventTrigger {
      public:
        /// Union with union _ns2__union_EventTrigger variant selector __union_EventTrigger set to one of: SOAP_UNION__ns2__union_EventTrigger_count_USCOREevent SOAP_UNION__ns2__union_EventTrigger_fill_USCOREevent SOAP_UNION__ns2__union_EventTrigger_digital_USCOREinput_USCOREevent SOAP_UNION__ns2__union_EventTrigger_one_USCOREtime_USCOREevent SOAP_UNION__ns2__union_EventTrigger_osd_USCOREevent SOAP_UNION__ns2__union_EventTrigger_current_USCOREobject_USCORElist_USCOREevent SOAP_UNION__ns2__union_EventTrigger_clear_USCOREzone_USCOREevent SOAP_UNION__ns2__union_EventTrigger_count_USCOREchannels_USCOREevent SOAP_UNION__ns2__union_EventTrigger_zone_USCOREchannels_USCOREevent SOAP_UNION__ns2__union_EventTrigger_feature_USCOREchanged_USCOREevent
        int __union_EventTrigger;
        union _ns2__union_EventTrigger union_EventTrigger;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__EventTrigger
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__EventTrigger; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__EventTrigger, default initialized and not managed by a soap context
        virtual ns2__EventTrigger *soap_alloc(void) const { return SOAP_NEW(ns2__EventTrigger); }
      public:
        /// Constructor with initializations
        ns2__EventTrigger()
        {
          __union_EventTrigger = -1;
          soap = (struct soap *)0;
        }
        virtual ~ns2__EventTrigger() { }
        /// Friend allocator used by soap_new_ns2__EventTrigger(struct soap*, int)
        friend SOAP_FMAC1 ns2__EventTrigger * SOAP_FMAC2 soap_instantiate_ns2__EventTrigger(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:193 */
#ifndef SOAP_TYPE_ns2__Date
#define SOAP_TYPE_ns2__Date (31)
/* complex XSD type 'ns2:Date': */
class SOAP_CMAC ns2__Date {
      public:
        /// required attribute 'kind' of XSD type 'ns2:DateType'
        enum ns2__DateType kind;
        /// optional attribute 'day_of_week' of XSD type 'ns2:DayOfWeek'
        enum ns2__DayOfWeek *day_USCOREof_USCOREweek;
        /// optional attribute 'day_of_month' of XSD type 'ns2:DayOfMonth'
        unsigned int *day_USCOREof_USCOREmonth;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__Date
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__Date; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__Date, default initialized and not managed by a soap context
        virtual ns2__Date *soap_alloc(void) const { return SOAP_NEW(ns2__Date); }
      public:
        /// Constructor with initializations
        ns2__Date()
        {
          kind = (enum ns2__DateType)0;
          day_USCOREof_USCOREweek = (enum ns2__DayOfWeek *)0;
          day_USCOREof_USCOREmonth = (unsigned int *)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__Date() { }
        /// Friend allocator used by soap_new_ns2__Date(struct soap*, int)
        friend SOAP_FMAC1 ns2__Date * SOAP_FMAC2 soap_instantiate_ns2__Date(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:196 */
#ifndef SOAP_TYPE_ns2__ClockTime
#define SOAP_TYPE_ns2__ClockTime (32)
/* complex XSD type 'ns2:ClockTime': */
class SOAP_CMAC ns2__ClockTime {
      public:
        /// required attribute 'hours' of XSD type 'ns2:HoursOfDay'
        unsigned int hours;
        /// required attribute 'minutes' of XSD type 'ns2:MinutesOrSeconds'
        unsigned int minutes;
        /// required attribute 'seconds' of XSD type 'ns2:MinutesOrSeconds'
        unsigned int seconds;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ClockTime
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ClockTime; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ClockTime, default initialized and not managed by a soap context
        virtual ns2__ClockTime *soap_alloc(void) const { return SOAP_NEW(ns2__ClockTime); }
      public:
        /// Constructor with initializations
        ns2__ClockTime()
        {
          hours = (unsigned int)0;
          minutes = (unsigned int)0;
          seconds = (unsigned int)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__ClockTime() { }
        /// Friend allocator used by soap_new_ns2__ClockTime(struct soap*, int)
        friend SOAP_FMAC1 ns2__ClockTime * SOAP_FMAC2 soap_instantiate_ns2__ClockTime(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:199 */
#ifndef SOAP_TYPE_ns2__TimeTrigger
#define SOAP_TYPE_ns2__TimeTrigger (33)
/* complex XSD type 'ns2:TimeTrigger': */
class SOAP_CMAC ns2__TimeTrigger {
      public:
        /// Optional element 'ns2:date' of XSD type 'ns2:Date'
        ns2__Date *date;
        /// Required element 'ns2:start' of XSD type 'ns2:ClockTime'
        ns2__ClockTime *start;
        /// Optional element 'ns2:cycle' of XSD type 'xsd:duration'
        LONG64 *cycle;
        /// Optional element 'ns2:random_offset' of XSD type 'xsd:duration'
        LONG64 *random_USCOREoffset;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TimeTrigger
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TimeTrigger; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TimeTrigger, default initialized and not managed by a soap context
        virtual ns2__TimeTrigger *soap_alloc(void) const { return SOAP_NEW(ns2__TimeTrigger); }
      public:
        /// Constructor with initializations
        ns2__TimeTrigger()
        {
          date = (ns2__Date *)0;
          start = (ns2__ClockTime *)0;
          cycle = (LONG64 *)0;
          random_USCOREoffset = (LONG64 *)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__TimeTrigger() { }
        /// Friend allocator used by soap_new_ns2__TimeTrigger(struct soap*, int)
        friend SOAP_FMAC1 ns2__TimeTrigger * SOAP_FMAC2 soap_instantiate_ns2__TimeTrigger(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:1014 */
#ifndef SOAP_TYPE__ns2__union_Trigger
#define SOAP_TYPE__ns2__union_Trigger (142)
/* union serializable only when used as a member of a struct or class with a union variant selector */
union _ns2__union_Trigger
{
        #define SOAP_UNION__ns2__union_Trigger_event_USCOREtrigger	(1)	/**< union variant selector value for member event_USCOREtrigger */
        ns2__EventTrigger *event_USCOREtrigger;
        #define SOAP_UNION__ns2__union_Trigger_time_USCOREtrigger	(2)	/**< union variant selector value for member time_USCOREtrigger */
        ns2__TimeTrigger *time_USCOREtrigger;
};
#endif

/* hella.h:202 */
#ifndef SOAP_TYPE_ns2__Trigger
#define SOAP_TYPE_ns2__Trigger (34)
/* Choice: */
class SOAP_CMAC ns2__Trigger {
      public:
        /// Union with union _ns2__union_Trigger variant selector __union_Trigger set to one of: SOAP_UNION__ns2__union_Trigger_event_USCOREtrigger SOAP_UNION__ns2__union_Trigger_time_USCOREtrigger
        int __union_Trigger;
        union _ns2__union_Trigger union_Trigger;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__Trigger
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__Trigger; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__Trigger, default initialized and not managed by a soap context
        virtual ns2__Trigger *soap_alloc(void) const { return SOAP_NEW(ns2__Trigger); }
      public:
        /// Constructor with initializations
        ns2__Trigger()
        {
          __union_Trigger = -1;
          soap = (struct soap *)0;
        }
        virtual ~ns2__Trigger() { }
        /// Friend allocator used by soap_new_ns2__Trigger(struct soap*, int)
        friend SOAP_FMAC1 ns2__Trigger * SOAP_FMAC2 soap_instantiate_ns2__Trigger(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:205 */
#ifndef SOAP_TYPE_ns2__CountingGateID
#define SOAP_TYPE_ns2__CountingGateID (35)
/* complex XSD type 'ns2:CountingGateID': */
class SOAP_CMAC ns2__CountingGateID {
      public:
        /// required attribute 'id' of XSD type 'xsd:string'
        std::wstring id;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CountingGateID
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CountingGateID; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CountingGateID, default initialized and not managed by a soap context
        virtual ns2__CountingGateID *soap_alloc(void) const { return SOAP_NEW(ns2__CountingGateID); }
      public:
        /// Constructor with initializations
        ns2__CountingGateID()
        {
          soap = (struct soap *)0;
        }
        virtual ~ns2__CountingGateID() { }
        /// Friend allocator used by soap_new_ns2__CountingGateID(struct soap*, int)
        friend SOAP_FMAC1 ns2__CountingGateID * SOAP_FMAC2 soap_instantiate_ns2__CountingGateID(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:208 */
#ifndef SOAP_TYPE_ns2__FillRegionID
#define SOAP_TYPE_ns2__FillRegionID (36)
/* complex XSD type 'ns2:FillRegionID': */
class SOAP_CMAC ns2__FillRegionID {
      public:
        /// required attribute 'id' of XSD type 'xsd:string'
        std::wstring id;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__FillRegionID
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__FillRegionID; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__FillRegionID, default initialized and not managed by a soap context
        virtual ns2__FillRegionID *soap_alloc(void) const { return SOAP_NEW(ns2__FillRegionID); }
      public:
        /// Constructor with initializations
        ns2__FillRegionID()
        {
          soap = (struct soap *)0;
        }
        virtual ~ns2__FillRegionID() { }
        /// Friend allocator used by soap_new_ns2__FillRegionID(struct soap*, int)
        friend SOAP_FMAC1 ns2__FillRegionID * SOAP_FMAC2 soap_instantiate_ns2__FillRegionID(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:211 */
#ifndef SOAP_TYPE_ns2__ClearZoneID
#define SOAP_TYPE_ns2__ClearZoneID (37)
/* complex XSD type 'ns2:ClearZoneID': */
class SOAP_CMAC ns2__ClearZoneID {
      public:
        /// required attribute 'id' of XSD type 'xsd:string'
        std::wstring id;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ClearZoneID
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ClearZoneID; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ClearZoneID, default initialized and not managed by a soap context
        virtual ns2__ClearZoneID *soap_alloc(void) const { return SOAP_NEW(ns2__ClearZoneID); }
      public:
        /// Constructor with initializations
        ns2__ClearZoneID()
        {
          soap = (struct soap *)0;
        }
        virtual ~ns2__ClearZoneID() { }
        /// Friend allocator used by soap_new_ns2__ClearZoneID(struct soap*, int)
        friend SOAP_FMAC1 ns2__ClearZoneID * SOAP_FMAC2 soap_instantiate_ns2__ClearZoneID(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:214 */
#ifndef SOAP_TYPE_ns2__BinaryData
#define SOAP_TYPE_ns2__BinaryData (38)
/* complex XSD type 'ns2:BinaryData': */
class SOAP_CMAC ns2__BinaryData {
      public:
        /// Required element 'ns2:bin_data' of XSD type 'xsd:base64Binary'
        xsd__base64Binary bin_USCOREdata;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__BinaryData
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__BinaryData; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__BinaryData, default initialized and not managed by a soap context
        virtual ns2__BinaryData *soap_alloc(void) const { return SOAP_NEW(ns2__BinaryData); }
      public:
        /// Constructor with initializations
        ns2__BinaryData()
        {
          soap = (struct soap *)0;
        }
        virtual ~ns2__BinaryData() { }
        /// Friend allocator used by soap_new_ns2__BinaryData(struct soap*, int)
        friend SOAP_FMAC1 ns2__BinaryData * SOAP_FMAC2 soap_instantiate_ns2__BinaryData(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:217 */
#ifndef SOAP_TYPE_ns2__NotificationBase
#define SOAP_TYPE_ns2__NotificationBase (39)
/* Type ns2__NotificationBase is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:NotificationBase': */
class SOAP_CMAC ns2__NotificationBase {
      public:
        /// required attribute 'mac_address' of XSD type 'ns2:MAC_Address'
        std::wstring mac_USCOREaddress;
        /// required attribute 'customer_ID' of XSD type 'xsd:string'
        std::wstring customer_USCOREID;
        /// required attribute 'task_type' of XSD type 'ns2:TaskType'
        enum ns2__TaskType task_USCOREtype;
        /// required attribute 'notification_ID' of XSD type 'xsd:unsignedInt'
        unsigned int notification_USCOREID;
        /// required attribute 'serverTask_ID' of XSD type 'xsd:unsignedInt'
        unsigned int serverTask_USCOREID;
        /// required attribute 'callerType_ID' of XSD type 'xsd:string'
        std::wstring callerType_USCOREID;
        /// required attribute 'timestamp' of XSD type 'xsd:dateTime'
        time_t timestamp;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__NotificationBase
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__NotificationBase; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__NotificationBase, default initialized and not managed by a soap context
        virtual ns2__NotificationBase *soap_alloc(void) const { return SOAP_NEW(ns2__NotificationBase); }
      public:
        /// Constructor with initializations
        ns2__NotificationBase()
        {
          task_USCOREtype = (enum ns2__TaskType)0;
          notification_USCOREID = (unsigned int)0;
          serverTask_USCOREID = (unsigned int)0;
          timestamp = (time_t)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__NotificationBase() { }
        /// Friend allocator used by soap_new_ns2__NotificationBase(struct soap*, int)
        friend SOAP_FMAC1 ns2__NotificationBase * SOAP_FMAC2 soap_instantiate_ns2__NotificationBase(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:229 */
#ifndef SOAP_TYPE_ns2__CountChannelData
#define SOAP_TYPE_ns2__CountChannelData (43)
/* complex XSD type 'ns2:CountChannelData': */
class SOAP_CMAC ns2__CountChannelData {
      public:
        /// optional attribute 'channel_name' of XSD type 'ns2:MeasuringChannelName'
        std::wstring *channel_USCOREname;
        /// optional attribute 'objClass' of XSD type 'ns2:ObjectClassName'
        std::wstring *objClass;
        /// required attribute 'count_in' of XSD type 'xsd:unsignedInt'
        unsigned int count_USCOREin;
        /// required attribute 'count_out' of XSD type 'xsd:unsignedInt'
        unsigned int count_USCOREout;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CountChannelData
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CountChannelData; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CountChannelData, default initialized and not managed by a soap context
        virtual ns2__CountChannelData *soap_alloc(void) const { return SOAP_NEW(ns2__CountChannelData); }
      public:
        /// Constructor with initializations
        ns2__CountChannelData()
        {
          channel_USCOREname = (std::wstring *)0;
          objClass = (std::wstring *)0;
          count_USCOREin = (unsigned int)0;
          count_USCOREout = (unsigned int)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__CountChannelData() { }
        /// Friend allocator used by soap_new_ns2__CountChannelData(struct soap*, int)
        friend SOAP_FMAC1 ns2__CountChannelData * SOAP_FMAC2 soap_instantiate_ns2__CountChannelData(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:235 */
#ifndef SOAP_TYPE_ns2__ZoneData
#define SOAP_TYPE_ns2__ZoneData (45)
/* complex XSD type 'ns2:ZoneData': */
class SOAP_CMAC ns2__ZoneData {
      public:
        /// optional attribute 'zone_name' of XSD type 'ns2:MeasuringChannelName'
        std::wstring *zone_USCOREname;
        /// optional attribute 'objClass' of XSD type 'ns2:ObjectClassName'
        std::wstring *objClass;
        /// required attribute 'fill_level' of XSD type 'xsd:unsignedInt'
        unsigned int fill_USCORElevel;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ZoneData
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ZoneData; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ZoneData, default initialized and not managed by a soap context
        virtual ns2__ZoneData *soap_alloc(void) const { return SOAP_NEW(ns2__ZoneData); }
      public:
        /// Constructor with initializations
        ns2__ZoneData()
        {
          zone_USCOREname = (std::wstring *)0;
          objClass = (std::wstring *)0;
          fill_USCORElevel = (unsigned int)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__ZoneData() { }
        /// Friend allocator used by soap_new_ns2__ZoneData(struct soap*, int)
        friend SOAP_FMAC1 ns2__ZoneData * SOAP_FMAC2 soap_instantiate_ns2__ZoneData(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:268 */
#ifndef SOAP_TYPE_ns2__CountChannelFeatureInfo
#define SOAP_TYPE_ns2__CountChannelFeatureInfo (56)
/* complex XSD type 'ns2:CountChannelFeatureInfo': */
class SOAP_CMAC ns2__CountChannelFeatureInfo {
      public:
        /// required attribute 'name' of XSD type 'ns2:MeasuringChannelName'
        std::wstring name;
        /// optional attribute 'objClass' of XSD type 'ns2:ObjectClassName'
        std::wstring *objClass;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CountChannelFeatureInfo
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CountChannelFeatureInfo; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CountChannelFeatureInfo, default initialized and not managed by a soap context
        virtual ns2__CountChannelFeatureInfo *soap_alloc(void) const { return SOAP_NEW(ns2__CountChannelFeatureInfo); }
      public:
        /// Constructor with initializations
        ns2__CountChannelFeatureInfo()
        {
          objClass = (std::wstring *)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__CountChannelFeatureInfo() { }
        /// Friend allocator used by soap_new_ns2__CountChannelFeatureInfo(struct soap*, int)
        friend SOAP_FMAC1 ns2__CountChannelFeatureInfo * SOAP_FMAC2 soap_instantiate_ns2__CountChannelFeatureInfo(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:271 */
#ifndef SOAP_TYPE_ns2__CountChannelsFeatureInfo
#define SOAP_TYPE_ns2__CountChannelsFeatureInfo (57)
/* complex XSD type 'ns2:CountChannelsFeatureInfo': */
class SOAP_CMAC ns2__CountChannelsFeatureInfo {
      public:
        /// Sequence of elements 'ns2:count_channel' of XSD type 'ns2:CountChannelFeatureInfo' stored in dynamic array count_USCOREchannel of length __sizecount_USCOREchannel
        int __sizecount_USCOREchannel;
        ns2__CountChannelFeatureInfo **count_USCOREchannel;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CountChannelsFeatureInfo
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CountChannelsFeatureInfo; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CountChannelsFeatureInfo, default initialized and not managed by a soap context
        virtual ns2__CountChannelsFeatureInfo *soap_alloc(void) const { return SOAP_NEW(ns2__CountChannelsFeatureInfo); }
      public:
        /// Constructor with initializations
        ns2__CountChannelsFeatureInfo()
        {
          __sizecount_USCOREchannel = 0;
          count_USCOREchannel = NULL;
          soap = (struct soap *)0;
        }
        virtual ~ns2__CountChannelsFeatureInfo() { }
        /// Friend allocator used by soap_new_ns2__CountChannelsFeatureInfo(struct soap*, int)
        friend SOAP_FMAC1 ns2__CountChannelsFeatureInfo * SOAP_FMAC2 soap_instantiate_ns2__CountChannelsFeatureInfo(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:274 */
#ifndef SOAP_TYPE_ns2__ZoneChannelFeatureInfo
#define SOAP_TYPE_ns2__ZoneChannelFeatureInfo (58)
/* complex XSD type 'ns2:ZoneChannelFeatureInfo': */
class SOAP_CMAC ns2__ZoneChannelFeatureInfo {
      public:
        /// required attribute 'name' of XSD type 'ns2:MeasuringChannelName'
        std::wstring name;
        /// optional attribute 'objClass' of XSD type 'ns2:ObjectClassName'
        std::wstring *objClass;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ZoneChannelFeatureInfo
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ZoneChannelFeatureInfo; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ZoneChannelFeatureInfo, default initialized and not managed by a soap context
        virtual ns2__ZoneChannelFeatureInfo *soap_alloc(void) const { return SOAP_NEW(ns2__ZoneChannelFeatureInfo); }
      public:
        /// Constructor with initializations
        ns2__ZoneChannelFeatureInfo()
        {
          objClass = (std::wstring *)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__ZoneChannelFeatureInfo() { }
        /// Friend allocator used by soap_new_ns2__ZoneChannelFeatureInfo(struct soap*, int)
        friend SOAP_FMAC1 ns2__ZoneChannelFeatureInfo * SOAP_FMAC2 soap_instantiate_ns2__ZoneChannelFeatureInfo(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:277 */
#ifndef SOAP_TYPE_ns2__ZoneChannelsFeatureInfo
#define SOAP_TYPE_ns2__ZoneChannelsFeatureInfo (59)
/* complex XSD type 'ns2:ZoneChannelsFeatureInfo': */
class SOAP_CMAC ns2__ZoneChannelsFeatureInfo {
      public:
        /// Sequence of elements 'ns2:zone_channel' of XSD type 'ns2:ZoneChannelFeatureInfo' stored in dynamic array zone_USCOREchannel of length __sizezone_USCOREchannel
        int __sizezone_USCOREchannel;
        ns2__ZoneChannelFeatureInfo **zone_USCOREchannel;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ZoneChannelsFeatureInfo
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ZoneChannelsFeatureInfo; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ZoneChannelsFeatureInfo, default initialized and not managed by a soap context
        virtual ns2__ZoneChannelsFeatureInfo *soap_alloc(void) const { return SOAP_NEW(ns2__ZoneChannelsFeatureInfo); }
      public:
        /// Constructor with initializations
        ns2__ZoneChannelsFeatureInfo()
        {
          __sizezone_USCOREchannel = 0;
          zone_USCOREchannel = NULL;
          soap = (struct soap *)0;
        }
        virtual ~ns2__ZoneChannelsFeatureInfo() { }
        /// Friend allocator used by soap_new_ns2__ZoneChannelsFeatureInfo(struct soap*, int)
        friend SOAP_FMAC1 ns2__ZoneChannelsFeatureInfo * SOAP_FMAC2 soap_instantiate_ns2__ZoneChannelsFeatureInfo(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:283 */
#ifndef SOAP_TYPE_ns2__Coordinate_USCORE2D
#define SOAP_TYPE_ns2__Coordinate_USCORE2D (61)
/* Type ns2__Coordinate_USCORE2D is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:Coordinate_2D': */
class SOAP_CMAC ns2__Coordinate_USCORE2D {
      public:
        /// required attribute 'x' of XSD type 'xsd:int'
        int x;
        /// required attribute 'y' of XSD type 'xsd:int'
        int y;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__Coordinate_USCORE2D
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__Coordinate_USCORE2D; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__Coordinate_USCORE2D, default initialized and not managed by a soap context
        virtual ns2__Coordinate_USCORE2D *soap_alloc(void) const { return SOAP_NEW(ns2__Coordinate_USCORE2D); }
      public:
        /// Constructor with initializations
        ns2__Coordinate_USCORE2D()
        {
          x = (int)0;
          y = (int)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__Coordinate_USCORE2D() { }
        /// Friend allocator used by soap_new_ns2__Coordinate_USCORE2D(struct soap*, int)
        friend SOAP_FMAC1 ns2__Coordinate_USCORE2D * SOAP_FMAC2 soap_instantiate_ns2__Coordinate_USCORE2D(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:289 */
#ifndef SOAP_TYPE_ns2__Object
#define SOAP_TYPE_ns2__Object (63)
/* Type ns2__Object is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:Object': */
class SOAP_CMAC ns2__Object {
      public:
        /// Required element 'ns2:entry' of XSD type 'ns2:Coordinate_3D'
        ns2__Coordinate_USCORE3D *entry;
        /// required attribute 'id' of XSD type 'xsd:unsignedInt'
        unsigned int id;
        /// optional attribute 'objClass' of XSD type 'ns2:ObjectClassName'
        std::wstring *objClass;
        /// optional attribute 'zone' of XSD type 'xsd:string'
        std::wstring zone;	///< default = L"0"
        /// required attribute 'dwell' of XSD type 'ns2:ShortDuration'
        std::wstring dwell;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__Object
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__Object; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__Object, default initialized and not managed by a soap context
        virtual ns2__Object *soap_alloc(void) const { return SOAP_NEW(ns2__Object); }
      public:
        /// Constructor with initializations
        ns2__Object()
        {
          entry = (ns2__Coordinate_USCORE3D *)0;
          id = (unsigned int)0;
          objClass = (std::wstring *)0;
          zone = L"0";
          soap = (struct soap *)0;
        }
        virtual ~ns2__Object() { }
        /// Friend allocator used by soap_new_ns2__Object(struct soap*, int)
        friend SOAP_FMAC1 ns2__Object * SOAP_FMAC2 soap_instantiate_ns2__Object(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:1376 */
#ifndef SOAP_TYPE__ns2__union_NotificationContainer
#define SOAP_TYPE__ns2__union_NotificationContainer (166)
/* union serializable only when used as a member of a struct or class with a union variant selector */
union _ns2__union_NotificationContainer
{
        #define SOAP_UNION__ns2__union_NotificationContainer_count_USCOREnotification	(1)	/**< union variant selector value for member count_USCOREnotification */
        ns2__CountNotification *count_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_fill_USCOREnotification	(2)	/**< union variant selector value for member fill_USCOREnotification */
        ns2__FillNotification *fill_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_digital_USCOREinput_USCOREnotification	(3)	/**< union variant selector value for member digital_USCOREinput_USCOREnotification */
        ns2__DigitalInputNotification *digital_USCOREinput_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_camera_USCOREimages_USCOREnotification	(4)	/**< union variant selector value for member camera_USCOREimages_USCOREnotification */
        ns2__CameraImagesNotification *camera_USCOREimages_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_parameter_USCOREnotification	(5)	/**< union variant selector value for member parameter_USCOREnotification */
        ns2__ParameterNotification *parameter_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_logfiles_USCOREnotification	(6)	/**< union variant selector value for member logfiles_USCOREnotification */
        ns2__LogfilesNotification *logfiles_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_error_USCORElogfiles_USCOREnotification	(7)	/**< union variant selector value for member error_USCORElogfiles_USCOREnotification */
        ns2__ErrorLogfilesNotification *error_USCORElogfiles_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_alive_USCOREnotification	(8)	/**< union variant selector value for member alive_USCOREnotification */
        ns2__AliveNotification *alive_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_curr_USCOREobjlist_USCOREnotification	(9)	/**< union variant selector value for member curr_USCOREobjlist_USCOREnotification */
        ns2__CurrentObjectListNotification *curr_USCOREobjlist_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_hist_USCOREobjlist_USCOREnotification	(10)	/**< union variant selector value for member hist_USCOREobjlist_USCOREnotification */
        ns2__HistoricObjectListNotification *hist_USCOREobjlist_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_startup_USCOREnotification	(11)	/**< union variant selector value for member startup_USCOREnotification */
        ns2__StartupNotification *startup_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_clear_USCOREzone_USCOREnotification	(12)	/**< union variant selector value for member clear_USCOREzone_USCOREnotification */
        ns2__ClearZoneNotification *clear_USCOREzone_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_count_USCOREchannels_USCOREnotification	(13)	/**< union variant selector value for member count_USCOREchannels_USCOREnotification */
        ns2__CountChannelsNotification *count_USCOREchannels_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_zone_USCOREchannels_USCOREnotification	(14)	/**< union variant selector value for member zone_USCOREchannels_USCOREnotification */
        ns2__ZoneChannelsNotification *zone_USCOREchannels_USCOREnotification;
        #define SOAP_UNION__ns2__union_NotificationContainer_features_USCOREinfo_USCOREnotification	(15)	/**< union variant selector value for member features_USCOREinfo_USCOREnotification */
        ns2__FeatureInfoNotification *features_USCOREinfo_USCOREnotification;
};
#endif

/* hella.h:307 */
#ifndef SOAP_TYPE_ns2__NotificationContainer
#define SOAP_TYPE_ns2__NotificationContainer (69)
/* Choice: */
class SOAP_CMAC ns2__NotificationContainer {
      public:
        /// Union with union _ns2__union_NotificationContainer variant selector __union_NotificationContainer set to one of: SOAP_UNION__ns2__union_NotificationContainer_count_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_fill_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_digital_USCOREinput_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_camera_USCOREimages_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_parameter_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_logfiles_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_error_USCORElogfiles_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_alive_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_curr_USCOREobjlist_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_hist_USCOREobjlist_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_startup_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_clear_USCOREzone_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_count_USCOREchannels_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_zone_USCOREchannels_USCOREnotification SOAP_UNION__ns2__union_NotificationContainer_features_USCOREinfo_USCOREnotification
       
		  int __union_NotificationContainer;
        union _ns2__union_NotificationContainer union_NotificationContainer;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__NotificationContainer
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__NotificationContainer; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__NotificationContainer, default initialized and not managed by a soap context
        virtual ns2__NotificationContainer *soap_alloc(void) const { return SOAP_NEW(ns2__NotificationContainer); }
      public:
        /// Constructor with initializations
        ns2__NotificationContainer()
        {
          __union_NotificationContainer = -1;
          soap = (struct soap *)0;
        }
        virtual ~ns2__NotificationContainer() { }
        /// Friend allocator used by soap_new_ns2__NotificationContainer(struct soap*, int)
        friend SOAP_FMAC1 ns2__NotificationContainer * SOAP_FMAC2 soap_instantiate_ns2__NotificationContainer(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:310 */
#ifndef SOAP_TYPE_ns2__Task
#define SOAP_TYPE_ns2__Task (70)
/* Type ns2__Task is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:Task': */
class SOAP_CMAC ns2__Task {
      public:
        /// required attribute 'task_type' of XSD type 'ns2:TaskType'
        enum ns2__TaskType task_USCOREtype;
        /// required attribute 'serverTask_ID' of XSD type 'xsd:unsignedInt'
        unsigned int serverTask_USCOREID;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__Task
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__Task; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__Task, default initialized and not managed by a soap context
        virtual ns2__Task *soap_alloc(void) const { return SOAP_NEW(ns2__Task); }
      public:
        /// Constructor with initializations
        ns2__Task()
        {
          task_USCOREtype = (enum ns2__TaskType)0;
          serverTask_USCOREID = (unsigned int)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__Task() { }
        /// Friend allocator used by soap_new_ns2__Task(struct soap*, int)
        friend SOAP_FMAC1 ns2__Task * SOAP_FMAC2 soap_instantiate_ns2__Task(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:352 */
#ifndef SOAP_TYPE_ns2__DigitalInputControl
#define SOAP_TYPE_ns2__DigitalInputControl (84)
/* complex XSD type 'ns2:DigitalInputControl': */
class SOAP_CMAC ns2__DigitalInputControl {
      public:
        /// required attribute 'activity_state' of XSD type 'xsd:boolean'
        bool activity_USCOREstate;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__DigitalInputControl
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__DigitalInputControl; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__DigitalInputControl, default initialized and not managed by a soap context
        virtual ns2__DigitalInputControl *soap_alloc(void) const { return SOAP_NEW(ns2__DigitalInputControl); }
      public:
        /// Constructor with initializations
        ns2__DigitalInputControl()
        {
          activity_USCOREstate = (bool)0;
          soap = (struct soap *)0;
        }
        virtual ~ns2__DigitalInputControl() { }
        /// Friend allocator used by soap_new_ns2__DigitalInputControl(struct soap*, int)
        friend SOAP_FMAC1 ns2__DigitalInputControl * SOAP_FMAC2 soap_instantiate_ns2__DigitalInputControl(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:1488 */
#ifndef SOAP_TYPE__ns2__union_TaskContainer
#define SOAP_TYPE__ns2__union_TaskContainer (190)
/* union serializable only when used as a member of a struct or class with a union variant selector */
union _ns2__union_TaskContainer
{
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCORErequest_USCOREupdate	(1)	/**< union variant selector value for member task_USCORErequest_USCOREupdate */
        ns2__TaskRequestUpdate *task_USCORErequest_USCOREupdate;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCORErequest_USCOREparameters	(2)	/**< union variant selector value for member task_USCORErequest_USCOREparameters */
        ns2__TaskRequestParameters *task_USCORErequest_USCOREparameters;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCORElogfiles	(3)	/**< union variant selector value for member task_USCOREsubscribe_USCORElogfiles */
        ns2__TaskSubscribeLogfiles *task_USCOREsubscribe_USCORElogfiles;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREerror_USCORElog	(4)	/**< union variant selector value for member task_USCOREsubscribe_USCOREerror_USCORElog */
        ns2__TaskSubscribeErrorLog *task_USCOREsubscribe_USCOREerror_USCORElog;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREset_USCOREdigital_USCOREoutput	(5)	/**< union variant selector value for member task_USCOREset_USCOREdigital_USCOREoutput */
        ns2__TaskSetDigitalOutput *task_USCOREset_USCOREdigital_USCOREoutput;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREset_USCOREdate_USCOREtime	(6)	/**< union variant selector value for member task_USCOREset_USCOREdate_USCOREtime */
        ns2__TaskSetDateTime *task_USCOREset_USCOREdate_USCOREtime;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREcounting	(7)	/**< union variant selector value for member task_USCOREsubscribe_USCOREcounting */
        ns2__TaskSubscribeCounting *task_USCOREsubscribe_USCOREcounting;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREfill	(8)	/**< union variant selector value for member task_USCOREsubscribe_USCOREfill */
        ns2__TaskSubscribeFill *task_USCOREsubscribe_USCOREfill;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREdigital_USCOREinput	(9)	/**< union variant selector value for member task_USCOREsubscribe_USCOREdigital_USCOREinput */
        ns2__TaskSubscribeDigitalInput *task_USCOREsubscribe_USCOREdigital_USCOREinput;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREcamera_USCOREimages	(10)	/**< union variant selector value for member task_USCOREsubscribe_USCOREcamera_USCOREimages */
        ns2__TaskSubscribeCameraImages *task_USCOREsubscribe_USCOREcamera_USCOREimages;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREsend_USCOREparameters	(11)	/**< union variant selector value for member task_USCOREsubscribe_USCOREsend_USCOREparameters */
        ns2__TaskSubscribeSendParameters *task_USCOREsubscribe_USCOREsend_USCOREparameters;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREvideo_USCOREstore	(12)	/**< union variant selector value for member task_USCOREsubscribe_USCOREvideo_USCOREstore */
        ns2__TaskSubscribeVideoStore *task_USCOREsubscribe_USCOREvideo_USCOREstore;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREalive	(13)	/**< union variant selector value for member task_USCOREsubscribe_USCOREalive */
        ns2__TaskSubscribeAlive *task_USCOREsubscribe_USCOREalive;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREobjlist	(14)	/**< union variant selector value for member task_USCOREsubscribe_USCOREobjlist */
        ns2__TaskSubscribeObjectList *task_USCOREsubscribe_USCOREobjlist;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREreboot_USCOREnow	(15)	/**< union variant selector value for member task_USCOREreboot_USCOREnow */
        ns2__TaskRebootNow *task_USCOREreboot_USCOREnow;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREclear_USCOREzone	(16)	/**< union variant selector value for member task_USCOREsubscribe_USCOREclear_USCOREzone */
        ns2__TaskSubscribeClearZone *task_USCOREsubscribe_USCOREclear_USCOREzone;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREcount_USCOREchannels	(17)	/**< union variant selector value for member task_USCOREsubscribe_USCOREcount_USCOREchannels */
        ns2__TaskSubscribeCountChannels *task_USCOREsubscribe_USCOREcount_USCOREchannels;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREzone_USCOREchannels	(18)	/**< union variant selector value for member task_USCOREsubscribe_USCOREzone_USCOREchannels */
        ns2__TaskSubscribeZoneChannels *task_USCOREsubscribe_USCOREzone_USCOREchannels;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREfeatures_USCOREinfo	(19)	/**< union variant selector value for member task_USCOREsubscribe_USCOREfeatures_USCOREinfo */
        ns2__TaskSubscribeFeaturesInfo *task_USCOREsubscribe_USCOREfeatures_USCOREinfo;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREdelete_USCOREall_USCOREtasks	(20)	/**< union variant selector value for member task_USCOREdelete_USCOREall_USCOREtasks */
        ns2__TaskDeleteAllTasks *task_USCOREdelete_USCOREall_USCOREtasks;
        #define SOAP_UNION__ns2__union_TaskContainer_task_USCOREdelete_USCOREall_USCOREnotifications	(21)	/**< union variant selector value for member task_USCOREdelete_USCOREall_USCOREnotifications */
        ns2__TaskDeleteAllNotifications *task_USCOREdelete_USCOREall_USCOREnotifications;
};
#endif

/* hella.h:1440 */
#ifndef SOAP_TYPE___ns2__union_TaskContainer
#define SOAP_TYPE___ns2__union_TaskContainer (168)
/* Wrapper: */
class SOAP_CMAC __ns2__union_TaskContainer {
      public:
        /// Union with union _ns2__union_TaskContainer variant selector __union_TaskContainer set to one of: SOAP_UNION__ns2__union_TaskContainer_task_USCORErequest_USCOREupdate SOAP_UNION__ns2__union_TaskContainer_task_USCORErequest_USCOREparameters SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCORElogfiles SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREerror_USCORElog SOAP_UNION__ns2__union_TaskContainer_task_USCOREset_USCOREdigital_USCOREoutput SOAP_UNION__ns2__union_TaskContainer_task_USCOREset_USCOREdate_USCOREtime SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREcounting SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREfill SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREdigital_USCOREinput SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREcamera_USCOREimages SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREsend_USCOREparameters SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREvideo_USCOREstore SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREalive SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREobjlist SOAP_UNION__ns2__union_TaskContainer_task_USCOREreboot_USCOREnow SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREclear_USCOREzone SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREcount_USCOREchannels SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREzone_USCOREchannels SOAP_UNION__ns2__union_TaskContainer_task_USCOREsubscribe_USCOREfeatures_USCOREinfo SOAP_UNION__ns2__union_TaskContainer_task_USCOREdelete_USCOREall_USCOREtasks SOAP_UNION__ns2__union_TaskContainer_task_USCOREdelete_USCOREall_USCOREnotifications
        int __union_TaskContainer;
        union _ns2__union_TaskContainer union_TaskContainer;
      public:
        /// Return unique type id SOAP_TYPE___ns2__union_TaskContainer
        virtual int soap_type(void) const { return SOAP_TYPE___ns2__union_TaskContainer; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type __ns2__union_TaskContainer, default initialized and not managed by a soap context
        virtual __ns2__union_TaskContainer *soap_alloc(void) const { return SOAP_NEW(__ns2__union_TaskContainer); }
      public:
        /// Constructor with initializations
        __ns2__union_TaskContainer()
        {
          __union_TaskContainer = -1;
        }
        virtual ~__ns2__union_TaskContainer() { }
        /// Friend allocator used by soap_new___ns2__union_TaskContainer(struct soap*, int)
        friend SOAP_FMAC1 __ns2__union_TaskContainer * SOAP_FMAC2 soap_instantiate___ns2__union_TaskContainer(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:388 */
#ifndef SOAP_TYPE_ns2__TaskContainer
#define SOAP_TYPE_ns2__TaskContainer (96)
/* Type ns2__TaskContainer is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskContainer': */
class SOAP_CMAC ns2__TaskContainer
{
      public:
        /// Sequence of elements '-union-TaskContainer' of XSD type '-ns2:union-TaskContainer' stored in dynamic array __union_TaskContainer of length __size_TaskContainer
        int __size_TaskContainer;
        __ns2__union_TaskContainer *__union_TaskContainer;//一个动态（联合体元素）数组
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskContainer
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskContainer; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskContainer, default initialized and not managed by a soap context
        virtual ns2__TaskContainer *soap_alloc(void) const { return SOAP_NEW(ns2__TaskContainer); }
      public:
        /// Constructor with initializations
        ns2__TaskContainer()
        {
          __size_TaskContainer = 0;
          __union_TaskContainer = NULL;
          soap = (struct soap *)0;
        }
        virtual ~ns2__TaskContainer() { }
        /// Friend allocator used by soap_new_ns2__TaskContainer(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskContainer * SOAP_FMAC2 soap_instantiate_ns2__TaskContainer(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:220 */
#ifndef SOAP_TYPE_ns2__NotificationWithOSDState
#define SOAP_TYPE_ns2__NotificationWithOSDState (40)
/* Type ns2__NotificationWithOSDState is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:NotificationWithOSDState': */
class SOAP_CMAC ns2__NotificationWithOSDState : public ns2__NotificationBase {
      public:
        /// required attribute 'osd_state' of XSD type 'ns2:OSD_State'
        enum ns2__OSD_USCOREState osd_USCOREstate;
      public:
        /// Return unique type id SOAP_TYPE_ns2__NotificationWithOSDState
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__NotificationWithOSDState; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__NotificationWithOSDState, default initialized and not managed by a soap context
        virtual ns2__NotificationWithOSDState *soap_alloc(void) const { return SOAP_NEW(ns2__NotificationWithOSDState); }
      public:
        /// Constructor with initializations
        ns2__NotificationWithOSDState()
        {
          osd_USCOREstate = (enum ns2__OSD_USCOREState)0;
        }
        virtual ~ns2__NotificationWithOSDState() { }
        /// Friend allocator used by soap_new_ns2__NotificationWithOSDState(struct soap*, int)
        friend SOAP_FMAC1 ns2__NotificationWithOSDState * SOAP_FMAC2 soap_instantiate_ns2__NotificationWithOSDState(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:244 */
#ifndef SOAP_TYPE_ns2__DigitalInputNotification
#define SOAP_TYPE_ns2__DigitalInputNotification (48)
/* Type ns2__DigitalInputNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:DigitalInputNotification': */
class SOAP_CMAC ns2__DigitalInputNotification : public ns2__NotificationBase {
      public:
        /// Sequence of 1 to 16 elements 'ns2:digital_input_port' of XSD type 'ns2:DigitalInputElement' stored in dynamic array digital_USCOREinput_USCOREport of length __sizedigital_USCOREinput_USCOREport
        int __sizedigital_USCOREinput_USCOREport;
        ns2__DigitalInputElement **digital_USCOREinput_USCOREport;
      public:
        /// Return unique type id SOAP_TYPE_ns2__DigitalInputNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__DigitalInputNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__DigitalInputNotification, default initialized and not managed by a soap context
        virtual ns2__DigitalInputNotification *soap_alloc(void) const { return SOAP_NEW(ns2__DigitalInputNotification); }
      public:
        /// Constructor with initializations
        ns2__DigitalInputNotification()
        {
          __sizedigital_USCOREinput_USCOREport = 0;
          digital_USCOREinput_USCOREport = NULL;
        }
        virtual ~ns2__DigitalInputNotification() { }
        /// Friend allocator used by soap_new_ns2__DigitalInputNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__DigitalInputNotification * SOAP_FMAC2 soap_instantiate_ns2__DigitalInputNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:253 */
#ifndef SOAP_TYPE_ns2__LogfilesNotification
#define SOAP_TYPE_ns2__LogfilesNotification (51)
/* Type ns2__LogfilesNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:LogfilesNotification': */
class SOAP_CMAC ns2__LogfilesNotification : public ns2__NotificationBase {
      public:
        /// Required element 'ns2:log_data' of XSD type 'ns2:BinaryData'
        ns2__BinaryData *log_USCOREdata;
      public:
        /// Return unique type id SOAP_TYPE_ns2__LogfilesNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__LogfilesNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__LogfilesNotification, default initialized and not managed by a soap context
        virtual ns2__LogfilesNotification *soap_alloc(void) const { return SOAP_NEW(ns2__LogfilesNotification); }
      public:
        /// Constructor with initializations
        ns2__LogfilesNotification()
        {
          log_USCOREdata = (ns2__BinaryData *)0;
        }
        virtual ~ns2__LogfilesNotification() { }
        /// Friend allocator used by soap_new_ns2__LogfilesNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__LogfilesNotification * SOAP_FMAC2 soap_instantiate_ns2__LogfilesNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:256 */
#ifndef SOAP_TYPE_ns2__ParameterNotification
#define SOAP_TYPE_ns2__ParameterNotification (52)
/* Type ns2__ParameterNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:ParameterNotification': */
class SOAP_CMAC ns2__ParameterNotification : public ns2__NotificationBase {
      public:
        /// Required element 'ns2:parameter_data' of XSD type 'ns2:BinaryData'
        ns2__BinaryData *parameter_USCOREdata;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ParameterNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ParameterNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ParameterNotification, default initialized and not managed by a soap context
        virtual ns2__ParameterNotification *soap_alloc(void) const { return SOAP_NEW(ns2__ParameterNotification); }
      public:
        /// Constructor with initializations
        ns2__ParameterNotification()
        {
          parameter_USCOREdata = (ns2__BinaryData *)0;
        }
        virtual ~ns2__ParameterNotification() { }
        /// Friend allocator used by soap_new_ns2__ParameterNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__ParameterNotification * SOAP_FMAC2 soap_instantiate_ns2__ParameterNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:286 */
#ifndef SOAP_TYPE_ns2__Coordinate_USCORE3D
#define SOAP_TYPE_ns2__Coordinate_USCORE3D (62)
/* Type ns2__Coordinate_USCORE3D is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:Coordinate_3D': */
class SOAP_CMAC ns2__Coordinate_USCORE3D : public ns2__Coordinate_USCORE2D {
      public:
        /// required attribute 'z' of XSD type 'xsd:int'
        int z;
      public:
        /// Return unique type id SOAP_TYPE_ns2__Coordinate_USCORE3D
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__Coordinate_USCORE3D; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__Coordinate_USCORE3D, default initialized and not managed by a soap context
        virtual ns2__Coordinate_USCORE3D *soap_alloc(void) const { return SOAP_NEW(ns2__Coordinate_USCORE3D); }
      public:
        /// Constructor with initializations
        ns2__Coordinate_USCORE3D()
        {
          z = (int)0;
        }
        virtual ~ns2__Coordinate_USCORE3D() { }
        /// Friend allocator used by soap_new_ns2__Coordinate_USCORE3D(struct soap*, int)
        friend SOAP_FMAC1 ns2__Coordinate_USCORE3D * SOAP_FMAC2 soap_instantiate_ns2__Coordinate_USCORE3D(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:292 */
#ifndef SOAP_TYPE_ns2__CurrentObject
#define SOAP_TYPE_ns2__CurrentObject (64)
/* Type ns2__CurrentObject is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:CurrentObject': */
class SOAP_CMAC ns2__CurrentObject : public ns2__Object {
      public:
        /// Required element 'ns2:pos' of XSD type 'ns2:Coordinate_3D'
        ns2__Coordinate_USCORE3D *pos;
        /// Required element 'ns2:mov' of XSD type 'ns2:Coordinate_2D'
        ns2__Coordinate_USCORE2D *mov;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CurrentObject
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CurrentObject; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CurrentObject, default initialized and not managed by a soap context
        virtual ns2__CurrentObject *soap_alloc(void) const { return SOAP_NEW(ns2__CurrentObject); }
      public:
        /// Constructor with initializations
        ns2__CurrentObject()
        {
          pos = (ns2__Coordinate_USCORE3D *)0;
          mov = (ns2__Coordinate_USCORE2D *)0;
        }
        virtual ~ns2__CurrentObject() { }
        /// Friend allocator used by soap_new_ns2__CurrentObject(struct soap*, int)
        friend SOAP_FMAC1 ns2__CurrentObject * SOAP_FMAC2 soap_instantiate_ns2__CurrentObject(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:295 */
#ifndef SOAP_TYPE_ns2__HistoricObject
#define SOAP_TYPE_ns2__HistoricObject (65)
/* Type ns2__HistoricObject is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:HistoricObject': */
class SOAP_CMAC ns2__HistoricObject : public ns2__Object {
      public:
        /// Required element 'ns2:exit' of XSD type 'ns2:Coordinate_3D'
        ns2__Coordinate_USCORE3D *exit;
        /// required attribute 'exit_time' of XSD type 'xsd:dateTime'
        time_t exit_USCOREtime;
        /// required attribute 'height' of XSD type 'xsd:unsignedInt'
        unsigned int height;
      public:
        /// Return unique type id SOAP_TYPE_ns2__HistoricObject
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__HistoricObject; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__HistoricObject, default initialized and not managed by a soap context
        virtual ns2__HistoricObject *soap_alloc(void) const { return SOAP_NEW(ns2__HistoricObject); }
      public:
        /// Constructor with initializations
        ns2__HistoricObject()
        {
          exit = (ns2__Coordinate_USCORE3D *)0;
          exit_USCOREtime = (time_t)0;
          height = (unsigned int)0;
        }
        virtual ~ns2__HistoricObject() { }
        /// Friend allocator used by soap_new_ns2__HistoricObject(struct soap*, int)
        friend SOAP_FMAC1 ns2__HistoricObject * SOAP_FMAC2 soap_instantiate_ns2__HistoricObject(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:301 */
#ifndef SOAP_TYPE_ns2__HistoricObjectListNotificationBase
#define SOAP_TYPE_ns2__HistoricObjectListNotificationBase (67)
/* Type ns2__HistoricObjectListNotificationBase is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:HistoricObjectListNotificationBase': */
class SOAP_CMAC ns2__HistoricObjectListNotificationBase : public ns2__NotificationBase {
      public:
        /// Sequence of elements 'ns2:obj' of XSD type 'ns2:HistoricObject' stored in dynamic array obj of length __sizeobj
        int __sizeobj;
        ns2__HistoricObject **obj;
        /// Optional element 'ns2:binary_data' of XSD type 'ns2:BinaryData'
        ns2__BinaryData *binary_USCOREdata;
      public:
        /// Return unique type id SOAP_TYPE_ns2__HistoricObjectListNotificationBase
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__HistoricObjectListNotificationBase; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__HistoricObjectListNotificationBase, default initialized and not managed by a soap context
        virtual ns2__HistoricObjectListNotificationBase *soap_alloc(void) const { return SOAP_NEW(ns2__HistoricObjectListNotificationBase); }
      public:
        /// Constructor with initializations
        ns2__HistoricObjectListNotificationBase()
        {
          __sizeobj = 0;
          obj = NULL;
          binary_USCOREdata = (ns2__BinaryData *)0;
        }
        virtual ~ns2__HistoricObjectListNotificationBase() { }
        /// Friend allocator used by soap_new_ns2__HistoricObjectListNotificationBase(struct soap*, int)
        friend SOAP_FMAC1 ns2__HistoricObjectListNotificationBase * SOAP_FMAC2 soap_instantiate_ns2__HistoricObjectListNotificationBase(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:313 */
#ifndef SOAP_TYPE_ns2__TaskRebootNow
#define SOAP_TYPE_ns2__TaskRebootNow (71)
/* Type ns2__TaskRebootNow is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskRebootNow': */
class SOAP_CMAC ns2__TaskRebootNow : public ns2__Task {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskRebootNow
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskRebootNow; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskRebootNow, default initialized and not managed by a soap context
        virtual ns2__TaskRebootNow *soap_alloc(void) const { return SOAP_NEW(ns2__TaskRebootNow); }
      public:
        /// Constructor with initializations
        ns2__TaskRebootNow()
        {
        }
        virtual ~ns2__TaskRebootNow() { }
        /// Friend allocator used by soap_new_ns2__TaskRebootNow(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskRebootNow * SOAP_FMAC2 soap_instantiate_ns2__TaskRebootNow(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:316 */
#ifndef SOAP_TYPE_ns2__TaskRequestUpdate
#define SOAP_TYPE_ns2__TaskRequestUpdate (72)
/* Type ns2__TaskRequestUpdate is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskRequestUpdate': */
class SOAP_CMAC ns2__TaskRequestUpdate : public ns2__Task {
      public:
        /// required attribute 'update_type' of XSD type 'ns2:UpdateType'
        enum ns2__UpdateType update_USCOREtype;
        /// required attribute 'packet_url' of XSD type 'xsd:string'
        std::wstring packet_USCOREurl;
        /// required attribute 'validity' of XSD type 'xsd:unsignedInt'
        unsigned int validity;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskRequestUpdate
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskRequestUpdate; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskRequestUpdate, default initialized and not managed by a soap context
        virtual ns2__TaskRequestUpdate *soap_alloc(void) const { return SOAP_NEW(ns2__TaskRequestUpdate); }
      public:
        /// Constructor with initializations
        ns2__TaskRequestUpdate()
        {
          update_USCOREtype = (enum ns2__UpdateType)0;
          validity = (unsigned int)0;
        }
        virtual ~ns2__TaskRequestUpdate() { }
        /// Friend allocator used by soap_new_ns2__TaskRequestUpdate(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskRequestUpdate * SOAP_FMAC2 soap_instantiate_ns2__TaskRequestUpdate(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:319 */
#ifndef SOAP_TYPE_ns2__TaskRequestParameters
#define SOAP_TYPE_ns2__TaskRequestParameters (73)
/* Type ns2__TaskRequestParameters is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskRequestParameters': */
class SOAP_CMAC ns2__TaskRequestParameters : public ns2__Task {
      public:
        /// required attribute 'packet_url' of XSD type 'xsd:string'
        std::wstring packet_USCOREurl;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskRequestParameters
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskRequestParameters; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskRequestParameters, default initialized and not managed by a soap context
        virtual ns2__TaskRequestParameters *soap_alloc(void) const { return SOAP_NEW(ns2__TaskRequestParameters); }
      public:
        /// Constructor with initializations
        ns2__TaskRequestParameters()
        {
        }
        virtual ~ns2__TaskRequestParameters() { }
        /// Friend allocator used by soap_new_ns2__TaskRequestParameters(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskRequestParameters * SOAP_FMAC2 soap_instantiate_ns2__TaskRequestParameters(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:322 */
#ifndef SOAP_TYPE_ns2__TaskWithActivity
#define SOAP_TYPE_ns2__TaskWithActivity (74)
/* Type ns2__TaskWithActivity is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskWithActivity': */
class SOAP_CMAC ns2__TaskWithActivity : public ns2__Task {
      public:
        /// required attribute 'activity_state' of XSD type 'xsd:boolean'
        bool activity_USCOREstate;
        /// optional attribute 'store_task' of XSD type 'xsd:boolean'
        bool *store_USCOREtask;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskWithActivity
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskWithActivity; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskWithActivity, default initialized and not managed by a soap context
        virtual ns2__TaskWithActivity *soap_alloc(void) const { return SOAP_NEW(ns2__TaskWithActivity); }
      public:
        /// Constructor with initializations
        ns2__TaskWithActivity()
        {
          activity_USCOREstate = (bool)0;
          store_USCOREtask = (bool *)0;
        }
        virtual ~ns2__TaskWithActivity() { }
        /// Friend allocator used by soap_new_ns2__TaskWithActivity(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskWithActivity * SOAP_FMAC2 soap_instantiate_ns2__TaskWithActivity(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:328 */
#ifndef SOAP_TYPE_ns2__TaskSetDateTime
#define SOAP_TYPE_ns2__TaskSetDateTime (76)
/* Type ns2__TaskSetDateTime is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSetDateTime': */
class SOAP_CMAC ns2__TaskSetDateTime : public ns2__Task {
      public:
        /// required attribute 'time_to_set' of XSD type 'xsd:dateTime'
        time_t time_USCOREto_USCOREset;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSetDateTime
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSetDateTime; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSetDateTime, default initialized and not managed by a soap context
        virtual ns2__TaskSetDateTime *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSetDateTime); }
      public:
        /// Constructor with initializations
        ns2__TaskSetDateTime()
        {
          time_USCOREto_USCOREset = (time_t)0;
        }
        virtual ~ns2__TaskSetDateTime() { }
        /// Friend allocator used by soap_new_ns2__TaskSetDateTime(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSetDateTime * SOAP_FMAC2 soap_instantiate_ns2__TaskSetDateTime(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:382 */
#ifndef SOAP_TYPE_ns2__TaskDeleteAllTasks
#define SOAP_TYPE_ns2__TaskDeleteAllTasks (94)
/* Type ns2__TaskDeleteAllTasks is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskDeleteAllTasks': */
class SOAP_CMAC ns2__TaskDeleteAllTasks : public ns2__Task {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskDeleteAllTasks
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskDeleteAllTasks; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskDeleteAllTasks, default initialized and not managed by a soap context
        virtual ns2__TaskDeleteAllTasks *soap_alloc(void) const { return SOAP_NEW(ns2__TaskDeleteAllTasks); }
      public:
        /// Constructor with initializations
        ns2__TaskDeleteAllTasks()
        {
        }
        virtual ~ns2__TaskDeleteAllTasks() { }
        /// Friend allocator used by soap_new_ns2__TaskDeleteAllTasks(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskDeleteAllTasks * SOAP_FMAC2 soap_instantiate_ns2__TaskDeleteAllTasks(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:385 */
#ifndef SOAP_TYPE_ns2__TaskDeleteAllNotifications
#define SOAP_TYPE_ns2__TaskDeleteAllNotifications (95)
/* Type ns2__TaskDeleteAllNotifications is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskDeleteAllNotifications': */
class SOAP_CMAC ns2__TaskDeleteAllNotifications : public ns2__Task {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskDeleteAllNotifications
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskDeleteAllNotifications; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskDeleteAllNotifications, default initialized and not managed by a soap context
        virtual ns2__TaskDeleteAllNotifications *soap_alloc(void) const { return SOAP_NEW(ns2__TaskDeleteAllNotifications); }
      public:
        /// Constructor with initializations
        ns2__TaskDeleteAllNotifications()
        {
        }
        virtual ~ns2__TaskDeleteAllNotifications() { }
        /// Friend allocator used by soap_new_ns2__TaskDeleteAllNotifications(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskDeleteAllNotifications * SOAP_FMAC2 soap_instantiate_ns2__TaskDeleteAllNotifications(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:391 */
#ifndef SOAP_TYPE_ns2__AnswerContainer
#define SOAP_TYPE_ns2__AnswerContainer (97)
/* Type ns2__AnswerContainer is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:AnswerContainer': */
class SOAP_CMAC ns2__AnswerContainer : public ns2__TaskContainer {
      public:
        /// required attribute 'referenced_notification_ID' of XSD type 'xsd:unsignedInt'
        unsigned int referenced_USCOREnotification_USCOREID;
        /// required attribute 'server_response_type' of XSD type 'ns2:SOAP_ServerError'
        enum ns2__SOAP_USCOREServerError server_USCOREresponse_USCOREtype;
        /// optional attribute 'version' of XSD type 'xsd:decimal'
        std::wstring *version;
      public:
        /// Return unique type id SOAP_TYPE_ns2__AnswerContainer
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__AnswerContainer; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__AnswerContainer, default initialized and not managed by a soap context
        virtual ns2__AnswerContainer *soap_alloc(void) const { return SOAP_NEW(ns2__AnswerContainer); }
      public:
        /// Constructor with initializations
        ns2__AnswerContainer()
        {
          referenced_USCOREnotification_USCOREID = (unsigned int)0;
          server_USCOREresponse_USCOREtype = (enum ns2__SOAP_USCOREServerError)0;
          version = (std::wstring *)0;
        }
        virtual ~ns2__AnswerContainer() { }
        /// Friend allocator used by soap_new_ns2__AnswerContainer(struct soap*, int)
        friend SOAP_FMAC1 ns2__AnswerContainer * SOAP_FMAC2 soap_instantiate_ns2__AnswerContainer(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:223 */
#ifndef SOAP_TYPE_ns2__ExtendedNotificationBase
#define SOAP_TYPE_ns2__ExtendedNotificationBase (41)
/* Type ns2__ExtendedNotificationBase is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:ExtendedNotificationBase': */
class SOAP_CMAC ns2__ExtendedNotificationBase : public ns2__NotificationWithOSDState {
      public:
        /// required attribute 'ip_address' of XSD type 'ns2:IP_Address'
        std::wstring ip_USCOREaddress;
        /// required attribute 'firmware_version' of XSD type 'xsd:string'
        std::wstring firmware_USCOREversion;
        /// required attribute 'customer_version' of XSD type 'xsd:string'
        std::wstring customer_USCOREversion;
        /// optional attribute 'version' of XSD type 'xsd:decimal'
        std::wstring *version;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ExtendedNotificationBase
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ExtendedNotificationBase; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ExtendedNotificationBase, default initialized and not managed by a soap context
        virtual ns2__ExtendedNotificationBase *soap_alloc(void) const { return SOAP_NEW(ns2__ExtendedNotificationBase); }
      public:
        /// Constructor with initializations
        ns2__ExtendedNotificationBase()
        {
          version = (std::wstring *)0;
        }
        virtual ~ns2__ExtendedNotificationBase() { }
        /// Friend allocator used by soap_new_ns2__ExtendedNotificationBase(struct soap*, int)
        friend SOAP_FMAC1 ns2__ExtendedNotificationBase * SOAP_FMAC2 soap_instantiate_ns2__ExtendedNotificationBase(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:226 */
#ifndef SOAP_TYPE_ns2__CountNotification
#define SOAP_TYPE_ns2__CountNotification (42)
/* Type ns2__CountNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:CountNotification': */
class SOAP_CMAC ns2__CountNotification : public ns2__NotificationWithOSDState {
      public:
        /// Required element 'ns2:counting_gate_id' of XSD type 'ns2:CountingGateID'
        ns2__CountingGateID *counting_USCOREgate_USCOREid;
        /// required attribute 'count_in' of XSD type 'xsd:unsignedInt'
        unsigned int count_USCOREin;
        /// required attribute 'count_out' of XSD type 'xsd:unsignedInt'
        unsigned int count_USCOREout;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CountNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CountNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CountNotification, default initialized and not managed by a soap context
        virtual ns2__CountNotification *soap_alloc(void) const { return SOAP_NEW(ns2__CountNotification); }
      public:
        /// Constructor with initializations
        ns2__CountNotification()
        {
          counting_USCOREgate_USCOREid = (ns2__CountingGateID *)0;
          count_USCOREin = (unsigned int)0;
          count_USCOREout = (unsigned int)0;
        }
        virtual ~ns2__CountNotification() { }
        /// Friend allocator used by soap_new_ns2__CountNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__CountNotification * SOAP_FMAC2 soap_instantiate_ns2__CountNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:232 */
#ifndef SOAP_TYPE_ns2__CountChannelsNotification
#define SOAP_TYPE_ns2__CountChannelsNotification (44)
/* Type ns2__CountChannelsNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:CountChannelsNotification': */
class SOAP_CMAC ns2__CountChannelsNotification : public ns2__NotificationWithOSDState {
      public:
        /// Sequence of elements 'ns2:count_channel' of XSD type 'ns2:CountChannelData' stored in dynamic array count_USCOREchannel of length __sizecount_USCOREchannel
        int __sizecount_USCOREchannel;
        ns2__CountChannelData **count_USCOREchannel;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CountChannelsNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CountChannelsNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CountChannelsNotification, default initialized and not managed by a soap context
        virtual ns2__CountChannelsNotification *soap_alloc(void) const { return SOAP_NEW(ns2__CountChannelsNotification); }
      public:
        /// Constructor with initializations
        ns2__CountChannelsNotification()
        {
          __sizecount_USCOREchannel = 0;
          count_USCOREchannel = NULL;
        }
        virtual ~ns2__CountChannelsNotification() { }
        /// Friend allocator used by soap_new_ns2__CountChannelsNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__CountChannelsNotification * SOAP_FMAC2 soap_instantiate_ns2__CountChannelsNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:238 */
#ifndef SOAP_TYPE_ns2__ZoneChannelsNotification
#define SOAP_TYPE_ns2__ZoneChannelsNotification (46)
/* Type ns2__ZoneChannelsNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:ZoneChannelsNotification': */
class SOAP_CMAC ns2__ZoneChannelsNotification : public ns2__NotificationWithOSDState {
      public:
        /// Sequence of elements 'ns2:zone_channel' of XSD type 'ns2:ZoneData' stored in dynamic array zone_USCOREchannel of length __sizezone_USCOREchannel
        int __sizezone_USCOREchannel;
        ns2__ZoneData **zone_USCOREchannel;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ZoneChannelsNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ZoneChannelsNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ZoneChannelsNotification, default initialized and not managed by a soap context
        virtual ns2__ZoneChannelsNotification *soap_alloc(void) const { return SOAP_NEW(ns2__ZoneChannelsNotification); }
      public:
        /// Constructor with initializations
        ns2__ZoneChannelsNotification()
        {
          __sizezone_USCOREchannel = 0;
          zone_USCOREchannel = NULL;
        }
        virtual ~ns2__ZoneChannelsNotification() { }
        /// Friend allocator used by soap_new_ns2__ZoneChannelsNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__ZoneChannelsNotification * SOAP_FMAC2 soap_instantiate_ns2__ZoneChannelsNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:241 */
#ifndef SOAP_TYPE_ns2__FillNotification
#define SOAP_TYPE_ns2__FillNotification (47)
/* Type ns2__FillNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:FillNotification': */
class SOAP_CMAC ns2__FillNotification : public ns2__NotificationWithOSDState {
      public:
        /// Required element 'ns2:fill_region_id' of XSD type 'ns2:FillRegionID'
        ns2__FillRegionID *fill_USCOREregion_USCOREid;
        /// required attribute 'fill_level' of XSD type 'xsd:unsignedInt'
        unsigned int fill_USCORElevel;
      public:
        /// Return unique type id SOAP_TYPE_ns2__FillNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__FillNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__FillNotification, default initialized and not managed by a soap context
        virtual ns2__FillNotification *soap_alloc(void) const { return SOAP_NEW(ns2__FillNotification); }
      public:
        /// Constructor with initializations
        ns2__FillNotification()
        {
          fill_USCOREregion_USCOREid = (ns2__FillRegionID *)0;
          fill_USCORElevel = (unsigned int)0;
        }
        virtual ~ns2__FillNotification() { }
        /// Friend allocator used by soap_new_ns2__FillNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__FillNotification * SOAP_FMAC2 soap_instantiate_ns2__FillNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:247 */
#ifndef SOAP_TYPE_ns2__ClearZoneNotification
#define SOAP_TYPE_ns2__ClearZoneNotification (49)
/* Type ns2__ClearZoneNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:ClearZoneNotification': */
class SOAP_CMAC ns2__ClearZoneNotification : public ns2__NotificationWithOSDState {
      public:
        /// Required element 'ns2:clear_zone_id' of XSD type 'ns2:ClearZoneID'
        ns2__ClearZoneID *clear_USCOREzone_USCOREid;
        /// required attribute 'is_blocked' of XSD type 'xsd:boolean'
        bool is_USCOREblocked;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ClearZoneNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ClearZoneNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ClearZoneNotification, default initialized and not managed by a soap context
        virtual ns2__ClearZoneNotification *soap_alloc(void) const { return SOAP_NEW(ns2__ClearZoneNotification); }
      public:
        /// Constructor with initializations
        ns2__ClearZoneNotification()
        {
          clear_USCOREzone_USCOREid = (ns2__ClearZoneID *)0;
          is_USCOREblocked = (bool)0;
        }
        virtual ~ns2__ClearZoneNotification() { }
        /// Friend allocator used by soap_new_ns2__ClearZoneNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__ClearZoneNotification * SOAP_FMAC2 soap_instantiate_ns2__ClearZoneNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:250 */
#ifndef SOAP_TYPE_ns2__CameraImagesNotification
#define SOAP_TYPE_ns2__CameraImagesNotification (50)
/* Type ns2__CameraImagesNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:CameraImagesNotification': */
class SOAP_CMAC ns2__CameraImagesNotification : public ns2__NotificationWithOSDState {
      public:
        /// Required element 'ns2:camera_images' of XSD type 'ns2:BinaryData'
        ns2__BinaryData *camera_USCOREimages;
        /// Required element 'ns2:eval_map' of XSD type 'ns2:BinaryData'
        ns2__BinaryData *eval_USCOREmap;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CameraImagesNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CameraImagesNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CameraImagesNotification, default initialized and not managed by a soap context
        virtual ns2__CameraImagesNotification *soap_alloc(void) const { return SOAP_NEW(ns2__CameraImagesNotification); }
      public:
        /// Constructor with initializations
        ns2__CameraImagesNotification()
        {
          camera_USCOREimages = (ns2__BinaryData *)0;
          eval_USCOREmap = (ns2__BinaryData *)0;
        }
        virtual ~ns2__CameraImagesNotification() { }
        /// Friend allocator used by soap_new_ns2__CameraImagesNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__CameraImagesNotification * SOAP_FMAC2 soap_instantiate_ns2__CameraImagesNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:298 */
#ifndef SOAP_TYPE_ns2__CurrentObjectListNotification
#define SOAP_TYPE_ns2__CurrentObjectListNotification (66)
/* Type ns2__CurrentObjectListNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:CurrentObjectListNotification': */
class SOAP_CMAC ns2__CurrentObjectListNotification : public ns2__NotificationWithOSDState {
      public:
        /// Sequence of elements 'ns2:obj' of XSD type 'ns2:CurrentObject' stored in dynamic array obj of length __sizeobj
        int __sizeobj;
        ns2__CurrentObject **obj;
        /// Optional element 'ns2:binary_data' of XSD type 'ns2:BinaryData'
        ns2__BinaryData *binary_USCOREdata;
      public:
        /// Return unique type id SOAP_TYPE_ns2__CurrentObjectListNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__CurrentObjectListNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__CurrentObjectListNotification, default initialized and not managed by a soap context
        virtual ns2__CurrentObjectListNotification *soap_alloc(void) const { return SOAP_NEW(ns2__CurrentObjectListNotification); }
      public:
        /// Constructor with initializations
        ns2__CurrentObjectListNotification()
        {
          __sizeobj = 0;
          obj = NULL;
          binary_USCOREdata = (ns2__BinaryData *)0;
        }
        virtual ~ns2__CurrentObjectListNotification() { }
        /// Friend allocator used by soap_new_ns2__CurrentObjectListNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__CurrentObjectListNotification * SOAP_FMAC2 soap_instantiate_ns2__CurrentObjectListNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:304 */
#ifndef SOAP_TYPE_ns2__HistoricObjectListNotification
#define SOAP_TYPE_ns2__HistoricObjectListNotification (68)
/* Type ns2__HistoricObjectListNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:HistoricObjectListNotification': */
class SOAP_CMAC ns2__HistoricObjectListNotification : public ns2__HistoricObjectListNotificationBase {
      public:
        /// required attribute 'lost_count' of XSD type 'xsd:unsignedInt'
        unsigned int lost_USCOREcount;
      public:
        /// Return unique type id SOAP_TYPE_ns2__HistoricObjectListNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__HistoricObjectListNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__HistoricObjectListNotification, default initialized and not managed by a soap context
        virtual ns2__HistoricObjectListNotification *soap_alloc(void) const { return SOAP_NEW(ns2__HistoricObjectListNotification); }
      public:
        /// Constructor with initializations
        ns2__HistoricObjectListNotification()
        {
          lost_USCOREcount = (unsigned int)0;
        }
        virtual ~ns2__HistoricObjectListNotification() { }
        /// Friend allocator used by soap_new_ns2__HistoricObjectListNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__HistoricObjectListNotification * SOAP_FMAC2 soap_instantiate_ns2__HistoricObjectListNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:325 */
#ifndef SOAP_TYPE_ns2__TaskSetDigitalOutput
#define SOAP_TYPE_ns2__TaskSetDigitalOutput (75)
/* Type ns2__TaskSetDigitalOutput is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSetDigitalOutput': */
class SOAP_CMAC ns2__TaskSetDigitalOutput : public ns2__TaskWithActivity {
      public:
        /// Sequence of 1 to 16 elements 'ns2:digital_output_port' of XSD type 'ns2:DigitalOutputElement' stored in dynamic array digital_USCOREoutput_USCOREport of length __sizedigital_USCOREoutput_USCOREport
        int __sizedigital_USCOREoutput_USCOREport;
        ns2__DigitalOutputElement **digital_USCOREoutput_USCOREport;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSetDigitalOutput
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSetDigitalOutput; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSetDigitalOutput, default initialized and not managed by a soap context
        virtual ns2__TaskSetDigitalOutput *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSetDigitalOutput); }
      public:
        /// Constructor with initializations
        ns2__TaskSetDigitalOutput()
        {
          __sizedigital_USCOREoutput_USCOREport = 0;
          digital_USCOREoutput_USCOREport = NULL;
        }
        virtual ~ns2__TaskSetDigitalOutput() { }
        /// Friend allocator used by soap_new_ns2__TaskSetDigitalOutput(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSetDigitalOutput * SOAP_FMAC2 soap_instantiate_ns2__TaskSetDigitalOutput(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:331 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeTriggered
#define SOAP_TYPE_ns2__TaskSubscribeTriggered (77)
/* Type ns2__TaskSubscribeTriggered is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeTriggered': */
class SOAP_CMAC ns2__TaskSubscribeTriggered : public ns2__TaskWithActivity {
      public:
        /// Required element 'ns2:trigger' of XSD type 'ns2:Trigger'
        ns2__Trigger *trigger;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeTriggered
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeTriggered; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeTriggered, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeTriggered *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeTriggered); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeTriggered()
        {
          trigger = (ns2__Trigger *)0;
        }
        virtual ~ns2__TaskSubscribeTriggered() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeTriggered(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeTriggered * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeTriggered(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:259 */
#ifndef SOAP_TYPE_ns2__ErrorLogfilesNotification
#define SOAP_TYPE_ns2__ErrorLogfilesNotification (53)
/* Type ns2__ErrorLogfilesNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:ErrorLogfilesNotification': */
class SOAP_CMAC ns2__ErrorLogfilesNotification : public ns2__ExtendedNotificationBase {
      public:
        /// Required element 'ns2:error_log_data' of XSD type 'ns2:BinaryData'
        ns2__BinaryData *error_USCORElog_USCOREdata;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ErrorLogfilesNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ErrorLogfilesNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ErrorLogfilesNotification, default initialized and not managed by a soap context
        virtual ns2__ErrorLogfilesNotification *soap_alloc(void) const { return SOAP_NEW(ns2__ErrorLogfilesNotification); }
      public:
        /// Constructor with initializations
        ns2__ErrorLogfilesNotification()
        {
          error_USCORElog_USCOREdata = (ns2__BinaryData *)0;
        }
        virtual ~ns2__ErrorLogfilesNotification() { }
        /// Friend allocator used by soap_new_ns2__ErrorLogfilesNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__ErrorLogfilesNotification * SOAP_FMAC2 soap_instantiate_ns2__ErrorLogfilesNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:262 */
#ifndef SOAP_TYPE_ns2__AliveNotification
#define SOAP_TYPE_ns2__AliveNotification (54)
/* Type ns2__AliveNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:AliveNotification': */
class SOAP_CMAC ns2__AliveNotification : public ns2__ExtendedNotificationBase {
      public:
        /// Return unique type id SOAP_TYPE_ns2__AliveNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__AliveNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__AliveNotification, default initialized and not managed by a soap context
        virtual ns2__AliveNotification *soap_alloc(void) const { return SOAP_NEW(ns2__AliveNotification); }
      public:
        /// Constructor with initializations
        ns2__AliveNotification()
        {
        }
        virtual ~ns2__AliveNotification() { }
        /// Friend allocator used by soap_new_ns2__AliveNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__AliveNotification * SOAP_FMAC2 soap_instantiate_ns2__AliveNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:265 */
#ifndef SOAP_TYPE_ns2__StartupNotification
#define SOAP_TYPE_ns2__StartupNotification (55)
/* Type ns2__StartupNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:StartupNotification': */
class SOAP_CMAC ns2__StartupNotification : public ns2__ExtendedNotificationBase {
      public:
        /// required attribute 'reboot_type' of XSD type 'ns2:RebootType'
        enum ns2__RebootType reboot_USCOREtype;
        /// required attribute 'xml_version' of XSD type 'xsd:string'
        std::wstring xml_USCOREversion;
      public:
        /// Return unique type id SOAP_TYPE_ns2__StartupNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__StartupNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__StartupNotification, default initialized and not managed by a soap context
        virtual ns2__StartupNotification *soap_alloc(void) const { return SOAP_NEW(ns2__StartupNotification); }
      public:
        /// Constructor with initializations
        ns2__StartupNotification()
        {
          reboot_USCOREtype = (enum ns2__RebootType)0;
        }
        virtual ~ns2__StartupNotification() { }
        /// Friend allocator used by soap_new_ns2__StartupNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__StartupNotification * SOAP_FMAC2 soap_instantiate_ns2__StartupNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:280 */
#ifndef SOAP_TYPE_ns2__FeatureInfoNotification
#define SOAP_TYPE_ns2__FeatureInfoNotification (60)
/* Type ns2__FeatureInfoNotification is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:FeatureInfoNotification': */
class SOAP_CMAC ns2__FeatureInfoNotification : public ns2__ExtendedNotificationBase {
      public:
        /// Required element 'ns2:active_count_channels' of XSD type 'ns2:CountChannelsFeatureInfo'
        ns2__CountChannelsFeatureInfo *active_USCOREcount_USCOREchannels;
        /// Optional element 'ns2:active_zone_channels' of XSD type 'ns2:ZoneChannelsFeatureInfo'
        ns2__ZoneChannelsFeatureInfo *active_USCOREzone_USCOREchannels;
      public:
        /// Return unique type id SOAP_TYPE_ns2__FeatureInfoNotification
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__FeatureInfoNotification; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__FeatureInfoNotification, default initialized and not managed by a soap context
        virtual ns2__FeatureInfoNotification *soap_alloc(void) const { return SOAP_NEW(ns2__FeatureInfoNotification); }
      public:
        /// Constructor with initializations
        ns2__FeatureInfoNotification()
        {
          active_USCOREcount_USCOREchannels = (ns2__CountChannelsFeatureInfo *)0;
          active_USCOREzone_USCOREchannels = (ns2__ZoneChannelsFeatureInfo *)0;
        }
        virtual ~ns2__FeatureInfoNotification() { }
        /// Friend allocator used by soap_new_ns2__FeatureInfoNotification(struct soap*, int)
        friend SOAP_FMAC1 ns2__FeatureInfoNotification * SOAP_FMAC2 soap_instantiate_ns2__FeatureInfoNotification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:334 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeTriggeredSafe
#define SOAP_TYPE_ns2__TaskSubscribeTriggeredSafe (78)
/* Type ns2__TaskSubscribeTriggeredSafe is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeTriggeredSafe': */
class SOAP_CMAC ns2__TaskSubscribeTriggeredSafe : public ns2__TaskSubscribeTriggered {
      public:
        /// optional attribute 'store_on_transmission_error' of XSD type 'xsd:boolean'
        bool store_USCOREon_USCOREtransmission_USCOREerror;	///< default = (bool)0
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeTriggeredSafe
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeTriggeredSafe; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeTriggeredSafe, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeTriggeredSafe *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeTriggeredSafe); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeTriggeredSafe()
        {
          store_USCOREon_USCOREtransmission_USCOREerror = (bool)0;
        }
        virtual ~ns2__TaskSubscribeTriggeredSafe() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeTriggeredSafe(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeTriggeredSafe * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeTriggeredSafe(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:358 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeLogfiles
#define SOAP_TYPE_ns2__TaskSubscribeLogfiles (86)
/* Type ns2__TaskSubscribeLogfiles is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeLogfiles': */
class SOAP_CMAC ns2__TaskSubscribeLogfiles : public ns2__TaskSubscribeTriggered {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeLogfiles
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeLogfiles; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeLogfiles, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeLogfiles *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeLogfiles); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeLogfiles()
        {
        }
        virtual ~ns2__TaskSubscribeLogfiles() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeLogfiles(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeLogfiles * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeLogfiles(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:361 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeErrorLog
#define SOAP_TYPE_ns2__TaskSubscribeErrorLog (87)
/* Type ns2__TaskSubscribeErrorLog is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeErrorLog': */
class SOAP_CMAC ns2__TaskSubscribeErrorLog : public ns2__TaskSubscribeTriggered {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeErrorLog
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeErrorLog; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeErrorLog, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeErrorLog *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeErrorLog); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeErrorLog()
        {
        }
        virtual ~ns2__TaskSubscribeErrorLog() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeErrorLog(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeErrorLog * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeErrorLog(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:364 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeCameraImages
#define SOAP_TYPE_ns2__TaskSubscribeCameraImages (88)
/* Type ns2__TaskSubscribeCameraImages is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeCameraImages': */
class SOAP_CMAC ns2__TaskSubscribeCameraImages : public ns2__TaskSubscribeTriggered {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeCameraImages
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeCameraImages; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeCameraImages, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeCameraImages *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeCameraImages); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeCameraImages()
        {
        }
        virtual ~ns2__TaskSubscribeCameraImages() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeCameraImages(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeCameraImages * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeCameraImages(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:367 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeSendParameters
#define SOAP_TYPE_ns2__TaskSubscribeSendParameters (89)
/* Type ns2__TaskSubscribeSendParameters is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeSendParameters': */
class SOAP_CMAC ns2__TaskSubscribeSendParameters : public ns2__TaskSubscribeTriggered {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeSendParameters
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeSendParameters; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeSendParameters, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeSendParameters *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeSendParameters); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeSendParameters()
        {
        }
        virtual ~ns2__TaskSubscribeSendParameters() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeSendParameters(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeSendParameters * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeSendParameters(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:370 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeVideoStore
#define SOAP_TYPE_ns2__TaskSubscribeVideoStore (90)
/* Type ns2__TaskSubscribeVideoStore is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeVideoStore': */
class SOAP_CMAC ns2__TaskSubscribeVideoStore : public ns2__TaskSubscribeTriggered {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeVideoStore
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeVideoStore; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeVideoStore, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeVideoStore *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeVideoStore); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeVideoStore()
        {
        }
        virtual ~ns2__TaskSubscribeVideoStore() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeVideoStore(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeVideoStore * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeVideoStore(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:373 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeAlive
#define SOAP_TYPE_ns2__TaskSubscribeAlive (91)
/* Type ns2__TaskSubscribeAlive is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeAlive': */
class SOAP_CMAC ns2__TaskSubscribeAlive : public ns2__TaskSubscribeTriggered {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeAlive
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeAlive; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeAlive, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeAlive *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeAlive); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeAlive()
        {
        }
        virtual ~ns2__TaskSubscribeAlive() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeAlive(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeAlive * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeAlive(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:376 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeObjectList
#define SOAP_TYPE_ns2__TaskSubscribeObjectList (92)
/* Type ns2__TaskSubscribeObjectList is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeObjectList': */
class SOAP_CMAC ns2__TaskSubscribeObjectList : public ns2__TaskSubscribeTriggered {
      public:
        /// required attribute 'transfer_type' of XSD type 'ns2:TransferType'
        enum ns2__TransferType transfer_USCOREtype;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeObjectList
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeObjectList; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeObjectList, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeObjectList *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeObjectList); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeObjectList()
        {
          transfer_USCOREtype = (enum ns2__TransferType)0;
        }
        virtual ~ns2__TaskSubscribeObjectList() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeObjectList(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeObjectList * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeObjectList(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:379 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeFeaturesInfo
#define SOAP_TYPE_ns2__TaskSubscribeFeaturesInfo (93)
/* Type ns2__TaskSubscribeFeaturesInfo is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeFeaturesInfo': */
class SOAP_CMAC ns2__TaskSubscribeFeaturesInfo : public ns2__TaskSubscribeTriggered {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeFeaturesInfo
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeFeaturesInfo; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeFeaturesInfo, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeFeaturesInfo *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeFeaturesInfo); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeFeaturesInfo()
        {
        }
        virtual ~ns2__TaskSubscribeFeaturesInfo() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeFeaturesInfo(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeFeaturesInfo * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeFeaturesInfo(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:394 */
#ifndef SOAP_TYPE_ns2__ErrorContainer
#define SOAP_TYPE_ns2__ErrorContainer (98)
/* Type ns2__ErrorContainer is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:ErrorContainer': */
class SOAP_CMAC ns2__ErrorContainer : public ns2__ExtendedNotificationBase {
      public:
        /// required attribute 'error_reason' of XSD type 'ns2:SOAP_DeviceError'
        enum ns2__SOAP_USCOREDeviceError error_USCOREreason;
        /// optional attribute 'error_text' of XSD type 'xsd:string'
        wchar_t *error_USCOREtext;
      public:
        /// Return unique type id SOAP_TYPE_ns2__ErrorContainer
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__ErrorContainer; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__ErrorContainer, default initialized and not managed by a soap context
        virtual ns2__ErrorContainer *soap_alloc(void) const { return SOAP_NEW(ns2__ErrorContainer); }
      public:
        /// Constructor with initializations
        ns2__ErrorContainer()
        {
          error_USCOREreason = (enum ns2__SOAP_USCOREDeviceError)0;
          error_USCOREtext = (wchar_t *)0;
        }
        virtual ~ns2__ErrorContainer() { }
        /// Friend allocator used by soap_new_ns2__ErrorContainer(struct soap*, int)
        friend SOAP_FMAC1 ns2__ErrorContainer * SOAP_FMAC2 soap_instantiate_ns2__ErrorContainer(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:337 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeCounting
#define SOAP_TYPE_ns2__TaskSubscribeCounting (79)
/* Type ns2__TaskSubscribeCounting is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeCounting': */
class SOAP_CMAC ns2__TaskSubscribeCounting : public ns2__TaskSubscribeTriggeredSafe {
      public:
        /// Required element 'ns2:counting_gate_id' of XSD type 'ns2:CountingGateID'
        ns2__CountingGateID *counting_USCOREgate_USCOREid;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeCounting
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeCounting; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeCounting, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeCounting *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeCounting); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeCounting()
        {
          counting_USCOREgate_USCOREid = (ns2__CountingGateID *)0;
        }
        virtual ~ns2__TaskSubscribeCounting() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeCounting(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeCounting * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeCounting(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:340 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeCountChannels
#define SOAP_TYPE_ns2__TaskSubscribeCountChannels (80)
/* Type ns2__TaskSubscribeCountChannels is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeCountChannels': */
class SOAP_CMAC ns2__TaskSubscribeCountChannels : public ns2__TaskSubscribeTriggeredSafe {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeCountChannels
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeCountChannels; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeCountChannels, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeCountChannels *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeCountChannels); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeCountChannels()
        {
        }
        virtual ~ns2__TaskSubscribeCountChannels() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeCountChannels(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeCountChannels * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeCountChannels(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:343 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeZoneChannels
#define SOAP_TYPE_ns2__TaskSubscribeZoneChannels (81)
/* Type ns2__TaskSubscribeZoneChannels is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeZoneChannels': */
class SOAP_CMAC ns2__TaskSubscribeZoneChannels : public ns2__TaskSubscribeTriggeredSafe {
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeZoneChannels
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeZoneChannels; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeZoneChannels, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeZoneChannels *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeZoneChannels); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeZoneChannels()
        {
        }
        virtual ~ns2__TaskSubscribeZoneChannels() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeZoneChannels(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeZoneChannels * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeZoneChannels(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:346 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeFill
#define SOAP_TYPE_ns2__TaskSubscribeFill (82)
/* Type ns2__TaskSubscribeFill is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeFill': */
class SOAP_CMAC ns2__TaskSubscribeFill : public ns2__TaskSubscribeTriggeredSafe {
      public:
        /// Required element 'ns2:fill_region_id' of XSD type 'ns2:FillRegionID'
        ns2__FillRegionID *fill_USCOREregion_USCOREid;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeFill
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeFill; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeFill, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeFill *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeFill); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeFill()
        {
          fill_USCOREregion_USCOREid = (ns2__FillRegionID *)0;
        }
        virtual ~ns2__TaskSubscribeFill() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeFill(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeFill * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeFill(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:349 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeClearZone
#define SOAP_TYPE_ns2__TaskSubscribeClearZone (83)
/* Type ns2__TaskSubscribeClearZone is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeClearZone': */
class SOAP_CMAC ns2__TaskSubscribeClearZone : public ns2__TaskSubscribeTriggeredSafe {
      public:
        /// Required element 'ns2:clear_zone_id' of XSD type 'ns2:ClearZoneID'
        ns2__ClearZoneID *clear_USCOREzone_USCOREid;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeClearZone
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeClearZone; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeClearZone, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeClearZone *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeClearZone); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeClearZone()
        {
          clear_USCOREzone_USCOREid = (ns2__ClearZoneID *)0;
        }
        virtual ~ns2__TaskSubscribeClearZone() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeClearZone(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeClearZone * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeClearZone(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:355 */
#ifndef SOAP_TYPE_ns2__TaskSubscribeDigitalInput
#define SOAP_TYPE_ns2__TaskSubscribeDigitalInput (85)
/* Type ns2__TaskSubscribeDigitalInput is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ns2:TaskSubscribeDigitalInput': */
class SOAP_CMAC ns2__TaskSubscribeDigitalInput : public ns2__TaskSubscribeTriggeredSafe {
      public:
        /// Sequence of 1 to 16 elements 'ns2:digital_input_port' of XSD type 'ns2:DigitalInputControl' stored in dynamic array digital_USCOREinput_USCOREport of length __sizedigital_USCOREinput_USCOREport
        int __sizedigital_USCOREinput_USCOREport;
        ns2__DigitalInputControl **digital_USCOREinput_USCOREport;
      public:
        /// Return unique type id SOAP_TYPE_ns2__TaskSubscribeDigitalInput
        virtual int soap_type(void) const { return SOAP_TYPE_ns2__TaskSubscribeDigitalInput; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns2__TaskSubscribeDigitalInput, default initialized and not managed by a soap context
        virtual ns2__TaskSubscribeDigitalInput *soap_alloc(void) const { return SOAP_NEW(ns2__TaskSubscribeDigitalInput); }
      public:
        /// Constructor with initializations
        ns2__TaskSubscribeDigitalInput()
        {
          __sizedigital_USCOREinput_USCOREport = 0;
          digital_USCOREinput_USCOREport = NULL;
        }
        virtual ~ns2__TaskSubscribeDigitalInput() { }
        /// Friend allocator used by soap_new_ns2__TaskSubscribeDigitalInput(struct soap*, int)
        friend SOAP_FMAC1 ns2__TaskSubscribeDigitalInput * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeDigitalInput(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:3443 */
#ifndef SOAP_TYPE___ns1__Notification
#define SOAP_TYPE___ns1__Notification (221)
/* Wrapper: */
struct __ns1__Notification {
      public:
        /** Optional element 'ns2:notification_message' of XSD type 'ns2:NotificationContainer' */
        ns2__NotificationContainer *ns2__notification_USCOREmessage;
      public:
        /** Return unique type id SOAP_TYPE___ns1__Notification */
        int soap_type() const { return SOAP_TYPE___ns1__Notification; }
        /** Constructor with member initializations */
        __ns1__Notification()
        {
          ns2__notification_USCOREmessage = (ns2__NotificationContainer *)0;
        }
        /** Friend allocator used by soap_new___ns1__Notification(struct soap*, int) */
        friend SOAP_FMAC1 __ns1__Notification * SOAP_FMAC2 soap_instantiate___ns1__Notification(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:3513 */
#ifndef SOAP_TYPE___ns1__Error
#define SOAP_TYPE___ns1__Error (225)
/* Wrapper: */
struct __ns1__Error {
      public:
        /** Optional element 'ns2:error_message' of XSD type 'ns2:ErrorContainer' */
        ns2__ErrorContainer *ns2__error_USCOREmessage;
      public:
        /** Return unique type id SOAP_TYPE___ns1__Error */
        int soap_type() const { return SOAP_TYPE___ns1__Error; }
        /** Constructor with member initializations */
        __ns1__Error()
        {
          ns2__error_USCOREmessage = (ns2__ErrorContainer *)0;
        }
        /** Friend allocator used by soap_new___ns1__Error(struct soap*, int) */
        friend SOAP_FMAC1 __ns1__Error * SOAP_FMAC2 soap_instantiate___ns1__Error(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hella.h:3582 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (226)
/* SOAP_ENV__Header: */
struct SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header()
        {
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Header(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* hella.h:3582 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (227)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code()
        {
          SOAP_ENV__Value = (char *)0;
          SOAP_ENV__Subcode = (struct SOAP_ENV__Code *)0;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Code(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* hella.h:3582 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (229)
/* SOAP_ENV__Detail: */
struct SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail()
        {
          __any = (char *)0;
          __type = 0;
          fault = NULL;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Detail(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* hella.h:3582 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (232)
/* SOAP_ENV__Reason: */
struct SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason()
        {
          SOAP_ENV__Text = (char *)0;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Reason(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* hella.h:3582 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (233)
/* SOAP_ENV__Fault: */
struct SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault()
        {
          faultcode = (char *)0;
          faultstring = (char *)0;
          faultactor = (char *)0;
          detail = (struct SOAP_ENV__Detail *)0;
          SOAP_ENV__Code = (struct SOAP_ENV__Code *)0;
          SOAP_ENV__Reason = (struct SOAP_ENV__Reason *)0;
          SOAP_ENV__Node = (char *)0;
          SOAP_ENV__Role = (char *)0;
          SOAP_ENV__Detail = (struct SOAP_ENV__Detail *)0;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Fault(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* hella.h:121 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

/* hella.h:121 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

/* hella.h:143 */
#ifndef SOAP_TYPE_xsd__decimal
#define SOAP_TYPE_xsd__decimal (17)
typedef std::wstring xsd__decimal;
#endif

/* hella.h:407 */
#ifndef SOAP_TYPE_ns2__IP_USCOREAddress
#define SOAP_TYPE_ns2__IP_USCOREAddress (99)
typedef std::wstring ns2__IP_USCOREAddress;
#endif

/* hella.h:412 */
#ifndef SOAP_TYPE_ns2__MAC_USCOREAddress
#define SOAP_TYPE_ns2__MAC_USCOREAddress (100)
typedef std::wstring ns2__MAC_USCOREAddress;
#endif

/* hella.h:506 */
#ifndef SOAP_TYPE_ns2__MeasuringChannelName
#define SOAP_TYPE_ns2__MeasuringChannelName (107)
typedef std::wstring ns2__MeasuringChannelName;
#endif

/* hella.h:511 */
#ifndef SOAP_TYPE_ns2__ObjectClassName
#define SOAP_TYPE_ns2__ObjectClassName (108)
typedef std::wstring ns2__ObjectClassName;
#endif

/* hella.h:583 */
#ifndef SOAP_TYPE_ns2__DayOfMonth
#define SOAP_TYPE_ns2__DayOfMonth (115)
typedef unsigned int ns2__DayOfMonth;
#endif

/* hella.h:588 */
#ifndef SOAP_TYPE_ns2__HoursOfDay
#define SOAP_TYPE_ns2__HoursOfDay (116)
typedef unsigned int ns2__HoursOfDay;
#endif

/* hella.h:593 */
#ifndef SOAP_TYPE_ns2__MinutesOrSeconds
#define SOAP_TYPE_ns2__MinutesOrSeconds (117)
typedef unsigned int ns2__MinutesOrSeconds;
#endif

/* hella.h:608 */
#ifndef SOAP_TYPE_ns2__ShortDuration
#define SOAP_TYPE_ns2__ShortDuration (119)
typedef std::wstring ns2__ShortDuration;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* xsd__duration has binding name 'xsd__duration' for type 'xsd:duration' */
#ifndef SOAP_TYPE_xsd__duration
#define SOAP_TYPE_xsd__duration (15)
#endif

/* unsigned char has binding name 'unsignedByte' for type 'xsd:unsignedByte' */
#ifndef SOAP_TYPE_unsignedByte
#define SOAP_TYPE_unsignedByte (9)
#endif

/* ns2__MinutesOrSeconds has binding name 'ns2__MinutesOrSeconds' for type 'ns2:MinutesOrSeconds' */
#ifndef SOAP_TYPE_ns2__MinutesOrSeconds
#define SOAP_TYPE_ns2__MinutesOrSeconds (117)
#endif

/* ns2__HoursOfDay has binding name 'ns2__HoursOfDay' for type 'ns2:HoursOfDay' */
#ifndef SOAP_TYPE_ns2__HoursOfDay
#define SOAP_TYPE_ns2__HoursOfDay (116)
#endif

/* ns2__DayOfMonth has binding name 'ns2__DayOfMonth' for type 'ns2:DayOfMonth' */
#ifndef SOAP_TYPE_ns2__DayOfMonth
#define SOAP_TYPE_ns2__DayOfMonth (115)
#endif

/* unsigned int has binding name 'unsignedInt' for type 'xsd:unsignedInt' */
#ifndef SOAP_TYPE_unsignedInt
#define SOAP_TYPE_unsignedInt (8)
#endif

/* time_t has binding name 'dateTime' for type 'xsd:dateTime' */
#ifndef SOAP_TYPE_dateTime
#define SOAP_TYPE_dateTime (143)
#endif

/* bool has binding name 'bool' for type 'xsd:boolean' */
#ifndef SOAP_TYPE_bool
#define SOAP_TYPE_bool (167)
#endif

/* enum ns2__TransferType has binding name 'ns2__TransferType' for type 'ns2:TransferType' */
#ifndef SOAP_TYPE_ns2__TransferType
#define SOAP_TYPE_ns2__TransferType (121)
#endif

/* enum ns2__UpdateType has binding name 'ns2__UpdateType' for type 'ns2:UpdateType' */
#ifndef SOAP_TYPE_ns2__UpdateType
#define SOAP_TYPE_ns2__UpdateType (120)
#endif

/* enum ns2__RebootType has binding name 'ns2__RebootType' for type 'ns2:RebootType' */
#ifndef SOAP_TYPE_ns2__RebootType
#define SOAP_TYPE_ns2__RebootType (118)
#endif

/* enum ns2__DayOfWeek has binding name 'ns2__DayOfWeek' for type 'ns2:DayOfWeek' */
#ifndef SOAP_TYPE_ns2__DayOfWeek
#define SOAP_TYPE_ns2__DayOfWeek (114)
#endif

/* enum ns2__DateType has binding name 'ns2__DateType' for type 'ns2:DateType' */
#ifndef SOAP_TYPE_ns2__DateType
#define SOAP_TYPE_ns2__DateType (113)
#endif

/* enum ns2__DigitalInputEventType has binding name 'ns2__DigitalInputEventType' for type 'ns2:DigitalInputEventType' */
#ifndef SOAP_TYPE_ns2__DigitalInputEventType
#define SOAP_TYPE_ns2__DigitalInputEventType (112)
#endif

/* enum ns2__ClearZoneEventType has binding name 'ns2__ClearZoneEventType' for type 'ns2:ClearZoneEventType' */
#ifndef SOAP_TYPE_ns2__ClearZoneEventType
#define SOAP_TYPE_ns2__ClearZoneEventType (111)
#endif

/* enum ns2__FillEventType has binding name 'ns2__FillEventType' for type 'ns2:FillEventType' */
#ifndef SOAP_TYPE_ns2__FillEventType
#define SOAP_TYPE_ns2__FillEventType (110)
#endif

/* enum ns2__CountEventType has binding name 'ns2__CountEventType' for type 'ns2:CountEventType' */
#ifndef SOAP_TYPE_ns2__CountEventType
#define SOAP_TYPE_ns2__CountEventType (109)
#endif

/* enum ns2__DigitalOutputActivity has binding name 'ns2__DigitalOutputActivity' for type 'ns2:DigitalOutputActivity' */
#ifndef SOAP_TYPE_ns2__DigitalOutputActivity
#define SOAP_TYPE_ns2__DigitalOutputActivity (106)
#endif

/* enum ns2__DigitalInputValue has binding name 'ns2__DigitalInputValue' for type 'ns2:DigitalInputValue' */
#ifndef SOAP_TYPE_ns2__DigitalInputValue
#define SOAP_TYPE_ns2__DigitalInputValue (105)
#endif

/* enum ns2__SOAP_USCOREDeviceError has binding name 'ns2__SOAP_USCOREDeviceError' for type 'ns2:SOAP_DeviceError' */
#ifndef SOAP_TYPE_ns2__SOAP_USCOREDeviceError
#define SOAP_TYPE_ns2__SOAP_USCOREDeviceError (104)
#endif

/* enum ns2__SOAP_USCOREServerError has binding name 'ns2__SOAP_USCOREServerError' for type 'ns2:SOAP_ServerError' */
#ifndef SOAP_TYPE_ns2__SOAP_USCOREServerError
#define SOAP_TYPE_ns2__SOAP_USCOREServerError (103)
#endif

/* enum ns2__OSD_USCOREState has binding name 'ns2__OSD_USCOREState' for type 'ns2:OSD_State' */
#ifndef SOAP_TYPE_ns2__OSD_USCOREState
#define SOAP_TYPE_ns2__OSD_USCOREState (102)
#endif

/* enum ns2__TaskType has binding name 'ns2__TaskType' for type 'ns2:TaskType' */
#ifndef SOAP_TYPE_ns2__TaskType
#define SOAP_TYPE_ns2__TaskType (101)
#endif

/* ns2__ShortDuration has binding name 'ns2__ShortDuration' for type 'ns2:ShortDuration' */
#ifndef SOAP_TYPE_ns2__ShortDuration
#define SOAP_TYPE_ns2__ShortDuration (119)
#endif

/* ns2__ObjectClassName has binding name 'ns2__ObjectClassName' for type 'ns2:ObjectClassName' */
#ifndef SOAP_TYPE_ns2__ObjectClassName
#define SOAP_TYPE_ns2__ObjectClassName (108)
#endif

/* ns2__MeasuringChannelName has binding name 'ns2__MeasuringChannelName' for type 'ns2:MeasuringChannelName' */
#ifndef SOAP_TYPE_ns2__MeasuringChannelName
#define SOAP_TYPE_ns2__MeasuringChannelName (107)
#endif

/* ns2__MAC_USCOREAddress has binding name 'ns2__MAC_USCOREAddress' for type 'ns2:MAC_Address' */
#ifndef SOAP_TYPE_ns2__MAC_USCOREAddress
#define SOAP_TYPE_ns2__MAC_USCOREAddress (100)
#endif

/* ns2__IP_USCOREAddress has binding name 'ns2__IP_USCOREAddress' for type 'ns2:IP_Address' */
#ifndef SOAP_TYPE_ns2__IP_USCOREAddress
#define SOAP_TYPE_ns2__IP_USCOREAddress (99)
#endif

/* ns2__ErrorContainer has binding name 'ns2__ErrorContainer' for type 'ns2:ErrorContainer' */
#ifndef SOAP_TYPE_ns2__ErrorContainer
#define SOAP_TYPE_ns2__ErrorContainer (98)
#endif

/* ns2__AnswerContainer has binding name 'ns2__AnswerContainer' for type 'ns2:AnswerContainer' */
#ifndef SOAP_TYPE_ns2__AnswerContainer
#define SOAP_TYPE_ns2__AnswerContainer (97)
#endif

/* ns2__TaskContainer has binding name 'ns2__TaskContainer' for type 'ns2:TaskContainer' */
#ifndef SOAP_TYPE_ns2__TaskContainer
#define SOAP_TYPE_ns2__TaskContainer (96)
#endif

/* ns2__TaskDeleteAllNotifications has binding name 'ns2__TaskDeleteAllNotifications' for type 'ns2:TaskDeleteAllNotifications' */
#ifndef SOAP_TYPE_ns2__TaskDeleteAllNotifications
#define SOAP_TYPE_ns2__TaskDeleteAllNotifications (95)
#endif

/* ns2__TaskDeleteAllTasks has binding name 'ns2__TaskDeleteAllTasks' for type 'ns2:TaskDeleteAllTasks' */
#ifndef SOAP_TYPE_ns2__TaskDeleteAllTasks
#define SOAP_TYPE_ns2__TaskDeleteAllTasks (94)
#endif

/* ns2__TaskSubscribeFeaturesInfo has binding name 'ns2__TaskSubscribeFeaturesInfo' for type 'ns2:TaskSubscribeFeaturesInfo' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeFeaturesInfo
#define SOAP_TYPE_ns2__TaskSubscribeFeaturesInfo (93)
#endif

/* ns2__TaskSubscribeObjectList has binding name 'ns2__TaskSubscribeObjectList' for type 'ns2:TaskSubscribeObjectList' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeObjectList
#define SOAP_TYPE_ns2__TaskSubscribeObjectList (92)
#endif

/* ns2__TaskSubscribeAlive has binding name 'ns2__TaskSubscribeAlive' for type 'ns2:TaskSubscribeAlive' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeAlive
#define SOAP_TYPE_ns2__TaskSubscribeAlive (91)
#endif

/* ns2__TaskSubscribeVideoStore has binding name 'ns2__TaskSubscribeVideoStore' for type 'ns2:TaskSubscribeVideoStore' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeVideoStore
#define SOAP_TYPE_ns2__TaskSubscribeVideoStore (90)
#endif

/* ns2__TaskSubscribeSendParameters has binding name 'ns2__TaskSubscribeSendParameters' for type 'ns2:TaskSubscribeSendParameters' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeSendParameters
#define SOAP_TYPE_ns2__TaskSubscribeSendParameters (89)
#endif

/* ns2__TaskSubscribeCameraImages has binding name 'ns2__TaskSubscribeCameraImages' for type 'ns2:TaskSubscribeCameraImages' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeCameraImages
#define SOAP_TYPE_ns2__TaskSubscribeCameraImages (88)
#endif

/* ns2__TaskSubscribeErrorLog has binding name 'ns2__TaskSubscribeErrorLog' for type 'ns2:TaskSubscribeErrorLog' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeErrorLog
#define SOAP_TYPE_ns2__TaskSubscribeErrorLog (87)
#endif

/* ns2__TaskSubscribeLogfiles has binding name 'ns2__TaskSubscribeLogfiles' for type 'ns2:TaskSubscribeLogfiles' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeLogfiles
#define SOAP_TYPE_ns2__TaskSubscribeLogfiles (86)
#endif

/* ns2__TaskSubscribeDigitalInput has binding name 'ns2__TaskSubscribeDigitalInput' for type 'ns2:TaskSubscribeDigitalInput' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeDigitalInput
#define SOAP_TYPE_ns2__TaskSubscribeDigitalInput (85)
#endif

/* ns2__DigitalInputControl has binding name 'ns2__DigitalInputControl' for type 'ns2:DigitalInputControl' */
#ifndef SOAP_TYPE_ns2__DigitalInputControl
#define SOAP_TYPE_ns2__DigitalInputControl (84)
#endif

/* ns2__TaskSubscribeClearZone has binding name 'ns2__TaskSubscribeClearZone' for type 'ns2:TaskSubscribeClearZone' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeClearZone
#define SOAP_TYPE_ns2__TaskSubscribeClearZone (83)
#endif

/* ns2__TaskSubscribeFill has binding name 'ns2__TaskSubscribeFill' for type 'ns2:TaskSubscribeFill' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeFill
#define SOAP_TYPE_ns2__TaskSubscribeFill (82)
#endif

/* ns2__TaskSubscribeZoneChannels has binding name 'ns2__TaskSubscribeZoneChannels' for type 'ns2:TaskSubscribeZoneChannels' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeZoneChannels
#define SOAP_TYPE_ns2__TaskSubscribeZoneChannels (81)
#endif

/* ns2__TaskSubscribeCountChannels has binding name 'ns2__TaskSubscribeCountChannels' for type 'ns2:TaskSubscribeCountChannels' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeCountChannels
#define SOAP_TYPE_ns2__TaskSubscribeCountChannels (80)
#endif

/* ns2__TaskSubscribeCounting has binding name 'ns2__TaskSubscribeCounting' for type 'ns2:TaskSubscribeCounting' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeCounting
#define SOAP_TYPE_ns2__TaskSubscribeCounting (79)
#endif

/* ns2__TaskSubscribeTriggeredSafe has binding name 'ns2__TaskSubscribeTriggeredSafe' for type 'ns2:TaskSubscribeTriggeredSafe' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeTriggeredSafe
#define SOAP_TYPE_ns2__TaskSubscribeTriggeredSafe (78)
#endif

/* ns2__TaskSubscribeTriggered has binding name 'ns2__TaskSubscribeTriggered' for type 'ns2:TaskSubscribeTriggered' */
#ifndef SOAP_TYPE_ns2__TaskSubscribeTriggered
#define SOAP_TYPE_ns2__TaskSubscribeTriggered (77)
#endif

/* ns2__TaskSetDateTime has binding name 'ns2__TaskSetDateTime' for type 'ns2:TaskSetDateTime' */
#ifndef SOAP_TYPE_ns2__TaskSetDateTime
#define SOAP_TYPE_ns2__TaskSetDateTime (76)
#endif

/* ns2__TaskSetDigitalOutput has binding name 'ns2__TaskSetDigitalOutput' for type 'ns2:TaskSetDigitalOutput' */
#ifndef SOAP_TYPE_ns2__TaskSetDigitalOutput
#define SOAP_TYPE_ns2__TaskSetDigitalOutput (75)
#endif

/* ns2__TaskWithActivity has binding name 'ns2__TaskWithActivity' for type 'ns2:TaskWithActivity' */
#ifndef SOAP_TYPE_ns2__TaskWithActivity
#define SOAP_TYPE_ns2__TaskWithActivity (74)
#endif

/* ns2__TaskRequestParameters has binding name 'ns2__TaskRequestParameters' for type 'ns2:TaskRequestParameters' */
#ifndef SOAP_TYPE_ns2__TaskRequestParameters
#define SOAP_TYPE_ns2__TaskRequestParameters (73)
#endif

/* ns2__TaskRequestUpdate has binding name 'ns2__TaskRequestUpdate' for type 'ns2:TaskRequestUpdate' */
#ifndef SOAP_TYPE_ns2__TaskRequestUpdate
#define SOAP_TYPE_ns2__TaskRequestUpdate (72)
#endif

/* ns2__TaskRebootNow has binding name 'ns2__TaskRebootNow' for type 'ns2:TaskRebootNow' */
#ifndef SOAP_TYPE_ns2__TaskRebootNow
#define SOAP_TYPE_ns2__TaskRebootNow (71)
#endif

/* ns2__Task has binding name 'ns2__Task' for type 'ns2:Task' */
#ifndef SOAP_TYPE_ns2__Task
#define SOAP_TYPE_ns2__Task (70)
#endif

/* ns2__NotificationContainer has binding name 'ns2__NotificationContainer' for type 'ns2:NotificationContainer' */
#ifndef SOAP_TYPE_ns2__NotificationContainer
#define SOAP_TYPE_ns2__NotificationContainer (69)
#endif

/* ns2__HistoricObjectListNotification has binding name 'ns2__HistoricObjectListNotification' for type 'ns2:HistoricObjectListNotification' */
#ifndef SOAP_TYPE_ns2__HistoricObjectListNotification
#define SOAP_TYPE_ns2__HistoricObjectListNotification (68)
#endif

/* ns2__HistoricObjectListNotificationBase has binding name 'ns2__HistoricObjectListNotificationBase' for type 'ns2:HistoricObjectListNotificationBase' */
#ifndef SOAP_TYPE_ns2__HistoricObjectListNotificationBase
#define SOAP_TYPE_ns2__HistoricObjectListNotificationBase (67)
#endif

/* ns2__CurrentObjectListNotification has binding name 'ns2__CurrentObjectListNotification' for type 'ns2:CurrentObjectListNotification' */
#ifndef SOAP_TYPE_ns2__CurrentObjectListNotification
#define SOAP_TYPE_ns2__CurrentObjectListNotification (66)
#endif

/* ns2__HistoricObject has binding name 'ns2__HistoricObject' for type 'ns2:HistoricObject' */
#ifndef SOAP_TYPE_ns2__HistoricObject
#define SOAP_TYPE_ns2__HistoricObject (65)
#endif

/* ns2__CurrentObject has binding name 'ns2__CurrentObject' for type 'ns2:CurrentObject' */
#ifndef SOAP_TYPE_ns2__CurrentObject
#define SOAP_TYPE_ns2__CurrentObject (64)
#endif

/* ns2__Object has binding name 'ns2__Object' for type 'ns2:Object' */
#ifndef SOAP_TYPE_ns2__Object
#define SOAP_TYPE_ns2__Object (63)
#endif

/* ns2__Coordinate_USCORE3D has binding name 'ns2__Coordinate_USCORE3D' for type 'ns2:Coordinate_3D' */
#ifndef SOAP_TYPE_ns2__Coordinate_USCORE3D
#define SOAP_TYPE_ns2__Coordinate_USCORE3D (62)
#endif

/* ns2__Coordinate_USCORE2D has binding name 'ns2__Coordinate_USCORE2D' for type 'ns2:Coordinate_2D' */
#ifndef SOAP_TYPE_ns2__Coordinate_USCORE2D
#define SOAP_TYPE_ns2__Coordinate_USCORE2D (61)
#endif

/* ns2__FeatureInfoNotification has binding name 'ns2__FeatureInfoNotification' for type 'ns2:FeatureInfoNotification' */
#ifndef SOAP_TYPE_ns2__FeatureInfoNotification
#define SOAP_TYPE_ns2__FeatureInfoNotification (60)
#endif

/* ns2__ZoneChannelsFeatureInfo has binding name 'ns2__ZoneChannelsFeatureInfo' for type 'ns2:ZoneChannelsFeatureInfo' */
#ifndef SOAP_TYPE_ns2__ZoneChannelsFeatureInfo
#define SOAP_TYPE_ns2__ZoneChannelsFeatureInfo (59)
#endif

/* ns2__ZoneChannelFeatureInfo has binding name 'ns2__ZoneChannelFeatureInfo' for type 'ns2:ZoneChannelFeatureInfo' */
#ifndef SOAP_TYPE_ns2__ZoneChannelFeatureInfo
#define SOAP_TYPE_ns2__ZoneChannelFeatureInfo (58)
#endif

/* ns2__CountChannelsFeatureInfo has binding name 'ns2__CountChannelsFeatureInfo' for type 'ns2:CountChannelsFeatureInfo' */
#ifndef SOAP_TYPE_ns2__CountChannelsFeatureInfo
#define SOAP_TYPE_ns2__CountChannelsFeatureInfo (57)
#endif

/* ns2__CountChannelFeatureInfo has binding name 'ns2__CountChannelFeatureInfo' for type 'ns2:CountChannelFeatureInfo' */
#ifndef SOAP_TYPE_ns2__CountChannelFeatureInfo
#define SOAP_TYPE_ns2__CountChannelFeatureInfo (56)
#endif

/* ns2__StartupNotification has binding name 'ns2__StartupNotification' for type 'ns2:StartupNotification' */
#ifndef SOAP_TYPE_ns2__StartupNotification
#define SOAP_TYPE_ns2__StartupNotification (55)
#endif

/* ns2__AliveNotification has binding name 'ns2__AliveNotification' for type 'ns2:AliveNotification' */
#ifndef SOAP_TYPE_ns2__AliveNotification
#define SOAP_TYPE_ns2__AliveNotification (54)
#endif

/* ns2__ErrorLogfilesNotification has binding name 'ns2__ErrorLogfilesNotification' for type 'ns2:ErrorLogfilesNotification' */
#ifndef SOAP_TYPE_ns2__ErrorLogfilesNotification
#define SOAP_TYPE_ns2__ErrorLogfilesNotification (53)
#endif

/* ns2__ParameterNotification has binding name 'ns2__ParameterNotification' for type 'ns2:ParameterNotification' */
#ifndef SOAP_TYPE_ns2__ParameterNotification
#define SOAP_TYPE_ns2__ParameterNotification (52)
#endif

/* ns2__LogfilesNotification has binding name 'ns2__LogfilesNotification' for type 'ns2:LogfilesNotification' */
#ifndef SOAP_TYPE_ns2__LogfilesNotification
#define SOAP_TYPE_ns2__LogfilesNotification (51)
#endif

/* ns2__CameraImagesNotification has binding name 'ns2__CameraImagesNotification' for type 'ns2:CameraImagesNotification' */
#ifndef SOAP_TYPE_ns2__CameraImagesNotification
#define SOAP_TYPE_ns2__CameraImagesNotification (50)
#endif

/* ns2__ClearZoneNotification has binding name 'ns2__ClearZoneNotification' for type 'ns2:ClearZoneNotification' */
#ifndef SOAP_TYPE_ns2__ClearZoneNotification
#define SOAP_TYPE_ns2__ClearZoneNotification (49)
#endif

/* ns2__DigitalInputNotification has binding name 'ns2__DigitalInputNotification' for type 'ns2:DigitalInputNotification' */
#ifndef SOAP_TYPE_ns2__DigitalInputNotification
#define SOAP_TYPE_ns2__DigitalInputNotification (48)
#endif

/* ns2__FillNotification has binding name 'ns2__FillNotification' for type 'ns2:FillNotification' */
#ifndef SOAP_TYPE_ns2__FillNotification
#define SOAP_TYPE_ns2__FillNotification (47)
#endif

/* ns2__ZoneChannelsNotification has binding name 'ns2__ZoneChannelsNotification' for type 'ns2:ZoneChannelsNotification' */
#ifndef SOAP_TYPE_ns2__ZoneChannelsNotification
#define SOAP_TYPE_ns2__ZoneChannelsNotification (46)
#endif

/* ns2__ZoneData has binding name 'ns2__ZoneData' for type 'ns2:ZoneData' */
#ifndef SOAP_TYPE_ns2__ZoneData
#define SOAP_TYPE_ns2__ZoneData (45)
#endif

/* ns2__CountChannelsNotification has binding name 'ns2__CountChannelsNotification' for type 'ns2:CountChannelsNotification' */
#ifndef SOAP_TYPE_ns2__CountChannelsNotification
#define SOAP_TYPE_ns2__CountChannelsNotification (44)
#endif

/* ns2__CountChannelData has binding name 'ns2__CountChannelData' for type 'ns2:CountChannelData' */
#ifndef SOAP_TYPE_ns2__CountChannelData
#define SOAP_TYPE_ns2__CountChannelData (43)
#endif

/* ns2__CountNotification has binding name 'ns2__CountNotification' for type 'ns2:CountNotification' */
#ifndef SOAP_TYPE_ns2__CountNotification
#define SOAP_TYPE_ns2__CountNotification (42)
#endif

/* ns2__ExtendedNotificationBase has binding name 'ns2__ExtendedNotificationBase' for type 'ns2:ExtendedNotificationBase' */
#ifndef SOAP_TYPE_ns2__ExtendedNotificationBase
#define SOAP_TYPE_ns2__ExtendedNotificationBase (41)
#endif

/* ns2__NotificationWithOSDState has binding name 'ns2__NotificationWithOSDState' for type 'ns2:NotificationWithOSDState' */
#ifndef SOAP_TYPE_ns2__NotificationWithOSDState
#define SOAP_TYPE_ns2__NotificationWithOSDState (40)
#endif

/* ns2__NotificationBase has binding name 'ns2__NotificationBase' for type 'ns2:NotificationBase' */
#ifndef SOAP_TYPE_ns2__NotificationBase
#define SOAP_TYPE_ns2__NotificationBase (39)
#endif

/* ns2__BinaryData has binding name 'ns2__BinaryData' for type 'ns2:BinaryData' */
#ifndef SOAP_TYPE_ns2__BinaryData
#define SOAP_TYPE_ns2__BinaryData (38)
#endif

/* ns2__ClearZoneID has binding name 'ns2__ClearZoneID' for type 'ns2:ClearZoneID' */
#ifndef SOAP_TYPE_ns2__ClearZoneID
#define SOAP_TYPE_ns2__ClearZoneID (37)
#endif

/* ns2__FillRegionID has binding name 'ns2__FillRegionID' for type 'ns2:FillRegionID' */
#ifndef SOAP_TYPE_ns2__FillRegionID
#define SOAP_TYPE_ns2__FillRegionID (36)
#endif

/* ns2__CountingGateID has binding name 'ns2__CountingGateID' for type 'ns2:CountingGateID' */
#ifndef SOAP_TYPE_ns2__CountingGateID
#define SOAP_TYPE_ns2__CountingGateID (35)
#endif

/* ns2__Trigger has binding name 'ns2__Trigger' for type 'ns2:Trigger' */
#ifndef SOAP_TYPE_ns2__Trigger
#define SOAP_TYPE_ns2__Trigger (34)
#endif

/* ns2__TimeTrigger has binding name 'ns2__TimeTrigger' for type 'ns2:TimeTrigger' */
#ifndef SOAP_TYPE_ns2__TimeTrigger
#define SOAP_TYPE_ns2__TimeTrigger (33)
#endif

/* ns2__ClockTime has binding name 'ns2__ClockTime' for type 'ns2:ClockTime' */
#ifndef SOAP_TYPE_ns2__ClockTime
#define SOAP_TYPE_ns2__ClockTime (32)
#endif

/* ns2__Date has binding name 'ns2__Date' for type 'ns2:Date' */
#ifndef SOAP_TYPE_ns2__Date
#define SOAP_TYPE_ns2__Date (31)
#endif

/* ns2__EventTrigger has binding name 'ns2__EventTrigger' for type 'ns2:EventTrigger' */
#ifndef SOAP_TYPE_ns2__EventTrigger
#define SOAP_TYPE_ns2__EventTrigger (30)
#endif

/* ns2__FeatureChangedEvent has binding name 'ns2__FeatureChangedEvent' for type 'ns2:FeatureChangedEvent' */
#ifndef SOAP_TYPE_ns2__FeatureChangedEvent
#define SOAP_TYPE_ns2__FeatureChangedEvent (29)
#endif

/* ns2__OSD_USCOREEvent has binding name 'ns2__OSD_USCOREEvent' for type 'ns2:OSD_Event' */
#ifndef SOAP_TYPE_ns2__OSD_USCOREEvent
#define SOAP_TYPE_ns2__OSD_USCOREEvent (28)
#endif

/* ns2__CurrentObjectListEvent has binding name 'ns2__CurrentObjectListEvent' for type 'ns2:CurrentObjectListEvent' */
#ifndef SOAP_TYPE_ns2__CurrentObjectListEvent
#define SOAP_TYPE_ns2__CurrentObjectListEvent (27)
#endif

/* ns2__OneTimeEvent has binding name 'ns2__OneTimeEvent' for type 'ns2:OneTimeEvent' */
#ifndef SOAP_TYPE_ns2__OneTimeEvent
#define SOAP_TYPE_ns2__OneTimeEvent (26)
#endif

/* ns2__DigitalInputEvent has binding name 'ns2__DigitalInputEvent' for type 'ns2:DigitalInputEvent' */
#ifndef SOAP_TYPE_ns2__DigitalInputEvent
#define SOAP_TYPE_ns2__DigitalInputEvent (25)
#endif

/* ns2__ClearZoneEvent has binding name 'ns2__ClearZoneEvent' for type 'ns2:ClearZoneEvent' */
#ifndef SOAP_TYPE_ns2__ClearZoneEvent
#define SOAP_TYPE_ns2__ClearZoneEvent (24)
#endif

/* ns2__FillEvent has binding name 'ns2__FillEvent' for type 'ns2:FillEvent' */
#ifndef SOAP_TYPE_ns2__FillEvent
#define SOAP_TYPE_ns2__FillEvent (23)
#endif

/* ns2__ZoneChannelsEvent has binding name 'ns2__ZoneChannelsEvent' for type 'ns2:ZoneChannelsEvent' */
#ifndef SOAP_TYPE_ns2__ZoneChannelsEvent
#define SOAP_TYPE_ns2__ZoneChannelsEvent (22)
#endif

/* ns2__CountChannelsEvent has binding name 'ns2__CountChannelsEvent' for type 'ns2:CountChannelsEvent' */
#ifndef SOAP_TYPE_ns2__CountChannelsEvent
#define SOAP_TYPE_ns2__CountChannelsEvent (21)
#endif

/* ns2__CountEvent has binding name 'ns2__CountEvent' for type 'ns2:CountEvent' */
#ifndef SOAP_TYPE_ns2__CountEvent
#define SOAP_TYPE_ns2__CountEvent (20)
#endif

/* ns2__DigitalOutputElement has binding name 'ns2__DigitalOutputElement' for type 'ns2:DigitalOutputElement' */
#ifndef SOAP_TYPE_ns2__DigitalOutputElement
#define SOAP_TYPE_ns2__DigitalOutputElement (19)
#endif

/* ns2__DigitalInputElement has binding name 'ns2__DigitalInputElement' for type 'ns2:DigitalInputElement' */
#ifndef SOAP_TYPE_ns2__DigitalInputElement
#define SOAP_TYPE_ns2__DigitalInputElement (18)
#endif

/* xsd__decimal has binding name 'xsd__decimal' for type 'xsd:decimal' */
#ifndef SOAP_TYPE_xsd__decimal
#define SOAP_TYPE_xsd__decimal (17)
#endif

/* std::wstring has binding name 'std__wstring' for type 'xsd:string' */
#ifndef SOAP_TYPE_std__wstring
#define SOAP_TYPE_std__wstring (16)
#endif

/* xsd__base64Binary has binding name 'xsd__base64Binary' for type 'xsd:base64Binary' */
#ifndef SOAP_TYPE_xsd__base64Binary
#define SOAP_TYPE_xsd__base64Binary (7)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (233)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (232)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (229)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (227)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (226)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (235)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (234)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (228)
#endif

/* ns2__ErrorContainer * has binding name 'PointerTons2__ErrorContainer' for type 'ns2:ErrorContainer' */
#ifndef SOAP_TYPE_PointerTons2__ErrorContainer
#define SOAP_TYPE_PointerTons2__ErrorContainer (222)
#endif

/* ns2__NotificationContainer * has binding name 'PointerTons2__NotificationContainer' for type 'ns2:NotificationContainer' */
#ifndef SOAP_TYPE_PointerTons2__NotificationContainer
#define SOAP_TYPE_PointerTons2__NotificationContainer (218)
#endif

/* ns2__DigitalInputControl ** has binding name 'PointerToPointerTons2__DigitalInputControl' for type 'ns2:DigitalInputControl' */
#ifndef SOAP_TYPE_PointerToPointerTons2__DigitalInputControl
#define SOAP_TYPE_PointerToPointerTons2__DigitalInputControl (217)
#endif

/* ns2__DigitalInputControl * has binding name 'PointerTons2__DigitalInputControl' for type 'ns2:DigitalInputControl' */
#ifndef SOAP_TYPE_PointerTons2__DigitalInputControl
#define SOAP_TYPE_PointerTons2__DigitalInputControl (216)
#endif

/* wchar_t * has binding name 'wstring' for type 'xsd:string' */
#ifndef SOAP_TYPE_wstring
#define SOAP_TYPE_wstring (215)
#endif

/* ns2__ZoneChannelsFeatureInfo * has binding name 'PointerTons2__ZoneChannelsFeatureInfo' for type 'ns2:ZoneChannelsFeatureInfo' */
#ifndef SOAP_TYPE_PointerTons2__ZoneChannelsFeatureInfo
#define SOAP_TYPE_PointerTons2__ZoneChannelsFeatureInfo (213)
#endif

/* ns2__CountChannelsFeatureInfo * has binding name 'PointerTons2__CountChannelsFeatureInfo' for type 'ns2:CountChannelsFeatureInfo' */
#ifndef SOAP_TYPE_PointerTons2__CountChannelsFeatureInfo
#define SOAP_TYPE_PointerTons2__CountChannelsFeatureInfo (212)
#endif

/* ns2__Trigger * has binding name 'PointerTons2__Trigger' for type 'ns2:Trigger' */
#ifndef SOAP_TYPE_PointerTons2__Trigger
#define SOAP_TYPE_PointerTons2__Trigger (211)
#endif

/* ns2__DigitalOutputElement ** has binding name 'PointerToPointerTons2__DigitalOutputElement' for type 'ns2:DigitalOutputElement' */
#ifndef SOAP_TYPE_PointerToPointerTons2__DigitalOutputElement
#define SOAP_TYPE_PointerToPointerTons2__DigitalOutputElement (210)
#endif

/* ns2__DigitalOutputElement * has binding name 'PointerTons2__DigitalOutputElement' for type 'ns2:DigitalOutputElement' */
#ifndef SOAP_TYPE_PointerTons2__DigitalOutputElement
#define SOAP_TYPE_PointerTons2__DigitalOutputElement (209)
#endif

/* ns2__CurrentObject ** has binding name 'PointerToPointerTons2__CurrentObject' for type 'ns2:CurrentObject' */
#ifndef SOAP_TYPE_PointerToPointerTons2__CurrentObject
#define SOAP_TYPE_PointerToPointerTons2__CurrentObject (208)
#endif

/* ns2__CurrentObject * has binding name 'PointerTons2__CurrentObject' for type 'ns2:CurrentObject' */
#ifndef SOAP_TYPE_PointerTons2__CurrentObject
#define SOAP_TYPE_PointerTons2__CurrentObject (207)
#endif

/* ns2__ClearZoneID * has binding name 'PointerTons2__ClearZoneID' for type 'ns2:ClearZoneID' */
#ifndef SOAP_TYPE_PointerTons2__ClearZoneID
#define SOAP_TYPE_PointerTons2__ClearZoneID (206)
#endif

/* ns2__FillRegionID * has binding name 'PointerTons2__FillRegionID' for type 'ns2:FillRegionID' */
#ifndef SOAP_TYPE_PointerTons2__FillRegionID
#define SOAP_TYPE_PointerTons2__FillRegionID (205)
#endif

/* ns2__ZoneData ** has binding name 'PointerToPointerTons2__ZoneData' for type 'ns2:ZoneData' */
#ifndef SOAP_TYPE_PointerToPointerTons2__ZoneData
#define SOAP_TYPE_PointerToPointerTons2__ZoneData (204)
#endif

/* ns2__ZoneData * has binding name 'PointerTons2__ZoneData' for type 'ns2:ZoneData' */
#ifndef SOAP_TYPE_PointerTons2__ZoneData
#define SOAP_TYPE_PointerTons2__ZoneData (203)
#endif

/* ns2__CountChannelData ** has binding name 'PointerToPointerTons2__CountChannelData' for type 'ns2:CountChannelData' */
#ifndef SOAP_TYPE_PointerToPointerTons2__CountChannelData
#define SOAP_TYPE_PointerToPointerTons2__CountChannelData (202)
#endif

/* ns2__CountChannelData * has binding name 'PointerTons2__CountChannelData' for type 'ns2:CountChannelData' */
#ifndef SOAP_TYPE_PointerTons2__CountChannelData
#define SOAP_TYPE_PointerTons2__CountChannelData (201)
#endif

/* ns2__CountingGateID * has binding name 'PointerTons2__CountingGateID' for type 'ns2:CountingGateID' */
#ifndef SOAP_TYPE_PointerTons2__CountingGateID
#define SOAP_TYPE_PointerTons2__CountingGateID (200)
#endif

/* std::wstring * has binding name 'PointerToxsd__decimal' for type 'xsd:decimal' */
#ifndef SOAP_TYPE_PointerToxsd__decimal
#define SOAP_TYPE_PointerToxsd__decimal (199)
#endif

/* bool * has binding name 'PointerTobool' for type 'xsd:boolean' */
#ifndef SOAP_TYPE_PointerTobool
#define SOAP_TYPE_PointerTobool (198)
#endif

/* ns2__HistoricObject ** has binding name 'PointerToPointerTons2__HistoricObject' for type 'ns2:HistoricObject' */
#ifndef SOAP_TYPE_PointerToPointerTons2__HistoricObject
#define SOAP_TYPE_PointerToPointerTons2__HistoricObject (197)
#endif

/* ns2__HistoricObject * has binding name 'PointerTons2__HistoricObject' for type 'ns2:HistoricObject' */
#ifndef SOAP_TYPE_PointerTons2__HistoricObject
#define SOAP_TYPE_PointerTons2__HistoricObject (196)
#endif

/* ns2__Coordinate_USCORE2D * has binding name 'PointerTons2__Coordinate_USCORE2D' for type 'ns2:Coordinate_2D' */
#ifndef SOAP_TYPE_PointerTons2__Coordinate_USCORE2D
#define SOAP_TYPE_PointerTons2__Coordinate_USCORE2D (195)
#endif

/* ns2__BinaryData * has binding name 'PointerTons2__BinaryData' for type 'ns2:BinaryData' */
#ifndef SOAP_TYPE_PointerTons2__BinaryData
#define SOAP_TYPE_PointerTons2__BinaryData (194)
#endif

/* ns2__DigitalInputElement ** has binding name 'PointerToPointerTons2__DigitalInputElement' for type 'ns2:DigitalInputElement' */
#ifndef SOAP_TYPE_PointerToPointerTons2__DigitalInputElement
#define SOAP_TYPE_PointerToPointerTons2__DigitalInputElement (193)
#endif

/* ns2__DigitalInputElement * has binding name 'PointerTons2__DigitalInputElement' for type 'ns2:DigitalInputElement' */
#ifndef SOAP_TYPE_PointerTons2__DigitalInputElement
#define SOAP_TYPE_PointerTons2__DigitalInputElement (192)
#endif

/* __ns2__union_TaskContainer * has binding name 'PointerTo__ns2__union_TaskContainer' for type '-ns2:union-TaskContainer' */
#ifndef SOAP_TYPE_PointerTo__ns2__union_TaskContainer
#define SOAP_TYPE_PointerTo__ns2__union_TaskContainer (191)
#endif

/* ns2__TaskDeleteAllNotifications * has binding name 'PointerTons2__TaskDeleteAllNotifications' for type 'ns2:TaskDeleteAllNotifications' */
#ifndef SOAP_TYPE_PointerTons2__TaskDeleteAllNotifications
#define SOAP_TYPE_PointerTons2__TaskDeleteAllNotifications (189)
#endif

/* ns2__TaskDeleteAllTasks * has binding name 'PointerTons2__TaskDeleteAllTasks' for type 'ns2:TaskDeleteAllTasks' */
#ifndef SOAP_TYPE_PointerTons2__TaskDeleteAllTasks
#define SOAP_TYPE_PointerTons2__TaskDeleteAllTasks (188)
#endif

/* ns2__TaskSubscribeFeaturesInfo * has binding name 'PointerTons2__TaskSubscribeFeaturesInfo' for type 'ns2:TaskSubscribeFeaturesInfo' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeFeaturesInfo
#define SOAP_TYPE_PointerTons2__TaskSubscribeFeaturesInfo (187)
#endif

/* ns2__TaskSubscribeZoneChannels * has binding name 'PointerTons2__TaskSubscribeZoneChannels' for type 'ns2:TaskSubscribeZoneChannels' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeZoneChannels
#define SOAP_TYPE_PointerTons2__TaskSubscribeZoneChannels (186)
#endif

/* ns2__TaskSubscribeCountChannels * has binding name 'PointerTons2__TaskSubscribeCountChannels' for type 'ns2:TaskSubscribeCountChannels' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeCountChannels
#define SOAP_TYPE_PointerTons2__TaskSubscribeCountChannels (185)
#endif

/* ns2__TaskSubscribeClearZone * has binding name 'PointerTons2__TaskSubscribeClearZone' for type 'ns2:TaskSubscribeClearZone' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeClearZone
#define SOAP_TYPE_PointerTons2__TaskSubscribeClearZone (184)
#endif

/* ns2__TaskRebootNow * has binding name 'PointerTons2__TaskRebootNow' for type 'ns2:TaskRebootNow' */
#ifndef SOAP_TYPE_PointerTons2__TaskRebootNow
#define SOAP_TYPE_PointerTons2__TaskRebootNow (183)
#endif

/* ns2__TaskSubscribeObjectList * has binding name 'PointerTons2__TaskSubscribeObjectList' for type 'ns2:TaskSubscribeObjectList' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeObjectList
#define SOAP_TYPE_PointerTons2__TaskSubscribeObjectList (182)
#endif

/* ns2__TaskSubscribeAlive * has binding name 'PointerTons2__TaskSubscribeAlive' for type 'ns2:TaskSubscribeAlive' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeAlive
#define SOAP_TYPE_PointerTons2__TaskSubscribeAlive (181)
#endif

/* ns2__TaskSubscribeVideoStore * has binding name 'PointerTons2__TaskSubscribeVideoStore' for type 'ns2:TaskSubscribeVideoStore' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeVideoStore
#define SOAP_TYPE_PointerTons2__TaskSubscribeVideoStore (180)
#endif

/* ns2__TaskSubscribeSendParameters * has binding name 'PointerTons2__TaskSubscribeSendParameters' for type 'ns2:TaskSubscribeSendParameters' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeSendParameters
#define SOAP_TYPE_PointerTons2__TaskSubscribeSendParameters (179)
#endif

/* ns2__TaskSubscribeCameraImages * has binding name 'PointerTons2__TaskSubscribeCameraImages' for type 'ns2:TaskSubscribeCameraImages' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeCameraImages
#define SOAP_TYPE_PointerTons2__TaskSubscribeCameraImages (178)
#endif

/* ns2__TaskSubscribeDigitalInput * has binding name 'PointerTons2__TaskSubscribeDigitalInput' for type 'ns2:TaskSubscribeDigitalInput' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeDigitalInput
#define SOAP_TYPE_PointerTons2__TaskSubscribeDigitalInput (177)
#endif

/* ns2__TaskSubscribeFill * has binding name 'PointerTons2__TaskSubscribeFill' for type 'ns2:TaskSubscribeFill' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeFill
#define SOAP_TYPE_PointerTons2__TaskSubscribeFill (176)
#endif

/* ns2__TaskSubscribeCounting * has binding name 'PointerTons2__TaskSubscribeCounting' for type 'ns2:TaskSubscribeCounting' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeCounting
#define SOAP_TYPE_PointerTons2__TaskSubscribeCounting (175)
#endif

/* ns2__TaskSetDateTime * has binding name 'PointerTons2__TaskSetDateTime' for type 'ns2:TaskSetDateTime' */
#ifndef SOAP_TYPE_PointerTons2__TaskSetDateTime
#define SOAP_TYPE_PointerTons2__TaskSetDateTime (174)
#endif

/* ns2__TaskSetDigitalOutput * has binding name 'PointerTons2__TaskSetDigitalOutput' for type 'ns2:TaskSetDigitalOutput' */
#ifndef SOAP_TYPE_PointerTons2__TaskSetDigitalOutput
#define SOAP_TYPE_PointerTons2__TaskSetDigitalOutput (173)
#endif

/* ns2__TaskSubscribeErrorLog * has binding name 'PointerTons2__TaskSubscribeErrorLog' for type 'ns2:TaskSubscribeErrorLog' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeErrorLog
#define SOAP_TYPE_PointerTons2__TaskSubscribeErrorLog (172)
#endif

/* ns2__TaskSubscribeLogfiles * has binding name 'PointerTons2__TaskSubscribeLogfiles' for type 'ns2:TaskSubscribeLogfiles' */
#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeLogfiles
#define SOAP_TYPE_PointerTons2__TaskSubscribeLogfiles (171)
#endif

/* ns2__TaskRequestParameters * has binding name 'PointerTons2__TaskRequestParameters' for type 'ns2:TaskRequestParameters' */
#ifndef SOAP_TYPE_PointerTons2__TaskRequestParameters
#define SOAP_TYPE_PointerTons2__TaskRequestParameters (170)
#endif

/* ns2__TaskRequestUpdate * has binding name 'PointerTons2__TaskRequestUpdate' for type 'ns2:TaskRequestUpdate' */
#ifndef SOAP_TYPE_PointerTons2__TaskRequestUpdate
#define SOAP_TYPE_PointerTons2__TaskRequestUpdate (169)
#endif

/* ns2__FeatureInfoNotification * has binding name 'PointerTons2__FeatureInfoNotification' for type 'ns2:FeatureInfoNotification' */
#ifndef SOAP_TYPE_PointerTons2__FeatureInfoNotification
#define SOAP_TYPE_PointerTons2__FeatureInfoNotification (165)
#endif

/* ns2__ZoneChannelsNotification * has binding name 'PointerTons2__ZoneChannelsNotification' for type 'ns2:ZoneChannelsNotification' */
#ifndef SOAP_TYPE_PointerTons2__ZoneChannelsNotification
#define SOAP_TYPE_PointerTons2__ZoneChannelsNotification (164)
#endif

/* ns2__CountChannelsNotification * has binding name 'PointerTons2__CountChannelsNotification' for type 'ns2:CountChannelsNotification' */
#ifndef SOAP_TYPE_PointerTons2__CountChannelsNotification
#define SOAP_TYPE_PointerTons2__CountChannelsNotification (163)
#endif

/* ns2__ClearZoneNotification * has binding name 'PointerTons2__ClearZoneNotification' for type 'ns2:ClearZoneNotification' */
#ifndef SOAP_TYPE_PointerTons2__ClearZoneNotification
#define SOAP_TYPE_PointerTons2__ClearZoneNotification (162)
#endif

/* ns2__StartupNotification * has binding name 'PointerTons2__StartupNotification' for type 'ns2:StartupNotification' */
#ifndef SOAP_TYPE_PointerTons2__StartupNotification
#define SOAP_TYPE_PointerTons2__StartupNotification (161)
#endif

/* ns2__HistoricObjectListNotification * has binding name 'PointerTons2__HistoricObjectListNotification' for type 'ns2:HistoricObjectListNotification' */
#ifndef SOAP_TYPE_PointerTons2__HistoricObjectListNotification
#define SOAP_TYPE_PointerTons2__HistoricObjectListNotification (160)
#endif

/* ns2__CurrentObjectListNotification * has binding name 'PointerTons2__CurrentObjectListNotification' for type 'ns2:CurrentObjectListNotification' */
#ifndef SOAP_TYPE_PointerTons2__CurrentObjectListNotification
#define SOAP_TYPE_PointerTons2__CurrentObjectListNotification (159)
#endif

/* ns2__AliveNotification * has binding name 'PointerTons2__AliveNotification' for type 'ns2:AliveNotification' */
#ifndef SOAP_TYPE_PointerTons2__AliveNotification
#define SOAP_TYPE_PointerTons2__AliveNotification (158)
#endif

/* ns2__ErrorLogfilesNotification * has binding name 'PointerTons2__ErrorLogfilesNotification' for type 'ns2:ErrorLogfilesNotification' */
#ifndef SOAP_TYPE_PointerTons2__ErrorLogfilesNotification
#define SOAP_TYPE_PointerTons2__ErrorLogfilesNotification (157)
#endif

/* ns2__LogfilesNotification * has binding name 'PointerTons2__LogfilesNotification' for type 'ns2:LogfilesNotification' */
#ifndef SOAP_TYPE_PointerTons2__LogfilesNotification
#define SOAP_TYPE_PointerTons2__LogfilesNotification (156)
#endif

/* ns2__ParameterNotification * has binding name 'PointerTons2__ParameterNotification' for type 'ns2:ParameterNotification' */
#ifndef SOAP_TYPE_PointerTons2__ParameterNotification
#define SOAP_TYPE_PointerTons2__ParameterNotification (155)
#endif

/* ns2__CameraImagesNotification * has binding name 'PointerTons2__CameraImagesNotification' for type 'ns2:CameraImagesNotification' */
#ifndef SOAP_TYPE_PointerTons2__CameraImagesNotification
#define SOAP_TYPE_PointerTons2__CameraImagesNotification (154)
#endif

/* ns2__DigitalInputNotification * has binding name 'PointerTons2__DigitalInputNotification' for type 'ns2:DigitalInputNotification' */
#ifndef SOAP_TYPE_PointerTons2__DigitalInputNotification
#define SOAP_TYPE_PointerTons2__DigitalInputNotification (153)
#endif

/* ns2__FillNotification * has binding name 'PointerTons2__FillNotification' for type 'ns2:FillNotification' */
#ifndef SOAP_TYPE_PointerTons2__FillNotification
#define SOAP_TYPE_PointerTons2__FillNotification (152)
#endif

/* ns2__CountNotification * has binding name 'PointerTons2__CountNotification' for type 'ns2:CountNotification' */
#ifndef SOAP_TYPE_PointerTons2__CountNotification
#define SOAP_TYPE_PointerTons2__CountNotification (151)
#endif

/* ns2__Coordinate_USCORE3D * has binding name 'PointerTons2__Coordinate_USCORE3D' for type 'ns2:Coordinate_3D' */
#ifndef SOAP_TYPE_PointerTons2__Coordinate_USCORE3D
#define SOAP_TYPE_PointerTons2__Coordinate_USCORE3D (150)
#endif

/* ns2__ZoneChannelFeatureInfo ** has binding name 'PointerToPointerTons2__ZoneChannelFeatureInfo' for type 'ns2:ZoneChannelFeatureInfo' */
#ifndef SOAP_TYPE_PointerToPointerTons2__ZoneChannelFeatureInfo
#define SOAP_TYPE_PointerToPointerTons2__ZoneChannelFeatureInfo (149)
#endif

/* ns2__ZoneChannelFeatureInfo * has binding name 'PointerTons2__ZoneChannelFeatureInfo' for type 'ns2:ZoneChannelFeatureInfo' */
#ifndef SOAP_TYPE_PointerTons2__ZoneChannelFeatureInfo
#define SOAP_TYPE_PointerTons2__ZoneChannelFeatureInfo (148)
#endif

/* ns2__CountChannelFeatureInfo ** has binding name 'PointerToPointerTons2__CountChannelFeatureInfo' for type 'ns2:CountChannelFeatureInfo' */
#ifndef SOAP_TYPE_PointerToPointerTons2__CountChannelFeatureInfo
#define SOAP_TYPE_PointerToPointerTons2__CountChannelFeatureInfo (147)
#endif

/* ns2__CountChannelFeatureInfo * has binding name 'PointerTons2__CountChannelFeatureInfo' for type 'ns2:CountChannelFeatureInfo' */
#ifndef SOAP_TYPE_PointerTons2__CountChannelFeatureInfo
#define SOAP_TYPE_PointerTons2__CountChannelFeatureInfo (146)
#endif

/* std::wstring * has binding name 'PointerTons2__ObjectClassName' for type 'ns2:ObjectClassName' */
#ifndef SOAP_TYPE_PointerTons2__ObjectClassName
#define SOAP_TYPE_PointerTons2__ObjectClassName (145)
#endif

/* std::wstring * has binding name 'PointerTons2__MeasuringChannelName' for type 'ns2:MeasuringChannelName' */
#ifndef SOAP_TYPE_PointerTons2__MeasuringChannelName
#define SOAP_TYPE_PointerTons2__MeasuringChannelName (144)
#endif

/* ns2__TimeTrigger * has binding name 'PointerTons2__TimeTrigger' for type 'ns2:TimeTrigger' */
#ifndef SOAP_TYPE_PointerTons2__TimeTrigger
#define SOAP_TYPE_PointerTons2__TimeTrigger (141)
#endif

/* ns2__EventTrigger * has binding name 'PointerTons2__EventTrigger' for type 'ns2:EventTrigger' */
#ifndef SOAP_TYPE_PointerTons2__EventTrigger
#define SOAP_TYPE_PointerTons2__EventTrigger (140)
#endif

/* LONG64 * has binding name 'PointerToxsd__duration' for type 'xsd:duration' */
#ifndef SOAP_TYPE_PointerToxsd__duration
#define SOAP_TYPE_PointerToxsd__duration (139)
#endif

/* ns2__ClockTime * has binding name 'PointerTons2__ClockTime' for type 'ns2:ClockTime' */
#ifndef SOAP_TYPE_PointerTons2__ClockTime
#define SOAP_TYPE_PointerTons2__ClockTime (138)
#endif

/* ns2__Date * has binding name 'PointerTons2__Date' for type 'ns2:Date' */
#ifndef SOAP_TYPE_PointerTons2__Date
#define SOAP_TYPE_PointerTons2__Date (137)
#endif

/* unsigned int * has binding name 'PointerTons2__DayOfMonth' for type 'ns2:DayOfMonth' */
#ifndef SOAP_TYPE_PointerTons2__DayOfMonth
#define SOAP_TYPE_PointerTons2__DayOfMonth (136)
#endif

/* enum ns2__DayOfWeek * has binding name 'PointerTons2__DayOfWeek' for type 'ns2:DayOfWeek' */
#ifndef SOAP_TYPE_PointerTons2__DayOfWeek
#define SOAP_TYPE_PointerTons2__DayOfWeek (135)
#endif

/* ns2__FeatureChangedEvent * has binding name 'PointerTons2__FeatureChangedEvent' for type 'ns2:FeatureChangedEvent' */
#ifndef SOAP_TYPE_PointerTons2__FeatureChangedEvent
#define SOAP_TYPE_PointerTons2__FeatureChangedEvent (133)
#endif

/* ns2__ZoneChannelsEvent * has binding name 'PointerTons2__ZoneChannelsEvent' for type 'ns2:ZoneChannelsEvent' */
#ifndef SOAP_TYPE_PointerTons2__ZoneChannelsEvent
#define SOAP_TYPE_PointerTons2__ZoneChannelsEvent (132)
#endif

/* ns2__CountChannelsEvent * has binding name 'PointerTons2__CountChannelsEvent' for type 'ns2:CountChannelsEvent' */
#ifndef SOAP_TYPE_PointerTons2__CountChannelsEvent
#define SOAP_TYPE_PointerTons2__CountChannelsEvent (131)
#endif

/* ns2__ClearZoneEvent * has binding name 'PointerTons2__ClearZoneEvent' for type 'ns2:ClearZoneEvent' */
#ifndef SOAP_TYPE_PointerTons2__ClearZoneEvent
#define SOAP_TYPE_PointerTons2__ClearZoneEvent (130)
#endif

/* ns2__CurrentObjectListEvent * has binding name 'PointerTons2__CurrentObjectListEvent' for type 'ns2:CurrentObjectListEvent' */
#ifndef SOAP_TYPE_PointerTons2__CurrentObjectListEvent
#define SOAP_TYPE_PointerTons2__CurrentObjectListEvent (129)
#endif

/* ns2__OSD_USCOREEvent * has binding name 'PointerTons2__OSD_USCOREEvent' for type 'ns2:OSD_Event' */
#ifndef SOAP_TYPE_PointerTons2__OSD_USCOREEvent
#define SOAP_TYPE_PointerTons2__OSD_USCOREEvent (128)
#endif

/* ns2__OneTimeEvent * has binding name 'PointerTons2__OneTimeEvent' for type 'ns2:OneTimeEvent' */
#ifndef SOAP_TYPE_PointerTons2__OneTimeEvent
#define SOAP_TYPE_PointerTons2__OneTimeEvent (127)
#endif

/* ns2__DigitalInputEvent * has binding name 'PointerTons2__DigitalInputEvent' for type 'ns2:DigitalInputEvent' */
#ifndef SOAP_TYPE_PointerTons2__DigitalInputEvent
#define SOAP_TYPE_PointerTons2__DigitalInputEvent (126)
#endif

/* ns2__FillEvent * has binding name 'PointerTons2__FillEvent' for type 'ns2:FillEvent' */
#ifndef SOAP_TYPE_PointerTons2__FillEvent
#define SOAP_TYPE_PointerTons2__FillEvent (125)
#endif

/* ns2__CountEvent * has binding name 'PointerTons2__CountEvent' for type 'ns2:CountEvent' */
#ifndef SOAP_TYPE_PointerTons2__CountEvent
#define SOAP_TYPE_PointerTons2__CountEvent (124)
#endif

/* enum ns2__DigitalInputEventType * has binding name 'PointerTons2__DigitalInputEventType' for type 'ns2:DigitalInputEventType' */
#ifndef SOAP_TYPE_PointerTons2__DigitalInputEventType
#define SOAP_TYPE_PointerTons2__DigitalInputEventType (123)
#endif

/* unsigned int * has binding name 'PointerTounsignedInt' for type 'xsd:unsignedInt' */
#ifndef SOAP_TYPE_PointerTounsignedInt
#define SOAP_TYPE_PointerTounsignedInt (122)
#endif

/* unsigned char * has binding name 'PointerTounsignedByte' for type 'xsd:unsignedByte' */
#ifndef SOAP_TYPE_PointerTounsignedByte
#define SOAP_TYPE_PointerTounsignedByte (10)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
