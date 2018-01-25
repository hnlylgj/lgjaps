/* soapSOAPdServiceSoap12BindingProxy.cpp

*/

#include "CloudStackSoap12ServiceProxy.h"

SOAPdServiceSoap12BindingProxy::SOAPdServiceSoap12BindingProxy() : soap(SOAP_IO_DEFAULT)
{	SOAPdServiceSoap12BindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

SOAPdServiceSoap12BindingProxy::SOAPdServiceSoap12BindingProxy(const SOAPdServiceSoap12BindingProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
}

SOAPdServiceSoap12BindingProxy::SOAPdServiceSoap12BindingProxy(const struct soap &_soap) : soap(_soap)
{ }

SOAPdServiceSoap12BindingProxy::SOAPdServiceSoap12BindingProxy(const char *endpoint) : soap(SOAP_IO_DEFAULT)
{	SOAPdServiceSoap12BindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

SOAPdServiceSoap12BindingProxy::SOAPdServiceSoap12BindingProxy(soap_mode iomode) : soap(iomode)
{	SOAPdServiceSoap12BindingProxy_init(iomode, iomode);
}

SOAPdServiceSoap12BindingProxy::SOAPdServiceSoap12BindingProxy(const char *endpoint, soap_mode iomode) : soap(iomode)
{	SOAPdServiceSoap12BindingProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

SOAPdServiceSoap12BindingProxy::SOAPdServiceSoap12BindingProxy(soap_mode imode, soap_mode omode) : soap(imode, omode)
{	SOAPdServiceSoap12BindingProxy_init(imode, omode);
}

SOAPdServiceSoap12BindingProxy::~SOAPdServiceSoap12BindingProxy()
{
	this->destroy();
	}

void SOAPdServiceSoap12BindingProxy::SOAPdServiceSoap12BindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"ns1", "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/", NULL, NULL},
        {"ns2", "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this, namespaces);
}

#ifndef WITH_PURE_VIRTUAL
SOAPdServiceSoap12BindingProxy *SOAPdServiceSoap12BindingProxy::copy()
{	SOAPdServiceSoap12BindingProxy *dup = SOAP_NEW_COPY(SOAPdServiceSoap12BindingProxy(*(struct soap*)this));
	return dup;
}
#endif

SOAPdServiceSoap12BindingProxy& SOAPdServiceSoap12BindingProxy::operator=(const SOAPdServiceSoap12BindingProxy& rhs)
{	soap_copy_context(this, &rhs);
	this->soap_endpoint = rhs.soap_endpoint;
	return *this;
}

void SOAPdServiceSoap12BindingProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void SOAPdServiceSoap12BindingProxy::reset()
{	this->destroy();
	soap_done(this);
	soap_initialize(this);
	SOAPdServiceSoap12BindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void SOAPdServiceSoap12BindingProxy::soap_noheader()
{	this->header = NULL;
}

::SOAP_ENV__Header *SOAPdServiceSoap12BindingProxy::soap_header()
{	return this->header;
}

::SOAP_ENV__Fault *SOAPdServiceSoap12BindingProxy::soap_fault()
{	return this->fault;
}

const char *SOAPdServiceSoap12BindingProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *SOAPdServiceSoap12BindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int SOAPdServiceSoap12BindingProxy::soap_close_socket()
{	return soap_closesock(this);
}

int SOAPdServiceSoap12BindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void SOAPdServiceSoap12BindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void SOAPdServiceSoap12BindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *SOAPdServiceSoap12BindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int SOAPdServiceSoap12BindingProxy::Notification(const char *endpoint, const char *soap_action, ns2__NotificationContainer *ns2__notification_USCOREmessage, ns2__AnswerContainer &ns2__answer_USCOREmessage)
{	struct soap *soap = this;
	struct __ns1__Notification soap_tmp___ns1__Notification;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://192.168.200.3:80/SOAPdService/SOAPdService.asmx";
	if (soap_action == NULL)
		soap_action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest";
	soap_tmp___ns1__Notification.ns2__notification_USCOREmessage = ns2__notification_USCOREmessage;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__Notification(soap, &soap_tmp___ns1__Notification);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__Notification(soap, &soap_tmp___ns1__Notification, "-ns1:Notification", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__Notification(soap, &soap_tmp___ns1__Notification, "-ns1:Notification", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<ns2__AnswerContainer*>(&ns2__answer_USCOREmessage)) // NULL ref?
		return soap_closesock(soap);
	ns2__answer_USCOREmessage.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__answer_USCOREmessage.soap_get(soap, "ns2:answer_message", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int SOAPdServiceSoap12BindingProxy::Error(const char *endpoint, const char *soap_action, ns2__ErrorContainer *ns2__error_USCOREmessage, ns2__TaskContainer &ns2__task_USCOREmessage)
{	struct soap *soap = this;
	struct __ns1__Error soap_tmp___ns1__Error;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://192.168.200.3:80/SOAPdService/SOAPdService.asmx";
	if (soap_action == NULL)
		soap_action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/ErrorRequest";
	soap_tmp___ns1__Error.ns2__error_USCOREmessage = ns2__error_USCOREmessage;
	soap_begin(soap);
	soap_set_version(soap, 2); /* SOAP1.2 */
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__Error(soap, &soap_tmp___ns1__Error);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__Error(soap, &soap_tmp___ns1__Error, "-ns1:Error", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__Error(soap, &soap_tmp___ns1__Error, "-ns1:Error", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<ns2__TaskContainer*>(&ns2__task_USCOREmessage)) // NULL ref?
		return soap_closesock(soap);
	ns2__task_USCOREmessage.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__task_USCOREmessage.soap_get(soap, "ns2:task_message", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
