using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.ServiceModel;
using SmartBusBaseLib;

namespace SmartBusECOService
{

    [ServiceContract(Name = "PrimeAccount", Namespace ="http://www.vispect.com/")]
    public  interface IPrimeAccount
    {
        [OperationContract]
        int RegisterAccount(string LoginName, string PassWord, ref string AccountID);

        [OperationContract]
        int UpdatePassWord(string LoginName, string PassWord, string AccountID);

        [OperationContract]
        int LoginCloud(string LoginName, string PassWord, ref string AccountID);

        [OperationContract]
        List<PrimeAccount> GetAccount(string OptCode, ref int FlagCode);

        [OperationContract]
        string SelectAccount(string OptCode, ref int FlagCode);

        [OperationContract]
        int SetAccount(PrimeAccount MyPrimeAccount, int  FlagCode);

        [OperationContract]
        int EditAccount(string AccountID, int FlagCode, string OptCode, string[] ParaArray);

    }
}
