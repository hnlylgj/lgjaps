using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
  
    [DataContract(Name= "answer_message", Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
       
    public partial class AnswerContainer : TaskContainer
    {

        private uint referenced_notification_IDField;

        private SOAP_ServerError server_response_typeField;

        private decimal versionField;

        private bool versionFieldSpecified;

        public AnswerContainer()
        {
            this.versionField = ((decimal)(1.0m));
        }


        [DataMember]
        public uint referenced_notification_ID
        {
            get
            {
                return this.referenced_notification_IDField;
            }
            set
            {
                this.referenced_notification_IDField = value;
            }
        }


        [DataMember]
        public SOAP_ServerError server_response_type
        {
            get
            {
                return this.server_response_typeField;
            }
            set
            {
                this.server_response_typeField = value;
            }
        }


        [DataMember]
        public decimal version
        {
            get
            {
                return this.versionField;
            }
            set
            {
                this.versionField = value;
            }
        }

        [DataMember]
        public bool versionSpecified
        {
            get
            {
                return this.versionFieldSpecified;
            }
            set
            {
                this.versionFieldSpecified = value;
            }
        }
    }

   
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum SOAP_ServerError
    {

        /// <remarks/>
        SOAP_SERVER_OK,

        /// <remarks/>
        SOAP_ERROR_UNKNOWN_RESPONSE,

        /// <remarks/>
        SOAP_ERROR_UNKNOWN_MESSAGE,

        /// <remarks/>
        SOAP_ERROR_UNKNOWN_DEVICE,
    }
}
