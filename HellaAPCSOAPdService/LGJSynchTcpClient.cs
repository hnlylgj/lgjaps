using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;

namespace LGJHellaAPCSOAPdService
{
    public class LGJSynchTcpClient
    {
        private string MobileServerIPStr;
        private int RemoteServerPortNo;
        private String MobileIDstr;
        private String CloudLockIDstr;

        private String SendMessageStr;
        private String ReceiveMessageStr;

        public int ReturnCode;
        public String ResultParaString;
        public String ResultErrorString;

        private Socket MySocket;
        private NetworkStream MyNetworkStream;
        private int MyReadTimeout;
        private byte[] MyImageBytes;

        string strSaveSnapPath;

        public LGJSynchTcpClient(string InMobileID, string InCloudLockID, string RemoteServerIP, string PortStr)
        {
            MobileIDstr = InMobileID;
            CloudLockIDstr = InCloudLockID;
            ReturnCode = 1;
            RemoteServerPortNo = int.Parse(PortStr);// 8910;
            if (RemoteServerIP == null)
            {
                MobileServerIPStr = "127.0.0.1";// RemoteServerIP;// "192.168.1.190";
            }
            else
            {
                MobileServerIPStr = RemoteServerIP;

            }
            this.MyReadTimeout = 20000;// InReadTimeout;

            strSaveSnapPath = AppDomain.CurrentDomain.SetupInformation.ApplicationBase;



        }

        public void SendMessage(string MeassgeBody)
        {
            if (CreateBusSocket() != true)
            {

                return;
            }
            
            SendMessageStr = MeassgeBody;
            SocketIOProcEnterEx();
            CloseBusSocket();

        }
        public string MobileLoginAuthentication(string NameID, string PassID)
        {
            if (CreateBusSocket() != true)
            {

                return null;
            }


            SendMessageStr = "mobilelogin#" + NameID + "-" + PassID + "#!";
            SocketIOProcEnter();
            CloseBusSocket();

            string ChannelPara = null;
            if (ReceiveMessageStr != null)
            {
                if (ReceiveMessageStr.IndexOf("true") > -1)
                {
                    ReturnCode = 0;
                    int IndexStart = ReceiveMessageStr.IndexOf("[") + 1;
                    ChannelPara = ReceiveMessageStr.Substring(IndexStart, ReceiveMessageStr.LastIndexOf("]") - IndexStart);
                    //ChannelPara = ReceiveMessageStr.Substring(0, 31);

                }
                else
                {
                    ReturnCode = 1;
                }


            }
            else
            {
                ReturnCode = 2;
            }
            ResultParaString = ReceiveMessageStr;

            return ChannelPara;
        }
        public byte[] GetSnapImage(long SnapID, string LockID)
        {
            if (CreateBusSocket() != true)
            {
                return null;
            }
            SendMessageStr = "getimage#" + LockID + "-" + SnapID.ToString() + "#!";
            SocketStreamProcEnter();
            CloseBusSocket();
            if (ReturnCode == 0)
            {
                SaveImageToFile(SnapID, LockID);//Test
                return MyImageBytes;

            }
            else
            {
                return null;
            }

        }


        private void SaveImageToFile(long SnapID, string LockID)
        {
            FileStream MyRecieveFileStream;
            BinaryWriter MyBinaryWriter;
            //string MyAutoFileNameStr = Guid.NewGuid().ToString().ToUpper();
            string SnapIDStr = SnapID.ToString();

            string MyCompleteFileName;////= "C:\\MobileSnapImage\\" + LockID + "_" + SnapIDStr + ".jpg";
            MyCompleteFileName = strSaveSnapPath + LockID + "_" + SnapIDStr + ".jpg";


            MyRecieveFileStream = new FileStream(MyCompleteFileName, FileMode.Create, FileAccess.Write);
            MyBinaryWriter = new BinaryWriter(MyRecieveFileStream);
            try
            {
                //MyBinaryWriter.Write(RecieveFileBuffers, 0, (int)RecieveFileLenght);
                MyBinaryWriter.Write(MyImageBytes);
                //this.MyAsynchLockServerSocketService.DisplayResultInfor(1, "保存图像数据到Files成功！");
                //return true;
            }
            catch (Exception AnyException)
            {

                //this.MyAsynchLockServerSocketService.DisplayResultInfor(1, "保存图像数据到Files失败！");
                //return false;
            }
            finally
            {
                MyBinaryWriter.Close();
                MyRecieveFileStream.Close();

            }



        }

        //-----------------------------------------------------------------------------------------------------------      
        private bool CreateBusSocket()
        {

            try
            {
                MySocket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
                MySocket.Connect(MobileServerIPStr, RemoteServerPortNo);
                MyNetworkStream = new NetworkStream(MySocket);
                MyNetworkStream.ReadTimeout = MyReadTimeout;// 20000;
                MyNetworkStream.WriteTimeout = 15000;

                ReturnCode = 0;
                return true;
            }
            catch (System.Exception Except)
            {
                ResultErrorString = Except.Message;
                ReturnCode = 1;
                return false;

            }

        }
        private bool CloseBusSocket()
        {

            try
            {
                MyNetworkStream.Close();
                MySocket.Close();
                ReturnCode = 0;
                return true;
            }
            catch (System.Exception Except)
            {
                ResultErrorString = Except.Message;
                ReturnCode = 1;
                return false;

            }


        }
        private void SocketIOProcEnter()
        {

            try
            {
                byte[] SendMessageBytes = Encoding.UTF8.GetBytes(SendMessageStr);

                byte[] SendAllBytes = new byte[SendMessageBytes.Length + 3];

                SendMessageBytes.CopyTo(SendAllBytes, 3);

                SendAllBytes[1] = 1;//同步Socket客户端标志
                SendAllBytes[2] = 255;//移动端请求标志

                MyNetworkStream.Write(SendAllBytes, 0, SendAllBytes.Length);

                byte[] ReadBytes = new byte[1024];

                int RecieveCount = MyNetworkStream.Read(ReadBytes, 0, 1024);

                ReceiveMessageStr = Encoding.UTF8.GetString(ReadBytes, 3, RecieveCount - 3);//UTF-8编码！

                ReturnCode = 0;


            }
            catch (System.Exception Except)
            {
                ResultErrorString = Except.Message;
                ReturnCode = 1;


            }

            //---------------------------------------------


        }
        private void SocketIOProcEnterEx()
        {

            try
            {
                byte[] SendMessageBytes = Encoding.UTF8.GetBytes(SendMessageStr);

                MyNetworkStream.Write(SendMessageBytes, 0, SendMessageBytes.Length);

           


            }
            catch (System.Exception Except)
            {
                ResultErrorString = Except.Message;
                ReturnCode = 1;


            }

            //---------------------------------------------


        }

        private void SocketStreamProcEnter()
        {

            try
            {
                byte[] SendMessageBytes = Encoding.UTF8.GetBytes(SendMessageStr);
                byte[] SendAllBytes = new byte[SendMessageBytes.Length + 3];
                SendMessageBytes.CopyTo(SendAllBytes, 3);

                SendAllBytes[1] = 1;//同步Socket客户端标志
                SendAllBytes[2] = 255;//移动端请求标志

                MyNetworkStream.Write(SendAllBytes, 0, SendAllBytes.Length);

                byte[] ReadBytes = new byte[2048];

                int OneRecieveCount = MyNetworkStream.Read(ReadBytes, 0, 2048);
                int HeadMessageLenght = ReadBytes[2];
                HeadMessageLenght = HeadMessageLenght + 3;//3个标志字节头

                ReceiveMessageStr = Encoding.UTF8.GetString(ReadBytes, 3, HeadMessageLenght - 3);//UTF-8编码！
                if (ReceiveMessageStr.IndexOf("true") > -1)
                {
                    int IndexStart = ReceiveMessageStr.IndexOf("[") + 1;
                    string ImageLenghtStr = ReceiveMessageStr.Substring(IndexStart, ReceiveMessageStr.LastIndexOf("]") - IndexStart);
                    int ImageAllLenght = int.Parse(ImageLenghtStr);
                    int ReadImageLoopCount = OneRecieveCount - HeadMessageLenght;
                    MyImageBytes = new byte[ImageAllLenght];

                    //第一次读的图像数据
                    for (int i = 0; i < ReadImageLoopCount; i++)
                    {
                        MyImageBytes[i] = ReadBytes[HeadMessageLenght + i];
                    }

                    while (ReadImageLoopCount != ImageAllLenght)
                    {
                        OneRecieveCount = MyNetworkStream.Read(ReadBytes, 0, 2048);
                        ReadBytes.CopyTo(MyImageBytes, ReadImageLoopCount);
                        ReadImageLoopCount = ReadImageLoopCount + OneRecieveCount;


                    }

                    ReturnCode = 0;
                }
                else
                {
                    ReturnCode = 1;
                }



            }
            catch (System.Exception Except)
            {
                ResultErrorString = Except.Message;
                ReturnCode = 1;


            }

            //---------------------------------------------


        }

        //-----------------------------------------------------------------------------------------------------------

    }
}