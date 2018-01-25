using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.ServiceModel;

namespace SmartBusECOService
{

    [ServiceContract(Name = "SmartDevice", Namespace = "http://www.vispect.com/")]
    public interface ISmartDevice
    {
        [OperationContract]
        int CreateDevice(string DeviceUUID, string ManangerID, int FlagCode);

        [OperationContract]
        int MadeDevice(string DeviceID, string ManangerID, int FlagCode);

        [OperationContract]
        int SaleDevice(string DeviceID, string AgenFromID, int FlagCode);
        
        [OperationContract]
        int BindingDevice(string DeviceID, string AccountID, int FlagCode);

        [OperationContract]
        int GetDevice(string OptCode, int FlagCode,ref string DeviceSet);


    }
}
