
#include "CloudStackSoap12Wrapper.h"
SOAP_NMAC struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"ns1", "http://www.aglaia-gmbh.de/xml/BaSS_SOAPd/", NULL, NULL},
        {"ns2", "http://www.aglaia-gmbh.de/xml/2013/05/17/BaSS_SOAPd.xsd", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
