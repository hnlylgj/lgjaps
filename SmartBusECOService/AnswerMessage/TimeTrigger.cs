using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.Serialization;

namespace SmartBusECOService.AnswerMessage
{

    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class TimeTrigger
    {

        private Date dateField;

        private ClockTime startField;

        private string cycleField;

        private string random_offsetField;

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public Date date
        {
            get
            {
                return this.dateField;
            }
            set
            {
                this.dateField = value;
            }
        }

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public ClockTime start
        {
            get
            {
                return this.startField;
            }
            set
            {
                this.startField = value;
            }
        }

      
        //[System.Xml.Serialization.XmlElementAttribute(DataType = "duration")]      
        [DataMember]
        public string cycle
        {
            get
            {
                return this.cycleField;
            }
            set
            {
                this.cycleField = value;
            }
        }

       
        //[System.Xml.Serialization.XmlElementAttribute(DataType = "duration")]
        [DataMember]
        public string random_offset
        {
            get
            {
                return this.random_offsetField;
            }
            set
            {
                this.random_offsetField = value;
            }
        }
    }

  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class Date
    {

        private DateType kindField;

        private DayOfWeek day_of_weekField;

        private bool day_of_weekFieldSpecified;

        private uint day_of_monthField;

        private bool day_of_monthFieldSpecified;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]

        public DateType kind
        {
            get
            {
                return this.kindField;
            }
            set
            {
                this.kindField = value;
            }
        }



        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public DayOfWeek day_of_week
        {
            get
            {
                return this.day_of_weekField;
            }
            set
            {
                this.day_of_weekField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public bool day_of_weekSpecified
        {
            get
            {
                return this.day_of_weekFieldSpecified;
            }
            set
            {
                this.day_of_weekFieldSpecified = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint day_of_month
        {
            get
            {
                return this.day_of_monthField;
            }
            set
            {
                this.day_of_monthField = value;
            }
        }

        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]     
        public bool day_of_monthSpecified
        {
            get
            {
                return this.day_of_monthFieldSpecified;
            }
            set
            {
                this.day_of_monthFieldSpecified = value;
            }
        }
    }
  
    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public partial class ClockTime
    {

        private uint hoursField;

        private uint minutesField;

        private uint secondsField;


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint hours
        {
            get
            {
                return this.hoursField;
            }
            set
            {
                this.hoursField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint minutes
        {
            get
            {
                return this.minutesField;
            }
            set
            {
                this.minutesField = value;
            }
        }


        //[System.Xml.Serialization.XmlAttributeAttribute()]
        [DataMember]
        public uint seconds
        {
            get
            {
                return this.secondsField;
            }
            set
            {
                this.secondsField = value;
            }
        }
    }


    //[System.Xml.Serialization.XmlTypeAttribute(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    [DataContract(Namespace = "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd")]
    public enum DateType
    {

        /// <remarks/>
        DATE_DONT_CARE,

        /// <remarks/>
        DATE_DAY_OF_WEEK,

        /// <remarks/>
        DATE_DAY_OF_MONTH,
    }


}
