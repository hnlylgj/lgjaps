using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HellaApcECOLib
{
    public class HellaAPCECOMannager : IHellaAPCECOMannager
    {
        #region Counter Members
         uint IHellaAPCECOMannager.UpdateFindTask(string CounterID, ref string ExtraPara)
        {

            HellaServiceDriver MyHellaServiceDriver = new HellaServiceDriver();
            //MyTaskMannager.UpdateCounter(CounterID, ExtraPara);
            uint mTaskID = MyHellaServiceDriver.UpdateGetCounter(CounterID, ref ExtraPara);
            return mTaskID;

        }

         int IHellaAPCECOMannager.UpdateCounting(string CounterID, uint TaskID, int Incoming, int Outgoing)
        {

            HellaServiceDriver MyHellaServiceDriver = new HellaServiceDriver();
            return MyHellaServiceDriver.UpdateCountingEx(CounterID, TaskID, Incoming, Outgoing);

            //return 1000; 

        }


        #endregion
    }




}
