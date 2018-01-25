// SOAP12ServiceTest.cpp : �������̨Ӧ�ó������ڵ㡣
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
	

	


	//char *pp="�й�";//Test 
	//printf("[%s]\n", pp);

	char Taskstr[10];
	sprintf(Taskstr, "%d", Xid);//����ת�ַ���
	//printf("--TaskID[%s]\n", Taskstr);
	int lenght = strlen(Taskstr);
	//printf("lenght[%d]\n", lenght);

	
	int size = wcslen(pCustomerID);//���ַ�����
	//int lenght = strlen(Taskstr);
	int sumsize = size + lenght+1;//��һ���ָ�������ַ�������

	char* pResultPara = new char[sumsize + 1];
	memset(&pResultPara[0], 0, sizeof(char)*sumsize + 1);//����


	for (int i = 0; i<size; i++)
	memcpy(&pResultPara[i], &pCustomerID[i], 1);//����������ͨ��ָ�븴�ư�WCHARת��CHAR��Ч
	
	pResultPara[size] = ':';

	for (int i = 0; i<lenght + 1; i++)
		memcpy(&pResultPara[size+1+i], &Taskstr[i], 1);//�ַ����ϲ�


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
	sprintf(Taskstr, "%d", ptaskid);//����ת�ַ���
	int Tasklen = strlen(Taskstr);
	

	char instr[20];
	sprintf(instr, "%d", in);//����ת�ַ���
	int inlen = strlen(instr);

	char outstr[20];
	sprintf(outstr, "%d", out);//����ת�ַ���
	int outlen = strlen(outstr);


	
	int size = wcslen(pCustomerID);//�豸��ſ��ַ�����
								
	int sumsize = size +1+ Tasklen+ 1+inlen+1+outlen;//��3���ָ�������ַ�������

	char* pResultPara = new char[sumsize + 1];//���Ͻ����ַ���־
	memset(&pResultPara[0], 0, sizeof(char)*sumsize + 1);//����


	for (int i = 0; i<size; i++)
	memcpy(&pResultPara[i], &pCustomerID[i], 1);//����������ͨ���ڴ�ָ�븴�ư�WCHARת��CHAR��Ч(CustomerID)

	pResultPara[size] = ';';

	for (int i = 0; i<Tasklen; i++)
	memcpy(&pResultPara[size + 1 + i], &Taskstr[i], 1);//�ַ����ϲ�TaskID

	pResultPara[size + 1 + Tasklen] = ':';

	
	for (int i = 0; i<inlen; i++)
		memcpy(&pResultPara[size + 1 + Tasklen + 1 + i], &instr[i], 1);//�ַ����ϲ�in

	 pResultPara[size + 1 + Tasklen + 1 + inlen] = ',';


	for (int i = 0; i<outlen; i++)
		memcpy(&pResultPara[size + 1 + Tasklen + 1 + inlen + 1 + i], &outstr[i], 1);//�ַ����ϲ�out
	
	

	pResultPara[sumsize+1] = '\0';

	printf("ResultPara:%s \n", pResultPara);
	delete pResultPara;




}




