using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.ServiceModel;

namespace SmartBusECOService
{

    [ServiceContract(Name = "SmartWarn", Namespace = "http://www.vispect.com/")]
    public interface ISmartWarn
    {

        [OperationContract]
        int SendSmartWarn(string SmartWarn, int FlagCode);

        [OperationContract]
        int PostListSmartWarn(string SmartWarnSet, ref int FlagCode);

        [OperationContract]
        int GetSmartWarn(string OptCode, int FlagCode, ref string SmartWarnList);


        [OperationContract]
        int TotalSmartWarn(string OptCode, int FlagCode, ref string TotalSmartWarn);



    }
}
