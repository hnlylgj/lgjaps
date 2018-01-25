/* soapSOAPdServiceSoap12BindingProxy.h

*/

#ifndef soapSOAPdServiceSoap12BindingProxy_H
#define soapSOAPdServiceSoap12BindingProxy_H
#include "CloudStacksoap12Wrapper.h"

    class SOAP_CMAC SOAPdServiceSoap12BindingProxy : public soap
    {
      public:
        /// Endpoint URL of service 'SOAPdServiceSoap12BindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in hella.h, if any
        /// Construct a proxy with new managing context
        SOAPdServiceSoap12BindingProxy();
        /// Copy constructor
        SOAPdServiceSoap12BindingProxy(const SOAPdServiceSoap12BindingProxy& rhs);
        /// Construct proxy given a managing context
        SOAPdServiceSoap12BindingProxy(const struct soap&);
        /// Constructor taking an endpoint URL
        SOAPdServiceSoap12BindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        SOAPdServiceSoap12BindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        SOAPdServiceSoap12BindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        SOAPdServiceSoap12BindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and managing context
        virtual ~SOAPdServiceSoap12BindingProxy();
        /// Initializer used by constructors
        virtual void SOAPdServiceSoap12BindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual SOAPdServiceSoap12BindingProxy *copy() SOAP_PURE_VIRTUAL;
        /// Copy assignment
        SOAPdServiceSoap12BindingProxy& operator=(const SOAPdServiceSoap12BindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault string (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail as string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
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
        /// Web service operation 'Notification' (returns SOAP_OK or error code)
        virtual int Notification(ns2__NotificationContainer *ns2__notification_USCOREmessage, ns2__AnswerContainer &ns2__answer_USCOREmessage)
        {
        	return this->Notification(NULL, NULL, ns2__notification_USCOREmessage, ns2__answer_USCOREmessage);
        }

        virtual int Notification(const char *soap_endpoint, const char *soap_action, ns2__NotificationContainer *ns2__notification_USCOREmessage, ns2__AnswerContainer &ns2__answer_USCOREmessage);


        /// Web service operation 'Error' (returns SOAP_OK or error code)
        virtual int Error(ns2__ErrorContainer *ns2__error_USCOREmessage, ns2__TaskContainer &ns2__task_USCOREmessage)
        {
        	return this->Error(NULL, NULL, ns2__error_USCOREmessage, ns2__task_USCOREmessage);
        }
        virtual int Error(const char *soap_endpoint, const char *soap_action, ns2__ErrorContainer *ns2__error_USCOREmessage, ns2__TaskContainer &ns2__task_USCOREmessage);
    };
#endif
