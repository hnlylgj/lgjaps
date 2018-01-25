using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.ServiceModel;
using System.Xml.Serialization;
using SmartBusECOService.NotificationMessage;
using SmartBusECOService.AnswerMessage;

namespace SmartBusECOService
{
    
    [ServiceContract(Name="HellaAPCECOSOAPdService", Namespace="http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/")]
    public interface IHellaAPCECO
    {
        /*

        [OperationContract(Action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest")]
        AnswerContainer Notification( NotificationContainer notification_message);

        [OperationContract(Action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/ErrorRequest")]
        TaskContainer Error(ErrorContainer error_message);
        */
        /*
       [OperationContract(Action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/NotificationRequest")]
       [ServiceKnownType(typeof(AliveNotification))]
       [ServiceKnownType(typeof(CameraImagesNotification))]
       [ServiceKnownType(typeof(ClearZoneNotification))]
       [ServiceKnownType(typeof(CountChannelsNotification))]
       [ServiceKnownType(typeof(CountNotification))]
       [ServiceKnownType(typeof(CurrentObjectListNotification))]
       [ServiceKnownType(typeof(DigitalInputNotification))]
       [ServiceKnownType(typeof(ErrorLogfilesNotification))]
       [ServiceKnownType(typeof(FeatureInfoNotification))]
       [ServiceKnownType(typeof(FillNotification))]
       [ServiceKnownType(typeof(HistoricObjectListNotification))]
       [ServiceKnownType(typeof(LogfilesNotification))]
       [ServiceKnownType(typeof(ParameterNotification))]
       [ServiceKnownType(typeof(StartupNotification))]
       [ServiceKnownType(typeof(ZoneChannelsNotification))]
       AnswerContainer Notification(NotificationBase notification_message);



       [OperationContract(Action = "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/ErrorRequest")]
       TaskContainer Error(ErrorContainer error_message);
        */




    }
}
