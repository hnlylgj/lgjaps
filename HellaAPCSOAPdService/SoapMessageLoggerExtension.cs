using System;
using System.Data;
using System.Configuration;
using System.Web;
using System.Web.Security;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.UI.WebControls.WebParts;
using System.Web.UI.HtmlControls;
using System.Net;
using System.IO;
using System.Text;
using System.Xml;
using System.Web.Services.Protocols;
using System.Text.RegularExpressions;
using System.Collections;

namespace LGJHellaAPCSOAPdService
{
    public class SoapMessageLogExtension : SoapExtension
    {
        Stream _originalStream;
        Stream _workingStream;
        string filename;
        private static Object thisLock = new Object();

        const bool   LogControlClientMessages = false;
        const string ControlSchema            = @"http://www.aglaia-gmbh.de/xml/SOAPdControl.xsd";
        const string DefaultLogPath           = @"C:\Inetpub\HellaAPCLog";

        public override Stream ChainStream(Stream stream)
        {
            _originalStream = stream;
            _workingStream = new MemoryStream();

            return _workingStream;
        }

        public override object GetInitializer(LogicalMethodInfo methodInfo, SoapExtensionAttribute attribute)
        {
            return ((SoapMessageLogExtensionAttribute)attribute).Filename;
        }

        public override object GetInitializer(Type serviceType)
        {
            string logPath = DefaultLogPath;
            System.Configuration.Configuration rootWebConfig = System.Web.Configuration.WebConfigurationManager.OpenWebConfiguration("~");
            if (rootWebConfig.AppSettings.Settings.Count > 0)
            {
                System.Configuration.KeyValueConfigurationElement logPathElem = rootWebConfig.AppSettings.Settings["LogPath"];
                if (logPathElem != null)
                {
                    logPath = logPathElem.Value;
                }
            }

            return Path.Combine(logPath, string.Format("{0}.log", serviceType));
        }

        public override void Initialize(object initializer)
        {
            filename = (string)initializer;
        }

        enum MessageType
        {
            InputMessage,
            OutputMessage
        }

        void LogTextMessage(string message, string subject = "Log Message:")
        {
            try
            {
                               

                using (FileStream fs = new FileStream(filename, FileMode.Append, FileAccess.Write))
                {
                    using (StreamWriter writer = new StreamWriter(fs))
                    {
                        writer.WriteLine();
                        writer.WriteLine(subject);
                        writer.WriteLine(new String('-', subject.Length));
                        writer.WriteLine(message);
                        writer.Flush();
                    }
                }
            }
            catch
            {
                // cannot log this exception due to exception in logging
            }

        }

        public void LGJLogTextMessage(string message, Type serviceType, string subject = "Log Message:")
        {

            try
            {
                string logPath = DefaultLogPath;
                filename = Path.Combine(logPath, string.Format("{0}.log", serviceType));

                using (FileStream fs = new FileStream(filename, FileMode.Append, FileAccess.Write))
                {
                    using (StreamWriter writer = new StreamWriter(fs))
                    {
                        writer.WriteLine();
                        writer.WriteLine(subject);
                        writer.WriteLine(new String('-', subject.Length));
                        writer.WriteLine(message);
                        writer.Flush();
                    }
                }
            }
            catch
            {
                // cannot log this exception due to exception in logging
            }

        }

        void LogException(Exception exception)
        {
            try
            {
                using (FileStream fs = new FileStream(filename, FileMode.Append, FileAccess.Write))
                {
                    using (StreamWriter writer = new StreamWriter(fs))
                    {
                        string subject = "Exception:";
                        writer.WriteLine();
                        writer.WriteLine(subject);
                        writer.WriteLine(new String('-', subject.Length));
                        writer.WriteLine(string.Format("Message:        {0}", exception.Message));
                        if (exception.InnerException != null)
                        {
                            writer.WriteLine(string.Format("InnerException: {0}", exception.InnerException.Message));
                        }
                        foreach (DictionaryEntry de in exception.Data)
                        {
                            string key = de.Key.ToString();
                            string val = de.Value.ToString();
                            string pad = new String(' ', (key.Length < 15) ? 15 - key.Length : 0);
                            writer.WriteLine(string.Format("{0}:{1}{2}", key, pad, val));
                        }

                        writer.Flush();
                    }
                }
            }
            catch
            {
                // cannot log this exception due to exception in logging
            }
        }

        string GetMessageNamespace(string message)
        {
            const string pattern = " xmlns=\"(.+)\"";
            Regex rx = new Regex(pattern);
            Match m = rx.Match(message);
            if (m.Success)
            {
                if (m.Groups.Count > 1)
                {
                    Group g = m.Groups[1];
                    return g.Value;
                }
            }
            return "";
        }

        void LogMessage(SoapMessage message, MessageType messageType)
        {
            lock (thisLock)
            {
                try
                {
                    _workingStream.Position = 0;

                    string xmlMessage = FormatXml(_workingStream);
                    string messageNS = GetMessageNamespace(xmlMessage);

                    // log message from/to extern device (counter) only
                    // don't log message from/to control client
                    if (LogControlClientMessages || !messageNS.Equals(ControlSchema))
                    {
                        using (FileStream fs = new FileStream(filename, FileMode.Append, FileAccess.Write))
                        {
                            using (StreamWriter writer = new StreamWriter(fs))
                            {
                                string mType = (messageType == MessageType.InputMessage) ? "Input" : "Output";
                                //string soapType = (message is SoapServerMessage) ? "SoapResponse" : "SoapRequest"; // it's confusing
                                string headline = string.Format("{0} Message Log {1}", mType, DateTime.Now.ToString());

                                writer.WriteLine();
                                writer.WriteLine(headline);
                                writer.WriteLine(new String('-', headline.Length));

                                writer.WriteLine(string.Format("URL         : {0}", message.Url));
                                writer.WriteLine(string.Format("Soap-Version: {0}", message.SoapVersion.ToString()));

                                writer.WriteLine(xmlMessage);
                                writer.Flush();
                            }
                        }
                    }
                }
                catch (Exception e)
                {
                    LogException(e);
                }
                finally
                {
                    _workingStream.Position = 0;
                }
            }
        }

        void ReturnStream()
        {
            CopyStream(_workingStream, _originalStream);
        }

        void ReceiveStream()
        {
            CopyStream(_originalStream, _workingStream);
        }

        void CopyStream(Stream from, Stream to)
        {
            TextReader tr = new StreamReader(from);
            TextWriter tw = new StreamWriter(to);

            tw.WriteLine(tr.ReadToEnd());
            tw.Flush();
        }

        string FormatXml(Stream xmlStream)
        {
            XmlDocument xmlDoc = new XmlDocument();
            xmlDoc.Load(xmlStream);

            StringBuilder sb = new StringBuilder();
            StringWriter sw = new StringWriter(sb);
            XmlTextWriter xtw = null;

            try
            {
                xtw = new XmlTextWriter(sw);
                xtw.Formatting = Formatting.Indented;
                xmlDoc.WriteTo(xtw);
            }
            finally
            {
                if (xtw != null)
                    xtw.Close();
            }

            return sb.ToString();
        }

        public override void ProcessMessage(SoapMessage message)
        {
            switch (message.Stage)
            {
                // incoming from client
                case SoapMessageStage.BeforeDeserialize:
                    ReceiveStream();
                    LogMessage(message, MessageType.InputMessage);
                    break;
                // about to call methods
                case SoapMessageStage.AfterDeserialize:
                    break;
                // after method call
                case SoapMessageStage.BeforeSerialize:
                    break;
                // outgoing to other
                case SoapMessageStage.AfterSerialize:
                    LogMessage(message, MessageType.OutputMessage);
                    ReturnStream();
                    break;
                default:
                    break;
            }
        }
    }

    [AttributeUsage(AttributeTargets.Method)]
    public class SoapMessageLogExtensionAttribute : SoapExtensionAttribute
    {
        private string filename = null;

        public override Type ExtensionType
        {
            get { return typeof(SoapMessageLogExtension); }
        }

        public override int Priority
        {
            get { return 1; }
            set { }
        }

        public string Filename
        {
            get { return filename; }
            set { filename = value; }
        }
    }

}
