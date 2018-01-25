// SOAP12ClientTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include "CloudStackSoap12ServiceProxy.h"
//#include "CloudStackSoap12Type.h"
#include "lgjhttpsoaphelper.h"
int main()
{

	//-------- StartupNotification----------168.223.110.10----------------------
	/*
	const char* soap_endpoint = "http://localhost:8860/SmartBusCloudStack/PeopleCounting/HellaPush";
	const char* soap_action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest";


	SOAPdServiceSoap12BindingProxy MySOAPdServiceSoap12BindingProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);

	ns2__NotificationContainer MyNotificationContainer;
	MyNotificationContainer.__union_NotificationContainer = 11;//Sector

	union _ns2__union_NotificationContainer MyUnionNotificationContainer;

	ns2__StartupNotification *MyStartupNotification = new ns2__StartupNotification;
	MyStartupNotification->serverTask_USCOREID = 0;
	MyStartupNotification->customer_USCOREID = L"C11200987654321";
	MyStartupNotification->ip_USCOREaddress = L"192.168.1.20";
	MyStartupNotification->notification_USCOREID = 123456789;

	MyUnionNotificationContainer.startup_USCOREnotification = MyStartupNotification;
	MyNotificationContainer.union_NotificationContainer = MyUnionNotificationContainer;

	ns2__AnswerContainer MyAnswerContainer;
	int ResultFalg = MySOAPdServiceSoap12BindingProxy.Notification(soap_endpoint, soap_action, &MyNotificationContainer, MyAnswerContainer);
	delete MyStartupNotification;
	if (ResultFalg == 0)
	{
		MySOAPdServiceSoap12BindingProxy.destroy();//自动释放资源
		wchar_t* TMPAccountID = L"123456789088";
		//wcscpy(AccountID, TMPAccountID);
		printf("0: \n");
		return 100;//MyAnswerContainer.referenced_USCOREnotification_USCOREID;//*(MyRegisterResponse.RegisterAccountResult);//返回指针整形值
	}
	else
	{
		MySOAPdServiceSoap12BindingProxy.destroy();//自动释放资源
		printf("1000: \n");
		return 1000;
	}
	*/
	

	httpsoaphelper Myhttpsoaphelper;// = new httpsoaphelper();
	
	 //Myhttpsoaphelper.Startup (L"C11200987654321", L"168.223.110.101",NULL,0);
	Myhttpsoaphelper.PeopleCount(L"C11200987654321", L"168.223.110.101", NULL, 1088,1,1);


    return 0;
}

