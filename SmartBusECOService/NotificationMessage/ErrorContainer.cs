using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ErrorContainer : ExtendedNotificationBase
    {

        private SOAP_DeviceError error_reasonField;

        private string error_textField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public SOAP_DeviceError error_reason
        {
            get
            {
                return this.error_reasonField;
            }
            set
            {
                this.error_reasonField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string error_text
        {
            get
            {
                return this.error_textField;
            }
            set
            {
                this.error_textField = value;
            }
        }
    }


    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum SOAP_DeviceError
    {

        /// <remarks/>
        SOAP_DEVICE_OK,

        /// <remarks/>
        SOAP_ERROR_UNKNOWN_TASK,

        /// <remarks/>
        SOAP_ERROR_UNKNOWN_PARAM,

        /// <remarks/>
        SOAP_ERROR_OUT_OF_RESSOURCES,
    }
}
