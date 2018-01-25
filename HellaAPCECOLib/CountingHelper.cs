using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace HellaApcECOLib
{
    public class CountingHelper
    {
        private string mCounterID;
        private uint mTaskID;
        private int mIncoming;
        private int mOutgoing;

        public CountingHelper(string CounterID, uint TaskID, int Incoming, int Outgoing)
        {

            mCounterID = CounterID; mTaskID = TaskID; mIncoming = Incoming; mOutgoing = Outgoing;
        }

        static public int DoUpdateWork(IHellaAPCECOMannager InIHellaAPCECOMannager, CountingHelper MyFuncHelper)
        {
           return InIHellaAPCECOMannager.UpdateCounting(MyFuncHelper.mCounterID, MyFuncHelper.mTaskID, MyFuncHelper.mIncoming, MyFuncHelper.mOutgoing);
        }

    }
}
