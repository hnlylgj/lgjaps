using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data;
using System.Data.Common;
using System.Data.SqlClient;

namespace HellaApcECOLib
{
    public class HellaServiceDriver
    {

        string ConnectionString;
        SqlConnection MySqlConnection;
        public HellaServiceDriver()
        {
            //ConnectionString = "Data Source=cloudlock.sqlserver.rds.aliyuncs.com,3433;Initial Catalog=cloudlock;Persist Security Info=True;User ID=lgj;Password=531202";
            this.ConnectionString = DBConfigHelp.ConnectionString;

        }
        public HellaServiceDriver(string InConnectionString)
        {
            this.ConnectionString = InConnectionString;
        }
        public HellaServiceDriver(SqlConnection InSqlConnection)
        {
            this.MySqlConnection = InSqlConnection;
        }
        public uint FindTask(string CounterID, ref string ExtraPara)
        {
            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            MySqlConnection.Open();
            //SqlConnection MySqlConnection = DBConfigHelp.MySqlConnection;

            string MyCommandText = "select TOP 1 TaskID from ApcTask where TaskID>0 AND CounterID='" + CounterID+"'"+ " ORDER BY TaskID DESC";
           
            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);

            SqlDataReader MySqlDataReader = MySqlCommand.ExecuteReader();

            int MyTaskID = 0;

            while (MySqlDataReader.Read())
            {

                MyTaskID = (int)MySqlDataReader["TaskID"];

            }

            MySqlDataReader.Close();
            MySqlConnection.Close();

            return (uint)MyTaskID;



        }

        public int UpdateCounter(string CounterID, string ExtraPara)
        {

            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            MySqlConnection.Open();
            string MyCommandText;

            if (ExtraPara.Equals("startup"))
            {
                MyCommandText = "update HellaApc set LastStartup=getdate() where CounterID='" + CounterID + "'";

            }
            if (ExtraPara.Equals("keepalive"))
            {
                MyCommandText = "update HellaApc set LastAlive=getdate() where CounterID='" + CounterID + "'";

            }
            else
            {
                MySqlConnection.Close();
                return -1;

            }
           
            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);
            int ReturnFlag = MySqlCommand.ExecuteNonQuery();





            MySqlConnection.Close();

            return ReturnFlag;



        }


        public uint UpdateGetCounter(string CounterID, ref string ExtraPara)
        {

            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            MySqlConnection.Open();

            string MyCommandText=null;
            int ReturnFlag = -1;

            //总共3步：1步 更新HellaApc-Table-时间戳

            if (ExtraPara.Equals("startup"))
            {
                MyCommandText = "update HellaApc set LastStartup=getdate() where CounterID='" + CounterID + "'";

            }
            if (ExtraPara.Equals("keepalive"))
            {
                MyCommandText = "update HellaApc set LastAlive=getdate() where CounterID='" + CounterID + "'";

            }

            if(MyCommandText!=null)
            {
                SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);
                ReturnFlag = MySqlCommand.ExecuteNonQuery();

                if (ReturnFlag != 1)
                {
                    return 0;
                }

                //总共3步：2步发现任务：ApcTask-Table-TaskID
                MyCommandText = "select TOP 1 TaskID from ApcTask where TaskID>0 AND CounterID='" + CounterID + "'" + " ORDER BY TaskID DESC";

                SqlCommand MySqlCommand2 = new SqlCommand(MyCommandText, MySqlConnection);
                SqlDataReader MySqlDataReader = MySqlCommand2.ExecuteReader();
                int MyTaskID = 0;
                while (MySqlDataReader.Read())
                {

                    MyTaskID = (int)MySqlDataReader["TaskID"];

                }
                MySqlDataReader.Close();

                //总共3步：3步 更新ApcTask-Table-心跳时间戳
                if (MyTaskID>10)
                {
                    MyCommandText = "update ApcTask set AliveDate=getdate() where TaskID=" + MyTaskID + " and CounterID='" + CounterID + "'";
                    SqlCommand MySqlCommand3 = new SqlCommand(MyCommandText, MySqlConnection);
                    ReturnFlag = MySqlCommand3.ExecuteNonQuery();
                }
              
                MySqlConnection.Close();
                return (uint)MyTaskID;
            }
           else
           {
                MySqlConnection.Close();
                return 0;

            }

          

        }


        public int UpdateCounting(string CounterID, uint TaskID, int Incoming, int Outgoing)
        {

            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            MySqlConnection.Open();

            string MyCommandText;
            int ReturnFlag = -1;

            //两步：1

            int mIncoming=0, mOutgoing=0;

            MyCommandText = "select TOP 1 TaskID,Incoming,Outgoing from ApcTask where TaskID=" + TaskID+" AND CounterID='" + CounterID + "'" + " ORDER BY TaskID DESC";

            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);

            SqlDataReader MySqlDataReader = MySqlCommand.ExecuteReader();

            int mTaskID = 0;

            while (MySqlDataReader.Read())
            {
                mTaskID =  (int)MySqlDataReader["TaskID"];
                mIncoming = (int)MySqlDataReader["Incoming"];
                mOutgoing = (int)MySqlDataReader["Outgoing"];

            }
            MySqlDataReader.Close();

            //两步：2
            if (mTaskID>0)
            {
                mIncoming = mIncoming + Incoming;
                mOutgoing = mOutgoing + Outgoing;

                MyCommandText = "update ApcTask set Incoming="+ mIncoming+",Outgoing="+ mOutgoing + ",LastDate=getdate() where TaskID=" + TaskID + " and CounterID ='" + CounterID + "'";
                MySqlCommand.CommandText = MyCommandText;
                ReturnFlag = MySqlCommand.ExecuteNonQuery();

            }

            
            MySqlConnection.Close();
            return ReturnFlag;



        }

        public int UpdateCountingEx(string CounterID, uint TaskID, int Incoming, int Outgoing)
        {

            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            MySqlConnection.Open();

            string MyCommandText;
            int ReturnFlag = -1;

            //两步：1

            int mIncoming = 0, mOutgoing = 0, mTaskFlag=0;
            int mTaskID = 0;

            MyCommandText = "select TOP 1 TaskID,Incoming,Outgoing,TaskFlag from ApcTask where  CounterID='" + CounterID + "'" + " ORDER BY TaskID DESC";

            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);

            SqlDataReader MySqlDataReader = MySqlCommand.ExecuteReader();
                   

            while (MySqlDataReader.Read())
            {
                mTaskID = (int)MySqlDataReader["TaskID"];
                mIncoming = (int)MySqlDataReader["Incoming"];
                mOutgoing = (int)MySqlDataReader["Outgoing"];
                mTaskFlag = (int)MySqlDataReader["TaskFlag"];

            }
            MySqlDataReader.Close();

            //两步：2
            if (mTaskID > 0)
            {


                if(mTaskID== TaskID)
                {
                    //-----相等---------------------------------------
                    mIncoming = mIncoming + Incoming;
                    mOutgoing = mOutgoing + Outgoing;
                    mTaskFlag = mTaskFlag + 1;

                    MyCommandText = "update ApcTask set Incoming=" + mIncoming + ",Outgoing=" + mOutgoing + ",TaskFlag=" + mTaskFlag + ",LastDate=getdate() where TaskID=" + TaskID + " and CounterID ='" + CounterID + "'";
                    MySqlCommand.CommandText = MyCommandText;
                    ReturnFlag = MySqlCommand.ExecuteNonQuery();

                    MySqlConnection.Close();
                    return 0;

                }
                else if(mTaskID > TaskID)
                {
                    //----一般是大于-------------------------------------
                    mIncoming = mIncoming + Incoming;
                    mOutgoing = mOutgoing + Outgoing;
                    mTaskFlag = mTaskFlag + 1;

                    MyCommandText = "update ApcTask set Incoming=" + mIncoming + ",Outgoing=" + mOutgoing + ",TaskFlag=" + mTaskFlag + ",AliveDate=getdate() where TaskID=" + mTaskID + " and CounterID ='" + CounterID + "'";
                    MySqlCommand.CommandText = MyCommandText;
                    ReturnFlag = MySqlCommand.ExecuteNonQuery();

                    MySqlConnection.Close();
                    return mTaskID;//服务端任务改变


                }
                else
                {
                    MySqlConnection.Close();
                    return 0;
                }

            }
            else
            {
                MySqlConnection.Close();
                return 0;
            }


           



        }

        public int GetLastCounting(string CounterID, uint TaskID, ref int Incoming, ref int Outgoing)
        {

            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
            MySqlConnection.Open();

            string MyCommandText;
            int mIncoming = 0, mOutgoing = 0;
            if(TaskID==0)
            {
                MyCommandText = "select TOP 1 TaskID,Incoming,Outgoing from ApcTask where CounterID='" + CounterID + "'" + " ORDER BY TaskID DESC";

            }
            else
            {
                MyCommandText = "select TOP 1 TaskID,Incoming,Outgoing from ApcTask where TaskID=" + TaskID + " AND CounterID='" + CounterID + "'" + " ORDER BY TaskID DESC";

            }

            SqlCommand MySqlCommand = new SqlCommand(MyCommandText, MySqlConnection);

            SqlDataReader MySqlDataReader = MySqlCommand.ExecuteReader();

            int mTaskID = 0;

            while (MySqlDataReader.Read())
            {
                mTaskID = (int)MySqlDataReader["TaskID"];
                mIncoming = (int)MySqlDataReader["Incoming"];
                mOutgoing = (int)MySqlDataReader["Outgoing"];

            }
            MySqlDataReader.Close();     
            MySqlConnection.Close();


            Incoming = mIncoming;
            Outgoing = mOutgoing;
            return mTaskID;



        }
        
        public int InsertNewTask(string CounterID, string OrderID,ref uint TaskID)
        {

            SqlConnection MySqlConnection = new SqlConnection(ConnectionString);
           
            int ReturnValue = -1;
            int mTaskID = 0;

            SqlCommand MySqlCommand = new SqlCommand("AddApcTaskOfOrder", MySqlConnection);
            MySqlCommand.CommandType = CommandType.StoredProcedure;

            SqlParameter parm = new SqlParameter();
            parm.ParameterName = "@CounterID";
            parm.Value = CounterID;
            MySqlCommand.Parameters.Add(parm);

            parm = new SqlParameter();
            parm.ParameterName = "@OrderID";
            parm.Value = OrderID;
            MySqlCommand.Parameters.Add(parm);

            MySqlCommand.Parameters.Add(new SqlParameter("@ReturnValue", SqlDbType.Int));
            MySqlCommand.Parameters["@ReturnValue"].Direction = ParameterDirection.Output;
            MySqlCommand.Parameters.Add(new SqlParameter("@ReturnTaskID", SqlDbType.Int));
            MySqlCommand.Parameters["@ReturnTaskID"].Direction = ParameterDirection.Output;

            MySqlConnection.Open();
            MySqlCommand.ExecuteNonQuery();
            ReturnValue = (int)MySqlCommand.Parameters["@ReturnValue"].Value;
            mTaskID = (int)MySqlCommand.Parameters["@ReturnTaskID"].Value;


            MySqlConnection.Close();
            TaskID = (uint)mTaskID;
            return ReturnValue;



        }


    }
}
