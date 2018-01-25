using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace HellaApcECOLib
{
    public class HellaApcHelper
    {
        private string mCounterID;
        private string mExtraPara;

        public HellaApcHelper(string CounterID, string ExtraPara)
        {

            mCounterID = CounterID; mExtraPara= ExtraPara;
        }


        public static uint DoUpdateWork(IHellaAPCECOMannager InIHellaAPCECOCounter, HellaApcHelper MyHellaApcMannager)
        {
            return InIHellaAPCECOCounter.UpdateFindTask(MyHellaApcMannager.mCounterID, ref MyHellaApcMannager.mExtraPara);
        }
    }
}
