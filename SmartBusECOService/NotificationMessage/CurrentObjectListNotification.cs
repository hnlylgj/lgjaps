using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{
   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CurrentObjectListNotification : NotificationWithOSDState
    {

        private object[] itemsField;

      
        //[System.Xml.Serialization.XmlElementAttribute("binary_data", typeof(BinaryData))]
        //[System.Xml.Serialization.XmlElementAttribute("obj", typeof(CurrentObject))]
        [DataMember]
        public object[] Items
        {
            get
            {
                return this.itemsField;
            }
            set
            {
                this.itemsField = value;
            }
        }
    }


    // [System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CurrentObject : Object
    {

        private Coordinate_3D posField;

        private Coordinate_2D movField;

        [DataMember]
        public Coordinate_3D pos
        {
            get
            {
                return this.posField;
            }
            set
            {
                this.posField = value;
            }
        }

        [DataMember]
        public Coordinate_2D mov
        {
            get
            {
                return this.movField;
            }
            set
            {
                this.movField = value;
            }
        }
    }

}
