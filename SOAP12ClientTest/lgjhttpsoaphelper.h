#pragma once

class httpsoaphelper
{
		
public:
	httpsoaphelper();
	
	virtual ~httpsoaphelper();
	
	virtual int Startup(wchar_t* CustomerID, wchar_t* NoteIP, wchar_t* Str,int Taskid);
		
	virtual int PeopleCount(wchar_t* CustomerID, wchar_t* NoteIP,wchar_t* Str, int Taskid,int Incoming,int Outgoing);

	virtual int BindingDevice(wchar_t* DeviceID,wchar_t* AccountID, int *FlagCode);
	
	virtual int SendSmartWarn(wchar_t* SmartAlarm, int* FlagCode);

	virtual int PostListSmartWarn(wchar_t* SmartWarnSet, int* FlagCode);//set

	virtual int GetSmartWarn(wchar_t* OptCode, int* FlagCode,wchar_t* ResultSmartWarn);

	virtual int SendCarRunState(wchar_t* CarRunState, int* FlagCode);

	virtual int PostListCarRunState(wchar_t* CarRunStateSet, int* FlagCode);//set

	virtual int TotalSmartWarn(wchar_t* OptCode, int* FlagCode,wchar_t* TotalSmartWarn);//**


};
