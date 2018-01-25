/* soapSOAPdServiceSoap12BindingService.cpp

*/

#include "CloudStackSoap12BindingService.h"
#include "CloudStackSoap12ServiceProxy.h"//加入客户端头文件

SOAPdServiceSoap12BindingService::SOAPdServiceSoap12BindingService() : soap(SOAP_IO_DEFAULT)
{

	SOAPdServiceSoap12BindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

SOAPdServiceSoap12BindingService::SOAPdServiceSoap12BindingService(const SOAPdServiceSoap12BindingService& rhs)
{
	soap_copy_context(this, &rhs);
}

SOAPdServiceSoap12BindingService::SOAPdServiceSoap12BindingService(const struct soap &_soap) : soap(_soap)
{
	}

SOAPdServiceSoap12BindingService::SOAPdServiceSoap12BindingService(soap_mode iomode) : soap(iomode)
{

	SOAPdServiceSoap12BindingService_init(iomode, iomode);
}

SOAPdServiceSoap12BindingService::SOAPdServiceSoap12BindingService(soap_mode imode, soap_mode omode) : soap(imode, omode)
{
	SOAPdServiceSoap12BindingService_init(imode, omode);
}

SOAPdServiceSoap12BindingService::~SOAPdServiceSoap12BindingService()
{
	this->destroy();
}

void SOAPdServiceSoap12BindingService::SOAPdServiceSoap12BindingService_init(soap_mode imode, soap_mode omode)
{

	soap_imode(this, imode);
	soap_omode(this, omode);
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

void SOAPdServiceSoap12BindingService::destroy()
{
	soap_destroy(this);
	soap_end(this);
}

void SOAPdServiceSoap12BindingService::reset()
{
	this->destroy();
	soap_done(this);
	soap_initialize(this);
	SOAPdServiceSoap12BindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
SOAPdServiceSoap12BindingService *SOAPdServiceSoap12BindingService::copy()
{

	SOAPdServiceSoap12BindingService *dup = SOAP_NEW_COPY(SOAPdServiceSoap12BindingService(*(struct soap*)this));
	return dup;
}
#endif

SOAPdServiceSoap12BindingService& SOAPdServiceSoap12BindingService::operator=(const SOAPdServiceSoap12BindingService& rhs)
{
	soap_copy_context(this, &rhs);
	return *this;
}

int SOAPdServiceSoap12BindingService::soap_close_socket()
{
	return soap_closesock(this);
}

int SOAPdServiceSoap12BindingService::soap_force_close_socket()
{
	return soap_force_closesock(this);
}

int SOAPdServiceSoap12BindingService::soap_senderfault(const char *string, const char *detailXML)
{
	return ::soap_sender_fault(this, string, detailXML);
}

int SOAPdServiceSoap12BindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{
	return ::soap_sender_fault_subcode(this, subcodeQName, string, detailXML);
}

int SOAPdServiceSoap12BindingService::soap_receiverfault(const char *string, const char *detailXML)
{
	return ::soap_receiver_fault(this, string, detailXML);
}

int SOAPdServiceSoap12BindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{
	return ::soap_receiver_fault_subcode(this, subcodeQName, string, detailXML);
}

void SOAPdServiceSoap12BindingService::soap_print_fault(FILE *fd)
{
	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void SOAPdServiceSoap12BindingService::soap_stream_fault(std::ostream& os)
{
	::soap_stream_fault(this, os);
}
#endif

char *SOAPdServiceSoap12BindingService::soap_sprint_fault(char *buf, size_t len)
{
	return ::soap_sprint_fault(this, buf, len);
}
#endif

void SOAPdServiceSoap12BindingService::soap_noheader()
{
	this->header = NULL;
}

::SOAP_ENV__Header *SOAPdServiceSoap12BindingService::soap_header()
{
	return this->header;
}

int SOAPdServiceSoap12BindingService::run(int port)
{
	if (!soap_valid_socket(this->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->error;
	for (;;)
	{
		if (!soap_valid_socket(this->accept()))
		{
			if (this->errnum == 0) // timeout?
				this->error = SOAP_OK;
			break;
		}
		if (this->serve())
			break;
		this->destroy();
	}
	return this->error;
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int SOAPdServiceSoap12BindingService::ssl_run(int port)
{	if (!soap_valid_socket(this->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->errnum == 0) // timeout?
				this->error = SOAP_OK;
			break;
		}
		if (this->ssl_accept() || this->serve())
			break;
		this->destroy();
	}
	return this->error;
}
#endif

SOAP_SOCKET SOAPdServiceSoap12BindingService::bind(const char *host, int port, int backlog)
{
	return soap_bind(this, host, port, backlog);
}

SOAP_SOCKET SOAPdServiceSoap12BindingService::accept()
{
	return soap_accept(this);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int SOAPdServiceSoap12BindingService::ssl_accept()
{	return soap_ssl_accept(this);
}
#endif

int SOAPdServiceSoap12BindingService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->max_keep_alive;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (this->max_keep_alive > 0 && !--k)
			this->keep_alive = 0;
#endif
		if (soap_begin_serve(this))
		{	if (this->error >= SOAP_STOP)
				continue;
			return this->error;
		}
		if ((dispatch() || (this->fserveloop && this->fserveloop(this))) && this->error && this->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this);
#else
			return soap_send_fault(this);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(this);
		soap_end(this);
	} while (1);
#else
	} while (this->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___ns1__Notification(SOAPdServiceSoap12BindingService*);
static int serve___ns1__Error(SOAPdServiceSoap12BindingService*);

int SOAPdServiceSoap12BindingService::dispatch()
{
	soap_peek_element(this);
	if (!soap_match_tag(this, this->tag, "ns2:notification_message"))
		return serve___ns1__Notification(this);
	if (!soap_match_tag(this, this->tag, "ns2:error_message"))
		return serve___ns1__Error(this);
	return this->error = SOAP_NO_METHOD;
}

static int serve___ns1__Notification(SOAPdServiceSoap12BindingService *soap)
{	struct __ns1__Notification soap_tmp___ns1__Notification;
	ns2__AnswerContainer ns2__answer_USCOREmessage;
	ns2__answer_USCOREmessage.soap_default(soap);
	soap_default___ns1__Notification(soap, &soap_tmp___ns1__Notification);
	if (!soap_get___ns1__Notification(soap, &soap_tmp___ns1__Notification, "-ns1:Notification", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->Notification(soap_tmp___ns1__Notification.ns2__notification_USCOREmessage, ns2__answer_USCOREmessage);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns2__answer_USCOREmessage.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns2__answer_USCOREmessage.soap_put(soap, "ns2:answer_message", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns2__answer_USCOREmessage.soap_put(soap, "ns2:answer_message", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___ns1__Error(SOAPdServiceSoap12BindingService *soap)
{	struct __ns1__Error soap_tmp___ns1__Error;
	ns2__TaskContainer ns2__task_USCOREmessage;
	ns2__task_USCOREmessage.soap_default(soap);
	soap_default___ns1__Error(soap, &soap_tmp___ns1__Error);
	if (!soap_get___ns1__Error(soap, &soap_tmp___ns1__Error, "-ns1:Error", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = soap->Error(soap_tmp___ns1__Error.ns2__error_USCOREmessage, ns2__task_USCOREmessage);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	ns2__task_USCOREmessage.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || ns2__task_USCOREmessage.soap_put(soap, "ns2:task_message", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || ns2__task_USCOREmessage.soap_put(soap, "ns2:task_message", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

//------------------------------

 int SOAPdServiceSoap12BindingService::Notification(ns2__NotificationContainer *ns2__notification_USCOREmessage, ns2__AnswerContainer &ns2__answer_USCOREmessage)
{
	mCount++;

	ns2__NotificationContainer *MyNotificationContainer = ns2__notification_USCOREmessage;
	const char* pFirstmsg = MyNotificationContainer->soap->msgbuf; //起始行:结点地址
	if (strcmp(pFirstmsg, pFirst)==0)
	{
		int MyUnionSector = MyNotificationContainer->__union_NotificationContainer;
		std::wstring CustomerID, address;
		unsigned int taskid;

		unsigned int Notification_ID=0;

		

		if (MyUnionSector == 11)
		{
			ns2__StartupNotification *pstartup = MyNotificationContainer->union_NotificationContainer.startup_USCOREnotification;
			CustomerID = pstartup->customer_USCOREID;
			taskid = pstartup->serverTask_USCOREID;
			address = pstartup->ip_USCOREaddress;
			const wchar_t* pCustomerID = CustomerID.c_str(); 

			/*
			printf("[%d]::StartupNotification \n", mCount);
			printf("[%d]::CustomerID[%ws] ", mCount, CustomerID);
			printf("Address[%ws] ", address);
			printf("TaskID[%d] \n", taskid);
			*/
			pUIcb(1111,101, L"StartupNotification", pCustomerID, taskid);

			Notification_ID = pstartup->notification_USCOREID;

		}
		if (MyUnionSector == 1)
		{
			ns2__CountNotification *pCounting = MyNotificationContainer->union_NotificationContainer.count_USCOREnotification;
			CustomerID = pCounting->customer_USCOREID;
			taskid = pCounting->serverTask_USCOREID;

			unsigned int in = pCounting->count_USCOREin;
			unsigned int out = pCounting->count_USCOREout;
			const wchar_t* pCustomerID = CustomerID.c_str(); //L"12345678900";

			/*
			printf("[%d]::CountNotification \n", mCount);
			printf("[%d]::#CustomerID[%ws]  ", mCount, CustomerID);
			printf("IN:%d, OUT:%d ", in, out);
			printf(" TaskID[%d]\n",  taskid);
			*/
			
			pUIcb2(1111, 102, L"CountNotification", pCustomerID, taskid,in,out);
			Notification_ID = pCounting->notification_USCOREID;

		}



		//----第1.种方法------------------------------------------------------------------------------
		/*
		ns2__TaskSubscribeCounting* MyTask_Subscribecounting=new ns2__TaskSubscribeCounting;

		MyTask_Subscribecounting->serverTask_USCOREID = 1071;
		MyTask_Subscribecounting->activity_USCOREstate = true;
		MyTask_Subscribecounting->task_USCOREtype = ns2__TaskType__TASK_USCORECOUNT;
		//MyTask_Subscribecounting.store_USCOREtask = true;


		ns2__CountingGateID *MyCountingGateID=new ns2__CountingGateID;
		MyCountingGateID->id = L"10";
		MyTask_Subscribecounting->counting_USCOREgate_USCOREid = MyCountingGateID;

		ns2__CountEvent *MyCountEvent=new ns2__CountEvent;
		MyCountEvent->count_USCOREevent_USCOREtype = ns2__CountEventType__COUNT_USCOREEVENT_USCOREDELTA_USCORESUM_USCOREIN_USCOREOUT;
		MyCountEvent->delta = 1;

		ns2__EventTrigger *MyEventTrigger=new ns2__EventTrigger;
		MyEventTrigger->__union_EventTrigger = 1;
		MyEventTrigger->union_EventTrigger.count_USCOREevent = MyCountEvent;

		ns2__Trigger *MyTrigger=new ns2__Trigger;
		MyTrigger->__union_Trigger = 1;
		MyTrigger->union_Trigger.event_USCOREtrigger =MyEventTrigger;

		MyTask_Subscribecounting->trigger = MyTrigger;

	
		__ns2__union_TaskContainer* MyUnionTaskContainerList=new __ns2__union_TaskContainer[1];
		__ns2__union_TaskContainer* MyUnionTaskCount= new __ns2__union_TaskContainer();//动态堆类定义
		MyUnionTaskCount->__union_TaskContainer = 7;//Sector
		MyUnionTaskCount->union_TaskContainer.task_USCOREsubscribe_USCOREcounting = MyTask_Subscribecounting;

		MyUnionTaskContainerList[0] = *MyUnionTaskCount;//通过指针赋值


		ns2__answer_USCOREmessage.referenced_USCOREnotification_USCOREID = Notification_ID;
		ns2__answer_USCOREmessage.server_USCOREresponse_USCOREtype = ns2__SOAP_USCOREServerError__SOAP_USCORESERVER_USCOREOK;
		ns2__answer_USCOREmessage.__size_TaskContainer = 1;
		ns2__answer_USCOREmessage.__union_TaskContainer = MyUnionTaskContainerList;// &MyUnionTaskContainerList[0];
		*/
		//------------------------------------------------------------------------------------

		//---第2.种方法------------------------------------------------------------------------------
		/*

		int mListTaskCount = 0;
		unsigned int MyGetTaskID;

		const char* soap_endpoint = "http://localhost:8860/SmartBusCloudStack/PeopleCounting/HellaPush";
		const char* soap_action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest";
		ns2__AnswerContainer MyAnswerContainer;
		SOAPdServiceSoap12BindingProxy MySOAPdServiceSoap12BindingProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
		int ResultFalg = MySOAPdServiceSoap12BindingProxy.Notification(soap_endpoint, soap_action, ns2__notification_USCOREmessage, MyAnswerContainer);
		if (ResultFalg == 0)
		{
			if (MyUnionSector == 11)
			{

				ns2__TaskSubscribeCounting* MyTask_Subscribecounting;

				MyTask_Subscribecounting = MyAnswerContainer.__union_TaskContainer[1].union_TaskContainer.task_USCOREsubscribe_USCOREcounting;

				MyGetTaskID = MyTask_Subscribecounting->serverTask_USCOREID;

				MySOAPdServiceSoap12BindingProxy.destroy();//自动释放资源
			}




		}
		else 
		{
			//--待处理--

		}

		//--最后综合答复----
		__ns2__union_TaskContainer* MyUnionTaskContainerList = CreateAnswerResultList(&mListTaskCount, MyUnionSector, MyGetTaskID);
		ns2__answer_USCOREmessage.referenced_USCOREnotification_USCOREID = Notification_ID;
		ns2__answer_USCOREmessage.server_USCOREresponse_USCOREtype = ns2__SOAP_USCOREServerError__SOAP_USCORESERVER_USCOREOK;
		ns2__answer_USCOREmessage.__size_TaskContainer = mListTaskCount;
		ns2__answer_USCOREmessage.__union_TaskContainer = MyUnionTaskContainerList;// &MyUnionTaskContainerList[0];

		return SOAP_OK;

		*/		
		//-----第3.种方法----------------------------------------------------------------------------

		/*
		
		const char* soap_endpoint = "http://localhost:8860/SmartBusCloudStack/PeopleCounting/HellaPush";
		const char* soap_action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest";

		SOAPdServiceSoap12BindingProxy MySOAPdServiceSoap12BindingProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
		
		ns2__AnswerContainer MyAnswerContainer=;
		int ResultFalg = MySOAPdServiceSoap12BindingProxy.Notification(soap_endpoint, soap_action, ns2__notification_USCOREmessage, ns2__answer_USCOREmessage);
		if (ResultFalg == 0)
		{
			return SOAP_OK;
		}
		else
		{
			return SOAP_ERR;
		}

		*/
		
		
		//-----第4.种方法----------------------------------------------------------------------------	

        const char* soap_endpoint = "http://localhost:8860/SmartBusCloudStack/PeopleCounting/HellaPush";
        const char* soap_action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest";
		//ns2__AnswerContainer *MMyAnswerContainer = new ns2__AnswerContainer;
        ns2__AnswerContainer MyAnswerContainer;
        SOAPdServiceSoap12BindingProxy MySOAPdServiceSoap12BindingProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
        int ResultFalg = MySOAPdServiceSoap12BindingProxy.Notification(soap_endpoint, soap_action, MyNotificationContainer, MyAnswerContainer);
		
		if (ResultFalg == 0)
		{

			ns2__answer_USCOREmessage.referenced_USCOREnotification_USCOREID = MyAnswerContainer.referenced_USCOREnotification_USCOREID;
			ns2__answer_USCOREmessage.server_USCOREresponse_USCOREtype = MyAnswerContainer.server_USCOREresponse_USCOREtype;

			ns2__answer_USCOREmessage.__size_TaskContainer = MyAnswerContainer.__size_TaskContainer;
			//ns2__answer_USCOREmessage.__union_TaskContainer = MyAnswerContainer.__union_TaskContainer;
			int count = MyAnswerContainer.__size_TaskContainer;;
			ns2__answer_USCOREmessage.__union_TaskContainer = CopyAnswerTaskList(0, count, MyAnswerContainer.__union_TaskContainer);

			return SOAP_OK;//注意这个东西

		}
		else
		{

			ns2__answer_USCOREmessage.referenced_USCOREnotification_USCOREID = Notification_ID;
			ns2__answer_USCOREmessage.server_USCOREresponse_USCOREtype = ns2__SOAP_USCOREServerError__SOAP_USCORESERVER_USCOREOK;
			ns2__answer_USCOREmessage.__size_TaskContainer = 0;
			ns2__answer_USCOREmessage.__union_TaskContainer =NULL;

			return SOAP_OK;//注意这个东西
		}

		
		//-------------------------------------------------------------------------------------------


	
	}
	else
	{


		printf("[%s]\n", pFirstmsg);
		ns2__answer_USCOREmessage.referenced_USCOREnotification_USCOREID = 0;
		return SOAP_ERR;

	}
	
	/* Test  Test
	char* paction = ns2__notification_USCOREmessage->soap->action;//SOAPaction
	const char* pcontent = ns2__notification_USCOREmessage->soap->http_content;
	printf("[%s]\n", paction);
	printf("[%s]\n", pcontent);
	*/
	

}
  // Web service operation 'Error' (returns SOAP_OK or error code)
  int SOAPdServiceSoap12BindingService::Error(ns2__ErrorContainer *ns2__error_USCOREmessage, ns2__TaskContainer &ns2__task_USCOREmessage)
  {
    	 //SOAP_PURE_VIRTUAL;
	  std::wstring CustomerID, address;
	  unsigned int taskid;
	  unsigned int Notification_ID;
	  ns2__ErrorContainer *MyErrorMessage = ns2__error_USCOREmessage;

	  CustomerID = MyErrorMessage->customer_USCOREID;
	  Notification_ID = MyErrorMessage->notification_USCOREID;	 
	  const wchar_t* pCustomerID = CustomerID.c_str(); 
	  pUIcb(1111, 103, L"ErrorMessage", pCustomerID, Notification_ID);
	
	  //----------------------------------------------------------------------------------------
	  int MySectorID, MyArrayLen;
	  const char* soap_endpoint = "http://localhost:8860/SmartBusCloudStack/PeopleCounting/HellaPush";
	  const char* soap_action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/ErrorRequest";
	  SOAPdServiceSoap12BindingProxy MySOAPdServiceSoap12BindingProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);	
	  ns2__TaskContainer MyTaskContainer;
	  int ResultFalg = MySOAPdServiceSoap12BindingProxy.Error(soap_endpoint, soap_action, MyErrorMessage, MyTaskContainer);
	  if (ResultFalg == 0)
	  {

		  MyArrayLen = MyTaskContainer.__size_TaskContainer;
		  if (MyArrayLen > 0)
		  {

			  //--待处理-----------------------------------------------
			  ns2__task_USCOREmessage.__size_TaskContainer = 0;
			  ns2__task_USCOREmessage.__union_TaskContainer = NULL;

		  }
		  else
		  {
			  ns2__task_USCOREmessage.__size_TaskContainer = 0;
			  ns2__task_USCOREmessage.__union_TaskContainer = NULL;
			  
		  }
		  printf("TaskContainerSize[%d]\n", MyArrayLen);
		  printf("DeviceError[%d]\n", MyErrorMessage->error_USCOREreason);

		  return SOAP_OK;
	  }
	  else
	  {

		  ns2__task_USCOREmessage.__size_TaskContainer = 0;
		  ns2__task_USCOREmessage.__union_TaskContainer = NULL;
		  return SOAP_OK;
	  }


	  // return SOAP_OK;


  }


  __ns2__union_TaskContainer* SOAPdServiceSoap12BindingService::CreateAnswerResultList(int* pListCount, int FalgID, unsigned int taskid)
  {

	  //-----------------------------------------------------------------------------------
	  if (FalgID == 11)
	  {
		  ns2__TaskSubscribeCounting* MyTask_Subscribecounting = new ns2__TaskSubscribeCounting;

		  MyTask_Subscribecounting->serverTask_USCOREID = taskid;// 1071;
		  MyTask_Subscribecounting->activity_USCOREstate = true;
		  MyTask_Subscribecounting->task_USCOREtype = ns2__TaskType__TASK_USCORECOUNT;
		  //MyTask_Subscribecounting.store_USCOREtask = true;


		  ns2__CountingGateID *MyCountingGateID = new ns2__CountingGateID;
		  MyCountingGateID->id = L"10";
		  MyTask_Subscribecounting->counting_USCOREgate_USCOREid = MyCountingGateID;

		  ns2__CountEvent *MyCountEvent = new ns2__CountEvent;
		  MyCountEvent->count_USCOREevent_USCOREtype = ns2__CountEventType__COUNT_USCOREEVENT_USCOREDELTA_USCORESUM_USCOREIN_USCOREOUT;
		  MyCountEvent->delta = 1;

		  ns2__EventTrigger *MyEventTrigger = new ns2__EventTrigger;
		  MyEventTrigger->__union_EventTrigger = 1;
		  MyEventTrigger->union_EventTrigger.count_USCOREevent = MyCountEvent;

		  ns2__Trigger *MyTrigger = new ns2__Trigger;
		  MyTrigger->__union_Trigger = 1;
		  MyTrigger->union_Trigger.event_USCOREtrigger = MyEventTrigger;

		  MyTask_Subscribecounting->trigger = MyTrigger;


		  __ns2__union_TaskContainer* MyUnionTaskContainerList = new __ns2__union_TaskContainer[1];
		  __ns2__union_TaskContainer* MyUnionTaskCount = new __ns2__union_TaskContainer();//动态堆类定义
		  MyUnionTaskCount->__union_TaskContainer = 7;//Sector
		  MyUnionTaskCount->union_TaskContainer.task_USCOREsubscribe_USCOREcounting = MyTask_Subscribecounting;

		  MyUnionTaskContainerList[0] = *MyUnionTaskCount;//通过指针赋值

		  *pListCount = 1;
		  return  MyUnionTaskContainerList;

	  }
	  else if (FalgID == 1)
	  {
		  *pListCount = 0;

		  return NULL;
	  }
	 

	  //ns2__answer_USCOREmessage.referenced_USCOREnotification_USCOREID = Notification_ID;
	  //ns2__answer_USCOREmessage.server_USCOREresponse_USCOREtype = ns2__SOAP_USCOREServerError__SOAP_USCORESERVER_USCOREOK;
	  //ns2__answer_USCOREmessage.__size_TaskContainer = 1;
	  //ns2__answer_USCOREmessage.__union_TaskContainer = MyUnionTaskContainerList;// &MyUnionTaskContainerList[0];
	  //--------------------------------------------------------------------------------------------------------------------------------

  }

  __ns2__union_TaskContainer* SOAPdServiceSoap12BindingService::CopyAnswerTaskList(int FalgID, int Count,  __ns2__union_TaskContainer* SrcTaskContainer)
  {

	  __ns2__union_TaskContainer* MyUnionTaskContainerList = new __ns2__union_TaskContainer[Count];
	  for (int i = 0; i < Count; i++)
	  {
		  __ns2__union_TaskContainer* MySrcUnionTaskType = &SrcTaskContainer[i];
		  int Sector = MySrcUnionTaskType->__union_TaskContainer;
		  __ns2__union_TaskContainer* MyDestUnionTaskType = new __ns2__union_TaskContainer();//动态堆申请
		  switch (Sector)
		  {

		  case 1:

			  break;


		  case 2:

			  break;


		  case 3:

			  break;


		  case 4:

			  break;


		  case 5:

			  break;


		  case 6:

			  break;


		  case 7:
						
			  CreateTask_Subscribecounting(MyDestUnionTaskType, MySrcUnionTaskType);
			  MyUnionTaskContainerList[i] = *MyDestUnionTaskType;//通过指针赋值


			  break;
		  case 8:
			  ;
			  break;
		  case 9:
			  break;
		  case 10:

			  break;
		  case 11:
			  break;
		  case 12:
			  break;

		  case 13:
			  //----
			  CreateTask_SubscribeAlive(MyDestUnionTaskType, MySrcUnionTaskType);
			  MyUnionTaskContainerList[i] = *MyDestUnionTaskType;//通过指针赋值
			  break;
		  case 21:
			  break;
		  default:

			  break;



		  }


	  }

	  return MyUnionTaskContainerList;


  }

  void SOAPdServiceSoap12BindingService::CreateTask_Subscribecounting(__ns2__union_TaskContainer* MyDestUnionTaskType, __ns2__union_TaskContainer* MySrcUnionTaskType)
  {

	  MyDestUnionTaskType->__union_TaskContainer = 7;//Sector
	  ns2__TaskSubscribeCounting* MyTask_Subscribecounting = new ns2__TaskSubscribeCounting;


	  MyTask_Subscribecounting->serverTask_USCOREID = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->serverTask_USCOREID;
	  MyTask_Subscribecounting->activity_USCOREstate = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->activity_USCOREstate;
	  MyTask_Subscribecounting->task_USCOREtype = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->task_USCOREtype;
	  MyTask_Subscribecounting->store_USCOREtask = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->store_USCOREtask;// true;


	  if (MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->activity_USCOREstate)
	  {
		  ns2__CountingGateID *MyCountingGateID = new ns2__CountingGateID;
		  MyCountingGateID->id = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->counting_USCOREgate_USCOREid->id;// L"10";
		  MyTask_Subscribecounting->counting_USCOREgate_USCOREid = MyCountingGateID;


		  ns2__CountEvent *MyCountEvent = new ns2__CountEvent;
		  MyCountEvent->count_USCOREevent_USCOREtype = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->trigger->union_Trigger.event_USCOREtrigger->union_EventTrigger.count_USCOREevent->count_USCOREevent_USCOREtype; //ns2__CountEventType__COUNT_USCOREEVENT_USCOREDELTA_USCORESUM_USCOREIN_USCOREOUT;
		  MyCountEvent->delta = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->trigger->union_Trigger.event_USCOREtrigger->union_EventTrigger.count_USCOREevent->delta;// 1;


		  ns2__EventTrigger *MyEventTrigger = new ns2__EventTrigger;
		  MyEventTrigger->__union_EventTrigger = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->trigger->union_Trigger.event_USCOREtrigger->__union_EventTrigger;// 1;
		  MyEventTrigger->union_EventTrigger.count_USCOREevent = MyCountEvent;

		  ns2__Trigger *MyTrigger = new ns2__Trigger;
		  MyTrigger->__union_Trigger = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting->trigger->__union_Trigger;// 1;
		  MyTrigger->union_Trigger.event_USCOREtrigger = MyEventTrigger;

		  MyTask_Subscribecounting->trigger = MyTrigger;

	  }
	  else
	  {
		  MyTask_Subscribecounting->counting_USCOREgate_USCOREid = NULL;
		  MyTask_Subscribecounting->trigger = NULL;
	  }


	  MyDestUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREcounting = MyTask_Subscribecounting;


  }

  void SOAPdServiceSoap12BindingService::CreateTask_SubscribeAlive(__ns2__union_TaskContainer* MyDestUnionTaskType, __ns2__union_TaskContainer* MySrcUnionTaskType)
  {


	  MyDestUnionTaskType->__union_TaskContainer = 13;//Sector
	  ns2__TaskSubscribeAlive* MyTask_SubscribeAlive = new ns2__TaskSubscribeAlive;

	  MyTask_SubscribeAlive->activity_USCOREstate = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->activity_USCOREstate;
	  MyTask_SubscribeAlive->serverTask_USCOREID = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->serverTask_USCOREID;
	  MyTask_SubscribeAlive->store_USCOREtask = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->store_USCOREtask;
	  MyTask_SubscribeAlive->task_USCOREtype = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->task_USCOREtype;


	  ns2__Date *MyDate = new ns2__Date;
	  MyDate->day_USCOREof_USCOREmonth = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->date->day_USCOREof_USCOREmonth;
	  MyDate->day_USCOREof_USCOREweek = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->date->day_USCOREof_USCOREweek;
	  MyDate->kind = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->date->kind;
	
	  
	  
	  ns2__ClockTime *MyClockTime = new ns2__ClockTime;
	  MyClockTime->hours = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->start->hours;
	  MyClockTime->minutes = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->start->minutes;
	  MyClockTime->seconds = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->start->seconds;

	
	  ns2__TimeTrigger *MyTimeTrigger = new   ns2__TimeTrigger;
	  MyTimeTrigger->date = MyDate;// MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->date;
	  MyTimeTrigger->cycle = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->cycle;
	  MyTimeTrigger->random_USCOREoffset = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->random_USCOREoffset;
	  MyTimeTrigger->start = MyClockTime;//MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->union_Trigger.time_USCOREtrigger->start;
	 
	  ns2__Trigger *MyTrigger = new  ns2__Trigger;
	  MyTrigger->__union_Trigger = MySrcUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive->trigger->__union_Trigger;// 2;
	  MyTrigger->union_Trigger.time_USCOREtrigger = MyTimeTrigger;

	  MyTask_SubscribeAlive->trigger = MyTrigger;

	  MyDestUnionTaskType->union_TaskContainer.task_USCOREsubscribe_USCOREalive = MyTask_SubscribeAlive;



  }

//------------------------------
/* End of server object code */
