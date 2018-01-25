using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.Serialization;

namespace SmartBusBaseLib
{
    [DataContract(Namespace = "http://www.vispect.com/SmartCarBaseLib/", Name = "PrimeAccount")]
    public class PrimeAccount
    {
        #region ------数据成员-------------------------------------------------------------------

        private string _AccountID;
        private string _OwnerName;
        private string _LoginName;
        private string _PassWord;
        private string _MobileID;
        private string _PersonID;
        private string _TeleCode;
        private string _EMail;
        private string _Address;
        private DateTime _BirthDate;
        private int _SexID;
        private string _NickName;
        private DateTime _RegDate;
        private DateTime _LastDate;
        private int _ActivityLess;
        private byte[] _HeadImage;
        private string _Job;
        private string _Signature;

        #endregion ------------------------------------------------------------------------------

        #region ------智能字段-------------------------------------------------------------------

        [DataMember]
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
        [DataMember]
        public string OwnerName
        {
            get
            {
                return _OwnerName;
            }
            set
            {
                _OwnerName = value;
            }
        }

        [DataMember]
        public string Signature
        {
            get
            {
                return _Signature;
            }
            set
            {
                _Signature = value;
            }
        }

        [DataMember]
        public string Job
        {
            get
            {
                return _Job;
            }
            set
            {
                _Job = value;
            }
        }

        [DataMember]
        public byte[] HeadImage
        {
            get
            {
                return _HeadImage;
            }
            set
            {
                _HeadImage = value;
            }
        }

        [DataMember]
        public string NickName
        {
            get
            {
                return _NickName;
            }
            set
            {
                _NickName = value;
            }
        }

        [DataMember]
        public int SexID
        {
            get
            {
                return _SexID;
            }
            set
            {
                _SexID = value;
            }
        }

        [DataMember]
        public int ActivityLess
        {
            get
            {
                return _ActivityLess;
            }
            set
            {
                _ActivityLess = value;
            }
        }

        [DataMember]
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

        [DataMember]
        public string PassWord
        {
            get
            {
                return _PassWord; ;
            }
            set
            {
                _PassWord = value;
            }
        }


        [DataMember]
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


        public string GetRegDate
        {
            get
            {
                return string.Format("{0:yyyy-MM-dd HH:mm:ss}", _RegDate);
            }

        }


        public string GetLastDate
        {
            get
            {
                return string.Format("{0:yyyy-MM-dd HH:mm:ss}", _LastDate);
            }

        }


        [DataMember]
        public DateTime RegDate
        {
            get
            {
                return _RegDate;
            }
            set
            {
                _RegDate = value;
            }
        }
        [DataMember]
        public DateTime BirthDate
        {
            get
            {
                return _BirthDate;
            }
            set
            {
                _BirthDate = value;
            }
        }
        [DataMember]
        public DateTime LastDate
        {
            get
            {
                return _LastDate;
            }
            set
            {
                _LastDate = value;
            }
        }
        [DataMember]
        public string PersonID
        {
            get
            {
                return _PersonID;
            }
            set
            {
                _PersonID = value;
            }
        }
        [DataMember]
        public string TeleCode
        {
            get
            {
                return _TeleCode;
            }
            set
            {
                _TeleCode = value;
            }
        }
        [DataMember]
        public string EMail
        {
            get
            {
                return _EMail;
            }
            set
            {
                _EMail = value;
            }
        }
        [DataMember]
        public string Address
        {
            get
            {
                return _Address;
            }
            set
            {
                _Address = value;
            }
        }
        #endregion ------------------------------------------------------------------------------


    }
}
