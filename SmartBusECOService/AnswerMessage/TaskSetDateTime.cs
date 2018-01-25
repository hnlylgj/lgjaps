using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSetDateTime : Task
    {

        private System.DateTime time_to_setField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public System.DateTime time_to_set
        {
            get
            {
                return this.time_to_setField;
            }
            set
            {
                this.time_to_setField = value;
            }
        }
    }
}
