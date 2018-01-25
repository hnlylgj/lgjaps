using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ParameterNotification : NotificationBase
    {

        private BinaryData parameter_dataField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public BinaryData parameter_data
        {
            get
            {
                return this.parameter_dataField;
            }
            set
            {
                this.parameter_dataField = value;
            }
        }
    }

}
