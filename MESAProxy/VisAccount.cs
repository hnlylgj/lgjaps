using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CloudServiceHostApp
{
    public class VisAccount
    {
        #region ------数据成员------------------------------------
        private string _AccountID;
        private string _LoginName;
        private string _PassWord;
        private string _CreateDate;
        private string _MobileID;

        private int _Login;
        private string _DeviceID;
        private string _CarID;

        #endregion -----------------------------------------

        #region ------智能字段--------------------------

        public string AccountID
        {
            get
            {
                return _AccountID;
            }
            set
            {
                _AccountID = value;
            }
        }

        public string MobileID
        {
            get
            {
                return _MobileID;
            }
            set
            {
                _MobileID = value;
            }
        }


        public string CarID
        {
            get
            {
                return _CarID;
            }
            set
            {
                _CarID = value;
            }
        }

        public string DeviceID
        {
            get
            {
                return _DeviceID;
            }
            set
            {
                _DeviceID = value;
            }
        }

        public string LoginName
        {
            get
            {
                return _LoginName;
            }
            set
            {
                _LoginName = value;
            }
        }
        public string PassWord
        {
            get
            {
                return _PassWord;
            }
            set
            {
                _PassWord = value;
            }
        }

        public string CreateDate
        {
            get
            {
                return _CreateDate;
            }
            set
            {
                _CreateDate = value;
            }
        }


        public int Login
        {
            get
            {
                return _Login;
            }
            set
            {
                _Login = value;
            }
        }


        #endregion -----------------------------------------

        public VisAccount()
        {
            //this._CreateDate = DateTime.Now.ToString() + "." + DateTime.Now.Millisecond.ToString();
            //ToLocalTime().
            string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now) + "." + string.Format("{0:D3}", DateTime.Now.Millisecond);
            this._CreateDate = MyTimeMarkerStr;
        }

        public VisAccount(string account, string loginame, string password,string mobileid,string deviceid,string carid,int login)
        {
            this.AccountID = account;
            this.LoginName = loginame;
            this.PassWord = password;
            this.MobileID = mobileid;
            string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now) + "." + string.Format("{0:D3}", DateTime.Now.Millisecond);
            this._CreateDate = MyTimeMarkerStr;
            this.DeviceID = deviceid;
            this.CarID = carid;
            this.Login = login;
        }
        public VisAccount(string account)
        {
            this.AccountID = account;
            this.LoginName = "壮志林云";
            this.PassWord = "123456";
            this.MobileID = "1234567889012345";
            string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now) + "." + string.Format("{0:D3}", DateTime.Now.Millisecond);
            this.CreateDate = MyTimeMarkerStr;
            this.DeviceID = "123456789012";
            this.CarID = "粤A12345678";
            this.Login = 100;
        }
    }
}
