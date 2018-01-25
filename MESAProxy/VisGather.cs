using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CloudServiceHostApp
{
    public class VisGather
    {
        #region ------数据成员------------------------------
        private string _FlowID;
        private string _TypeID;
        private string _FlagID;
        private string _AccountID;
        private string _InforStr;
        private string _CreateDate;
        #endregion -----------------------------------------
        #region ------智能字段--------------------------

        public string FlowID
        {
            get
            {
                return _FlowID;
            }
            set
            {
                _FlowID = value;
            }
        }

        public string TypeID
        {
            get
            {
                return _TypeID;
            }
            set
            {
                _TypeID = value;
            }
        }

        public string FlagID
        {
            get
            {
                return _FlagID;
            }
            set
            {
                _FlagID = value;
            }
        }

        public string InforStr
        {
            get
            {
                return _InforStr;
            }
            set
            {
                _InforStr = value;
            }
        }
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



        #endregion -----------------------------------------

        public VisGather()
        {

            this.FlowID = "0";
            this.TypeID = "0";
            this.FlagID = "0";
            string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now) + "." + string.Format("{0:D3}", DateTime.Now.Millisecond);
            this._CreateDate = MyTimeMarkerStr;
        }
        public VisGather(string FlowID)
        {

            this.FlowID = FlowID;
            this.TypeID = "10";
            this.FlagID = "100";
            this.AccountID = "123456789021";
            string MyTimeMarkerStr = string.Format("{0:yyyy-MM-dd HH:mm:ss}", DateTime.Now) + "." + string.Format("{0:D3}", DateTime.Now.Millisecond);
            this._CreateDate = MyTimeMarkerStr;
            this.InforStr = "12235465789000000000000000";
        }

    }
}
