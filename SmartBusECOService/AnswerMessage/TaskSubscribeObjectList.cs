using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeObjectList : TaskSubscribeTriggered
    {

        private TransferType transfer_typeField;

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public TransferType transfer_type
        {
            get
            {
                return this.transfer_typeField;
            }
            set
            {
                this.transfer_typeField = value;
            }
        }
    }

  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum TransferType
    {

        /// <remarks/>
        TRANSFER_INLINE,

        /// <remarks/>
        TRANSFER_BINARY,
    }
}
