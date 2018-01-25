using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Configuration;
using System.Data;
using System.Data.Common;
using System.Data.SqlClient;

namespace HellaApcECOLib
{
    public class DBConfigHelp
    {
        public static string ConnectionString;
        public static SqlConnection MySqlConnection;
        //public static string ServiceBusServerIP;
        //public static string ServiceBusServerPort;
        static DBConfigHelp()
        {
            //ConnectionString = "Data Source=cloudlock.sqlserver.rds.aliyuncs.com,3433;Initial Catalog=cloudlock;Persist Security Info=True;User ID=lgj;Password=531202";
            ConnectionStringSettings SmartBusConnectString = ConfigurationManager.ConnectionStrings["SmartBusConnectString"];
            if(SmartBusConnectString==null)
            {
                //ConnectionString = "Data Source=.\\sqlexpress;Initial Catalog=SmartBus;Persist Security Info=True;User ID=sa;Password=123456";
            }
            else
            {
                ConnectionString = SmartBusConnectString.ConnectionString;
                if (ConnectionString == null)
                {
                    //ConnectionString = "Data Source=.\\sqlexpress;Initial Catalog=SmartBus;Persist Security Info=True;User ID=sa;Password=123456";
                }
            }

            //-----------------------------------------------------------------------------------

            //ConnectionString = "Data Source=.\sqlexpress;Initial Catalog=CloudLock;Persist Security Info=True;User ID=sa;Password=123456";
            //MySqlConnection = new SqlConnection(ConnectionString);
            //MySqlConnection.Open();
            //1.打开配置文件,获取相应的appSettings配置节
            //ServiceBusServerIP = ConfigurationManager.AppSettings["ServiceBusServerIP"];
            //ServiceBusServerPort = ConfigurationManager.AppSettings["ServiceBusServerPort"];

        }

        public static void Close()
        {
            if (MySqlConnection != null)
            {
                if (MySqlConnection.State == ConnectionState.Open)
                    MySqlConnection.Close();


            }

        }


    }

}
