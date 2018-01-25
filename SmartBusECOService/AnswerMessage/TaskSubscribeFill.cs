﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{
   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TaskSubscribeFill : TaskSubscribeTriggeredSafe
    {

        private FillRegionID fill_region_idField;
        
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public FillRegionID fill_region_id
        {
            get
            {
                return this.fill_region_idField;
            }
            set
            {
                this.fill_region_idField = value;
            }
        }
    }

   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class FillRegionID
    {

        private string idField;

       
        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public string id
        {
            get
            {
                return this.idField;
            }
            set
            {
                this.idField = value;
            }
        }
    }
}
