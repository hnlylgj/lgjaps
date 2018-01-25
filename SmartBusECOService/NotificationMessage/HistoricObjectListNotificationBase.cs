using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;
namespace SmartBusECOService.NotificationMessage
{
    
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    public partial class HistoricObjectListNotificationBase : NotificationBase
    {

        private object[] itemsField;

     
        //[System.Xml.Serialization.XmlElementAttribute("binary_data", typeof(BinaryData))]
        //[System.Xml.Serialization.XmlElementAttribute("obj", typeof(HistoricObject))]
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

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]

    public partial class BinaryData
    {

        private byte[] bin_dataField;

       
        //[System.Xml.Serialization.XmlElementAttribute(DataType = "base64Binary")]
        [DataMember]
        public byte[] bin_data
        {
            get
            {
                return this.bin_dataField;
            }
            set
            {
                this.bin_dataField = value;
            }
        }
    }

 
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class HistoricObject : Object
    {

        private Coordinate_3D exitField;

        private System.DateTime exit_timeField;

        private uint heightField;

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public Coordinate_3D exit
        {
            get
            {
                return this.exitField;
            }
            set
            {
                this.exitField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public System.DateTime exit_time
        {
            get
            {
                return this.exit_timeField;
            }
            set
            {
                this.exit_timeField = value;
            }
        }

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint height
        {
            get
            {
                return this.heightField;
            }
            set
            {
                this.heightField = value;
            }
        }
    }

  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class Coordinate_2D
    {

        private int xField;

        private int yField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public int x
        {
            get
            {
                return this.xField;
            }
            set
            {
                this.xField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public int y
        {
            get
            {
                return this.yField;
            }
            set
            {
                this.yField = value;
            }
        }
    }

  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class Coordinate_3D : Coordinate_2D
    {

        private int zField;

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public int z
        {
            get
            {
                return this.zField;
            }
            set
            {
                this.zField = value;
            }
        }
    }

}
