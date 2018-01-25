using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;
namespace SmartBusECOService.AnswerMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CurrentObjectListEvent
    {

        private uint skipField;

        public CurrentObjectListEvent()
        {
            this.skipField = ((uint)(0));
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        // [System.ComponentModel.DefaultValueAttribute(typeof(uint), "0")]
        [DataMember]
        public uint skip
        {
            get
            {
                return this.skipField;
            }
            set
            {
                this.skipField = value;
            }
        }
    }

}
