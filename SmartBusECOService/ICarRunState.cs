using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.ServiceModel;

namespace SmartBusECOService
{
    [ServiceContract(Name = "CarRunState", Namespace = "http://www.vispect.com/")]
    public interface ICarRunState
    {

        [OperationContract]
        int SendCarRunState(string CarRunState, int FlagCode);

        [OperationContract]
        int PostListCarRunState(string CarRunStateSet, ref int FlagCode);

        [OperationContract]
        int  GetCarRunState(string OptCode, int FlagCode,ref string CarRunStateList);


    }
}
