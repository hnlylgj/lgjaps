/* soapSOAPdServiceSoap12BindingService.h

--------------------------------------------------------------------------------
*/

#ifndef soapSOAPdServiceSoap12BindingService_H
#define soapSOAPdServiceSoap12BindingService_H
#include "CloudStackSoap12Wrapper.h"


typedef void(*pUICallback)(int messageID, int ResultFalg, const wchar_t* pNotificationID, const wchar_t* pCustomerID, unsigned int ptaskid);
typedef void(*pUICallback2)(int messageID, int ResultFalg, const wchar_t* pNotificationID, const wchar_t* pCustomerID, unsigned int ptaskid, unsigned int in, unsigned int out);
   
   class SOAP_CMAC SOAPdServiceSoap12BindingService : public soap
    {
      public:
        /// Variables globally declared in hella.h, if any
        /// Construct a service with new managing context
    	SOAPdServiceSoap12BindingService();
        /// Copy constructor
    	SOAPdServiceSoap12BindingService(const SOAPdServiceSoap12BindingService&);
        /// Construct service given a managing context
    	SOAPdServiceSoap12BindingService(const struct soap&);
        /// Constructor taking input+output mode flags for the new managing context
    	SOAPdServiceSoap12BindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
    	SOAPdServiceSoap12BindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~SOAPdServiceSoap12BindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void SOAPdServiceSoap12BindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual SOAPdServiceSoap12BindingService *copy() SOAP_PURE_VIRTUAL;
        /// Copy assignment
        SOAPdServiceSoap12BindingService& operator=(const SOAPdServiceSoap12BindingService&);
        /// Close connection (normally automatic)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Return sender-related fault to sender
        virtual int soap_senderfault(const char *string, const char *detailXML);
        /// Return sender-related fault with SOAP 1.2 subcode to sender
        virtual int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Return receiver-related fault to sender
        virtual int soap_receiverfault(const char *string, const char *detailXML);
        /// Return receiver-related fault with SOAP 1.2 subcode to sender
        virtual int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int run(int port);
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// Run simple single-thread SSL service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int ssl_run(int port);
    #endif
        /// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET bind(const char *host, int port, int backlog);
        /// Accept next request (returns socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET accept();
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// When SSL is used, after accept() should perform and accept SSL handshake
        virtual int ssl_accept();
    #endif
        /// After accept() serve this request (returns SOAP_OK or error code)
        virtual int serve();
        /// Used by serve() to dispatch a request (returns SOAP_OK or error code)
        virtual int dispatch();
        ///
        /// Service operations are listed below (you should define these)
        /// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
        ///
        /// Web service operation 'Notification' (returns SOAP_OK or error code)
        virtual int Notification(ns2__NotificationContainer *ns2__notification_USCOREmessage, ns2__AnswerContainer &ns2__answer_USCOREmessage) SOAP_PURE_VIRTUAL;
        /// Web service operation 'Error' (returns SOAP_OK or error code)
        virtual int Error(ns2__ErrorContainer *ns2__error_USCOREmessage, ns2__TaskContainer &ns2__task_USCOREmessage) SOAP_PURE_VIRTUAL;

		//----------
		int mCount=0;
		//---------------
		const char* pFirst = "POST /SmartBusCloudStack/PeopleCounting/HellaPush HTTP/1.1";

		pUICallback pUIcb;
		pUICallback2 pUIcb2;

		__ns2__union_TaskContainer* CreateAnswerResultList(int* pListCount, int FalgID, unsigned int taskid);


		__ns2__union_TaskContainer* CopyAnswerTaskList(int FalgID, int ListCount,  __ns2__union_TaskContainer* SrcTaskContainer);

		void CreateTask_Subscribecounting(__ns2__union_TaskContainer* MyDestUnionTaskType, __ns2__union_TaskContainer* SrcTaskContainer);


		void CreateTask_SubscribeAlive(__ns2__union_TaskContainer* MyDestUnionTaskType, __ns2__union_TaskContainer* MySrcUnionTaskType);


    };
#endif
