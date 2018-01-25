using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Net.NetworkInformation;
using System.IO;
using System.Runtime.InteropServices;
using System.Threading;
using System.ServiceModel;
using System.Net;
using System.Net.Sockets;

using SmartBusECOService;

using  SmartBusECOService.FTP;

//using CloudServiceHostApp.HNLYLGJ.GATE;

namespace CloudServiceHostApp
{
    public partial class MainForm : Form
    {

        bool FlagID;
        string AccountID;
        int ResultCode;
        string LoginName, PassWord;


        int ClientCallCount;
        const string PriAddress = "121.201.28.118";


        ServiceHost MySmartBusCloudServiceHost;
        ServiceHost MySmartBusAPCECOServiceHost;

        static public List<VisAccount> MyListVisAccount;

        static public List<VisGather> MyListVisGather;


        List<VisGather> MyListVisGatherJX;

        DataGridViewAccountForm MyDataGridViewAccountForm;
        DataGridViewGatherForm MyDataGridViewGatherForm;

        int FlowID;


        //---APC--------------
        int INCount, OUTCount;
      

        [DllImport("winmm.dll", EntryPoint = "PlaySound")]
        private static extern bool PlaySound(string pszSound, IntPtr hmod, uint fdwSound);
        string strCurrentPath;

        //-------------------------
        //TcpListener MyTcpListener = null;
        //private Thread listenThread;
        //string LocalAddress = "192.168.1.100";
        // 保存用户名和密码
        //Dictionary<string, string> users;

        FTPSocketHelper MyFTPSocketHelper;
        public MainForm()
        {
            InitializeComponent();

            MyListVisAccount = new List<VisAccount>();
            MyListVisGather = new List<VisGather>();
            MyListVisGatherJX = new List<VisGather>();

            //--1.-------------------------------------------------------------
            //将UI线程的同步上下文保存到服务对象的静态字段中
            SmartBusCloudService.UIContext = SynchronizationContext.Current;
            //通知服务对象，当用客户端调用时，调用此函数
            SmartBusCloudService.UpdateCallAccount =this.UpdateCallAccount;
            SmartBusCloudService.UpdateCallLogin = this.UpdateCallLogin;
            SmartBusCloudService.UpdateCallBind = this.UpdateCallBind;
            SmartBusCloudService.UpdateCallSendAlarm = this.UpdateCallSendAlarm;
            SmartBusCloudService.UpdateCallPostAlarm = this.UpdateCallPostAlarm;
            SmartBusCloudService.UpdateCallSendRunState = this.UpdateCallSendRunState;
            SmartBusCloudService.UpdateCallPostRunState = this.UpdateCallPostRunState;

            SmartBusCloudService.UpdateUIFuncEx = this.UpdateCallCountEx;
            //--2.-----------------------------------------------------------------
            SmartBusAPCECOService.UIContext = SynchronizationContext.Current;

            SmartBusAPCECOService.UpdateCallAccount = this.UpdateCallAccount;
            SmartBusAPCECOService.UpdateCallLogin = this.UpdateCallLogin;
            SmartBusAPCECOService.UpdateCallBind = this.UpdateCallBind;
            SmartBusAPCECOService.UpdateCallSendAlarm = this.UpdateCallSendAlarm;
            SmartBusAPCECOService.UpdateCallPostAlarm = this.UpdateCallPostAlarm;
            SmartBusAPCECOService.UpdateCallSendRunState = this.UpdateCallSendRunState;
            SmartBusAPCECOService.UpdateCallPostRunState = this.UpdateCallPostRunState;

            SmartBusAPCECOService.UpdateUIFuncEx = this.UpdateCallCountEx;

            //--3.-------------------------------------------------------------------
            FTPSocketHelper.UIContext = SynchronizationContext.Current;
            FTPSocketHelper.UpdateUIFuncEx= this.UpdateCallCountEx;

            //Test
            // MyListVisAccount.Add(new VisAccount("881154321321"));
            // MyListVisAccount.Add(new VisAccount("991154321321"));
            // MyListVisAccount.Add(new VisAccount("771154321321"));
            MyDataGridViewAccountForm = new DataGridViewAccountForm();

            //MyListVisGather.Add(new VisGather("1000"));
            //MyListVisGather.Add(new VisGather("2000"));
            //MyListVisGather.Add(new VisGather("3000"));
            MyDataGridViewGatherForm = new DataGridViewGatherForm();




          

           
        }


        private void FormTestHost_Load(object sender, EventArgs e)
        {

            // 初始化用户名和密码
            // users = new Dictionary<string, string>();
            //users.Add("admin", "admin");

            // 设置默认的FTP主目录
            tbxFtpRoot.Text = "D:/MyFtpServerRoot/";
            //IPAddress[] ips = Dns.GetHostAddresses("");
            //tbxFtpServerIp.Text = LocalAddress;// "0.0.0.0";
            tbxFtpServerPort.Text = "21";

            MyFTPSocketHelper = new FTPSocketHelper();
            MyFTPSocketHelper.OutMessageCallBack = new FTPSocketHelper.OutMessageDelegate(MyFTPSocketHelper.OutLogingPut);


        }

        private void FormTestHost_Shown(object sender, EventArgs e)
        {
            InitStartCheck();


            MFuncDataGridAccountInit();
            MFuncDataGridGatherInit();

            //--我的专用版：皇帝账号-------------------
            LoginNameComboBox.SelectedIndex = 8;
            PassWordTextBox.Text = "111111";
            //-----------------------------------------
            LoginGroupBox.Enabled = true;
            ServiceGroupBox.Enabled = false;


            SoundCheckBox.Checked = false;

            //MyDataGridViewAccountForm.Show();
            //MyDataGridViewAccountForm.Hide();
            //MyDataGridViewGatherForm.Show();
            //MyDataGridViewGatherForm.Hide();


            ListIPcomboBox.Items.AddRange(Dns.GetHostAddresses(Dns.GetHostName()));

        }
        private void PlaySpund()
        {
            strCurrentPath = AppDomain.CurrentDomain.SetupInformation.ApplicationBase;
            string strPath;
            strPath = strCurrentPath + "doorling.wav";
            PlaySound(strPath, IntPtr.Zero, 0);

        }
        private void UpdateCallAccount(object NewCallCount)
        {
            //lblInfo.Text = "客户端调用DoWork方法计数：" + count.ToString();
            //OutInforRichTextBox.AppendText(string.Format("客户端登录次数：{0}\r\n", NewCallCount));

           
            string AccountStr = (string)NewCallCount;

            //RefreshPrimeNotifyIcon("Register:" + AccountStr);//发通知
            RefreshPrimeNotifyIcon2("Register", AccountStr);
            MFuncDataGridAccountFill(AccountStr);

            MyDataGridViewAccountForm.SetDataGridView();



        }
        private void UpdateCallLogin(object NewCallCount)
        {
           
            string mAccountID = (string)NewCallCount;

            //RefreshPrimeNotifyIcon("Login:" + mAccountID);//发通知
            RefreshPrimeNotifyIcon2("Login", mAccountID);

            VisAccount mVisAccount = MyListVisAccount.Find(
            delegate (VisAccount VisAccountUser)
            {
                return VisAccountUser.AccountID.Equals(mAccountID);
            });

            if (mVisAccount != null)
            {
                mVisAccount.Login = mVisAccount.Login+1;
                MFuncDataGridAccountInit();

                MyDataGridViewAccountForm.SetDataGridView();
            }
           
          

        }

        private void UpdateCallBind(object NewCallCount)
        {
           
            string AccountStr = (string)NewCallCount;
            //RefreshPrimeNotifyIcon("Bind:" + AccountStr);//发通知
            RefreshPrimeNotifyIcon2("Bind", AccountStr);

            string AccountID = AccountStr.Substring(0, 12);
            string mDeviceID = AccountStr.Substring(13, 12);
            string mCarID = AccountStr.Substring(26);

            VisAccount mVisAccount = MyListVisAccount.Find(
            delegate (VisAccount VisAccountUser)
            {
                return VisAccountUser.AccountID.Equals(AccountID);
            });

            if (mVisAccount != null)
            {
                mVisAccount.DeviceID = mDeviceID;
                mVisAccount.CarID = mCarID;
                MFuncDataGridAccountInit();

                MyDataGridViewAccountForm.SetDataGridView();
            }


        }

        private void UpdateCallSendAlarm(object NewCallCount)
        {
           
            string AlarmStr = (string)NewCallCount;
            int mCount = 0;
            if (AlarmStr.Length > 60)
            {
                mCount = 60;
            }
            else
            {
                mCount = AlarmStr.Length;
            }
            string NotifyStr = AlarmStr.Substring(0, mCount);
            //RefreshPrimeNotifyIcon("SendAlarm:" + NotifyStr);//发通知
            RefreshPrimeNotifyIcon2("SendAlarm", AlarmStr);

            int FlagIndex = AlarmStr.IndexOf("@");
            string mAccountID = AlarmStr.Substring(FlagIndex + 1, 12);

            VisGather MyVisGather = new VisGather();
            FlowID++;
            MyVisGather.FlowID = FlowID.ToString();
            MyVisGather.TypeID = "10";
            MyVisGather.FlagID = "100";
            MyVisGather.AccountID = mAccountID;
            MyVisGather.InforStr = AlarmStr;
          

            MyListVisGather.Add(MyVisGather);
            MFuncDataGridGatherInit();

            MyDataGridViewGatherForm.SetDataGridView();

        }

        private void UpdateCallPostAlarm(object NewCallCount)
        {

            string AlarmSetStr = (string)NewCallCount;
            int mCount = 0;
            if (AlarmSetStr.Length > 60)
            {
                mCount = 60;
            }
            else
            {
                mCount = AlarmSetStr.Length;
            }
            string NotifyStr = AlarmSetStr.Substring(0, mCount);
            //RefreshPrimeNotifyIcon("PostAlarm:" + NotifyStr);//发通知
            RefreshPrimeNotifyIcon2("PostAlarm", AlarmSetStr);

            int index = AlarmSetStr.IndexOf(":");
            string mFlagID = AlarmSetStr.Substring(0, index);
            AlarmSetStr = AlarmSetStr.Substring(index + 1);


            int FlagIndex = AlarmSetStr.IndexOf("@");
            string mAccountID = AlarmSetStr.Substring(FlagIndex + 1, 12);

            VisGather MyVisGather = new VisGather();
            FlowID++;
            MyVisGather.FlowID = FlowID.ToString();
            MyVisGather.TypeID = "10";          
            MyVisGather.FlagID = mFlagID;
            MyVisGather.AccountID = mAccountID;
            MyVisGather.InforStr = AlarmSetStr;

            MyListVisGather.Add(MyVisGather);

            MFuncDataGridGatherInit();

            MyDataGridViewGatherForm.SetDataGridView();

        }


        private void UpdateCallSendRunState(object NewCallCount)
        {
            string RunStateStr = (string)NewCallCount;
            int mCount = 0;
            if (RunStateStr.Length > 64)
            {
                mCount = 62;
            }
            else
            {
                mCount = RunStateStr.Length;
            }
            string NotifyStr = RunStateStr.Substring(0, mCount);
            //RefreshPrimeNotifyIcon("SendRunState:" + NotifyStr);//发通知
            RefreshPrimeNotifyIcon2("SendRunState", RunStateStr);

            int FlagIndex = RunStateStr.IndexOf("@");
            string mAccountID = RunStateStr.Substring(FlagIndex + 1, 12);

            VisGather MyVisGather = new VisGather();
            FlowID++;
            MyVisGather.FlowID = FlowID.ToString();
            MyVisGather.TypeID = "20";
            MyVisGather.FlagID = "100";
            MyVisGather.AccountID = mAccountID;
            MyVisGather.InforStr = RunStateStr;


            MyListVisGather.Add(MyVisGather);
            MFuncDataGridGatherInit();

            MyDataGridViewGatherForm.SetDataGridView();

        }

        private void UpdateCallPostRunState(object NewCallCount)
        {

            string RunStateSetStr = (string)NewCallCount;
            int mCount = 0;
            if (RunStateSetStr.Length > 64)
            {
                mCount = 62;
            }
            else
            {
                mCount = RunStateSetStr.Length;
            }
            string NotifyStr = RunStateSetStr.Substring(0, mCount);
            //RefreshPrimeNotifyIcon("PostRunState:" + NotifyStr);//发通知
            RefreshPrimeNotifyIcon2("PostRunState", RunStateSetStr);

            int index = RunStateSetStr.IndexOf(":");
            string mFlagID = RunStateSetStr.Substring(0, index);
            RunStateSetStr = RunStateSetStr.Substring(index + 1);

            int FlagIndex = RunStateSetStr.IndexOf("@");
            string mAccountID = RunStateSetStr.Substring(FlagIndex + 1, 12);

            VisGather MyVisGather = new VisGather();
            FlowID++;
            MyVisGather.FlowID = FlowID.ToString();
            MyVisGather.TypeID = "20";
            MyVisGather.FlagID = mFlagID;
            MyVisGather.AccountID = mAccountID;
            MyVisGather.InforStr = RunStateSetStr;

            MyListVisGather.Add(MyVisGather);

            MFuncDataGridGatherInit();

            MyDataGridViewGatherForm.SetDataGridView();

        }
        
        private void UpdateCallCountEx(object SendReceiveString)
        {
            //lblInfo.Text = "客户端调用DoWork方法计数：" + count.ToString();
            //OutInforRichTextBox.AppendText(string.Format("{0}\r\n", SendReceiveString));

            ClientCallCount++;
            string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now) + "." + string.Format("{0:D3}", DateTime.Now.Millisecond);
            string ReceiveString = string.Format("[{0}][{1}][{2}]", ClientCallCount, MyTimeMarkerStr, SendReceiveString);

            string tempstr = (string)SendReceiveString;
            if(tempstr.IndexOf("count#")>-1)
            {
                UpdatePeopleCountUI(tempstr);
                PlaySound(tempstr);


                
            }



            OutMessage(ReceiveString, 0);

          

        }
        private void UpdatePeopleCountUI(string SendReceiveString)
        {
            string str = SendReceiveString;           
            int pIndex = str.IndexOf(",");
            string INOUTstr = str.Substring(pIndex + 1);
            pIndex = INOUTstr.IndexOf(",");
            INOUTstr = INOUTstr.Substring(0, pIndex);


            //固定长度：3  in:001;out:001
            string instr = INOUTstr.Substring(3, 3);
            string outstr = INOUTstr.Substring(11, 3);
            INCount = INCount + int.Parse(instr);
            OUTCount = OUTCount + int.Parse(outstr);

            INnumberlabel.Text = INCount.ToString();
            OutGolabel.Text = OUTCount.ToString();


            //固定长度 TaskID:00000000[8]
            pIndex = str.LastIndexOf("TaskID:");//7个字符
            string TaskIDStr= str.Substring(pIndex + 7,8);
            TaskIDTextBox.Text = int.Parse(TaskIDStr).ToString();//通过转换去除前置0

            //通知栏消息
            RefreshPrimeNotifyIcon2("People Counting", TaskIDTextBox.Text+":"+ instr + ","+ outstr);


        }
        private void PlaySound(string SendReceiveString)
        {
            if(SoundCheckBox.Checked)
            {
                if (SendReceiveString.IndexOf("count#") > -1) PlaySpund();
            }
        

        }

        private void OutMessage(string str, int f)
        {
            if (OutInforRichTextBox == null) return;
            if (f == 1)
            {
                OutInforRichTextBox.AppendText(str);
            }
            else
            {
                OutInforRichTextBox.AppendText(str + "\r\n");
            }

           
        }

        private void Startbutton_Click(object sender, EventArgs e)
        {
            if (MySmartBusCloudServiceHost == null)
            {
                Type MySmartBusCloudServiceType = typeof(SmartBusCloudService);
                MySmartBusCloudServiceHost = new ServiceHost(MySmartBusCloudServiceType);

                MySmartBusCloudServiceHost.Open();
               Statuslabel.Text = "Edge Smart Agent已启动...1";

            }

            if (MySmartBusAPCECOServiceHost == null)
            {
                Type MySmartBusAPCECOServiceType = typeof(SmartBusAPCECOService);
                MySmartBusAPCECOServiceHost = new ServiceHost(MySmartBusAPCECOServiceType);

                MySmartBusAPCECOServiceHost.Open();
                Statuslabel.Text = "Edge Smart Agent已启动...2";

            }

        }

        private void Stopbutton_Click(object sender, EventArgs e)
        {
            if (MySmartBusCloudServiceHost != null)
            {
                if (MySmartBusCloudServiceHost.State == CommunicationState.Opened)
                {
                    MySmartBusCloudServiceHost.Close();
                    MySmartBusCloudServiceHost = null;
                }
                
                Statuslabel.Text = "Edge Smart Agent已关闭...1";

            }


            if (MySmartBusAPCECOServiceHost != null)
            {
                if (MySmartBusAPCECOServiceHost.State == CommunicationState.Opened)
                {
                    MySmartBusAPCECOServiceHost.Close();
                    MySmartBusAPCECOServiceHost = null;
                }

                Statuslabel.Text = "Edge Smart Agent已关闭...2";

            }


        }

        private void FormTestHost_FormClosing(object sender, FormClosingEventArgs e)
        {
            /*
            if (MySmartBusCloudServiceHost != null)
            {
                if (MySmartBusCloudServiceHost.State == CommunicationState.Opened)
                {
                    MySmartBusCloudServiceHost.Close();
                    MySmartBusCloudServiceHost = null;
                }
             

            }
            */

             Stopbutton_Click(sender, e);

            if (MyDataGridViewAccountForm != null)
                MyDataGridViewAccountForm.Close();

            if (MyDataGridViewGatherForm != null)
                MyDataGridViewGatherForm.Close();


             btnFtpServerStartStop_Click(sender, e);

        }

        private void MFuncDataGridAccountStyles(int mCount)
        {

            GoodDataGrid.BackColor = Color.GhostWhite;
            GoodDataGrid.BackgroundColor = Color.Lavender;
            GoodDataGrid.BorderStyle = BorderStyle.None;
            GoodDataGrid.CaptionBackColor = Color.RoyalBlue;
            GoodDataGrid.CaptionFont = new Font("Tahoma", 10.0F, FontStyle.Bold);//10.0  13.0
            GoodDataGrid.CaptionForeColor = Color.Bisque;
            GoodDataGrid.CaptionText = "账号管理[" + mCount.ToString() + "]";
            GoodDataGrid.Font = new Font("Tahoma", 10.0F);  //12.0   15.0
            GoodDataGrid.ParentRowsBackColor = Color.Lavender;
            GoodDataGrid.ParentRowsForeColor = Color.MidnightBlue;


            DataGridTableStyle grdTableStyle = new DataGridTableStyle();

            grdTableStyle.AlternatingBackColor = Color.GhostWhite;
            grdTableStyle.BackColor = Color.GhostWhite;
            grdTableStyle.ForeColor = Color.MidnightBlue;
            grdTableStyle.GridLineColor = Color.RoyalBlue;
            grdTableStyle.HeaderBackColor = Color.MidnightBlue;
            grdTableStyle.HeaderFont = new Font("Tahoma", 10.0F, FontStyle.Bold);//12.0 15.0 
            grdTableStyle.HeaderForeColor = Color.Lavender;
            grdTableStyle.SelectionBackColor = Color.Teal;
            grdTableStyle.SelectionForeColor = Color.PaleGreen;
            //grdTableStyle.MappingName = "ArrayList" ;
            //grdTableStyle.MappingName = ChargeDetailListEntityOBJ.GetType().Name;
            grdTableStyle.MappingName = MyListVisAccount.GetType().Name;

            grdTableStyle.PreferredColumnWidth = 125;
            grdTableStyle.PreferredRowHeight = 15;
            grdTableStyle.ReadOnly = true;


            //---1-------------------------------------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle1 = new DataGridTextBoxColumn();
            grdColStyle1.HeaderText = "AccountID";
            grdColStyle1.MappingName = "AccountID";
            grdColStyle1.Alignment = HorizontalAlignment.Left;
            grdColStyle1.Width = 110;


            //---2------------------------------------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle2 = new DataGridTextBoxColumn();
            grdColStyle2.HeaderText = "LoginName";//
            grdColStyle2.MappingName = "LoginName";// 
            grdColStyle2.Alignment = HorizontalAlignment.Left;
            grdColStyle2.Width = 110;


            //---3------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle3 = new DataGridTextBoxColumn();

            grdColStyle3.HeaderText = "PassWord";
            grdColStyle3.MappingName = "PassWord";
            grdColStyle3.Alignment = HorizontalAlignment.Left;
            grdColStyle3.Width = 110;



            //---4------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle4 = new DataGridTextBoxColumn();

            grdColStyle4.HeaderText = "RegDate";
            grdColStyle4.MappingName = "CreateDate";
            grdColStyle4.Alignment = HorizontalAlignment.Left;
            grdColStyle4.Width = 163;


            //---5------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle5 = new DataGridTextBoxColumn();

            grdColStyle5.HeaderText = "MobileID";
            grdColStyle5.MappingName = "MobileID";
            grdColStyle5.Alignment = HorizontalAlignment.Left;
            grdColStyle5.Width = 120;


            //---6------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle6 = new DataGridTextBoxColumn();

            grdColStyle6.HeaderText = "DeviceID";
            grdColStyle6.MappingName = "DeviceID";
            grdColStyle6.Alignment = HorizontalAlignment.Left;
            grdColStyle6.Width = 100;


            //---7------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle7 = new DataGridTextBoxColumn();

            grdColStyle7.HeaderText = "CarID";
            grdColStyle7.MappingName = "CarID";
            grdColStyle7.Alignment = HorizontalAlignment.Left;
            grdColStyle7.Width = 100;


            //---8------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle8 = new DataGridTextBoxColumn();

            grdColStyle8.HeaderText = "Login";
            grdColStyle8.MappingName = "Login";
            grdColStyle8.Alignment = HorizontalAlignment.Center;
            grdColStyle8.Width = 100;
            //---------------------------------------------------------------------------

            grdTableStyle.GridColumnStyles.AddRange(new DataGridColumnStyle[] { grdColStyle1, grdColStyle2, grdColStyle3, grdColStyle4, grdColStyle5, grdColStyle6, grdColStyle7, grdColStyle8 });


            GoodDataGrid.TableStyles.Add(grdTableStyle);
        }

        private void MFuncDataGridGatherStyles(int mCount)
        {

            GatherDataGrid.BackColor = Color.GhostWhite;
            GatherDataGrid.BackgroundColor = Color.Lavender;
            GatherDataGrid.BorderStyle = BorderStyle.None;
            GatherDataGrid.CaptionBackColor = Color.DarkSeaGreen; //Color.RoyalBlue
            GatherDataGrid.CaptionFont = new Font("Tahoma", 10.0F, FontStyle.Bold);//10.0 13.0
            GatherDataGrid.CaptionForeColor = Color.Blue;//Color.Bisque
            GatherDataGrid.CaptionText = "数据窗口[" + mCount.ToString() + "]";// 
            GatherDataGrid.Font = new Font("Tahoma", 10.0F); //12.0 15.0
            GatherDataGrid.ParentRowsBackColor = Color.Lavender;
            GatherDataGrid.ParentRowsForeColor = Color.MidnightBlue;


            DataGridTableStyle grdTableStyle = new DataGridTableStyle();

            grdTableStyle.AlternatingBackColor = Color.GhostWhite;
            grdTableStyle.BackColor = Color.GhostWhite;
            grdTableStyle.ForeColor = Color.MidnightBlue;
            grdTableStyle.GridLineColor = Color.RoyalBlue;
            grdTableStyle.HeaderBackColor = Color.DarkOliveGreen;//MidnightBlue
            grdTableStyle.HeaderFont = new Font("Tahoma", 10.0F, FontStyle.Bold);//12.0   15.0
            grdTableStyle.HeaderForeColor = Color.Lavender;
            grdTableStyle.SelectionBackColor = Color.Teal;
            grdTableStyle.SelectionForeColor = Color.PaleGreen;
            //grdTableStyle.MappingName = "ArrayList" ;
            //grdTableStyle.MappingName = ChargeDetailListEntityOBJ.GetType().Name;
            grdTableStyle.MappingName = MyListVisGather.GetType().Name;

            grdTableStyle.PreferredColumnWidth = 125;
            grdTableStyle.PreferredRowHeight = 15;
            grdTableStyle.ReadOnly = true;


            //---1-------------------------------------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle1 = new DataGridTextBoxColumn();
            grdColStyle1.HeaderText = "FlowID";
            grdColStyle1.MappingName = "FlowID";
            grdColStyle1.Alignment = HorizontalAlignment.Center;
            grdColStyle1.Width = 90;

            //---2------------------------------------------------------------------


            DataGridTextBoxColumn grdColStyle2 = new DataGridTextBoxColumn();
            grdColStyle2.HeaderText = "TypeID";
            grdColStyle2.MappingName = "TypeID";
            grdColStyle2.Alignment = HorizontalAlignment.Center;
            grdColStyle2.Width = 90;


            //---3------------------------------------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle3 = new DataGridTextBoxColumn();
            grdColStyle3.HeaderText = "FlagID";
            grdColStyle3.MappingName = "FlagID";
            grdColStyle3.Alignment = HorizontalAlignment.Center;
            grdColStyle3.Width = 90;



            //---4------------------------------------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle4 = new DataGridTextBoxColumn();
            grdColStyle4.HeaderText = "AccountID";
            grdColStyle4.MappingName = "AccountID";
            grdColStyle4.Alignment = HorizontalAlignment.Left;
            grdColStyle4.Width = 110;


            //---4------------------------------------------------------------------------------------------------
            DataGridTextBoxColumn grdColStyle5 = new DataGridTextBoxColumn();

            grdColStyle5.HeaderText = "CreateDate";
            grdColStyle5.MappingName = "CreateDate";
            grdColStyle5.Alignment = HorizontalAlignment.Left;
            grdColStyle5.Width = 163;

            //---5------------------------------------------------------------------------------------------------

            DataGridTextBoxColumn grdColStyle6 = new DataGridTextBoxColumn();
            grdColStyle6.HeaderText = "InforStr";//
            grdColStyle6.MappingName = "InforStr";// 
            grdColStyle6.Alignment = HorizontalAlignment.Left;
            grdColStyle6.Width = 680;






            //---------------------------------------------------------------------------

            grdTableStyle.GridColumnStyles.AddRange(new DataGridColumnStyle[] { grdColStyle1, grdColStyle2, grdColStyle3, grdColStyle4, grdColStyle5, grdColStyle6 });


            GatherDataGrid.TableStyles.Add(grdTableStyle);
        }

        private int MFuncDataGridAccountFill(string AccountList)
        {
            


            if (AccountList != null)
            {
                if (AccountList.Length > 5)
                {
                  
                    string OneVisAccount;
                    int InnerVisAccountIndex;
                    OneVisAccount = AccountList;
                 

                        VisAccount NewVisAccount = new VisAccount();
                        NewVisAccount.AccountID = OneVisAccount.Substring(0, 12);

                        OneVisAccount = OneVisAccount.Substring(13);
                        InnerVisAccountIndex = OneVisAccount.IndexOf(",");
                        NewVisAccount.LoginName = OneVisAccount.Substring(0, InnerVisAccountIndex);

                        OneVisAccount = OneVisAccount.Substring(InnerVisAccountIndex + 1);
                        InnerVisAccountIndex = OneVisAccount.IndexOf(",");
                        NewVisAccount.PassWord = OneVisAccount.Substring(0, InnerVisAccountIndex);

                        OneVisAccount = OneVisAccount.Substring(InnerVisAccountIndex + 1);
                        NewVisAccount.MobileID=OneVisAccount;
                    

                        MyListVisAccount.Add(NewVisAccount);


                    

                    MFuncDataGridAccountInit();

                    return 100;
                }
                else
                {
                    return 200;
                }

            }
            else
            {

                return 200;


            }
        }

        private int XMFuncDataGridGatherFillX(string GatherList)
        {

            if (GatherList != null)
            {
                if (GatherList.Length > 10)
                {
                   // MyListVisGather.Clear();

                    string TempVisGather;
                    int VisGatherIndex;
                    int InnerVisGatherIndex;
                    TempVisGather = GatherList;
                    VisGatherIndex = TempVisGather.IndexOf("^^");
                    while (VisGatherIndex != -1)
                    {
                        TempVisGather = TempVisGather.Substring(2);
                        VisGather NewVisGather = new VisGather();

                        int FlagIndex = TempVisGather.IndexOf("@");
                        NewVisGather.AccountID = TempVisGather.Substring(FlagIndex + 1, 12);

                        InnerVisGatherIndex = TempVisGather.IndexOf(";");
                        NewVisGather.CreateDate = TempVisGather.Substring(0, InnerVisGatherIndex);

                        //NewVisGather.CreateDate = NewVisGather.CreateDate.TrimStart();
                        //NewVisGather.CreateDate = NewVisGather.CreateDate.TrimStart();
                        if (NewVisGather.CreateDate.Length == 22)
                        {
                            NewVisGather.CreateDate = NewVisGather.CreateDate + "0";//补齐操作
                        }
                        else
                        {
                            if (NewVisGather.CreateDate.Length == 21)
                            {
                                NewVisGather.CreateDate = NewVisGather.CreateDate + "00";//补齐操作
                            }
                        }


                        TempVisGather = TempVisGather.Substring(InnerVisGatherIndex + 1);
                        InnerVisGatherIndex = TempVisGather.IndexOf(";");
                        NewVisGather.FlowID = TempVisGather.Substring(0, InnerVisGatherIndex);



                        TempVisGather = TempVisGather.Substring(InnerVisGatherIndex + 1);
                        InnerVisGatherIndex = TempVisGather.IndexOf(";");
                        NewVisGather.TypeID = TempVisGather.Substring(0, InnerVisGatherIndex);


                        TempVisGather = TempVisGather.Substring(InnerVisGatherIndex + 1);
                        InnerVisGatherIndex = TempVisGather.IndexOf(";");
                        NewVisGather.FlagID = TempVisGather.Substring(0, InnerVisGatherIndex);


                        TempVisGather = TempVisGather.Substring(InnerVisGatherIndex + 1);

                        VisGatherIndex = TempVisGather.IndexOf("^^");
                        if (VisGatherIndex != -1)
                        {
                            NewVisGather.InforStr = TempVisGather.Substring(0, VisGatherIndex);
                            TempVisGather = TempVisGather.Substring(VisGatherIndex);
                            MyListVisGather.Add(NewVisGather);
                        }
                        else
                        {
                            NewVisGather.InforStr = TempVisGather.Substring(0);
                            MyListVisGather.Add(NewVisGather);
                            break;
                        }


                    }

                    MFuncDataGridGatherInit();
                    return 100;
                }
                else
                {
                    return 200;
                }

            }
            else
            {

                return 200;


            }
        }
        private void MFuncDataGridAccountInit()
        {
            GoodDataGrid.TableStyles.Clear();
            GoodDataGrid.DataSource = MyListVisAccount;
            MFuncDataGridAccountStyles(MyListVisAccount.Count);
            GoodDataGrid.Refresh();
            if(MyListVisAccount.Count>0)
            GoodDataGrid.Select(MyListVisAccount.Count - 1);

        }

        private void MFuncDataGridGatherInit()
        {
            GatherDataGrid.TableStyles.Clear();
            if (MyListVisGather.Count > 10)
            {
                //var SortedListVisGather = from One in MyListVisGather orderby FlowID descending    select One;
                //排序输出
                int p = MyListVisGather.Count;
                VisGather[] VisGatherArray = new VisGather[p];
                List<VisGather> MySortedListVisGather = new List<VisGather>();
                for(int i=0;i<p;i++)
                {
                    VisGatherArray[i] = MyListVisGather[p-i-1];

                }
                MySortedListVisGather.AddRange(VisGatherArray);

                GatherDataGrid.DataSource = MySortedListVisGather;
                MFuncDataGridGatherStyles(MyListVisGather.Count);
                GatherDataGrid.Select(0);

                GatherDataGrid.Refresh();
               

               
            }
            else
            {
                //原生输出
                GatherDataGrid.DataSource = MyListVisGather;
                MFuncDataGridGatherStyles(MyListVisGather.Count);
                if (MyListVisGather.Count > 0)
                {
                    int m = MyListVisGather.Count - 1;
                    GatherDataGrid.CurrentRowIndex = m;
                    GatherDataGrid.Select(m);

                }
                GatherDataGrid.Refresh();

            }
                

          

        }

      

        private void LoginButton_Click(object sender, EventArgs e)
        {

            if (LoginNameComboBox.SelectedIndex == 8)
            {
                //上帝模式
                ClientCallCount++;
                FlagID = true;
                UpdateUIState(FlagID);
                ResultCode = 100;
                string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now) + "." + string.Format("{0:D3}", DateTime.Now.Millisecond);
                string ReceiveString = string.Format("[次数：{0}][{1}][{2}]", ClientCallCount, ResultCode, MyTimeMarkerStr);
                OutMessage(ReceiveString, 0);
                OutMessage("000000000000", 0);
                return;

            }
            //--------------------------------------
            LoginName = LoginNameComboBox.Text.Trim();
            PassWord = PassWordTextBox.Text.Trim();
            ResultCode = 500;
            //ClientCallCount++;

            if (LoginName == null || LoginName == "" || PassWord == null || PassWord == "")
            {
                OutMessage("账号或者密码输入错误，请重新输入！", 0);
                return;
            }
            if (LoginName.Length < 2 || PassWord.Length < 2)
            {
                OutMessage("账号或者密码输入错误，请重新输入！", 0);
                return;
            }

            AccountID = GetMAC();
            CloudServiceHostApp.HNLYLGJ.GATE.SmartCarCloudServiceClient MySmartCarCloudServiceClient = new CloudServiceHostApp.HNLYLGJ.GATE.SmartCarCloudServiceClient("SmartCarCloudServicePort");
            //OutMessage(MySmartCarCloudServiceClient.Endpoint.Address.ToString(), 0);
            string Endpointstr = MySmartCarCloudServiceClient.Endpoint.Address.ToString();
            try
            {
                if (Endpointstr.IndexOf(PriAddress) > 0)
                {
                    MySmartCarCloudServiceClient.Open();
                    ResultCode = MySmartCarCloudServiceClient.AuthLogin(LoginName, PassWord, ref AccountID);
                    MySmartCarCloudServiceClient.Close();
                }
                else
                {
                    //OutMessage("无权操作！", 0);
                    ResultCode = 800;
                }


            }
            catch (Exception ex)
            {
                ResultCode = 700;

            }
            finally
            {
                MySmartCarCloudServiceClient.Close();
            }

            if (ResultCode == 700 || ResultCode == 800)
            {
                string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now) + "." + string.Format("{0:D3}", DateTime.Now.Millisecond);
                string ReceiveString = string.Format("[次数：{0}][{1}][{2}]", ClientCallCount, ResultCode, MyTimeMarkerStr);
                OutMessage(ReceiveString, 0);
                OutMessage("最大可能是专用隧道已经关闭或者网络通讯异常!", 0);
            }
            else
            {
                string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now) + "." + string.Format("{0:D3}", DateTime.Now.Millisecond);
                string ReceiveString = string.Format("[次数：{0}][{1}][{2}]", ClientCallCount, ResultCode, MyTimeMarkerStr);
                OutMessage(ReceiveString, 0);
                OutMessage(AccountID, 0);

                if (ResultCode == 100) FlagID = true;
                UpdateUIState(FlagID);
            }

        }

        private void UpdateUIState(bool InFlagID)
        {

            ServiceGroupBox.Enabled = InFlagID;

            LoginButton.Enabled = !InFlagID;


        }
        private string GetMAC()
        {
            NetworkInterface[] adapters = NetworkInterface.GetAllNetworkInterfaces();
            string Statestr;
            string PhysicalAddressstr = null;
            foreach (NetworkInterface adapter in adapters)
            {
                Statestr = adapter.OperationalStatus.ToString().ToUpper();
                if (Statestr == "UP")
                {
                    PhysicalAddressstr = adapter.GetPhysicalAddress().ToString();
                    break;
                }



            }
            return PhysicalAddressstr;
        }

        private void GoodDataGrid_DoubleClick(object sender, EventArgs e)
        {
            //DataGridViewAccountForm MyDataGridViewForm = new DataGridViewAccountForm();
            if (!MyDataGridViewAccountForm.Visible)
                MyDataGridViewAccountForm.Show();
           


        }

        private void GatherDataGrid_DoubleClick(object sender, EventArgs e)
        {
            //DataGridViewGatherForm MyDataGridViewGatherForm = new DataGridViewGatherForm();
            if (!MyDataGridViewGatherForm.Visible)
                MyDataGridViewGatherForm.Show();
        }

        private void InitStartCheck()
        {
            //klvislgjzx.bin


            if (!File.Exists(Environment.GetFolderPath(Environment.SpecialFolder.System) + "\\klvislgjzx.bin"))
            {
                this.Close();

            }
            if (!File.Exists(Environment.GetFolderPath(Environment.SpecialFolder.Windows) + "\\klvislgjzx.bin"))
            {
                this.Close();
            }

        }
        private void Resetbutton_Click(object sender, EventArgs e)
        {

            INCount = 0; ;
            OUTCount = 0;

            INnumberlabel.Text = "0";
            OutGolabel.Text = "0";
            TaskIDTextBox.Text = "";


        }
        private void btnFtpServerStartStop_Click(object sender, EventArgs e)
        {

            MyFTPSocketHelper.FTPInit(ListIPcomboBox.Text, int.Parse(tbxFtpServerPort.Text), tbxFtpRoot.Text);

            if (MyFTPSocketHelper.MyTcpListener == null)
            {
                //listenThread = new Thread(ListenClientConnect);
                //listenThread.IsBackground = true;
                //listenThread.Start();
                //lstboxStatus.Enabled = true;
                //lstboxStatus.Items.Clear();
                //lstboxStatus.Items.Add("已经启动Ftp服务...");
                if (e.GetType() != typeof(FormClosingEventArgs))
                {
                    MyFTPSocketHelper.FtpServerStart();
                    OutMessage("已经启动Ftp服务...", 0);
                    btnFtpServerStartStop.Text = "停止";
                }
                    
            }
            else
            {
                //MyTcpListener.Stop();
                // MyTcpListener = null;
                //listenThread.Abort();
                //lstboxStatus.Items.Add("Ftp服务已停止！");
                //lstboxStatus.TopIndex = lstboxStatus.Items.Count - 1;
                
                    MyFTPSocketHelper.FtpServerStop();
                    if(e.GetType()!=typeof(FormClosingEventArgs))
                    {
                        OutMessage("Ftp服务已停止！...", 0);
                        btnFtpServerStartStop.Text = "启动";
                    }
              
               
            }


        }



        private void RefreshPrimeNotifyIcon(string InputNotifyMessageStr)
        {
            string MessageNotifyIconText = "◆◆◆";
            //MainNotifyIcon.Text = MessageNotifyIconText + InputNotifyMessageStr;
            MainNotifyIcon.BalloonTipTitle = MessageNotifyIconText;
            MainNotifyIcon.BalloonTipText = InputNotifyMessageStr;
            MainNotifyIcon.ShowBalloonTip(100);


        }

       

        private void RefreshPrimeNotifyIcon2(string MessageNotifyTipTitle, string MessageTipText)
        {
            MainNotifyIcon.BalloonTipTitle = MessageNotifyTipTitle;
            MainNotifyIcon.BalloonTipText = MessageTipText;
            MainNotifyIcon.ShowBalloonTip(100);


        }




    }
}
