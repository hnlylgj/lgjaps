using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    public partial class ErrorLogfilesNotification : ExtendedNotificationBase
    {

        private BinaryData error_log_dataField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public BinaryData error_log_data
        {
            get
            {
                return this.error_log_dataField;
            }
            set
            {
                this.error_log_dataField = value;
            }
        }
    }
}
