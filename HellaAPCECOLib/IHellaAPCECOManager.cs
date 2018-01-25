using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HellaApcECOLib
{
    public interface IHellaAPCECOMannager
    {
        uint UpdateFindTask(string CounterID, ref string ExtraPara);

        int UpdateCounting(string CounterID, uint TaskID, int Incoming,int Outgoing);

    }
}
