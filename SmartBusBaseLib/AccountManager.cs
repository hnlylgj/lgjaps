using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Data;
using System.Data.Common;
using System.Data.SqlClient;
namespace SmartBusBaseLib
{
    public class AccountManager
    {

        private string ConnectionString;


        public AccountManager()
        {
            ConnectionString = HelpTool.ConnectionString;
        }
      
        public List<PrimeAccount> LoadAllAccount()
        {
            return null;

            /*
          int nCount = 1;
          string NameStr="王大山";
          while (nCount<11)
          {
              string NewNameStr=NameStr+nCount.ToString(); 
              string NewKeyStr="123456";
              LockKey OneLockKey = new LockKey(nCount,NewNameStr,NewKeyStr);
              MyAllLockKey.Add(OneLockKey);
              nCount++;

          }

          return MyAllLockKey;
          */


           //-2.-------------------------------------------------------
            /*
            List<LockKey> MyAllLockKey = new List<LockKey>();
            string ConnectionString = "Server=VMXPSP3_LGJ;database=CloudLock;uid=sa;pwd=123456";
            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            
            string commandText = "select * from LockKey where LockID='89765432BCDA820'";

            SqlCommand MySqlCommand = new SqlCommand(commandText, MySqlConnection);

            MySqlConnection.Open();

            SqlDataReader MySqlDataReader = MySqlCommand.ExecuteReader();

            while (MySqlDataReader.Read())
            {

                LockKey AnyLockKey = new LockKey();

                AnyLockKey.LockKeyID = (int)MySqlDataReader["Number"];

                AnyLockKey.OwerName = (string)MySqlDataReader["Name"];

                AnyLockKey.CreateTime = (DateTime)MySqlDataReader["Date"];

                AnyLockKey.KeyString = (string)MySqlDataReader["KeyStr"];
                
                MyAllLockKey.Add(AnyLockKey);

            }

            MySqlDataReader.Close();

            MySqlConnection.Close();

            return MyAllLockKey;
          */


        }
        //--------------------------------------------------------------
        public PrimeAccount FindAccount(string InLoginName)
        {


            //再完善...
            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);

            string MyCommandText = "select * from PrimeAccount where LoginName='" + InLoginName + "'";

            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);

            MySqlConnection.Open();

            SqlDataReader MySqlDataReader = MySqlCommand.ExecuteReader();

            PrimeAccount AnyPrimeAccount = null;

            while (MySqlDataReader.Read())
            {

                AnyPrimeAccount = new PrimeAccount();

                //AnyCustomer.CustomerID = (int)MySqlDataReader["CustomerID"];
                //AnyCustomer.CustomerName = (string)MySqlDataReader["CustomerName"];
                //AnyCustomer.LoginName = (string)MySqlDataReader["LoginName"];
                //AnyCustomer.Password = (string)MySqlDataReader["Password "];
                //AnyCustomer.MobileID = (string)MySqlDataReader["MobileID"];
                //AnyCustomer.CreateTime = (DateTime)MySqlDataReader["CreateTime"];


            }

            MySqlDataReader.Close();

            MySqlConnection.Close();

            return AnyPrimeAccount;

        }

        public int UpdateAccount(PrimeAccount MyAccount)
        {
            //再完善...
            int MyReturnCode = 1;
            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            string MyCommandText = "UPDATE PrimeAccount set PassWord = @PassWord where AccountID = @AccountID";
            //SqlCommand updatecmd = new SqlCommand("UPDATE Products set ProductName=@ProductName,CategoryID=@CategoryID,Price=@Price,InStore=@InStore,Description=@Description where ProductID=@ProductID", conn);


            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);
            MySqlCommand.Parameters.Add(new SqlParameter("@AccountID", MyAccount.AccountID));
            MySqlCommand.Parameters.Add(new SqlParameter("@PassWord", MyAccount.PassWord));




            MySqlConnection.Open();
            if (MySqlCommand.ExecuteNonQuery() > 0) MyReturnCode = 0;//成功返回：0，否则返回：1
            MySqlConnection.Close();

            return MyReturnCode;

        }

        //-----------------------------------------------------------
        public int InsertAccount(PrimeAccount MyAccount, ref string NewAccountID)
        {
            //注册账号函数
            int MyReturnCode=1;
            if (string.IsNullOrEmpty(MyAccount.LoginName)) return MyReturnCode = 1;//登录名为空
            if (string.IsNullOrEmpty(MyAccount.PassWord)) return MyReturnCode = 2;//密码为空
            if (CheckPrimeAccount(MyAccount.LoginName) != null) return MyReturnCode =3;//重复注册

            NewAccountID = GetMobileID();
            MyAccount.AccountID = NewAccountID;

            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
        
            string MyCommandText = "insert into PrimeAccount (AccountID,LoginName, PassWord) values (@AccountID,@LoginName, @PassWord)";
         
             SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);
      
            MySqlCommand.Parameters.Add(new SqlParameter("@AccountID", MyAccount.AccountID));
            MySqlCommand.Parameters.Add(new SqlParameter("@LoginName", MyAccount.LoginName));
            MySqlCommand.Parameters.Add(new SqlParameter("@PassWord", MyAccount.PassWord));

                 
            MySqlConnection.Open();
            if (MySqlCommand.ExecuteNonQuery() > 0) MyReturnCode = 0;//插成功返回：0，否则返回：1
                   
            MySqlConnection.Close();

            return MyReturnCode;

        }

        public int LoginUserCHK(string InLoginName,string PassWord, string InAccountID)
        {
            int MyReturnCode = 1;
            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            string MyCommandText = "select * from PrimeAccount where LoginName=@LoginName and PassWord=@PassWord";
            //string MyCommandText = "select * from PrimeAccount where LoginName='" + InLoginName + "'";
        
            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);
            MySqlCommand.Parameters.Add(new SqlParameter("@LoginName", InLoginName));
            MySqlCommand.Parameters.Add(new SqlParameter("@PassWord", PassWord));

            MySqlConnection.Open();
            //int i=MyReturnCode = MySqlCommand.ExecuteNonQuery();
            //if (MySqlCommand.ExecuteNonQuery() > 0) MyReturnCode = 0;//成功返回：0，否则返回：1

            SqlDataReader MySqlDataReader = MySqlCommand.ExecuteReader();
         
            while (MySqlDataReader.Read())
            {

                
                MyReturnCode = 0;
                break;

            }
            MySqlDataReader.Close();
            MySqlConnection.Close();

            return MyReturnCode;

        }

        private string GetMobileID()
        {
            CreateMobileID MyCreateMobileID = new CreateMobileID();
            return MyCreateMobileID.GetMobileIDNumberCode12();

        }

        private PrimeAccount CheckPrimeAccount(string InLoginName)
        {

            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            string MyCommandText = "select * from PrimeAccount where LoginName='" + InLoginName + "'";
            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);

            MySqlConnection.Open();
            SqlDataReader MySqlDataReader = MySqlCommand.ExecuteReader();

            PrimeAccount AnyPrimeAccount= null;
            while (MySqlDataReader.Read())
            {

                AnyPrimeAccount = new PrimeAccount();
                //AnyPrimeAccount.AccountID = (string)MySqlDataReader["AccountID"];
                //AnyPrimeAccount.LoginName = (string)MySqlDataReader["LoginName"];
                break;
             
            }
            MySqlDataReader.Close();

            MySqlConnection.Close();
            return AnyPrimeAccount;

        }

        //----------------------------------------------------------
        public int UpdateAccountPWD(PrimeAccount MyAccount)
        {

            int MyReturnCode = 1;
            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            string MyCommandText = "UPDATE PrimeAccount set PassWord = @PassWord where AccountID = @AccountID";
            //SqlCommand updatecmd = new SqlCommand("UPDATE Products set ProductName=@ProductName,CategoryID=@CategoryID,Price=@Price,InStore=@InStore,Description=@Description where ProductID=@ProductID", conn);


            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);
            MySqlCommand.Parameters.Add(new SqlParameter("@AccountID", MyAccount.AccountID));
            MySqlCommand.Parameters.Add(new SqlParameter("@PassWord", MyAccount.PassWord));

            MySqlConnection.Open();         
            if (MySqlCommand.ExecuteNonQuery() > 0) MyReturnCode = 0;//成功返回：0，否则返回：1
            MySqlConnection.Close();

            return MyReturnCode;

        }



    }
}
