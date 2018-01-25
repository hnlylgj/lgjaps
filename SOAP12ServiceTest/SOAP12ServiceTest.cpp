// SOAP12ServiceTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

/*
int main()
{

return 0;
}
*/
#include "CloudStackSoap12BindingService.h"
#include "CloudStackSoap12Type.h"

void SendMessageToUI(int messageID, int ResultFalg, const wchar_t* pNotificationID, const wchar_t* pCustomerID, unsigned int ptaskid);
void SendMessageToUI2(int messageID, int ResultFalg, const wchar_t* pNotificationID, const wchar_t* pCustomerID, unsigned int ptaskid, unsigned int in, unsigned int out);

int mCount = 0;
int main(int argc, char **argv)
{
	SOAPdServiceSoap12BindingService MyService;
	if (argc < 2)
	{
		MyService.serve();	/* serve as CGI application */
	}
	else
	{
		int port = atoi(argv[1]);
		if (!port)
		{
			fprintf(stderr, "Usage:  MyService++ <port>\n");
			exit(0);
		}
		/* run iterative server on port until fatal error */

		printf("Runing MobileService... \n");

		MyService.pUIcb = SendMessageToUI;
		MyService.pUIcb2 = SendMessageToUI2;
		if (MyService.run(port))
		{
			MyService.soap_stream_fault(std::cerr);
			exit(-1);
		}
	}
	return 0;
}
void SendMessageToUI(int messageID, int ResultFalg, const wchar_t* pNotificationID, const wchar_t* pCustomerID, unsigned int Xid )
{
	mCount++;
	printf("[%d]::[%d][%d]%ws \n", mCount, messageID, ResultFalg, pNotificationID);
	//printf("[%d]::%ws \n", mCount, pNotificationID);
	printf("[%d]::#CustomerID[%ws]  ", mCount, pCustomerID);	

	if (ResultFalg == 103)
	{
		printf("NotificationID[%d]\n", Xid);
	}
	else if (ResultFalg == 101)
	{
		printf("TaskID[%d]\n", Xid);
	}
	else
	{
		printf("XXXXID[%d]\n", Xid);
	}
	

	


	//char *pp="中国";//Test 
	//printf("[%s]\n", pp);

	char Taskstr[10];
	sprintf(Taskstr, "%d", Xid);//整数转字符串
	//printf("--TaskID[%s]\n", Taskstr);
	int lenght = strlen(Taskstr);
	//printf("lenght[%d]\n", lenght);

	
	int size = wcslen(pCustomerID);//宽字符长度
	//int lenght = strlen(Taskstr);
	int sumsize = size + lenght+1;//加一个分割符后总字符串长度

	char* pResultPara = new char[sumsize + 1];
	memset(&pResultPara[0], 0, sizeof(char)*sumsize + 1);//清零


	for (int i = 0; i<size; i++)
	memcpy(&pResultPara[i], &pCustomerID[i], 1);//对所有西文通过指针复制把WCHAR转换CHAR有效
	
	pResultPara[size] = ':';

	for (int i = 0; i<lenght + 1; i++)
		memcpy(&pResultPara[size+1+i], &Taskstr[i], 1);//字符串合并


	pResultPara[sumsize] = '\0';

	printf("ResultPara:%s \n", pResultPara);
	delete pResultPara;

}

void SendMessageToUI2(int messageID, int ResultFalg, const wchar_t* pNotificationID, const wchar_t* pCustomerID, unsigned int ptaskid, unsigned int in, unsigned int out)
{
	mCount++;
	printf("[%d]::[%d][%d]%ws \n", mCount, messageID, ResultFalg, pNotificationID);
	printf("[%d]::#CustomerID[%ws]  ", mCount, pCustomerID);
	printf("IN:%d, OUT:%d  ", in, out);
	printf("TaskID[%d] \n", ptaskid);


	//char str[10];
	//sprintf(str, "%d", ptaskid);
	//printf("--TaskID[%s]\n", str);


	//-----------------------------------------------
	char Taskstr[20];
	sprintf(Taskstr, "%d", ptaskid);//整数转字符串
	int Tasklen = strlen(Taskstr);
	

	char instr[20];
	sprintf(instr, "%d", in);//整数转字符串
	int inlen = strlen(instr);

	char outstr[20];
	sprintf(outstr, "%d", out);//整数转字符串
	int outlen = strlen(outstr);


	
	int size = wcslen(pCustomerID);//设备编号宽字符长度
								
	int sumsize = size +1+ Tasklen+ 1+inlen+1+outlen;//加3个分割符后总字符串长度

	char* pResultPara = new char[sumsize + 1];//加上结束字符标志
	memset(&pResultPara[0], 0, sizeof(char)*sumsize + 1);//清零


	for (int i = 0; i<size; i++)
	memcpy(&pResultPara[i], &pCustomerID[i], 1);//对所有西文通过内存指针复制把WCHAR转换CHAR有效(CustomerID)

	pResultPara[size] = ';';

	for (int i = 0; i<Tasklen; i++)
	memcpy(&pResultPara[size + 1 + i], &Taskstr[i], 1);//字符串合并TaskID

	pResultPara[size + 1 + Tasklen] = ':';

	
	for (int i = 0; i<inlen; i++)
		memcpy(&pResultPara[size + 1 + Tasklen + 1 + i], &instr[i], 1);//字符串合并in

	 pResultPara[size + 1 + Tasklen + 1 + inlen] = ',';


	for (int i = 0; i<outlen; i++)
		memcpy(&pResultPara[size + 1 + Tasklen + 1 + inlen + 1 + i], &outstr[i], 1);//字符串合并out
	
	

	pResultPara[sumsize+1] = '\0';

	printf("ResultPara:%s \n", pResultPara);
	delete pResultPara;




}




