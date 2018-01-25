using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.NotificationMessage
{
   
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class CameraImagesNotification : NotificationWithOSDState
    {

        private BinaryData camera_imagesField;

        private BinaryData eval_mapField;

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public BinaryData camera_images
        {
            get
            {
                return this.camera_imagesField;
            }
            set
            {
                this.camera_imagesField = value;
            }
        }

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public BinaryData eval_map
        {
            get
            {
                return this.eval_mapField;
            }
            set
            {
                this.eval_mapField = value;
            }
        }
    }

}
