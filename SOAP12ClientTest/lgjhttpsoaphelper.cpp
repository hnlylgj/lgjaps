#include "lgjhttpsoaphelper.h"
#include "CloudStackSoap12Type.h"
#include "CloudStackSoap12ServiceProxy.h"
#include "string.h"

httpsoaphelper::httpsoaphelper()
{
    //121.201.28.118
}

int httpsoaphelper::Startup(wchar_t* CustomerID, wchar_t* NoteIP, wchar_t* Str, int Taskid)
{
	//-------- StartupNotification----------168.223.110.10----------------------
	const char* soap_endpoint = "http://168.223.110.102:8860/SmartBusCloudStack/PeopleCounting/HellaPush";
	//const char* soap_endpoint = "http://localhost:8860/SmartBusCloudStack/PeopleCounting/HellaPush";
	const char* soap_action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest";

	std::wstring MCustomerID, address;
	MCustomerID = CustomerID;
	address = NoteIP;
	int MyUnionSector= 11;

	SOAPdServiceSoap12BindingProxy MySOAPdServiceSoap12BindingProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);

	ns2__NotificationContainer MyNotificationContainer;
	MyNotificationContainer.__union_NotificationContainer = MyUnionSector;



	union _ns2__union_NotificationContainer MyUnionNotificationContainer;

	ns2__StartupNotification MyStartupNotification;// = new ns2__StartupNotification;
	MyStartupNotification.serverTask_USCOREID = Taskid;// 880;
	MyStartupNotification.customer_USCOREID = MCustomerID;// L"C11200987654321";
	MyStartupNotification.ip_USCOREaddress = address;// L"192.168.1.20";
	MyStartupNotification.notification_USCOREID=9;

	MyUnionNotificationContainer.startup_USCOREnotification=&MyStartupNotification;
	MyNotificationContainer.union_NotificationContainer=MyUnionNotificationContainer;

	ns2__AnswerContainer MyAnswerContainer;
	int ResultFalg =MySOAPdServiceSoap12BindingProxy.Notification(soap_endpoint, soap_action,&MyNotificationContainer,MyAnswerContainer);
	//delete MyStartupNotification;
	if (ResultFalg == 0)
		{
		     //wchar_t* TMPAccountID =L"123456789088";
			 //wcscpy(AccountID, TMPAccountID);
			 //printf("0: \n");

			 if (MyUnionSector == 11)
			 {

				 ns2__TaskSubscribeCounting* MyTask_Subscribecounting;

				 MyTask_Subscribecounting=MyAnswerContainer.__union_TaskContainer[1].union_TaskContainer.task_USCOREsubscribe_USCOREcounting;

				 unsigned int taskid= MyTask_Subscribecounting->serverTask_USCOREID;
				
				 printf("GetTaskID[%d]\n", taskid);

			     //注意释放资源
				// delete[]MyAnswerContainer.__union_TaskContainer;//-这个语句好像有错误

				
			 }
			 			
			 MySOAPdServiceSoap12BindingProxy.destroy();//自动释放资源
			 return 100;//MyAnswerContainer.referenced_USCOREnotification_USCOREID;//*(MyRegisterResponse.RegisterAccountResult);//返回指针整形值


		}
		else
		{
		
			MySOAPdServiceSoap12BindingProxy.destroy();//自动释放资源
			printf("1000: \n");
			return 1000;



		}

	//_ns1__RegisterAccount MyRegisterRequest;
	//MyRegisterRequest.LoginName = LoginName;
	//MyRegisterRequest.PassWord = PassWord;
	//MyRegisterRequest.AccountID = AccountID;



	//_ns1__RegisterAccountResponse MyRegisterResponse;

	//int ResultFalg = MyCloudServiceProxy.RegisterAccount(soap_endpoint, soap_action, &MyRegisterRequest, MyRegisterResponse);
	//if (ResultFalg == 0)
	//{
		//MyCloudServiceProxy.destroy();
		//*AccountID = *(MyResponse.AccountID);
		//wcscpy(AccountID, MyRegisterResponse.AccountID);
		//return *(MyRegisterResponse.RegisterAccountResult);//返回指针整形值
	//}
	//else
	//{
		//MyCloudServiceProxy.destroy();//自动释放资源
		//return 1000;
	//}
     //*/
	//return 1000;
	
}

int httpsoaphelper::PeopleCount(wchar_t* CustomerID, wchar_t* NoteIP, wchar_t* Str,  int Taskid, int Incoming, int Outgoing)
{
	const char* soap_endpoint = "http://168.223.110.102:8860/SmartBusCloudStack/PeopleCounting/HellaPush";
	//const char* soap_endpoint = "http://localhost:8860/SmartBusCloudStack/PeopleCounting/HellaPush";
	const char* soap_action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest";


	std::wstring MCustomerID, address;
	MCustomerID = CustomerID;
	address = NoteIP;

	SOAPdServiceSoap12BindingProxy MySOAPdServiceSoap12BindingProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);

	ns2__NotificationContainer MyNotificationContainer;
	MyNotificationContainer.__union_NotificationContainer =1;//Sector

	union _ns2__union_NotificationContainer MyUnionNotificationContainer;

	ns2__CountNotification MyCountNotification;
	MyCountNotification.serverTask_USCOREID = Taskid;// 880;
	MyCountNotification.customer_USCOREID = MCustomerID;// L"C11200987654321";
	MyCountNotification.notification_USCOREID = 123456789;
	MyCountNotification.count_USCOREin = 1;
	MyCountNotification.count_USCOREout = 1;

	MyUnionNotificationContainer.count_USCOREnotification = &MyCountNotification;
	MyNotificationContainer.union_NotificationContainer = MyUnionNotificationContainer;

	ns2__AnswerContainer MyAnswerContainer;
	int ResultFalg = MySOAPdServiceSoap12BindingProxy.Notification(soap_endpoint, soap_action, &MyNotificationContainer, MyAnswerContainer);
	
	if (ResultFalg == 0)
	{
		MySOAPdServiceSoap12BindingProxy.destroy();//自动释放资源
		wchar_t* TMPAccountID = L"123456789088";
		//wcscpy(AccountID, TMPAccountID);
		printf("OK:[0] \n");
		return 100;//MyAnswerContainer.referenced_USCOREnotification_USCOREID;//*(MyRegisterResponse.RegisterAccountResult);//返回指针整形值
	}
	else
	{
		MySOAPdServiceSoap12BindingProxy.destroy();//自动释放资源
		printf("1000: \n");
		return 1000;
	}




	return 1000;

	/*
	BasicHttpBinding_USCOREPrimeAccountCloudServiceProxy MyCloudServiceProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
	_ns1__LoginCloud MyLoginCloudRequest;
	MyLoginCloudRequest.LoginName = LoginName;
	MyLoginCloudRequest.PassWord = PassWord;
	MyLoginCloudRequest.AccountID = AccountID;

	_ns1__LoginCloudResponse MyLoginCloudResponse;

	int ResultFalg = MyCloudServiceProxy.LoginCloud(soap_endpoint, soap_action, &MyLoginCloudRequest, MyLoginCloudResponse);
	if (ResultFalg == 0)
	{		
		//MyCloudServiceProxy.destroy();
		 wcscpy(AccountID, MyLoginCloudResponse.AccountID);
		return *(MyLoginCloudResponse.LoginCloudResult);
	}
	else
	{
		 ///////MyCloudServiceProxy.destroy();//自动释放资源
		 return 1000;
	}
   */
}

int httpsoaphelper::BindingDevice(wchar_t* DeviceID, wchar_t* AccountID,int *FlagCode)
{

	return 1000;

	/*
	const char* soap_endpoint = "http://168.223.110.10:8000/SmartCarCloud/SmartDevice";
	const char* soap_action = "http://www.vispect.com/SmartDeviceCloudService/BindingDevice";
	
	//123456710003
	_ns1__BindingDevice MyBindingDevice;
	_ns1__BindingDeviceResponse MyBindingDeviceResponse;

	MyBindingDevice.AccountID = AccountID;
	MyBindingDevice.DeviceID = DeviceID;
	MyBindingDevice.FlagCode=FlagCode;
	BasicHttpBinding_USCOREPrimeAccountCloudServiceProxy MyCloudServiceProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
	int ResultFalg = MyCloudServiceProxy.BindingDevice(soap_endpoint, soap_action, &MyBindingDevice, MyBindingDeviceResponse);


	if (ResultFalg == 0)
	{
		//MyCloudServiceProxy.destroy();//自动释放资源
		return *(MyBindingDeviceResponse.BindingDeviceResult);
	//}
	//else
	//{
		//MyCloudServiceProxy.destroy();//自动释放资源
		//return 1000;
	}
   */

}

int httpsoaphelper::SendSmartWarn(wchar_t* SmartWarn, int* FlagCode)
{

	return 1000;


	/*
	const char* soap_endpoint = "http://168.223.110.10:8000/SmartCarCloud/SmartWarn";
	const char* soap_action = "http://www.vispect.com/SmartWarnCloudService/SendSmartWarn";

	//123456710003
	_ns1__SendSmartWarn  MySendSmartWarn;
	_ns1__SendSmartWarnResponse MySendSmartWarnResponse;

    ///*
	MySendSmartWarn.SmartWarn = SmartWarn;
	MySendSmartWarn.FlagCode= FlagCode;
	BasicHttpBinding_USCOREPrimeAccountCloudServiceProxy MyCloudServiceProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
	int ResultFalg = MyCloudServiceProxy.SendSmartWarn(soap_endpoint, soap_action, &MySendSmartWarn, MySendSmartWarnResponse);


	if (ResultFalg == 0)
	{

		return *(MySendSmartWarnResponse.SendSmartWarnResult);
	}
	//else
	//{

		return 1000;
	}
   */

}

int httpsoaphelper::PostListSmartWarn(wchar_t* SmartWarnSet, int* FlagCode)
{
	return 1000;


	/*
	const char* soap_endpoint = "http://168.223.110.10:8000/SmartCarCloud/SmartWarn";
	const char* soap_action = "http://www.vispect.com/SmartWarnCloudService/PostListSmartWarn";


	_ns1__PostListSmartWarn  MyPostListSmartWarn;
	_ns1__PostListSmartWarnResponse MyPostListSmartWarnResponse;


	MyPostListSmartWarn.SmartWarnSet = SmartWarnSet;
	MyPostListSmartWarn.FlagCode= FlagCode;
	BasicHttpBinding_USCOREPrimeAccountCloudServiceProxy MyCloudServiceProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
	int ResultFalg = MyCloudServiceProxy.PostListSmartWarn(soap_endpoint, soap_action, &MyPostListSmartWarn, MyPostListSmartWarnResponse);


	if (ResultFalg == 0)
	{

		return *(MyPostListSmartWarnResponse.PostListSmartWarnResult);
	}
	else
	{

		//return 1000;
	}
   */
	//return 1000;

}


int httpsoaphelper::GetSmartWarn(wchar_t* OptCode, int* FlagCode,wchar_t* ResultSmartWarn)
{
	return 1000;


	/*
	const char* soap_endpoint = "http://168.223.110.10:8000/SmartCarCloud/SmartWarn";
	const char* soap_action = "http://www.vispect.com/SmartWarnCloudService/GetSmartWarn";

	//123456710003
	_ns1__GetSmartWarn  MyGetSmartWarnRequest;
	_ns1__GetSmartWarnResponse MyGetSmartWarnResponse;


	MyGetSmartWarnRequest.OptCode = OptCode;
	MyGetSmartWarnRequest.FlagCode = FlagCode;
	//MyGetSmartWarnRequest.SmartWarnList=ResultSmartWarn;


	BasicHttpBinding_USCOREPrimeAccountCloudServiceProxy MyCloudServiceProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
	int ResultFalg = MyCloudServiceProxy.GetSmartWarn(soap_endpoint, soap_action, &MyGetSmartWarnRequest, MyGetSmartWarnResponse);

	if (ResultFalg == 0)
	{

		int ReturnCode=*(MyGetSmartWarnResponse.GetSmartWarnResult);
		int size;
		if(ReturnCode==100)
		{
			 size=wcslen(MyGetSmartWarnResponse.SmartWarnList);
			 wcscpy(ResultSmartWarn, MyGetSmartWarnResponse.SmartWarnList);//字符专用复制函数
			 //ResultSmartWarn[size]=L'0';
			 //wchar_t* TResultSmartWarn=new  wchar_t[size+1];
			 //memset(&TResultSmartWarn[0],0,sizeof(wchar_t)*size+1); //清零
			 //TResultSmartWarn[size]=L'\0';
			 //ResultSmartWarn=TResultSmartWarn;
		}
		else
		{
			ResultSmartWarn=NULL;
		}
		return ReturnCode; //*(MyGetSmartWarnResponse.GetSmartWarnResult);
	//}
	//else
	{

		return 1000;
	}

	*/

}
int httpsoaphelper::TotalSmartWarn(wchar_t* OptCode, int* FlagCode,wchar_t* TotalSmartWarn)
{
	return 1000;
	/*
	const char* soap_endpoint = "http://168.223.110.10:8000/SmartCarCloud/SmartWarn";
	const char* soap_action = "http://www.vispect.com/SmartWarnCloudService/TotalSmartWarn";

	//123456710003
	_ns1__TotalSmartWarn  MyTotalSmartWarnRequest;
	_ns1__TotalSmartWarnResponse MyTotalSmartWarnResponse;


	MyTotalSmartWarnRequest.OptCode = OptCode;
	MyTotalSmartWarnRequest.FlagCode = FlagCode;
	//MyTotalSmartWarnRequest.SmartWarnList=TotalSmartWarn;


	BasicHttpBinding_USCOREPrimeAccountCloudServiceProxy MyCloudServiceProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
	int ResultFalg = MyCloudServiceProxy.TotalSmartWarn(soap_endpoint, soap_action, &MyTotalSmartWarnRequest, MyTotalSmartWarnResponse);

	if (ResultFalg == 0)
	{

		int ReturnCode=*(MyTotalSmartWarnResponse.TotalSmartWarnResult);
		int size;
		if(ReturnCode==100)
		{
			 size=wcslen(MyTotalSmartWarnResponse.TotalSmartWarn);
			 wcscpy(TotalSmartWarn, MyTotalSmartWarnResponse.TotalSmartWarn);//字符专用复制函数
			 //TotalSmartWarn[size]=L'0';
			 //wchar_t* TResultSmartWarn=new  wchar_t[size+1];
			 //memset(&TResultSmartWarn[0],0,sizeof(wchar_t)*size+1); //清零
			 //TResultSmartWarn[size]=L'0';
			 //ResultSmartWarn=TResultSmartWarn;
		}
		else
		{
			TotalSmartWarn=NULL;
		}
		return ReturnCode; //*(MyGetSmartWarnResponse.GetSmartWarnResult);
	}
	else
	{

		return 1000;
	}

	*//////return 1000;

}
int httpsoaphelper::SendCarRunState(wchar_t* CarRunState, int* FlagCode)
{
	return 1000;
	/*
	const char* soap_endpoint = "http://168.223.110.10:8000/SmartCarCloud/CarRunState";
	const char* soap_action = "http://www.vispect.com/CarRunStateCloudService/SendCarRunState";

	//123456710003
	_ns1__SendCarRunState  MySendCarRunState;
	_ns1__SendCarRunStateResponse MySendCarRunStateResponse;

    ///*
	MySendCarRunState.CarRunState = CarRunState;
	MySendCarRunState.FlagCode= FlagCode;
	BasicHttpBinding_USCOREPrimeAccountCloudServiceProxy MyCloudServiceProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
	int ResultFalg = MyCloudServiceProxy.SendCarRunState(soap_endpoint, soap_action, &MySendCarRunState, MySendCarRunStateResponse);


	if (ResultFalg == 0)
	{

		return *(MySendCarRunStateResponse.SendCarRunStateResult);
	}
	else
	{

		return 1000;
	}
   */
	//return 1000;

}
int httpsoaphelper::PostListCarRunState(wchar_t* CarRunStateSet, int* FlagCode)
{
	return 1000;
	/*
	const char* soap_endpoint = "http://168.223.110.10:8000/SmartCarCloud/CarRunState";
	const char* soap_action = "http://www.vispect.com/CarRunStateCloudService/PostListCarRunState";

	//123456710003
	_ns1__PostListCarRunState  MyPostListCarRunState;
	_ns1__PostListCarRunStateResponse MyPostListCarRunStateResponse;


	MyPostListCarRunState.CarRunStateSet = CarRunStateSet;
	MyPostListCarRunState.FlagCode= FlagCode;
	BasicHttpBinding_USCOREPrimeAccountCloudServiceProxy MyCloudServiceProxy(SOAP_C_UTFSTRING, SOAP_C_UTFSTRING);
	////int ResultFalg = MyCloudServiceProxy.PostListCarRunState(soap_endpoint, soap_action, &MyPostListCarRunState, MyPostListCarRunStateResponse);


	if (ResultFalg == 0)
	{

		return *(MyPostListCarRunStateResponse.PostListCarRunStateResult);
	}
	else
	{

		return 1000;
	}
  */

}


httpsoaphelper::~httpsoaphelper()
{

}
