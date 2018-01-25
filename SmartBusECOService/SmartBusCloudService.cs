using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
//using System.Threading.Tasks;

using System.Threading;
using SmartBusBaseLib;





namespace SmartBusECOService
{
  
    public class SmartBusCloudService : IPrimeAccount, ISmartDevice, ISmartWarn, ICarRunState
    {
        
        //用于保存UI线程的同步上下文
        public static SynchronizationContext UIContext = null;
        //外界传入的用于更新可视化界面的函数
        public static SendOrPostCallback UpdateCallAccount = null;
        public static SendOrPostCallback UpdateCallLogin = null;
        public static SendOrPostCallback UpdateCallBind = null;

        public static SendOrPostCallback UpdateCallSendAlarm = null;
        public static SendOrPostCallback UpdateCallPostAlarm = null;

        public static SendOrPostCallback UpdateCallSendRunState = null;
        public static SendOrPostCallback UpdateCallPostRunState = null;


        public static SendOrPostCallback UpdateUIFuncEx = null;


        //调用计数
        public static int CallCount; public static int AccountCount;

        public static List<AccountTest> MyTestListAccount = new List<AccountTest>();

        public static List<SmartAlarmTest> MyListSmartAlarmTest = new List<SmartAlarmTest>();

      

        #region PrimeAccount Members
        int IPrimeAccount.RegisterAccount(string LoginName, string PassWord, ref string AccountID)
        {

            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;

            //更新可视化界面
            SendReceiveString = string.Format("Register:[次数：{0}][LoginName:{1}][PassWord:{2}][MobileID:{3}]", CallCount, LoginName, PassWord, AccountID);
            OutPut(SendReceiveString);

            string mMobileID = AccountID; 
            if(string.IsNullOrEmpty(AccountID)|| string.IsNullOrEmpty(LoginName))
            {

                OutPut(SendReceiveString);
                return 200;
            }

            //---1.-------------------
            AccountTest mAccountTest = MyTestListAccount.Find(
            delegate (AccountTest AccountUser)
            {
                return AccountUser.MobileID.Equals(mMobileID);//AccountUser.LoginName.Equals(LoginName);
            });
            //---2.-------------------

            if (mAccountTest == null)
            {
                //新手机：分3种情况：
                AccountTest mnAccountTest = MyTestListAccount.Find(
               delegate (AccountTest AccountUser)
               {
                return AccountUser.LoginName.Equals(LoginName);// && AccountUser.PassWord.Equals(PassWord)
               });

              if (mnAccountTest != null)
               {
                  if(mnAccountTest.PassWord== PassWord)
                  {
                       //1.种情况登录名正确密码正确（可能换手机），注册到新手机
                       AccountID = mnAccountTest.AccountID;

                        //更新列表
                        if (UIContext != null && UpdateCallAccount != null)
                        {
                            string str = AccountID + "," + LoginName + "," + PassWord + "," + mMobileID;
                            UIContext.Post(UpdateCallAccount, str);
                        }

                        SendReceiveString = string.Format("Register:[次数：{0}][Get AccountID:{1}]", CallCount, mnAccountTest.AccountID);

                        AccountTest MyAccountTest = new AccountTest();
                        MyAccountTest.AccountID = mnAccountTest.AccountID;
                        MyAccountTest.LoginName = LoginName;
                        MyAccountTest.PassWord = PassWord;
                        MyAccountTest.MobileID = mMobileID;
                        MyTestListAccount.Add(MyAccountTest);

                        OutPut(SendReceiveString);

                        return 100;//新手机已经注册返回成功，【测试表明，必须直接返回值】
                   }
                    else
                    {
                        //2.种情况登录名正确密码错误
                        AccountID = null;
                        return 200;//已经注册登录名密码错误无效；【测试表明，必须直接返回值】
                    }


                }
                else
                {
                    //3.种情况无登录名新手机（新手机新用户）
                    string CreateAccountID;
                    //int NewAccountID = Interlocked.Increment(ref AccountCount);
                    //int Temp = 10000 + NewAccountID;
                    //CreateAccountID="1234567" + Temp.ToString();

                    CreateAccountID = CreateMobileID.GetMobileIDNumberCode12();

                    AccountTest MyAccountTest = new AccountTest();
                    MyAccountTest.AccountID = CreateAccountID;
                    MyAccountTest.LoginName = LoginName;
                    MyAccountTest.PassWord = PassWord;
                    MyAccountTest.MobileID = mMobileID;
                    MyTestListAccount.Add(MyAccountTest);

                    AccountID = CreateAccountID;

                    //更新列表
                    if (UIContext != null && UpdateCallAccount != null)
                    {
                        string str = CreateAccountID + "," + LoginName + "," + PassWord + "," + mMobileID;
                        UIContext.Post(UpdateCallAccount, str);
                    }
                 
                    SendReceiveString = string.Format("Register:[次数：{0}][Create AccountID:{1}]", CallCount, CreateAccountID);
                    OutPut(SendReceiveString);
                    return 100;//新手机新注册；【测试表明，必须直接返回值】


                }

               

            }
            else
            {
                //老手机：分两种情况：
                if (mAccountTest.LoginName == LoginName && mAccountTest.PassWord == PassWord)
                {
                    AccountID = mAccountTest.AccountID;

                    //更新列表
                    if (UIContext != null && UpdateCallLogin != null)
                    {
                        string str = AccountID;
                        UIContext.Post(UpdateCallLogin, str);
                    }

                    SendReceiveString = string.Format("Register:[次数：{0}][Get AccountID:{1}]", CallCount, mAccountTest.AccountID);
                    OutPut(SendReceiveString);
                    return 100;//老手机已经注册或者设备已经注册（可能认为卸载重装因素造成）；【测试表明，必须直接返回值】
                }
                else
                {
                    AccountID = null;
                    return 200;//已经注册或者设备已经注册；【测试表明，必须直接返回值】
                }

            }


        }

        int IPrimeAccount.LoginCloud(string LoginName, string PassWord, ref string AccountID)
        {
            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;
            string mAccountID = AccountID;

            //更新可视化界面
            SendReceiveString = string.Format("LoginCloud:[次数：{0}][LoginName:{1}][PassWord:{2}][AccountID:{3}]", CallCount, LoginName, PassWord, mAccountID);
            OutPut(SendReceiveString);

           

            AccountTest mAccountTest = MyTestListAccount.Find(
            delegate (AccountTest AccountUser)
            {
                return AccountUser.LoginName.Equals(LoginName) && AccountUser.PassWord.Equals(PassWord);
            });

            
            if (mAccountTest != null)
            {
                AccountID = mAccountTest.AccountID;


                //更新列表
                if (UIContext != null && UpdateCallLogin != null)
                {
                    string str = AccountID;
                    UIContext.Post(UpdateCallLogin, str);
                }

                SendReceiveString = string.Format("LoginCloud:[次数：{0}][Get AccountID:{1}]", CallCount, mAccountTest.AccountID);
                OutPut(SendReceiveString);
               return 100;//成功，测试表明，必须直接返回值

            }
            else
            {
                AccountID = mAccountID;
                return 200;//200:失败，测试表明，必须直接返回值


            }

         

           
        }

        int IPrimeAccount.UpdatePassWord(string LoginName, string PassWord, string AccountID)
        {
            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;

            //更新可视化界面
            SendReceiveString = string.Format("UpdatePassWord:[次数：{0}][LoginName:{1}][PassWord:{2}][AccountID:{3}]", CallCount, LoginName, PassWord, AccountID);

            OutPut(SendReceiveString);


            return 100;
        }
      

        List<PrimeAccount> IPrimeAccount.GetAccount(string OptCode, ref int FlagCode)
        {

            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;

            //更新可视化界面
            SendReceiveString = string.Format("GetAccount:[次数：{0}][OptCode:{1}][FlagCode:{2}]", CallCount, OptCode, FlagCode);

            OutPut(SendReceiveString);

            List<PrimeAccount> MyPrimeAccountList = new List<PrimeAccount>();
            PrimeAccount MyPrimeAccount;

            MyPrimeAccount = new PrimeAccount();
            MyPrimeAccount.AccountID = "123456789011";
            MyPrimeAccount.LoginName = "ABCD李";
            MyPrimeAccount.PassWord = "123456";
            MyPrimeAccount.SexID = 10;//男人
            MyPrimeAccount.RegDate = System.DateTime.Now;
            MyPrimeAccount.HeadImage = new byte[10];
            MyPrimeAccount.HeadImage[0] = 0xFF;
            MyPrimeAccount.HeadImage[1] = 0xFF;
            MyPrimeAccount.HeadImage[3] = 0xFF;
            MyPrimeAccountList.Add(MyPrimeAccount);

            /*
            MyPrimeAccount = new PrimeAccount();
            MyPrimeAccount.AccountID = "123456789012";
            MyPrimeAccount.LoginName = "ABCD王";
            MyPrimeAccount.PassWord = "123456";
            MyPrimeAccount.SexID = 2;
            MyPrimeAccount.RegDate = System.DateTime.Now.AddMonths(4);
            MyPrimeAccount.HeadImage = new byte[10];
            MyPrimeAccount.HeadImage[0] = 0xFF;
            MyPrimeAccount.HeadImage[1] = 0xFF;
            MyPrimeAccount.HeadImage[3] = 0xFF;
            MyPrimeAccountList.Add(MyPrimeAccount);
            */


            FlagCode = 100;
            return MyPrimeAccountList;
        }


        string IPrimeAccount.SelectAccount(string OptCode, ref int FlagCode)
        {
            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;
            //更新可视化界面
            SendReceiveString = string.Format("SelectAccount:[次数：{0}][OptCode:{1}][FlagCode:{2}]", CallCount, OptCode, FlagCode);
            OutPut(SendReceiveString);

            AccountTest mAccountTest = MyTestListAccount.Find(
               delegate (AccountTest AccountUser)
                 {
                     return AccountUser.AccountID.Equals(OptCode);
                 });

            if (mAccountTest != null)
            {
                string ReturnStr = mAccountTest.TeleCode;
                FlagCode = 100;
                return ReturnStr;//成功

            }
            else
            {
                FlagCode = 200;
                return null;//失败

            }


        }

        int IPrimeAccount.SetAccount(PrimeAccount MyPrimeAccount, int FlagCode)
        {
            if (MyPrimeAccount == null)
            {

                OutPut("SetAccount Call: null Para  " + FlagCode.ToString());

                return 200;


            }

            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;

            //更新可视化界面
            SendReceiveString = string.Format("SetAccount:[次数：{0}][LoginName:{1}][PassWord:[{2}][AccountID:{3}]", CallCount, MyPrimeAccount.LoginName, MyPrimeAccount.PassWord, MyPrimeAccount.AccountID);
            OutPut(SendReceiveString);

            //SendReceiveString = string.Format("SetAccount:[出生日期：{0}][HeadImage:{1}][SexID:[{2}][OwnerName:{3}]",  MyPrimeAccount.BirthDate.ToString(), MyPrimeAccount.HeadImage.Length, MyPrimeAccount.SexID, MyPrimeAccount.OwnerName);
            //OutPut(SendReceiveString);



            return 100;
        }

        int IPrimeAccount.EditAccount(string AccountID, int FlagCode, string OptCode, string[] ParaArray)
        {

            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;
            SendReceiveString = string.Format("EditAccount:[次数：{0}][AccountID:{1}] [{2}] [{3}]", CallCount, AccountID, FlagCode, OptCode);
            OutPut(SendReceiveString);

            if (FlagCode == 10)
            {
                //传头像
                string HeadImageStr = OptCode.Substring(23);
                OutPut(HeadImageStr);

                if (!string.IsNullOrEmpty(HeadImageStr))
                {
                    byte[] HeadImageBytes = Convert.FromBase64String(HeadImageStr);
                    OutPut("Bytes：[" + HeadImageBytes.Length.ToString() + "] [0]:" + HeadImageBytes[0].ToString());
                }
            }
            if (FlagCode == 11)
            {
                //传手机号
                AccountTest mAccountTest = MyTestListAccount.Find(
                delegate (AccountTest AccountUser)
                 {

                     return AccountUser.LoginName.Equals(AccountID);

                 });
                if (mAccountTest != null) mAccountTest.TeleCode = OptCode;
                OutPut("手机号:" + OptCode);


            }

            if (ParaArray != null && ParaArray.Length > 0)
            {
                //测试数组传输
                OutPut("ParaArray[0]：" + ParaArray[0]);


            }


            //byte[] HeadImageBytes = Convert.FromBase64String(HeadImageStr);
            //OutPut("字节长度："+HeadImageBytes.Length.ToString());
            //OutPut(HeadImageBytes[0].ToString());
            //OutPut(HeadImageBytes[1].ToString());
            //OutPut(HeadImageBytes[2].ToString());

            return 100;
        }

        #endregion


        #region SmartDevice Members
        int ISmartDevice.CreateDevice(string DeviceUUID, string ManangerID, int FlagCode)
        {


            return 100;

        }


        int ISmartDevice.MadeDevice(string DeviceID, string ManangerID, int FlagCode)
        {


            return 100;

        }

        int ISmartDevice.SaleDevice(string DeviceID, string AgenFromID, int FlagCode)
        {


            return 100;

        }
        int ISmartDevice.BindingDevice(string DeviceID, string AccountID, int FlagCode)
        {

            
            int NewCallCount = Interlocked.Increment(ref CallCount);
            if(DeviceID.Length<13)
            {

                return 200;
            }
            string mDeviceID = DeviceID.Substring(0, 12);
            string mCarID= DeviceID.Substring(13);


            //更新列表
            if (UIContext != null && UpdateCallBind != null)
            {
                string str = AccountID+","+ mDeviceID+","+ mCarID;
                UIContext.Post(UpdateCallBind, str);
            }

            string SendReceiveString;
            SendReceiveString = string.Format("BindingDevice:[次数：{0}][DeviceID:{1}][AccountID:{2}]", CallCount, DeviceID, AccountID);
            OutPut(SendReceiveString);

            return 100;

        }


        int  ISmartDevice.GetDevice(string OptCode, int FlagCode, ref string DeviceSet)
        {

            DeviceSet= "ABCD,1234";
            return 100;// 

        }

        #endregion


        #region SmartWarn Members


        int ISmartWarn.SendSmartWarn(string SmartWarn, int FlagCode)
        {

            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;
            SendReceiveString = string.Format("SendSmartWarn:[次数：{0}][{1}][FlagCode:{2}]", CallCount, SmartWarn, FlagCode);
            OutPut(SendReceiveString);

            SmartAlarmTest NewSmartAlarmTest = new SmartAlarmTest();
            NewSmartAlarmTest.Timestamp = SmartWarn.Substring(0, 19);
            NewSmartAlarmTest.DefineID = SmartWarn.Substring(20, 2);
            NewSmartAlarmTest.DefineSum = GetDefineSum(int.Parse(NewSmartAlarmTest.DefineID));
            NewSmartAlarmTest.FlagID = "00";
            NewSmartAlarmTest.AccountID= SmartWarn.Substring(23, 12);

            MyListSmartAlarmTest.Add(NewSmartAlarmTest);


            //更新列表
            if (UIContext != null && UpdateCallSendAlarm != null)
            {
                string str = SmartWarn;
                UIContext.Post(UpdateCallSendAlarm, str);
            }

            return 100;
        }


        int ISmartWarn.PostListSmartWarn(string SmartWarnSet, ref int FlagCode)
        {

            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;
            SendReceiveString = string.Format("PostListSmartWarn:[次数：{0}][{1}][FlagCode:{2}]", CallCount, SmartWarnSet, FlagCode);
            OutPut(SendReceiveString);


            //更新列表
            if (UIContext != null && UpdateCallPostAlarm != null)
            {
                
                int t = 100 + FlagCode;
                string mListCount = t.ToString()+":";
                string str = mListCount+SmartWarnSet;
                UIContext.Post(UpdateCallPostAlarm, str);
            }

            int TempCode = FlagCode;
            if (SmartWarnSet != null)
            {
                if(SmartWarnSet.Length > 20)
                {
                    string SmartWarn, TempSmartWarn;
                    int SmartWarnIndex;
                    TempSmartWarn = SmartWarnSet;
                    SmartWarnIndex = TempSmartWarn.IndexOf("#");
                    while (SmartWarnIndex != -1)
                    {
                        SmartWarn = TempSmartWarn.Substring(0, SmartWarnIndex+1);
                        SmartAlarmTest NewSmartAlarmTest = new SmartAlarmTest();
                        NewSmartAlarmTest.Timestamp = SmartWarn.Substring(0, 19);
                        NewSmartAlarmTest.DefineID = SmartWarn.Substring(20, 2);
                        NewSmartAlarmTest.DefineSum = GetDefineSum(int.Parse(NewSmartAlarmTest.DefineID));
                        NewSmartAlarmTest.FlagID = "00";
                        NewSmartAlarmTest.AccountID = SmartWarn.Substring(23, 12);
                        MyListSmartAlarmTest.Add(NewSmartAlarmTest);
                        TempSmartWarn = TempSmartWarn.Substring(SmartWarnIndex + 1);
                        SmartWarnIndex = TempSmartWarn.IndexOf("#");

                    }                     

                    FlagCode = TempCode;
                    return 100;
                }
                else
                {
                    return 300;
                }
               
            }
            else
            {

                return 200;


            }


          
        }


        int ISmartWarn.GetSmartWarn(string OptCode, int FlagCode, ref string SmartWarnList)
        {
            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;
            SendReceiveString = string.Format("GetSmartWarn:[次数：{0}][OptCode:{1}][FlagCode:{2}]", CallCount, OptCode, FlagCode);
            OutPut(SendReceiveString);
            //SmartWarnList = "2015-12-10T12:24:10,DLD,10,00#2015-12-16T18:24:11,DLD,11,00#2015-12-25T23:21:11,DLF,12,00#";//3条经典模板记录【30个字节为一段】

            string mAccountID= OptCode;

            List<SmartAlarmTest> mSmartAlarmTestList = MyListSmartAlarmTest.FindAll(
             delegate (SmartAlarmTest mmSmartAlarmTest)
             {
                 return mmSmartAlarmTest.AccountID.Equals(mAccountID);
             });

            //排序输出:升序
            /*
            if (mSmartAlarmTestList != null && mSmartAlarmTestList.Count > 0)
            {
                SmartWarnList = "";
                //mSmartAlarmTestList.Sort()
                foreach (SmartAlarmTest mhSmartAlarmTest in mSmartAlarmTestList)
                {

                  SmartWarnList = SmartWarnList+mhSmartAlarmTest.Timestamp + "," + mhSmartAlarmTest.DefineSum + "," + mhSmartAlarmTest.DefineID + "," + mhSmartAlarmTest.FlagID+"#";

                }


             return 100;//成功

            }
            */

            //排序输出:降序
            if (mSmartAlarmTestList != null&& mSmartAlarmTestList.Count>0)
            {
                SmartWarnList = "";
                int mCount = mSmartAlarmTestList.Count;
                for (int i= mCount-1;i>-1;i--)
                {

                    SmartWarnList = SmartWarnList + mSmartAlarmTestList[i].Timestamp + "," + mSmartAlarmTestList[i].DefineSum + "," + mSmartAlarmTestList[i].DefineID + "," + mSmartAlarmTestList[i].FlagID + "#";

                }


                return 100;//成功

            }



            else
            {
                SmartWarnList = null;
                return 300;//无数据

            }
          
        }


        int ISmartWarn.TotalSmartWarn(string OptCode, int FlagCode, ref string TotalSmartWarn)
        {
            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;
            SendReceiveString = string.Format("TotalSmartWarn:[次数：{0}][OptCode:{1}][FlagCode:{2}]", CallCount, OptCode, FlagCode);
            OutPut(SendReceiveString);
            //两年经典模板记录【14个字节为一段】
            TotalSmartWarn = "2015,10,10088;2015,11,20008;2015,12,00099;2015,13,00030;2015,14,00021;2015,15,00018;2015,16,00020;2015,17,00012;";//2016,10,00010;2016,11,00020;2016,12,00009;2016,13,00030;2016,14,00021;2016,15,00008;2016,16,00020;2016,17,00012;";

            //基于闭包线程安全的集合查找
            string mAccountID = OptCode;
            List<SmartAlarmTest> mSmartAlarmTestList = MyListSmartAlarmTest.FindAll(
            delegate (SmartAlarmTest AnySmartAlarmTest)
            {
                return AnySmartAlarmTest.AccountID.Equals(mAccountID);
            });

            if (mSmartAlarmTestList != null)
            {
                string TempTotalSmartWarn = ""; ;
                for (int i=10;i<18;i++)
                {
                    string DefineID = i.ToString();

                    TempTotalSmartWarn = TempTotalSmartWarn + GetTotalSum(mSmartAlarmTestList, DefineID);
                   
                }
                TotalSmartWarn = TempTotalSmartWarn + TotalSmartWarn;

                return 100;//成功

            }
            else
            {
               
                return 300;//无数据

            }

           
        }

        #endregion


        #region CarRunState Members


        int ICarRunState.SendCarRunState(string CarRunState, int FlagCode)
        {

            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;
            SendReceiveString = string.Format("SendCarRunState:[次数：{0}][CarRunState:{1}][FlagCode:{2}]", CallCount, CarRunState, FlagCode);
            OutPut(SendReceiveString);


            //更新列表
            if (UIContext != null && UpdateCallSendRunState != null)
            {
                string str = CarRunState;
                UIContext.Post(UpdateCallSendRunState, str);
            }


            return 100;
        }


        int ICarRunState.PostListCarRunState(string CarRunStateSet, ref int FlagCode)
        {

            int NewCallCount = Interlocked.Increment(ref CallCount);
            string SendReceiveString;
            SendReceiveString = string.Format("PostListCarRunState:[次数：{0}][CarRunStateSet:{1}][FlagCode:{2}]", CallCount, CarRunStateSet, FlagCode);
            OutPut(SendReceiveString);


            //更新列表
            if (UIContext != null && UpdateCallPostRunState != null)
            {

                int t = 100 + FlagCode;
                string mListCount = t.ToString() + ":";
                string str = mListCount + CarRunStateSet;
                UIContext.Post(UpdateCallPostRunState, str);
            }


            FlagCode = 100;
            return 100;
        }


        int ICarRunState.GetCarRunState(string OptCode, int FlagCode, ref string CarRunStateList)
        {



            CarRunStateList = "ABCD,1234";
            return 100;
        }


        #endregion

        void OutPut(string SendReceiveString)
        {
            //if (UIContext != null && UpdateUIFunc != null)
            //UIContext.Post(UpdateUIFunc, NewCallCount);
            if (UIContext != null && UpdateUIFuncEx != null)
                UIContext.Post(UpdateUIFuncEx, SendReceiveString);

        }



        public static string GetDefineSum(int CodeID)
        {
            string DefineSum = "***";
            switch (CodeID)
            {
                case 10:
                    DefineSum = "DLD";
                    break;
                case 11:
                    DefineSum = "DLF";
                    break;
                case 12:
                    DefineSum = "DRD";
                    break;
                case 13:
                    DefineSum = "DRF";
                    break;
                case 14:
                    DefineSum = "CCH";
                    break;

                case 15:
                    DefineSum = "CCL";
                    break;
                case 16:
                    DefineSum = "CPH";
                    break;
                case 17:
                    DefineSum = "CPL";
                    break;
                default:
                    break;


            }
            return DefineSum;

        }

        public static string GetTotalSum(List<SmartAlarmTest> mSmartAlarmTestList, string DefineID)
        {
            string CountSum = "00000";
            int mCount=0;
            foreach (SmartAlarmTest mhSmartAlarmTest in mSmartAlarmTestList)
            {
                if(mhSmartAlarmTest.DefineID.Equals(DefineID))
                {
                  mCount++;
                }

            }
            CountSum= mCount.ToString().PadLeft(5, '0');

            string TotalSum = "2016," + DefineID + "," + CountSum + ";";
            return TotalSum;

        }

    }
}

