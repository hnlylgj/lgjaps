using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CloudServiceHostApp
{
    public class VisAgent
    {
        #region ------数据成员--------
        private string _EventCode;
        private string _EventResult;
        private string _EventDate;
        #endregion -------------------
        #region ------智能字段--------------------------

        public string EventCode
        {
            get
            {
                return _EventCode;
            }
            set
            {
                _EventCode = value;
            }
        }

        public string EventResult
        {
            get
            {
                return _EventResult;
            }
            set
            {
                _EventResult = value;
            }
        }
        
        public string EventDate
        {
            get
            {
                return _EventDate;
            }
            set
            {
                _EventDate = value;
            }
        }



        #endregion -----------------------------------------
    }
}
