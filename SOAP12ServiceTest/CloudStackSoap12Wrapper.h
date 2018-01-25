/* soapH.h

*/

#ifndef soapH_H
#define soapH_H
#include "CloudStackSoap12Stub.h"
#ifndef WITH_NOIDREF

#ifdef __cplusplus
extern "C" {
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_markelement(struct soap*, const void*, int);

#ifdef __cplusplus
}
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_putindependent(struct soap*);
SOAP_FMAC3 int SOAP_FMAC4 soap_getindependent(struct soap*);
#endif

#ifdef __cplusplus
extern "C" {
#endif
SOAP_FMAC3 void *SOAP_FMAC4 soap_getelement(struct soap*, int*);
SOAP_FMAC3 int SOAP_FMAC4 soap_putelement(struct soap*, const void*, const char*, int, int);

#ifdef __cplusplus
}
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_ignore_element(struct soap*);

SOAP_FMAC3 const char ** SOAP_FMAC4 soap_faultcode(struct soap *soap);
SOAP_FMAC3 void * SOAP_FMAC4 soap_instantiate(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 int SOAP_FMAC4 soap_fdelete(struct soap_clist*);
SOAP_FMAC3 int SOAP_FMAC4 soap_fbase(int, int);
SOAP_FMAC3 void SOAP_FMAC4 soap_finsert(struct soap*, int, int, void*, size_t, const void*, void**);

#ifndef SOAP_TYPE_byte_DEFINED
#define SOAP_TYPE_byte_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_byte(struct soap*, char *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_byte(struct soap*, const char*, int, const char *, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_in_byte(struct soap*, const char*, char *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_byte(struct soap*, const char *, const char*, const char*);

inline int soap_write_byte(struct soap *soap, char const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_byte(soap, p, "byte", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 char * SOAP_FMAC4 soap_get_byte(struct soap*, char *, const char*, const char*);

inline int soap_read_byte(struct soap *soap, char *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_byte(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_int_DEFINED
#define SOAP_TYPE_int_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_int(struct soap*, int *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_int(struct soap*, const char*, int, const int *, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_in_int(struct soap*, const char*, int *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_int(struct soap*, const int *, const char*, const char*);

inline int soap_write_int(struct soap *soap, int const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_int(soap, p, "int", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 int * SOAP_FMAC4 soap_get_int(struct soap*, int *, const char*, const char*);

inline int soap_read_int(struct soap *soap, int *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_int(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_xsd__duration_DEFINED
#define SOAP_TYPE_xsd__duration_DEFINED
SOAP_FMAC1 void SOAP_FMAC2 soap_default_xsd__duration(struct soap*, LONG64 *);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_xsd__duration2s(struct soap*, LONG64);
SOAP_FMAC1 int SOAP_FMAC2 soap_out_xsd__duration(struct soap*, const char*, int, const LONG64 *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2xsd__duration(struct soap*, const char*, LONG64 *);
SOAP_FMAC1 LONG64 * SOAP_FMAC2 soap_in_xsd__duration(struct soap*, const char*, LONG64 *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__duration(struct soap*, const LONG64 *, const char*, const char*);

inline int soap_write_xsd__duration(struct soap *soap, LONG64 const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_xsd__duration(soap, p, "xsd:duration", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 LONG64 * SOAP_FMAC4 soap_get_xsd__duration(struct soap*, LONG64 *, const char*, const char*);

inline int soap_read_xsd__duration(struct soap *soap, LONG64 *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_xsd__duration(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_unsignedByte_DEFINED
#define SOAP_TYPE_unsignedByte_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_unsignedByte(struct soap*, unsigned char *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_unsignedByte(struct soap*, const char*, int, const unsigned char *, const char*);
SOAP_FMAC3 unsigned char * SOAP_FMAC4 soap_in_unsignedByte(struct soap*, const char*, unsigned char *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_unsignedByte(struct soap*, const unsigned char *, const char*, const char*);

inline int soap_write_unsignedByte(struct soap *soap, unsigned char const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_unsignedByte(soap, p, "unsignedByte", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 unsigned char * SOAP_FMAC4 soap_get_unsignedByte(struct soap*, unsigned char *, const char*, const char*);

inline int soap_read_unsignedByte(struct soap *soap, unsigned char *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_unsignedByte(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__MinutesOrSeconds_DEFINED
#define SOAP_TYPE_ns2__MinutesOrSeconds_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__MinutesOrSeconds(struct soap*, unsigned int *);

#define soap_ns2__MinutesOrSeconds2s soap_unsignedInt2s

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__MinutesOrSeconds(struct soap*, const char*, int, const unsigned int *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__MinutesOrSeconds(struct soap*, const char*, unsigned int *);
SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_in_ns2__MinutesOrSeconds(struct soap*, const char*, unsigned int *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__MinutesOrSeconds(struct soap*, const unsigned int *, const char*, const char*);

inline int soap_write_ns2__MinutesOrSeconds(struct soap *soap, unsigned int const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__MinutesOrSeconds(soap, p, "ns2:MinutesOrSeconds", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_get_ns2__MinutesOrSeconds(struct soap*, unsigned int *, const char*, const char*);

inline int soap_read_ns2__MinutesOrSeconds(struct soap *soap, unsigned int *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__MinutesOrSeconds(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__HoursOfDay_DEFINED
#define SOAP_TYPE_ns2__HoursOfDay_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__HoursOfDay(struct soap*, unsigned int *);

#define soap_ns2__HoursOfDay2s soap_unsignedInt2s

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__HoursOfDay(struct soap*, const char*, int, const unsigned int *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__HoursOfDay(struct soap*, const char*, unsigned int *);
SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_in_ns2__HoursOfDay(struct soap*, const char*, unsigned int *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__HoursOfDay(struct soap*, const unsigned int *, const char*, const char*);

inline int soap_write_ns2__HoursOfDay(struct soap *soap, unsigned int const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__HoursOfDay(soap, p, "ns2:HoursOfDay", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_get_ns2__HoursOfDay(struct soap*, unsigned int *, const char*, const char*);

inline int soap_read_ns2__HoursOfDay(struct soap *soap, unsigned int *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__HoursOfDay(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DayOfMonth_DEFINED
#define SOAP_TYPE_ns2__DayOfMonth_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__DayOfMonth(struct soap*, unsigned int *);

#define soap_ns2__DayOfMonth2s soap_unsignedInt2s

SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DayOfMonth(struct soap*, const char*, int, const unsigned int *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__DayOfMonth(struct soap*, const char*, unsigned int *);
SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_in_ns2__DayOfMonth(struct soap*, const char*, unsigned int *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__DayOfMonth(struct soap*, const unsigned int *, const char*, const char*);

inline int soap_write_ns2__DayOfMonth(struct soap *soap, unsigned int const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__DayOfMonth(soap, p, "ns2:DayOfMonth", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_get_ns2__DayOfMonth(struct soap*, unsigned int *, const char*, const char*);

inline int soap_read_ns2__DayOfMonth(struct soap *soap, unsigned int *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__DayOfMonth(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_unsignedInt_DEFINED
#define SOAP_TYPE_unsignedInt_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_unsignedInt(struct soap*, unsigned int *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_unsignedInt(struct soap*, const char*, int, const unsigned int *, const char*);
SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_in_unsignedInt(struct soap*, const char*, unsigned int *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_unsignedInt(struct soap*, const unsigned int *, const char*, const char*);

inline int soap_write_unsignedInt(struct soap *soap, unsigned int const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_unsignedInt(soap, p, "unsignedInt", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 unsigned int * SOAP_FMAC4 soap_get_unsignedInt(struct soap*, unsigned int *, const char*, const char*);

inline int soap_read_unsignedInt(struct soap *soap, unsigned int *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_unsignedInt(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_dateTime_DEFINED
#define SOAP_TYPE_dateTime_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_dateTime(struct soap*, time_t *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_dateTime(struct soap*, const char*, int, const time_t *, const char*);
SOAP_FMAC3 time_t * SOAP_FMAC4 soap_in_dateTime(struct soap*, const char*, time_t *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_dateTime(struct soap*, const time_t *, const char*, const char*);

inline int soap_write_dateTime(struct soap *soap, time_t const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_dateTime(soap, p, "dateTime", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 time_t * SOAP_FMAC4 soap_get_dateTime(struct soap*, time_t *, const char*, const char*);

inline int soap_read_dateTime(struct soap *soap, time_t *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_dateTime(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_bool_DEFINED
#define SOAP_TYPE_bool_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_bool(struct soap*, bool *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_bool(struct soap*, const char*, int, const bool *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_bool2s(struct soap*, bool);
SOAP_FMAC3 bool * SOAP_FMAC4 soap_in_bool(struct soap*, const char*, bool *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2bool(struct soap*, const char*, bool *);

inline bool * soap_new_bool(struct soap *soap, int n = -1)
{
	return static_cast<bool *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(bool)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_bool(struct soap*, const bool *, const char*, const char*);

inline int soap_write_bool(struct soap *soap, bool const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_bool(soap, p, "boolean", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 bool * SOAP_FMAC4 soap_get_bool(struct soap*, bool *, const char*, const char*);

inline int soap_read_bool(struct soap *soap, bool *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_bool(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TransferType_DEFINED
#define SOAP_TYPE_ns2__TransferType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__TransferType(struct soap*, enum ns2__TransferType *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TransferType(struct soap*, const char*, int, const enum ns2__TransferType *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__TransferType2s(struct soap*, enum ns2__TransferType);
SOAP_FMAC3 enum ns2__TransferType * SOAP_FMAC4 soap_in_ns2__TransferType(struct soap*, const char*, enum ns2__TransferType *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__TransferType(struct soap*, const char*, enum ns2__TransferType *);

inline enum ns2__TransferType * soap_new_ns2__TransferType(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__TransferType *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__TransferType)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__TransferType(struct soap*, const enum ns2__TransferType *, const char*, const char*);

inline int soap_write_ns2__TransferType(struct soap *soap, enum ns2__TransferType const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__TransferType(soap, p, "ns2:TransferType", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__TransferType * SOAP_FMAC4 soap_get_ns2__TransferType(struct soap*, enum ns2__TransferType *, const char*, const char*);

inline int soap_read_ns2__TransferType(struct soap *soap, enum ns2__TransferType *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__TransferType(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__UpdateType_DEFINED
#define SOAP_TYPE_ns2__UpdateType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__UpdateType(struct soap*, enum ns2__UpdateType *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__UpdateType(struct soap*, const char*, int, const enum ns2__UpdateType *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__UpdateType2s(struct soap*, enum ns2__UpdateType);
SOAP_FMAC3 enum ns2__UpdateType * SOAP_FMAC4 soap_in_ns2__UpdateType(struct soap*, const char*, enum ns2__UpdateType *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__UpdateType(struct soap*, const char*, enum ns2__UpdateType *);

inline enum ns2__UpdateType * soap_new_ns2__UpdateType(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__UpdateType *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__UpdateType)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__UpdateType(struct soap*, const enum ns2__UpdateType *, const char*, const char*);

inline int soap_write_ns2__UpdateType(struct soap *soap, enum ns2__UpdateType const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__UpdateType(soap, p, "ns2:UpdateType", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__UpdateType * SOAP_FMAC4 soap_get_ns2__UpdateType(struct soap*, enum ns2__UpdateType *, const char*, const char*);

inline int soap_read_ns2__UpdateType(struct soap *soap, enum ns2__UpdateType *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__UpdateType(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__RebootType_DEFINED
#define SOAP_TYPE_ns2__RebootType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__RebootType(struct soap*, enum ns2__RebootType *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__RebootType(struct soap*, const char*, int, const enum ns2__RebootType *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__RebootType2s(struct soap*, enum ns2__RebootType);
SOAP_FMAC3 enum ns2__RebootType * SOAP_FMAC4 soap_in_ns2__RebootType(struct soap*, const char*, enum ns2__RebootType *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__RebootType(struct soap*, const char*, enum ns2__RebootType *);

inline enum ns2__RebootType * soap_new_ns2__RebootType(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__RebootType *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__RebootType)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__RebootType(struct soap*, const enum ns2__RebootType *, const char*, const char*);

inline int soap_write_ns2__RebootType(struct soap *soap, enum ns2__RebootType const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__RebootType(soap, p, "ns2:RebootType", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__RebootType * SOAP_FMAC4 soap_get_ns2__RebootType(struct soap*, enum ns2__RebootType *, const char*, const char*);

inline int soap_read_ns2__RebootType(struct soap *soap, enum ns2__RebootType *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__RebootType(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DayOfWeek_DEFINED
#define SOAP_TYPE_ns2__DayOfWeek_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__DayOfWeek(struct soap*, enum ns2__DayOfWeek *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DayOfWeek(struct soap*, const char*, int, const enum ns2__DayOfWeek *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__DayOfWeek2s(struct soap*, enum ns2__DayOfWeek);
SOAP_FMAC3 enum ns2__DayOfWeek * SOAP_FMAC4 soap_in_ns2__DayOfWeek(struct soap*, const char*, enum ns2__DayOfWeek *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__DayOfWeek(struct soap*, const char*, enum ns2__DayOfWeek *);

inline enum ns2__DayOfWeek * soap_new_ns2__DayOfWeek(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__DayOfWeek *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__DayOfWeek)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__DayOfWeek(struct soap*, const enum ns2__DayOfWeek *, const char*, const char*);

inline int soap_write_ns2__DayOfWeek(struct soap *soap, enum ns2__DayOfWeek const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__DayOfWeek(soap, p, "ns2:DayOfWeek", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__DayOfWeek * SOAP_FMAC4 soap_get_ns2__DayOfWeek(struct soap*, enum ns2__DayOfWeek *, const char*, const char*);

inline int soap_read_ns2__DayOfWeek(struct soap *soap, enum ns2__DayOfWeek *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__DayOfWeek(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DateType_DEFINED
#define SOAP_TYPE_ns2__DateType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__DateType(struct soap*, enum ns2__DateType *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DateType(struct soap*, const char*, int, const enum ns2__DateType *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__DateType2s(struct soap*, enum ns2__DateType);
SOAP_FMAC3 enum ns2__DateType * SOAP_FMAC4 soap_in_ns2__DateType(struct soap*, const char*, enum ns2__DateType *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__DateType(struct soap*, const char*, enum ns2__DateType *);

inline enum ns2__DateType * soap_new_ns2__DateType(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__DateType *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__DateType)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__DateType(struct soap*, const enum ns2__DateType *, const char*, const char*);

inline int soap_write_ns2__DateType(struct soap *soap, enum ns2__DateType const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__DateType(soap, p, "ns2:DateType", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__DateType * SOAP_FMAC4 soap_get_ns2__DateType(struct soap*, enum ns2__DateType *, const char*, const char*);

inline int soap_read_ns2__DateType(struct soap *soap, enum ns2__DateType *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__DateType(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DigitalInputEventType_DEFINED
#define SOAP_TYPE_ns2__DigitalInputEventType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__DigitalInputEventType(struct soap*, enum ns2__DigitalInputEventType *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DigitalInputEventType(struct soap*, const char*, int, const enum ns2__DigitalInputEventType *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__DigitalInputEventType2s(struct soap*, enum ns2__DigitalInputEventType);
SOAP_FMAC3 enum ns2__DigitalInputEventType * SOAP_FMAC4 soap_in_ns2__DigitalInputEventType(struct soap*, const char*, enum ns2__DigitalInputEventType *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__DigitalInputEventType(struct soap*, const char*, enum ns2__DigitalInputEventType *);

inline enum ns2__DigitalInputEventType * soap_new_ns2__DigitalInputEventType(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__DigitalInputEventType *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__DigitalInputEventType)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__DigitalInputEventType(struct soap*, const enum ns2__DigitalInputEventType *, const char*, const char*);

inline int soap_write_ns2__DigitalInputEventType(struct soap *soap, enum ns2__DigitalInputEventType const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__DigitalInputEventType(soap, p, "ns2:DigitalInputEventType", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__DigitalInputEventType * SOAP_FMAC4 soap_get_ns2__DigitalInputEventType(struct soap*, enum ns2__DigitalInputEventType *, const char*, const char*);

inline int soap_read_ns2__DigitalInputEventType(struct soap *soap, enum ns2__DigitalInputEventType *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__DigitalInputEventType(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ClearZoneEventType_DEFINED
#define SOAP_TYPE_ns2__ClearZoneEventType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__ClearZoneEventType(struct soap*, enum ns2__ClearZoneEventType *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ClearZoneEventType(struct soap*, const char*, int, const enum ns2__ClearZoneEventType *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__ClearZoneEventType2s(struct soap*, enum ns2__ClearZoneEventType);
SOAP_FMAC3 enum ns2__ClearZoneEventType * SOAP_FMAC4 soap_in_ns2__ClearZoneEventType(struct soap*, const char*, enum ns2__ClearZoneEventType *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__ClearZoneEventType(struct soap*, const char*, enum ns2__ClearZoneEventType *);

inline enum ns2__ClearZoneEventType * soap_new_ns2__ClearZoneEventType(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__ClearZoneEventType *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__ClearZoneEventType)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__ClearZoneEventType(struct soap*, const enum ns2__ClearZoneEventType *, const char*, const char*);

inline int soap_write_ns2__ClearZoneEventType(struct soap *soap, enum ns2__ClearZoneEventType const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__ClearZoneEventType(soap, p, "ns2:ClearZoneEventType", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__ClearZoneEventType * SOAP_FMAC4 soap_get_ns2__ClearZoneEventType(struct soap*, enum ns2__ClearZoneEventType *, const char*, const char*);

inline int soap_read_ns2__ClearZoneEventType(struct soap *soap, enum ns2__ClearZoneEventType *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__ClearZoneEventType(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__FillEventType_DEFINED
#define SOAP_TYPE_ns2__FillEventType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__FillEventType(struct soap*, enum ns2__FillEventType *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__FillEventType(struct soap*, const char*, int, const enum ns2__FillEventType *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__FillEventType2s(struct soap*, enum ns2__FillEventType);
SOAP_FMAC3 enum ns2__FillEventType * SOAP_FMAC4 soap_in_ns2__FillEventType(struct soap*, const char*, enum ns2__FillEventType *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__FillEventType(struct soap*, const char*, enum ns2__FillEventType *);

inline enum ns2__FillEventType * soap_new_ns2__FillEventType(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__FillEventType *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__FillEventType)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__FillEventType(struct soap*, const enum ns2__FillEventType *, const char*, const char*);

inline int soap_write_ns2__FillEventType(struct soap *soap, enum ns2__FillEventType const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__FillEventType(soap, p, "ns2:FillEventType", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__FillEventType * SOAP_FMAC4 soap_get_ns2__FillEventType(struct soap*, enum ns2__FillEventType *, const char*, const char*);

inline int soap_read_ns2__FillEventType(struct soap *soap, enum ns2__FillEventType *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__FillEventType(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CountEventType_DEFINED
#define SOAP_TYPE_ns2__CountEventType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__CountEventType(struct soap*, enum ns2__CountEventType *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CountEventType(struct soap*, const char*, int, const enum ns2__CountEventType *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__CountEventType2s(struct soap*, enum ns2__CountEventType);
SOAP_FMAC3 enum ns2__CountEventType * SOAP_FMAC4 soap_in_ns2__CountEventType(struct soap*, const char*, enum ns2__CountEventType *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__CountEventType(struct soap*, const char*, enum ns2__CountEventType *);

inline enum ns2__CountEventType * soap_new_ns2__CountEventType(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__CountEventType *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__CountEventType)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__CountEventType(struct soap*, const enum ns2__CountEventType *, const char*, const char*);

inline int soap_write_ns2__CountEventType(struct soap *soap, enum ns2__CountEventType const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__CountEventType(soap, p, "ns2:CountEventType", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__CountEventType * SOAP_FMAC4 soap_get_ns2__CountEventType(struct soap*, enum ns2__CountEventType *, const char*, const char*);

inline int soap_read_ns2__CountEventType(struct soap *soap, enum ns2__CountEventType *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__CountEventType(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DigitalOutputActivity_DEFINED
#define SOAP_TYPE_ns2__DigitalOutputActivity_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__DigitalOutputActivity(struct soap*, enum ns2__DigitalOutputActivity *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DigitalOutputActivity(struct soap*, const char*, int, const enum ns2__DigitalOutputActivity *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__DigitalOutputActivity2s(struct soap*, enum ns2__DigitalOutputActivity);
SOAP_FMAC3 enum ns2__DigitalOutputActivity * SOAP_FMAC4 soap_in_ns2__DigitalOutputActivity(struct soap*, const char*, enum ns2__DigitalOutputActivity *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__DigitalOutputActivity(struct soap*, const char*, enum ns2__DigitalOutputActivity *);

inline enum ns2__DigitalOutputActivity * soap_new_ns2__DigitalOutputActivity(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__DigitalOutputActivity *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__DigitalOutputActivity)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__DigitalOutputActivity(struct soap*, const enum ns2__DigitalOutputActivity *, const char*, const char*);

inline int soap_write_ns2__DigitalOutputActivity(struct soap *soap, enum ns2__DigitalOutputActivity const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__DigitalOutputActivity(soap, p, "ns2:DigitalOutputActivity", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__DigitalOutputActivity * SOAP_FMAC4 soap_get_ns2__DigitalOutputActivity(struct soap*, enum ns2__DigitalOutputActivity *, const char*, const char*);

inline int soap_read_ns2__DigitalOutputActivity(struct soap *soap, enum ns2__DigitalOutputActivity *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__DigitalOutputActivity(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DigitalInputValue_DEFINED
#define SOAP_TYPE_ns2__DigitalInputValue_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__DigitalInputValue(struct soap*, enum ns2__DigitalInputValue *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DigitalInputValue(struct soap*, const char*, int, const enum ns2__DigitalInputValue *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__DigitalInputValue2s(struct soap*, enum ns2__DigitalInputValue);
SOAP_FMAC3 enum ns2__DigitalInputValue * SOAP_FMAC4 soap_in_ns2__DigitalInputValue(struct soap*, const char*, enum ns2__DigitalInputValue *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__DigitalInputValue(struct soap*, const char*, enum ns2__DigitalInputValue *);

inline enum ns2__DigitalInputValue * soap_new_ns2__DigitalInputValue(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__DigitalInputValue *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__DigitalInputValue)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__DigitalInputValue(struct soap*, const enum ns2__DigitalInputValue *, const char*, const char*);

inline int soap_write_ns2__DigitalInputValue(struct soap *soap, enum ns2__DigitalInputValue const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__DigitalInputValue(soap, p, "ns2:DigitalInputValue", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__DigitalInputValue * SOAP_FMAC4 soap_get_ns2__DigitalInputValue(struct soap*, enum ns2__DigitalInputValue *, const char*, const char*);

inline int soap_read_ns2__DigitalInputValue(struct soap *soap, enum ns2__DigitalInputValue *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__DigitalInputValue(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__SOAP_USCOREDeviceError_DEFINED
#define SOAP_TYPE_ns2__SOAP_USCOREDeviceError_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__SOAP_USCOREDeviceError(struct soap*, enum ns2__SOAP_USCOREDeviceError *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__SOAP_USCOREDeviceError(struct soap*, const char*, int, const enum ns2__SOAP_USCOREDeviceError *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__SOAP_USCOREDeviceError2s(struct soap*, enum ns2__SOAP_USCOREDeviceError);
SOAP_FMAC3 enum ns2__SOAP_USCOREDeviceError * SOAP_FMAC4 soap_in_ns2__SOAP_USCOREDeviceError(struct soap*, const char*, enum ns2__SOAP_USCOREDeviceError *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__SOAP_USCOREDeviceError(struct soap*, const char*, enum ns2__SOAP_USCOREDeviceError *);

inline enum ns2__SOAP_USCOREDeviceError * soap_new_ns2__SOAP_USCOREDeviceError(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__SOAP_USCOREDeviceError *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__SOAP_USCOREDeviceError)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__SOAP_USCOREDeviceError(struct soap*, const enum ns2__SOAP_USCOREDeviceError *, const char*, const char*);

inline int soap_write_ns2__SOAP_USCOREDeviceError(struct soap *soap, enum ns2__SOAP_USCOREDeviceError const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__SOAP_USCOREDeviceError(soap, p, "ns2:SOAP_DeviceError", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__SOAP_USCOREDeviceError * SOAP_FMAC4 soap_get_ns2__SOAP_USCOREDeviceError(struct soap*, enum ns2__SOAP_USCOREDeviceError *, const char*, const char*);

inline int soap_read_ns2__SOAP_USCOREDeviceError(struct soap *soap, enum ns2__SOAP_USCOREDeviceError *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__SOAP_USCOREDeviceError(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__SOAP_USCOREServerError_DEFINED
#define SOAP_TYPE_ns2__SOAP_USCOREServerError_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__SOAP_USCOREServerError(struct soap*, enum ns2__SOAP_USCOREServerError *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__SOAP_USCOREServerError(struct soap*, const char*, int, const enum ns2__SOAP_USCOREServerError *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__SOAP_USCOREServerError2s(struct soap*, enum ns2__SOAP_USCOREServerError);
SOAP_FMAC3 enum ns2__SOAP_USCOREServerError * SOAP_FMAC4 soap_in_ns2__SOAP_USCOREServerError(struct soap*, const char*, enum ns2__SOAP_USCOREServerError *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__SOAP_USCOREServerError(struct soap*, const char*, enum ns2__SOAP_USCOREServerError *);

inline enum ns2__SOAP_USCOREServerError * soap_new_ns2__SOAP_USCOREServerError(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__SOAP_USCOREServerError *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__SOAP_USCOREServerError)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__SOAP_USCOREServerError(struct soap*, const enum ns2__SOAP_USCOREServerError *, const char*, const char*);

inline int soap_write_ns2__SOAP_USCOREServerError(struct soap *soap, enum ns2__SOAP_USCOREServerError const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__SOAP_USCOREServerError(soap, p, "ns2:SOAP_ServerError", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__SOAP_USCOREServerError * SOAP_FMAC4 soap_get_ns2__SOAP_USCOREServerError(struct soap*, enum ns2__SOAP_USCOREServerError *, const char*, const char*);

inline int soap_read_ns2__SOAP_USCOREServerError(struct soap *soap, enum ns2__SOAP_USCOREServerError *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__SOAP_USCOREServerError(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__OSD_USCOREState_DEFINED
#define SOAP_TYPE_ns2__OSD_USCOREState_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__OSD_USCOREState(struct soap*, enum ns2__OSD_USCOREState *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__OSD_USCOREState(struct soap*, const char*, int, const enum ns2__OSD_USCOREState *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__OSD_USCOREState2s(struct soap*, enum ns2__OSD_USCOREState);
SOAP_FMAC3 enum ns2__OSD_USCOREState * SOAP_FMAC4 soap_in_ns2__OSD_USCOREState(struct soap*, const char*, enum ns2__OSD_USCOREState *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__OSD_USCOREState(struct soap*, const char*, enum ns2__OSD_USCOREState *);

inline enum ns2__OSD_USCOREState * soap_new_ns2__OSD_USCOREState(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__OSD_USCOREState *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__OSD_USCOREState)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__OSD_USCOREState(struct soap*, const enum ns2__OSD_USCOREState *, const char*, const char*);

inline int soap_write_ns2__OSD_USCOREState(struct soap *soap, enum ns2__OSD_USCOREState const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__OSD_USCOREState(soap, p, "ns2:OSD_State", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__OSD_USCOREState * SOAP_FMAC4 soap_get_ns2__OSD_USCOREState(struct soap*, enum ns2__OSD_USCOREState *, const char*, const char*);

inline int soap_read_ns2__OSD_USCOREState(struct soap *soap, enum ns2__OSD_USCOREState *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__OSD_USCOREState(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskType_DEFINED
#define SOAP_TYPE_ns2__TaskType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__TaskType(struct soap*, enum ns2__TaskType *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskType(struct soap*, const char*, int, const enum ns2__TaskType *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_ns2__TaskType2s(struct soap*, enum ns2__TaskType);
SOAP_FMAC3 enum ns2__TaskType * SOAP_FMAC4 soap_in_ns2__TaskType(struct soap*, const char*, enum ns2__TaskType *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2ns2__TaskType(struct soap*, const char*, enum ns2__TaskType *);

inline enum ns2__TaskType * soap_new_ns2__TaskType(struct soap *soap, int n = -1)
{
	return static_cast<enum ns2__TaskType *>(soap_malloc(soap, (n < 0 ? 1 : n) * sizeof(enum ns2__TaskType)));
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__TaskType(struct soap*, const enum ns2__TaskType *, const char*, const char*);

inline int soap_write_ns2__TaskType(struct soap *soap, enum ns2__TaskType const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__TaskType(soap, p, "ns2:TaskType", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 enum ns2__TaskType * SOAP_FMAC4 soap_get_ns2__TaskType(struct soap*, enum ns2__TaskType *, const char*, const char*);

inline int soap_read_ns2__TaskType(struct soap *soap, enum ns2__TaskType *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__TaskType(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE___ns2__union_TaskContainer_DEFINED
#define SOAP_TYPE___ns2__union_TaskContainer_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out___ns2__union_TaskContainer(struct soap*, const char*, int, const __ns2__union_TaskContainer *, const char*);
SOAP_FMAC3 __ns2__union_TaskContainer * SOAP_FMAC4 soap_in___ns2__union_TaskContainer(struct soap*, const char*, __ns2__union_TaskContainer *, const char*);
SOAP_FMAC1 __ns2__union_TaskContainer * SOAP_FMAC2 soap_instantiate___ns2__union_TaskContainer(struct soap*, int, const char*, const char*, size_t*);

inline __ns2__union_TaskContainer * soap_new___ns2__union_TaskContainer(struct soap *soap, int n = -1)
{
	return soap_instantiate___ns2__union_TaskContainer(soap, n, NULL, NULL, NULL);
}

inline __ns2__union_TaskContainer * soap_new_req___ns2__union_TaskContainer(
	struct soap *soap,
	const union _ns2__union_TaskContainer& union_TaskContainer)
{
	__ns2__union_TaskContainer *_p = soap_new___ns2__union_TaskContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->__ns2__union_TaskContainer::union_TaskContainer = union_TaskContainer;
	}
	return _p;
}

inline __ns2__union_TaskContainer * soap_new_set___ns2__union_TaskContainer(
	struct soap *soap,
	int __union_TaskContainer,
	const union _ns2__union_TaskContainer& union_TaskContainer)
{
	__ns2__union_TaskContainer *_p = soap_new___ns2__union_TaskContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->__ns2__union_TaskContainer::__union_TaskContainer = __union_TaskContainer;
		_p->__ns2__union_TaskContainer::union_TaskContainer = union_TaskContainer;
	}
	return _p;
}

inline int soap_write___ns2__union_TaskContainer(struct soap *soap, __ns2__union_TaskContainer const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "-ns2:union-TaskContainer", p->soap_type() == SOAP_TYPE___ns2__union_TaskContainer ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 __ns2__union_TaskContainer * SOAP_FMAC4 soap_get___ns2__union_TaskContainer(struct soap*, __ns2__union_TaskContainer *, const char*, const char*);

inline int soap_read___ns2__union_TaskContainer(struct soap *soap, __ns2__union_TaskContainer *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get___ns2__union_TaskContainer(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ShortDuration_DEFINED
#define SOAP_TYPE_ns2__ShortDuration_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__ShortDuration(struct soap*, std::wstring *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns2__ShortDuration(struct soap*, const std::wstring *);

#define soap_ns2__ShortDuration2s(soap, a) soap_wchar2s((soap), (a).c_str())
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ShortDuration(struct soap*, const char*, int, const std::wstring*, const char*);

#define soap_s2ns2__ShortDuration(soap, s, a) soap_s2stdwchar((soap), (s), (a), 0, -1, "[0-9]+\\.[0-9]+")
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_in_ns2__ShortDuration(struct soap*, const char*, std::wstring*, const char*);

#define soap_instantiate_ns2__ShortDuration soap_instantiate_std__wstring


#define soap_new_ns2__ShortDuration soap_new_std__wstring

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__ShortDuration(struct soap*, const std::wstring *, const char*, const char*);

inline int soap_write_ns2__ShortDuration(struct soap *soap, std::wstring const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__ShortDuration(soap, p, "ns2:ShortDuration", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_get_ns2__ShortDuration(struct soap*, std::wstring *, const char*, const char*);

inline int soap_read_ns2__ShortDuration(struct soap *soap, std::wstring *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__ShortDuration(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ObjectClassName_DEFINED
#define SOAP_TYPE_ns2__ObjectClassName_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__ObjectClassName(struct soap*, std::wstring *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns2__ObjectClassName(struct soap*, const std::wstring *);

#define soap_ns2__ObjectClassName2s(soap, a) soap_wchar2s((soap), (a).c_str())
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ObjectClassName(struct soap*, const char*, int, const std::wstring*, const char*);

#define soap_s2ns2__ObjectClassName(soap, s, a) soap_s2stdwchar((soap), (s), (a), 0, -1, "^[a-zA-Z]+$")
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_in_ns2__ObjectClassName(struct soap*, const char*, std::wstring*, const char*);

#define soap_instantiate_ns2__ObjectClassName soap_instantiate_std__wstring


#define soap_new_ns2__ObjectClassName soap_new_std__wstring

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__ObjectClassName(struct soap*, const std::wstring *, const char*, const char*);

inline int soap_write_ns2__ObjectClassName(struct soap *soap, std::wstring const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__ObjectClassName(soap, p, "ns2:ObjectClassName", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_get_ns2__ObjectClassName(struct soap*, std::wstring *, const char*, const char*);

inline int soap_read_ns2__ObjectClassName(struct soap *soap, std::wstring *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__ObjectClassName(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__MeasuringChannelName_DEFINED
#define SOAP_TYPE_ns2__MeasuringChannelName_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__MeasuringChannelName(struct soap*, std::wstring *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns2__MeasuringChannelName(struct soap*, const std::wstring *);

#define soap_ns2__MeasuringChannelName2s(soap, a) soap_wchar2s((soap), (a).c_str())
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__MeasuringChannelName(struct soap*, const char*, int, const std::wstring*, const char*);

#define soap_s2ns2__MeasuringChannelName(soap, s, a) soap_s2stdwchar((soap), (s), (a), 0, -1, "^[a-zA-Z0-9_\\-]+$")
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_in_ns2__MeasuringChannelName(struct soap*, const char*, std::wstring*, const char*);

#define soap_instantiate_ns2__MeasuringChannelName soap_instantiate_std__wstring


#define soap_new_ns2__MeasuringChannelName soap_new_std__wstring

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__MeasuringChannelName(struct soap*, const std::wstring *, const char*, const char*);

inline int soap_write_ns2__MeasuringChannelName(struct soap *soap, std::wstring const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__MeasuringChannelName(soap, p, "ns2:MeasuringChannelName", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_get_ns2__MeasuringChannelName(struct soap*, std::wstring *, const char*, const char*);

inline int soap_read_ns2__MeasuringChannelName(struct soap *soap, std::wstring *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__MeasuringChannelName(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__MAC_USCOREAddress_DEFINED
#define SOAP_TYPE_ns2__MAC_USCOREAddress_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__MAC_USCOREAddress(struct soap*, std::wstring *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns2__MAC_USCOREAddress(struct soap*, const std::wstring *);

#define soap_ns2__MAC_USCOREAddress2s(soap, a) soap_wchar2s((soap), (a).c_str())
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__MAC_USCOREAddress(struct soap*, const char*, int, const std::wstring*, const char*);

#define soap_s2ns2__MAC_USCOREAddress(soap, s, a) soap_s2stdwchar((soap), (s), (a), 0, -1, "[0-9a-fA-F][0-9a-fA-F]:[0-9a-fA-F][0-9a-fA-F]:[0-9a-fA-F][0-9a-fA-F]:[0-9a-fA-F][0-9a-fA-F]:[0-9a-fA-F][0-9a-fA-F]:[0-9a-fA-F][0-9a-fA-F]")
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_in_ns2__MAC_USCOREAddress(struct soap*, const char*, std::wstring*, const char*);

#define soap_instantiate_ns2__MAC_USCOREAddress soap_instantiate_std__wstring


#define soap_new_ns2__MAC_USCOREAddress soap_new_std__wstring

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__MAC_USCOREAddress(struct soap*, const std::wstring *, const char*, const char*);

inline int soap_write_ns2__MAC_USCOREAddress(struct soap *soap, std::wstring const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__MAC_USCOREAddress(soap, p, "ns2:MAC_Address", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_get_ns2__MAC_USCOREAddress(struct soap*, std::wstring *, const char*, const char*);

inline int soap_read_ns2__MAC_USCOREAddress(struct soap *soap, std::wstring *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__MAC_USCOREAddress(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__IP_USCOREAddress_DEFINED
#define SOAP_TYPE_ns2__IP_USCOREAddress_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_ns2__IP_USCOREAddress(struct soap*, std::wstring *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_ns2__IP_USCOREAddress(struct soap*, const std::wstring *);

#define soap_ns2__IP_USCOREAddress2s(soap, a) soap_wchar2s((soap), (a).c_str())
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__IP_USCOREAddress(struct soap*, const char*, int, const std::wstring*, const char*);

#define soap_s2ns2__IP_USCOREAddress(soap, s, a) soap_s2stdwchar((soap), (s), (a), 0, -1, "^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)(:([0-9]|[1-9][0-9]{1,4}))?$")
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_in_ns2__IP_USCOREAddress(struct soap*, const char*, std::wstring*, const char*);

#define soap_instantiate_ns2__IP_USCOREAddress soap_instantiate_std__wstring


#define soap_new_ns2__IP_USCOREAddress soap_new_std__wstring

SOAP_FMAC3 int SOAP_FMAC4 soap_put_ns2__IP_USCOREAddress(struct soap*, const std::wstring *, const char*, const char*);

inline int soap_write_ns2__IP_USCOREAddress(struct soap *soap, std::wstring const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_ns2__IP_USCOREAddress(soap, p, "ns2:IP_Address", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_get_ns2__IP_USCOREAddress(struct soap*, std::wstring *, const char*, const char*);

inline int soap_read_ns2__IP_USCOREAddress(struct soap *soap, std::wstring *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_ns2__IP_USCOREAddress(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ErrorContainer_DEFINED
#define SOAP_TYPE_ns2__ErrorContainer_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ErrorContainer(struct soap*, const char*, int, const ns2__ErrorContainer *, const char*);
SOAP_FMAC3 ns2__ErrorContainer * SOAP_FMAC4 soap_in_ns2__ErrorContainer(struct soap*, const char*, ns2__ErrorContainer *, const char*);
SOAP_FMAC1 ns2__ErrorContainer * SOAP_FMAC2 soap_instantiate_ns2__ErrorContainer(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ErrorContainer * soap_new_ns2__ErrorContainer(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ErrorContainer(soap, n, NULL, NULL, NULL);
}

inline ns2__ErrorContainer * soap_new_req_ns2__ErrorContainer(
	struct soap *soap,
	enum ns2__SOAP_USCOREDeviceError error_USCOREreason,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__ErrorContainer *_p = soap_new_ns2__ErrorContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ErrorContainer::error_USCOREreason = error_USCOREreason;
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline ns2__ErrorContainer * soap_new_set_ns2__ErrorContainer(
	struct soap *soap,
	enum ns2__SOAP_USCOREDeviceError error_USCOREreason,
	wchar_t *error_USCOREtext,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	std::wstring *version__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__ErrorContainer *_p = soap_new_ns2__ErrorContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ErrorContainer::error_USCOREreason = error_USCOREreason;
		_p->ns2__ErrorContainer::error_USCOREtext = error_USCOREtext;
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::version = version__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline int soap_write_ns2__ErrorContainer(struct soap *soap, ns2__ErrorContainer const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ErrorContainer", p->soap_type() == SOAP_TYPE_ns2__ErrorContainer ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ErrorContainer * SOAP_FMAC4 soap_get_ns2__ErrorContainer(struct soap*, ns2__ErrorContainer *, const char*, const char*);

inline int soap_read_ns2__ErrorContainer(struct soap *soap, ns2__ErrorContainer *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ErrorContainer(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__AnswerContainer_DEFINED
#define SOAP_TYPE_ns2__AnswerContainer_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__AnswerContainer(struct soap*, const char*, int, const ns2__AnswerContainer *, const char*);
SOAP_FMAC3 ns2__AnswerContainer * SOAP_FMAC4 soap_in_ns2__AnswerContainer(struct soap*, const char*, ns2__AnswerContainer *, const char*);
SOAP_FMAC1 ns2__AnswerContainer * SOAP_FMAC2 soap_instantiate_ns2__AnswerContainer(struct soap*, int, const char*, const char*, size_t*);

inline ns2__AnswerContainer * soap_new_ns2__AnswerContainer(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__AnswerContainer(soap, n, NULL, NULL, NULL);
}

inline ns2__AnswerContainer * soap_new_req_ns2__AnswerContainer(
	struct soap *soap,
	unsigned int referenced_USCOREnotification_USCOREID,
	enum ns2__SOAP_USCOREServerError server_USCOREresponse_USCOREtype,
	int __size_TaskContainer__1,
	__ns2__union_TaskContainer *__union_TaskContainer__1)
{
	ns2__AnswerContainer *_p = soap_new_ns2__AnswerContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__AnswerContainer::referenced_USCOREnotification_USCOREID = referenced_USCOREnotification_USCOREID;
		_p->ns2__AnswerContainer::server_USCOREresponse_USCOREtype = server_USCOREresponse_USCOREtype;
		_p->ns2__TaskContainer::__size_TaskContainer = __size_TaskContainer__1;
		_p->ns2__TaskContainer::__union_TaskContainer = __union_TaskContainer__1;
	}
	return _p;
}

inline ns2__AnswerContainer * soap_new_set_ns2__AnswerContainer(
	struct soap *soap,
	unsigned int referenced_USCOREnotification_USCOREID,
	enum ns2__SOAP_USCOREServerError server_USCOREresponse_USCOREtype,
	std::wstring *version,
	int __size_TaskContainer__1,
	__ns2__union_TaskContainer *__union_TaskContainer__1)
{
	ns2__AnswerContainer *_p = soap_new_ns2__AnswerContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__AnswerContainer::referenced_USCOREnotification_USCOREID = referenced_USCOREnotification_USCOREID;
		_p->ns2__AnswerContainer::server_USCOREresponse_USCOREtype = server_USCOREresponse_USCOREtype;
		_p->ns2__AnswerContainer::version = version;
		_p->ns2__TaskContainer::__size_TaskContainer = __size_TaskContainer__1;
		_p->ns2__TaskContainer::__union_TaskContainer = __union_TaskContainer__1;
	}
	return _p;
}

inline int soap_write_ns2__AnswerContainer(struct soap *soap, ns2__AnswerContainer const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:AnswerContainer", p->soap_type() == SOAP_TYPE_ns2__AnswerContainer ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__AnswerContainer * SOAP_FMAC4 soap_get_ns2__AnswerContainer(struct soap*, ns2__AnswerContainer *, const char*, const char*);

inline int soap_read_ns2__AnswerContainer(struct soap *soap, ns2__AnswerContainer *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__AnswerContainer(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskContainer_DEFINED
#define SOAP_TYPE_ns2__TaskContainer_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskContainer(struct soap*, const char*, int, const ns2__TaskContainer *, const char*);
SOAP_FMAC3 ns2__TaskContainer * SOAP_FMAC4 soap_in_ns2__TaskContainer(struct soap*, const char*, ns2__TaskContainer *, const char*);
SOAP_FMAC1 ns2__TaskContainer * SOAP_FMAC2 soap_instantiate_ns2__TaskContainer(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskContainer * soap_new_ns2__TaskContainer(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskContainer(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskContainer * soap_new_req_ns2__TaskContainer(
	struct soap *soap,
	int __size_TaskContainer,
	__ns2__union_TaskContainer *__union_TaskContainer)
{
	ns2__TaskContainer *_p = soap_new_ns2__TaskContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskContainer::__size_TaskContainer = __size_TaskContainer;
		_p->ns2__TaskContainer::__union_TaskContainer = __union_TaskContainer;
	}
	return _p;
}

inline ns2__TaskContainer * soap_new_set_ns2__TaskContainer(
	struct soap *soap,
	int __size_TaskContainer,
	__ns2__union_TaskContainer *__union_TaskContainer)
{
	ns2__TaskContainer *_p = soap_new_ns2__TaskContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskContainer::__size_TaskContainer = __size_TaskContainer;
		_p->ns2__TaskContainer::__union_TaskContainer = __union_TaskContainer;
	}
	return _p;
}

inline int soap_write_ns2__TaskContainer(struct soap *soap, ns2__TaskContainer const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskContainer", p->soap_type() == SOAP_TYPE_ns2__TaskContainer ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskContainer * SOAP_FMAC4 soap_get_ns2__TaskContainer(struct soap*, ns2__TaskContainer *, const char*, const char*);

inline int soap_read_ns2__TaskContainer(struct soap *soap, ns2__TaskContainer *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskContainer(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskDeleteAllNotifications_DEFINED
#define SOAP_TYPE_ns2__TaskDeleteAllNotifications_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskDeleteAllNotifications(struct soap*, const char*, int, const ns2__TaskDeleteAllNotifications *, const char*);
SOAP_FMAC3 ns2__TaskDeleteAllNotifications * SOAP_FMAC4 soap_in_ns2__TaskDeleteAllNotifications(struct soap*, const char*, ns2__TaskDeleteAllNotifications *, const char*);
SOAP_FMAC1 ns2__TaskDeleteAllNotifications * SOAP_FMAC2 soap_instantiate_ns2__TaskDeleteAllNotifications(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskDeleteAllNotifications * soap_new_ns2__TaskDeleteAllNotifications(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskDeleteAllNotifications(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskDeleteAllNotifications * soap_new_req_ns2__TaskDeleteAllNotifications(
	struct soap *soap,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskDeleteAllNotifications *_p = soap_new_ns2__TaskDeleteAllNotifications(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline ns2__TaskDeleteAllNotifications * soap_new_set_ns2__TaskDeleteAllNotifications(
	struct soap *soap,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskDeleteAllNotifications *_p = soap_new_ns2__TaskDeleteAllNotifications(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline int soap_write_ns2__TaskDeleteAllNotifications(struct soap *soap, ns2__TaskDeleteAllNotifications const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskDeleteAllNotifications", p->soap_type() == SOAP_TYPE_ns2__TaskDeleteAllNotifications ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskDeleteAllNotifications * SOAP_FMAC4 soap_get_ns2__TaskDeleteAllNotifications(struct soap*, ns2__TaskDeleteAllNotifications *, const char*, const char*);

inline int soap_read_ns2__TaskDeleteAllNotifications(struct soap *soap, ns2__TaskDeleteAllNotifications *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskDeleteAllNotifications(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskDeleteAllTasks_DEFINED
#define SOAP_TYPE_ns2__TaskDeleteAllTasks_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskDeleteAllTasks(struct soap*, const char*, int, const ns2__TaskDeleteAllTasks *, const char*);
SOAP_FMAC3 ns2__TaskDeleteAllTasks * SOAP_FMAC4 soap_in_ns2__TaskDeleteAllTasks(struct soap*, const char*, ns2__TaskDeleteAllTasks *, const char*);
SOAP_FMAC1 ns2__TaskDeleteAllTasks * SOAP_FMAC2 soap_instantiate_ns2__TaskDeleteAllTasks(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskDeleteAllTasks * soap_new_ns2__TaskDeleteAllTasks(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskDeleteAllTasks(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskDeleteAllTasks * soap_new_req_ns2__TaskDeleteAllTasks(
	struct soap *soap,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskDeleteAllTasks *_p = soap_new_ns2__TaskDeleteAllTasks(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline ns2__TaskDeleteAllTasks * soap_new_set_ns2__TaskDeleteAllTasks(
	struct soap *soap,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskDeleteAllTasks *_p = soap_new_ns2__TaskDeleteAllTasks(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline int soap_write_ns2__TaskDeleteAllTasks(struct soap *soap, ns2__TaskDeleteAllTasks const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskDeleteAllTasks", p->soap_type() == SOAP_TYPE_ns2__TaskDeleteAllTasks ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskDeleteAllTasks * SOAP_FMAC4 soap_get_ns2__TaskDeleteAllTasks(struct soap*, ns2__TaskDeleteAllTasks *, const char*, const char*);

inline int soap_read_ns2__TaskDeleteAllTasks(struct soap *soap, ns2__TaskDeleteAllTasks *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskDeleteAllTasks(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeFeaturesInfo_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeFeaturesInfo_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeFeaturesInfo(struct soap*, const char*, int, const ns2__TaskSubscribeFeaturesInfo *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeFeaturesInfo * SOAP_FMAC4 soap_in_ns2__TaskSubscribeFeaturesInfo(struct soap*, const char*, ns2__TaskSubscribeFeaturesInfo *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeFeaturesInfo * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeFeaturesInfo(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeFeaturesInfo * soap_new_ns2__TaskSubscribeFeaturesInfo(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeFeaturesInfo(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeFeaturesInfo * soap_new_req_ns2__TaskSubscribeFeaturesInfo(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeFeaturesInfo *_p = soap_new_ns2__TaskSubscribeFeaturesInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline ns2__TaskSubscribeFeaturesInfo * soap_new_set_ns2__TaskSubscribeFeaturesInfo(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	bool *store_USCOREtask__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeFeaturesInfo *_p = soap_new_ns2__TaskSubscribeFeaturesInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeFeaturesInfo(struct soap *soap, ns2__TaskSubscribeFeaturesInfo const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeFeaturesInfo", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeFeaturesInfo ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeFeaturesInfo * SOAP_FMAC4 soap_get_ns2__TaskSubscribeFeaturesInfo(struct soap*, ns2__TaskSubscribeFeaturesInfo *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeFeaturesInfo(struct soap *soap, ns2__TaskSubscribeFeaturesInfo *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeFeaturesInfo(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeObjectList_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeObjectList_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeObjectList(struct soap*, const char*, int, const ns2__TaskSubscribeObjectList *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeObjectList * SOAP_FMAC4 soap_in_ns2__TaskSubscribeObjectList(struct soap*, const char*, ns2__TaskSubscribeObjectList *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeObjectList * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeObjectList(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeObjectList * soap_new_ns2__TaskSubscribeObjectList(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeObjectList(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeObjectList * soap_new_req_ns2__TaskSubscribeObjectList(
	struct soap *soap,
	enum ns2__TransferType transfer_USCOREtype,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeObjectList *_p = soap_new_ns2__TaskSubscribeObjectList(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeObjectList::transfer_USCOREtype = transfer_USCOREtype;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline ns2__TaskSubscribeObjectList * soap_new_set_ns2__TaskSubscribeObjectList(
	struct soap *soap,
	enum ns2__TransferType transfer_USCOREtype,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	bool *store_USCOREtask__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeObjectList *_p = soap_new_ns2__TaskSubscribeObjectList(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeObjectList::transfer_USCOREtype = transfer_USCOREtype;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeObjectList(struct soap *soap, ns2__TaskSubscribeObjectList const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeObjectList", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeObjectList ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeObjectList * SOAP_FMAC4 soap_get_ns2__TaskSubscribeObjectList(struct soap*, ns2__TaskSubscribeObjectList *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeObjectList(struct soap *soap, ns2__TaskSubscribeObjectList *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeObjectList(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeAlive_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeAlive_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeAlive(struct soap*, const char*, int, const ns2__TaskSubscribeAlive *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeAlive * SOAP_FMAC4 soap_in_ns2__TaskSubscribeAlive(struct soap*, const char*, ns2__TaskSubscribeAlive *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeAlive * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeAlive(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeAlive * soap_new_ns2__TaskSubscribeAlive(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeAlive(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeAlive * soap_new_req_ns2__TaskSubscribeAlive(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeAlive *_p = soap_new_ns2__TaskSubscribeAlive(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline ns2__TaskSubscribeAlive * soap_new_set_ns2__TaskSubscribeAlive(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	bool *store_USCOREtask__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeAlive *_p = soap_new_ns2__TaskSubscribeAlive(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeAlive(struct soap *soap, ns2__TaskSubscribeAlive const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeAlive", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeAlive ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeAlive * SOAP_FMAC4 soap_get_ns2__TaskSubscribeAlive(struct soap*, ns2__TaskSubscribeAlive *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeAlive(struct soap *soap, ns2__TaskSubscribeAlive *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeAlive(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeVideoStore_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeVideoStore_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeVideoStore(struct soap*, const char*, int, const ns2__TaskSubscribeVideoStore *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeVideoStore * SOAP_FMAC4 soap_in_ns2__TaskSubscribeVideoStore(struct soap*, const char*, ns2__TaskSubscribeVideoStore *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeVideoStore * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeVideoStore(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeVideoStore * soap_new_ns2__TaskSubscribeVideoStore(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeVideoStore(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeVideoStore * soap_new_req_ns2__TaskSubscribeVideoStore(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeVideoStore *_p = soap_new_ns2__TaskSubscribeVideoStore(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline ns2__TaskSubscribeVideoStore * soap_new_set_ns2__TaskSubscribeVideoStore(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	bool *store_USCOREtask__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeVideoStore *_p = soap_new_ns2__TaskSubscribeVideoStore(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeVideoStore(struct soap *soap, ns2__TaskSubscribeVideoStore const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeVideoStore", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeVideoStore ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeVideoStore * SOAP_FMAC4 soap_get_ns2__TaskSubscribeVideoStore(struct soap*, ns2__TaskSubscribeVideoStore *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeVideoStore(struct soap *soap, ns2__TaskSubscribeVideoStore *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeVideoStore(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeSendParameters_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeSendParameters_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeSendParameters(struct soap*, const char*, int, const ns2__TaskSubscribeSendParameters *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeSendParameters * SOAP_FMAC4 soap_in_ns2__TaskSubscribeSendParameters(struct soap*, const char*, ns2__TaskSubscribeSendParameters *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeSendParameters * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeSendParameters(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeSendParameters * soap_new_ns2__TaskSubscribeSendParameters(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeSendParameters(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeSendParameters * soap_new_req_ns2__TaskSubscribeSendParameters(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeSendParameters *_p = soap_new_ns2__TaskSubscribeSendParameters(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline ns2__TaskSubscribeSendParameters * soap_new_set_ns2__TaskSubscribeSendParameters(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	bool *store_USCOREtask__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeSendParameters *_p = soap_new_ns2__TaskSubscribeSendParameters(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeSendParameters(struct soap *soap, ns2__TaskSubscribeSendParameters const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeSendParameters", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeSendParameters ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeSendParameters * SOAP_FMAC4 soap_get_ns2__TaskSubscribeSendParameters(struct soap*, ns2__TaskSubscribeSendParameters *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeSendParameters(struct soap *soap, ns2__TaskSubscribeSendParameters *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeSendParameters(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeCameraImages_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeCameraImages_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeCameraImages(struct soap*, const char*, int, const ns2__TaskSubscribeCameraImages *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeCameraImages * SOAP_FMAC4 soap_in_ns2__TaskSubscribeCameraImages(struct soap*, const char*, ns2__TaskSubscribeCameraImages *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeCameraImages * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeCameraImages(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeCameraImages * soap_new_ns2__TaskSubscribeCameraImages(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeCameraImages(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeCameraImages * soap_new_req_ns2__TaskSubscribeCameraImages(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeCameraImages *_p = soap_new_ns2__TaskSubscribeCameraImages(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline ns2__TaskSubscribeCameraImages * soap_new_set_ns2__TaskSubscribeCameraImages(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	bool *store_USCOREtask__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeCameraImages *_p = soap_new_ns2__TaskSubscribeCameraImages(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeCameraImages(struct soap *soap, ns2__TaskSubscribeCameraImages const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeCameraImages", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeCameraImages ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeCameraImages * SOAP_FMAC4 soap_get_ns2__TaskSubscribeCameraImages(struct soap*, ns2__TaskSubscribeCameraImages *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeCameraImages(struct soap *soap, ns2__TaskSubscribeCameraImages *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeCameraImages(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeErrorLog_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeErrorLog_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeErrorLog(struct soap*, const char*, int, const ns2__TaskSubscribeErrorLog *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeErrorLog * SOAP_FMAC4 soap_in_ns2__TaskSubscribeErrorLog(struct soap*, const char*, ns2__TaskSubscribeErrorLog *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeErrorLog * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeErrorLog(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeErrorLog * soap_new_ns2__TaskSubscribeErrorLog(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeErrorLog(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeErrorLog * soap_new_req_ns2__TaskSubscribeErrorLog(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeErrorLog *_p = soap_new_ns2__TaskSubscribeErrorLog(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline ns2__TaskSubscribeErrorLog * soap_new_set_ns2__TaskSubscribeErrorLog(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	bool *store_USCOREtask__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeErrorLog *_p = soap_new_ns2__TaskSubscribeErrorLog(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeErrorLog(struct soap *soap, ns2__TaskSubscribeErrorLog const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeErrorLog", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeErrorLog ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeErrorLog * SOAP_FMAC4 soap_get_ns2__TaskSubscribeErrorLog(struct soap*, ns2__TaskSubscribeErrorLog *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeErrorLog(struct soap *soap, ns2__TaskSubscribeErrorLog *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeErrorLog(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeLogfiles_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeLogfiles_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeLogfiles(struct soap*, const char*, int, const ns2__TaskSubscribeLogfiles *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeLogfiles * SOAP_FMAC4 soap_in_ns2__TaskSubscribeLogfiles(struct soap*, const char*, ns2__TaskSubscribeLogfiles *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeLogfiles * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeLogfiles(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeLogfiles * soap_new_ns2__TaskSubscribeLogfiles(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeLogfiles(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeLogfiles * soap_new_req_ns2__TaskSubscribeLogfiles(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeLogfiles *_p = soap_new_ns2__TaskSubscribeLogfiles(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline ns2__TaskSubscribeLogfiles * soap_new_set_ns2__TaskSubscribeLogfiles(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	bool *store_USCOREtask__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeLogfiles *_p = soap_new_ns2__TaskSubscribeLogfiles(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeLogfiles(struct soap *soap, ns2__TaskSubscribeLogfiles const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeLogfiles", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeLogfiles ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeLogfiles * SOAP_FMAC4 soap_get_ns2__TaskSubscribeLogfiles(struct soap*, ns2__TaskSubscribeLogfiles *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeLogfiles(struct soap *soap, ns2__TaskSubscribeLogfiles *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeLogfiles(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeDigitalInput_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeDigitalInput_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeDigitalInput(struct soap*, const char*, int, const ns2__TaskSubscribeDigitalInput *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeDigitalInput * SOAP_FMAC4 soap_in_ns2__TaskSubscribeDigitalInput(struct soap*, const char*, ns2__TaskSubscribeDigitalInput *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeDigitalInput * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeDigitalInput(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeDigitalInput * soap_new_ns2__TaskSubscribeDigitalInput(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeDigitalInput(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeDigitalInput * soap_new_req_ns2__TaskSubscribeDigitalInput(
	struct soap *soap,
	int __sizedigital_USCOREinput_USCOREport,
	ns2__DigitalInputControl **digital_USCOREinput_USCOREport,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeDigitalInput *_p = soap_new_ns2__TaskSubscribeDigitalInput(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeDigitalInput::__sizedigital_USCOREinput_USCOREport = __sizedigital_USCOREinput_USCOREport;
		_p->ns2__TaskSubscribeDigitalInput::digital_USCOREinput_USCOREport = digital_USCOREinput_USCOREport;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline ns2__TaskSubscribeDigitalInput * soap_new_set_ns2__TaskSubscribeDigitalInput(
	struct soap *soap,
	int __sizedigital_USCOREinput_USCOREport,
	ns2__DigitalInputControl **digital_USCOREinput_USCOREport,
	bool store_USCOREon_USCOREtransmission_USCOREerror__1,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	bool *store_USCOREtask__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeDigitalInput *_p = soap_new_ns2__TaskSubscribeDigitalInput(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeDigitalInput::__sizedigital_USCOREinput_USCOREport = __sizedigital_USCOREinput_USCOREport;
		_p->ns2__TaskSubscribeDigitalInput::digital_USCOREinput_USCOREport = digital_USCOREinput_USCOREport;
		_p->ns2__TaskSubscribeTriggeredSafe::store_USCOREon_USCOREtransmission_USCOREerror = store_USCOREon_USCOREtransmission_USCOREerror__1;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeDigitalInput(struct soap *soap, ns2__TaskSubscribeDigitalInput const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeDigitalInput", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeDigitalInput ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeDigitalInput * SOAP_FMAC4 soap_get_ns2__TaskSubscribeDigitalInput(struct soap*, ns2__TaskSubscribeDigitalInput *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeDigitalInput(struct soap *soap, ns2__TaskSubscribeDigitalInput *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeDigitalInput(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DigitalInputControl_DEFINED
#define SOAP_TYPE_ns2__DigitalInputControl_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DigitalInputControl(struct soap*, const char*, int, const ns2__DigitalInputControl *, const char*);
SOAP_FMAC3 ns2__DigitalInputControl * SOAP_FMAC4 soap_in_ns2__DigitalInputControl(struct soap*, const char*, ns2__DigitalInputControl *, const char*);
SOAP_FMAC1 ns2__DigitalInputControl * SOAP_FMAC2 soap_instantiate_ns2__DigitalInputControl(struct soap*, int, const char*, const char*, size_t*);

inline ns2__DigitalInputControl * soap_new_ns2__DigitalInputControl(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__DigitalInputControl(soap, n, NULL, NULL, NULL);
}

inline ns2__DigitalInputControl * soap_new_req_ns2__DigitalInputControl(
	struct soap *soap,
	bool activity_USCOREstate)
{
	ns2__DigitalInputControl *_p = soap_new_ns2__DigitalInputControl(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalInputControl::activity_USCOREstate = activity_USCOREstate;
	}
	return _p;
}

inline ns2__DigitalInputControl * soap_new_set_ns2__DigitalInputControl(
	struct soap *soap,
	bool activity_USCOREstate)
{
	ns2__DigitalInputControl *_p = soap_new_ns2__DigitalInputControl(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalInputControl::activity_USCOREstate = activity_USCOREstate;
	}
	return _p;
}

inline int soap_write_ns2__DigitalInputControl(struct soap *soap, ns2__DigitalInputControl const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:DigitalInputControl", p->soap_type() == SOAP_TYPE_ns2__DigitalInputControl ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__DigitalInputControl * SOAP_FMAC4 soap_get_ns2__DigitalInputControl(struct soap*, ns2__DigitalInputControl *, const char*, const char*);

inline int soap_read_ns2__DigitalInputControl(struct soap *soap, ns2__DigitalInputControl *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__DigitalInputControl(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeClearZone_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeClearZone_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeClearZone(struct soap*, const char*, int, const ns2__TaskSubscribeClearZone *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeClearZone * SOAP_FMAC4 soap_in_ns2__TaskSubscribeClearZone(struct soap*, const char*, ns2__TaskSubscribeClearZone *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeClearZone * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeClearZone(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeClearZone * soap_new_ns2__TaskSubscribeClearZone(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeClearZone(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeClearZone * soap_new_req_ns2__TaskSubscribeClearZone(
	struct soap *soap,
	ns2__ClearZoneID *clear_USCOREzone_USCOREid,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeClearZone *_p = soap_new_ns2__TaskSubscribeClearZone(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeClearZone::clear_USCOREzone_USCOREid = clear_USCOREzone_USCOREid;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline ns2__TaskSubscribeClearZone * soap_new_set_ns2__TaskSubscribeClearZone(
	struct soap *soap,
	ns2__ClearZoneID *clear_USCOREzone_USCOREid,
	bool store_USCOREon_USCOREtransmission_USCOREerror__1,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	bool *store_USCOREtask__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeClearZone *_p = soap_new_ns2__TaskSubscribeClearZone(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeClearZone::clear_USCOREzone_USCOREid = clear_USCOREzone_USCOREid;
		_p->ns2__TaskSubscribeTriggeredSafe::store_USCOREon_USCOREtransmission_USCOREerror = store_USCOREon_USCOREtransmission_USCOREerror__1;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeClearZone(struct soap *soap, ns2__TaskSubscribeClearZone const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeClearZone", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeClearZone ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeClearZone * SOAP_FMAC4 soap_get_ns2__TaskSubscribeClearZone(struct soap*, ns2__TaskSubscribeClearZone *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeClearZone(struct soap *soap, ns2__TaskSubscribeClearZone *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeClearZone(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeFill_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeFill_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeFill(struct soap*, const char*, int, const ns2__TaskSubscribeFill *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeFill * SOAP_FMAC4 soap_in_ns2__TaskSubscribeFill(struct soap*, const char*, ns2__TaskSubscribeFill *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeFill * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeFill(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeFill * soap_new_ns2__TaskSubscribeFill(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeFill(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeFill * soap_new_req_ns2__TaskSubscribeFill(
	struct soap *soap,
	ns2__FillRegionID *fill_USCOREregion_USCOREid,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeFill *_p = soap_new_ns2__TaskSubscribeFill(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeFill::fill_USCOREregion_USCOREid = fill_USCOREregion_USCOREid;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline ns2__TaskSubscribeFill * soap_new_set_ns2__TaskSubscribeFill(
	struct soap *soap,
	ns2__FillRegionID *fill_USCOREregion_USCOREid,
	bool store_USCOREon_USCOREtransmission_USCOREerror__1,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	bool *store_USCOREtask__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeFill *_p = soap_new_ns2__TaskSubscribeFill(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeFill::fill_USCOREregion_USCOREid = fill_USCOREregion_USCOREid;
		_p->ns2__TaskSubscribeTriggeredSafe::store_USCOREon_USCOREtransmission_USCOREerror = store_USCOREon_USCOREtransmission_USCOREerror__1;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeFill(struct soap *soap, ns2__TaskSubscribeFill const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeFill", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeFill ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeFill * SOAP_FMAC4 soap_get_ns2__TaskSubscribeFill(struct soap*, ns2__TaskSubscribeFill *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeFill(struct soap *soap, ns2__TaskSubscribeFill *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeFill(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeZoneChannels_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeZoneChannels_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeZoneChannels(struct soap*, const char*, int, const ns2__TaskSubscribeZoneChannels *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeZoneChannels * SOAP_FMAC4 soap_in_ns2__TaskSubscribeZoneChannels(struct soap*, const char*, ns2__TaskSubscribeZoneChannels *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeZoneChannels * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeZoneChannels(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeZoneChannels * soap_new_ns2__TaskSubscribeZoneChannels(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeZoneChannels(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeZoneChannels * soap_new_req_ns2__TaskSubscribeZoneChannels(
	struct soap *soap,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeZoneChannels *_p = soap_new_ns2__TaskSubscribeZoneChannels(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline ns2__TaskSubscribeZoneChannels * soap_new_set_ns2__TaskSubscribeZoneChannels(
	struct soap *soap,
	bool store_USCOREon_USCOREtransmission_USCOREerror__1,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	bool *store_USCOREtask__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeZoneChannels *_p = soap_new_ns2__TaskSubscribeZoneChannels(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggeredSafe::store_USCOREon_USCOREtransmission_USCOREerror = store_USCOREon_USCOREtransmission_USCOREerror__1;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeZoneChannels(struct soap *soap, ns2__TaskSubscribeZoneChannels const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeZoneChannels", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeZoneChannels ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeZoneChannels * SOAP_FMAC4 soap_get_ns2__TaskSubscribeZoneChannels(struct soap*, ns2__TaskSubscribeZoneChannels *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeZoneChannels(struct soap *soap, ns2__TaskSubscribeZoneChannels *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeZoneChannels(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeCountChannels_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeCountChannels_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeCountChannels(struct soap*, const char*, int, const ns2__TaskSubscribeCountChannels *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeCountChannels * SOAP_FMAC4 soap_in_ns2__TaskSubscribeCountChannels(struct soap*, const char*, ns2__TaskSubscribeCountChannels *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeCountChannels * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeCountChannels(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeCountChannels * soap_new_ns2__TaskSubscribeCountChannels(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeCountChannels(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeCountChannels * soap_new_req_ns2__TaskSubscribeCountChannels(
	struct soap *soap,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeCountChannels *_p = soap_new_ns2__TaskSubscribeCountChannels(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline ns2__TaskSubscribeCountChannels * soap_new_set_ns2__TaskSubscribeCountChannels(
	struct soap *soap,
	bool store_USCOREon_USCOREtransmission_USCOREerror__1,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	bool *store_USCOREtask__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeCountChannels *_p = soap_new_ns2__TaskSubscribeCountChannels(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggeredSafe::store_USCOREon_USCOREtransmission_USCOREerror = store_USCOREon_USCOREtransmission_USCOREerror__1;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeCountChannels(struct soap *soap, ns2__TaskSubscribeCountChannels const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeCountChannels", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeCountChannels ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeCountChannels * SOAP_FMAC4 soap_get_ns2__TaskSubscribeCountChannels(struct soap*, ns2__TaskSubscribeCountChannels *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeCountChannels(struct soap *soap, ns2__TaskSubscribeCountChannels *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeCountChannels(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeCounting_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeCounting_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeCounting(struct soap*, const char*, int, const ns2__TaskSubscribeCounting *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeCounting * SOAP_FMAC4 soap_in_ns2__TaskSubscribeCounting(struct soap*, const char*, ns2__TaskSubscribeCounting *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeCounting * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeCounting(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeCounting * soap_new_ns2__TaskSubscribeCounting(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeCounting(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeCounting * soap_new_req_ns2__TaskSubscribeCounting(
	struct soap *soap,
	ns2__CountingGateID *counting_USCOREgate_USCOREid,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeCounting *_p = soap_new_ns2__TaskSubscribeCounting(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeCounting::counting_USCOREgate_USCOREid = counting_USCOREgate_USCOREid;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline ns2__TaskSubscribeCounting * soap_new_set_ns2__TaskSubscribeCounting(
	struct soap *soap,
	ns2__CountingGateID *counting_USCOREgate_USCOREid,
	bool store_USCOREon_USCOREtransmission_USCOREerror__1,
	ns2__Trigger *trigger__2,
	bool activity_USCOREstate__3,
	bool *store_USCOREtask__3,
	enum ns2__TaskType task_USCOREtype__4,
	unsigned int serverTask_USCOREID__4)
{
	ns2__TaskSubscribeCounting *_p = soap_new_ns2__TaskSubscribeCounting(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeCounting::counting_USCOREgate_USCOREid = counting_USCOREgate_USCOREid;
		_p->ns2__TaskSubscribeTriggeredSafe::store_USCOREon_USCOREtransmission_USCOREerror = store_USCOREon_USCOREtransmission_USCOREerror__1;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__2;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__3;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__3;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__4;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__4;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeCounting(struct soap *soap, ns2__TaskSubscribeCounting const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeCounting", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeCounting ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeCounting * SOAP_FMAC4 soap_get_ns2__TaskSubscribeCounting(struct soap*, ns2__TaskSubscribeCounting *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeCounting(struct soap *soap, ns2__TaskSubscribeCounting *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeCounting(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeTriggeredSafe_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeTriggeredSafe_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeTriggeredSafe(struct soap*, const char*, int, const ns2__TaskSubscribeTriggeredSafe *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeTriggeredSafe * SOAP_FMAC4 soap_in_ns2__TaskSubscribeTriggeredSafe(struct soap*, const char*, ns2__TaskSubscribeTriggeredSafe *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeTriggeredSafe * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeTriggeredSafe(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeTriggeredSafe * soap_new_ns2__TaskSubscribeTriggeredSafe(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeTriggeredSafe(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeTriggeredSafe * soap_new_req_ns2__TaskSubscribeTriggeredSafe(
	struct soap *soap,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeTriggeredSafe *_p = soap_new_ns2__TaskSubscribeTriggeredSafe(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline ns2__TaskSubscribeTriggeredSafe * soap_new_set_ns2__TaskSubscribeTriggeredSafe(
	struct soap *soap,
	bool store_USCOREon_USCOREtransmission_USCOREerror,
	ns2__Trigger *trigger__1,
	bool activity_USCOREstate__2,
	bool *store_USCOREtask__2,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int serverTask_USCOREID__3)
{
	ns2__TaskSubscribeTriggeredSafe *_p = soap_new_ns2__TaskSubscribeTriggeredSafe(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggeredSafe::store_USCOREon_USCOREtransmission_USCOREerror = store_USCOREon_USCOREtransmission_USCOREerror;
		_p->ns2__TaskSubscribeTriggered::trigger = trigger__1;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__2;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__2;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__3;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeTriggeredSafe(struct soap *soap, ns2__TaskSubscribeTriggeredSafe const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeTriggeredSafe", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeTriggeredSafe ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeTriggeredSafe * SOAP_FMAC4 soap_get_ns2__TaskSubscribeTriggeredSafe(struct soap*, ns2__TaskSubscribeTriggeredSafe *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeTriggeredSafe(struct soap *soap, ns2__TaskSubscribeTriggeredSafe *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeTriggeredSafe(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSubscribeTriggered_DEFINED
#define SOAP_TYPE_ns2__TaskSubscribeTriggered_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSubscribeTriggered(struct soap*, const char*, int, const ns2__TaskSubscribeTriggered *, const char*);
SOAP_FMAC3 ns2__TaskSubscribeTriggered * SOAP_FMAC4 soap_in_ns2__TaskSubscribeTriggered(struct soap*, const char*, ns2__TaskSubscribeTriggered *, const char*);
SOAP_FMAC1 ns2__TaskSubscribeTriggered * SOAP_FMAC2 soap_instantiate_ns2__TaskSubscribeTriggered(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSubscribeTriggered * soap_new_ns2__TaskSubscribeTriggered(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSubscribeTriggered(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSubscribeTriggered * soap_new_req_ns2__TaskSubscribeTriggered(
	struct soap *soap,
	ns2__Trigger *trigger,
	bool activity_USCOREstate__1,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int serverTask_USCOREID__2)
{
	ns2__TaskSubscribeTriggered *_p = soap_new_ns2__TaskSubscribeTriggered(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__1;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__2;
	}
	return _p;
}

inline ns2__TaskSubscribeTriggered * soap_new_set_ns2__TaskSubscribeTriggered(
	struct soap *soap,
	ns2__Trigger *trigger,
	bool activity_USCOREstate__1,
	bool *store_USCOREtask__1,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int serverTask_USCOREID__2)
{
	ns2__TaskSubscribeTriggered *_p = soap_new_ns2__TaskSubscribeTriggered(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSubscribeTriggered::trigger = trigger;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__1;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__1;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__2;
	}
	return _p;
}

inline int soap_write_ns2__TaskSubscribeTriggered(struct soap *soap, ns2__TaskSubscribeTriggered const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSubscribeTriggered", p->soap_type() == SOAP_TYPE_ns2__TaskSubscribeTriggered ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSubscribeTriggered * SOAP_FMAC4 soap_get_ns2__TaskSubscribeTriggered(struct soap*, ns2__TaskSubscribeTriggered *, const char*, const char*);

inline int soap_read_ns2__TaskSubscribeTriggered(struct soap *soap, ns2__TaskSubscribeTriggered *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSubscribeTriggered(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSetDateTime_DEFINED
#define SOAP_TYPE_ns2__TaskSetDateTime_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSetDateTime(struct soap*, const char*, int, const ns2__TaskSetDateTime *, const char*);
SOAP_FMAC3 ns2__TaskSetDateTime * SOAP_FMAC4 soap_in_ns2__TaskSetDateTime(struct soap*, const char*, ns2__TaskSetDateTime *, const char*);
SOAP_FMAC1 ns2__TaskSetDateTime * SOAP_FMAC2 soap_instantiate_ns2__TaskSetDateTime(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSetDateTime * soap_new_ns2__TaskSetDateTime(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSetDateTime(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSetDateTime * soap_new_req_ns2__TaskSetDateTime(
	struct soap *soap,
	time_t time_USCOREto_USCOREset,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskSetDateTime *_p = soap_new_ns2__TaskSetDateTime(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSetDateTime::time_USCOREto_USCOREset = time_USCOREto_USCOREset;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline ns2__TaskSetDateTime * soap_new_set_ns2__TaskSetDateTime(
	struct soap *soap,
	time_t time_USCOREto_USCOREset,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskSetDateTime *_p = soap_new_ns2__TaskSetDateTime(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSetDateTime::time_USCOREto_USCOREset = time_USCOREto_USCOREset;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline int soap_write_ns2__TaskSetDateTime(struct soap *soap, ns2__TaskSetDateTime const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSetDateTime", p->soap_type() == SOAP_TYPE_ns2__TaskSetDateTime ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSetDateTime * SOAP_FMAC4 soap_get_ns2__TaskSetDateTime(struct soap*, ns2__TaskSetDateTime *, const char*, const char*);

inline int soap_read_ns2__TaskSetDateTime(struct soap *soap, ns2__TaskSetDateTime *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSetDateTime(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskSetDigitalOutput_DEFINED
#define SOAP_TYPE_ns2__TaskSetDigitalOutput_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskSetDigitalOutput(struct soap*, const char*, int, const ns2__TaskSetDigitalOutput *, const char*);
SOAP_FMAC3 ns2__TaskSetDigitalOutput * SOAP_FMAC4 soap_in_ns2__TaskSetDigitalOutput(struct soap*, const char*, ns2__TaskSetDigitalOutput *, const char*);
SOAP_FMAC1 ns2__TaskSetDigitalOutput * SOAP_FMAC2 soap_instantiate_ns2__TaskSetDigitalOutput(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskSetDigitalOutput * soap_new_ns2__TaskSetDigitalOutput(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskSetDigitalOutput(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskSetDigitalOutput * soap_new_req_ns2__TaskSetDigitalOutput(
	struct soap *soap,
	int __sizedigital_USCOREoutput_USCOREport,
	ns2__DigitalOutputElement **digital_USCOREoutput_USCOREport,
	bool activity_USCOREstate__1,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int serverTask_USCOREID__2)
{
	ns2__TaskSetDigitalOutput *_p = soap_new_ns2__TaskSetDigitalOutput(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSetDigitalOutput::__sizedigital_USCOREoutput_USCOREport = __sizedigital_USCOREoutput_USCOREport;
		_p->ns2__TaskSetDigitalOutput::digital_USCOREoutput_USCOREport = digital_USCOREoutput_USCOREport;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__1;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__2;
	}
	return _p;
}

inline ns2__TaskSetDigitalOutput * soap_new_set_ns2__TaskSetDigitalOutput(
	struct soap *soap,
	int __sizedigital_USCOREoutput_USCOREport,
	ns2__DigitalOutputElement **digital_USCOREoutput_USCOREport,
	bool activity_USCOREstate__1,
	bool *store_USCOREtask__1,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int serverTask_USCOREID__2)
{
	ns2__TaskSetDigitalOutput *_p = soap_new_ns2__TaskSetDigitalOutput(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskSetDigitalOutput::__sizedigital_USCOREoutput_USCOREport = __sizedigital_USCOREoutput_USCOREport;
		_p->ns2__TaskSetDigitalOutput::digital_USCOREoutput_USCOREport = digital_USCOREoutput_USCOREport;
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate__1;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask__1;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__2;
	}
	return _p;
}

inline int soap_write_ns2__TaskSetDigitalOutput(struct soap *soap, ns2__TaskSetDigitalOutput const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskSetDigitalOutput", p->soap_type() == SOAP_TYPE_ns2__TaskSetDigitalOutput ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskSetDigitalOutput * SOAP_FMAC4 soap_get_ns2__TaskSetDigitalOutput(struct soap*, ns2__TaskSetDigitalOutput *, const char*, const char*);

inline int soap_read_ns2__TaskSetDigitalOutput(struct soap *soap, ns2__TaskSetDigitalOutput *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskSetDigitalOutput(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskWithActivity_DEFINED
#define SOAP_TYPE_ns2__TaskWithActivity_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskWithActivity(struct soap*, const char*, int, const ns2__TaskWithActivity *, const char*);
SOAP_FMAC3 ns2__TaskWithActivity * SOAP_FMAC4 soap_in_ns2__TaskWithActivity(struct soap*, const char*, ns2__TaskWithActivity *, const char*);
SOAP_FMAC1 ns2__TaskWithActivity * SOAP_FMAC2 soap_instantiate_ns2__TaskWithActivity(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskWithActivity * soap_new_ns2__TaskWithActivity(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskWithActivity(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskWithActivity * soap_new_req_ns2__TaskWithActivity(
	struct soap *soap,
	bool activity_USCOREstate,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskWithActivity *_p = soap_new_ns2__TaskWithActivity(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline ns2__TaskWithActivity * soap_new_set_ns2__TaskWithActivity(
	struct soap *soap,
	bool activity_USCOREstate,
	bool *store_USCOREtask,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskWithActivity *_p = soap_new_ns2__TaskWithActivity(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskWithActivity::activity_USCOREstate = activity_USCOREstate;
		_p->ns2__TaskWithActivity::store_USCOREtask = store_USCOREtask;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline int soap_write_ns2__TaskWithActivity(struct soap *soap, ns2__TaskWithActivity const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskWithActivity", p->soap_type() == SOAP_TYPE_ns2__TaskWithActivity ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskWithActivity * SOAP_FMAC4 soap_get_ns2__TaskWithActivity(struct soap*, ns2__TaskWithActivity *, const char*, const char*);

inline int soap_read_ns2__TaskWithActivity(struct soap *soap, ns2__TaskWithActivity *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskWithActivity(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskRequestParameters_DEFINED
#define SOAP_TYPE_ns2__TaskRequestParameters_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskRequestParameters(struct soap*, const char*, int, const ns2__TaskRequestParameters *, const char*);
SOAP_FMAC3 ns2__TaskRequestParameters * SOAP_FMAC4 soap_in_ns2__TaskRequestParameters(struct soap*, const char*, ns2__TaskRequestParameters *, const char*);
SOAP_FMAC1 ns2__TaskRequestParameters * SOAP_FMAC2 soap_instantiate_ns2__TaskRequestParameters(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskRequestParameters * soap_new_ns2__TaskRequestParameters(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskRequestParameters(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskRequestParameters * soap_new_req_ns2__TaskRequestParameters(
	struct soap *soap,
	const std::wstring& packet_USCOREurl,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskRequestParameters *_p = soap_new_ns2__TaskRequestParameters(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskRequestParameters::packet_USCOREurl = packet_USCOREurl;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline ns2__TaskRequestParameters * soap_new_set_ns2__TaskRequestParameters(
	struct soap *soap,
	const std::wstring& packet_USCOREurl,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskRequestParameters *_p = soap_new_ns2__TaskRequestParameters(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskRequestParameters::packet_USCOREurl = packet_USCOREurl;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline int soap_write_ns2__TaskRequestParameters(struct soap *soap, ns2__TaskRequestParameters const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskRequestParameters", p->soap_type() == SOAP_TYPE_ns2__TaskRequestParameters ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskRequestParameters * SOAP_FMAC4 soap_get_ns2__TaskRequestParameters(struct soap*, ns2__TaskRequestParameters *, const char*, const char*);

inline int soap_read_ns2__TaskRequestParameters(struct soap *soap, ns2__TaskRequestParameters *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskRequestParameters(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskRequestUpdate_DEFINED
#define SOAP_TYPE_ns2__TaskRequestUpdate_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskRequestUpdate(struct soap*, const char*, int, const ns2__TaskRequestUpdate *, const char*);
SOAP_FMAC3 ns2__TaskRequestUpdate * SOAP_FMAC4 soap_in_ns2__TaskRequestUpdate(struct soap*, const char*, ns2__TaskRequestUpdate *, const char*);
SOAP_FMAC1 ns2__TaskRequestUpdate * SOAP_FMAC2 soap_instantiate_ns2__TaskRequestUpdate(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskRequestUpdate * soap_new_ns2__TaskRequestUpdate(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskRequestUpdate(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskRequestUpdate * soap_new_req_ns2__TaskRequestUpdate(
	struct soap *soap,
	enum ns2__UpdateType update_USCOREtype,
	const std::wstring& packet_USCOREurl,
	unsigned int validity,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskRequestUpdate *_p = soap_new_ns2__TaskRequestUpdate(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskRequestUpdate::update_USCOREtype = update_USCOREtype;
		_p->ns2__TaskRequestUpdate::packet_USCOREurl = packet_USCOREurl;
		_p->ns2__TaskRequestUpdate::validity = validity;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline ns2__TaskRequestUpdate * soap_new_set_ns2__TaskRequestUpdate(
	struct soap *soap,
	enum ns2__UpdateType update_USCOREtype,
	const std::wstring& packet_USCOREurl,
	unsigned int validity,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskRequestUpdate *_p = soap_new_ns2__TaskRequestUpdate(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TaskRequestUpdate::update_USCOREtype = update_USCOREtype;
		_p->ns2__TaskRequestUpdate::packet_USCOREurl = packet_USCOREurl;
		_p->ns2__TaskRequestUpdate::validity = validity;
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline int soap_write_ns2__TaskRequestUpdate(struct soap *soap, ns2__TaskRequestUpdate const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskRequestUpdate", p->soap_type() == SOAP_TYPE_ns2__TaskRequestUpdate ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskRequestUpdate * SOAP_FMAC4 soap_get_ns2__TaskRequestUpdate(struct soap*, ns2__TaskRequestUpdate *, const char*, const char*);

inline int soap_read_ns2__TaskRequestUpdate(struct soap *soap, ns2__TaskRequestUpdate *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskRequestUpdate(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TaskRebootNow_DEFINED
#define SOAP_TYPE_ns2__TaskRebootNow_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TaskRebootNow(struct soap*, const char*, int, const ns2__TaskRebootNow *, const char*);
SOAP_FMAC3 ns2__TaskRebootNow * SOAP_FMAC4 soap_in_ns2__TaskRebootNow(struct soap*, const char*, ns2__TaskRebootNow *, const char*);
SOAP_FMAC1 ns2__TaskRebootNow * SOAP_FMAC2 soap_instantiate_ns2__TaskRebootNow(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TaskRebootNow * soap_new_ns2__TaskRebootNow(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TaskRebootNow(soap, n, NULL, NULL, NULL);
}

inline ns2__TaskRebootNow * soap_new_req_ns2__TaskRebootNow(
	struct soap *soap,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskRebootNow *_p = soap_new_ns2__TaskRebootNow(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline ns2__TaskRebootNow * soap_new_set_ns2__TaskRebootNow(
	struct soap *soap,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int serverTask_USCOREID__1)
{
	ns2__TaskRebootNow *_p = soap_new_ns2__TaskRebootNow(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Task::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID__1;
	}
	return _p;
}

inline int soap_write_ns2__TaskRebootNow(struct soap *soap, ns2__TaskRebootNow const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TaskRebootNow", p->soap_type() == SOAP_TYPE_ns2__TaskRebootNow ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TaskRebootNow * SOAP_FMAC4 soap_get_ns2__TaskRebootNow(struct soap*, ns2__TaskRebootNow *, const char*, const char*);

inline int soap_read_ns2__TaskRebootNow(struct soap *soap, ns2__TaskRebootNow *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TaskRebootNow(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__Task_DEFINED
#define SOAP_TYPE_ns2__Task_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__Task(struct soap*, const char*, int, const ns2__Task *, const char*);
SOAP_FMAC3 ns2__Task * SOAP_FMAC4 soap_in_ns2__Task(struct soap*, const char*, ns2__Task *, const char*);
SOAP_FMAC1 ns2__Task * SOAP_FMAC2 soap_instantiate_ns2__Task(struct soap*, int, const char*, const char*, size_t*);

inline ns2__Task * soap_new_ns2__Task(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__Task(soap, n, NULL, NULL, NULL);
}

inline ns2__Task * soap_new_req_ns2__Task(
	struct soap *soap,
	enum ns2__TaskType task_USCOREtype,
	unsigned int serverTask_USCOREID)
{
	ns2__Task *_p = soap_new_ns2__Task(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Task::task_USCOREtype = task_USCOREtype;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID;
	}
	return _p;
}

inline ns2__Task * soap_new_set_ns2__Task(
	struct soap *soap,
	enum ns2__TaskType task_USCOREtype,
	unsigned int serverTask_USCOREID)
{
	ns2__Task *_p = soap_new_ns2__Task(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Task::task_USCOREtype = task_USCOREtype;
		_p->ns2__Task::serverTask_USCOREID = serverTask_USCOREID;
	}
	return _p;
}

inline int soap_write_ns2__Task(struct soap *soap, ns2__Task const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:Task", p->soap_type() == SOAP_TYPE_ns2__Task ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__Task * SOAP_FMAC4 soap_get_ns2__Task(struct soap*, ns2__Task *, const char*, const char*);

inline int soap_read_ns2__Task(struct soap *soap, ns2__Task *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__Task(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__NotificationContainer_DEFINED
#define SOAP_TYPE_ns2__NotificationContainer_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__NotificationContainer(struct soap*, const char*, int, const ns2__NotificationContainer *, const char*);
SOAP_FMAC3 ns2__NotificationContainer * SOAP_FMAC4 soap_in_ns2__NotificationContainer(struct soap*, const char*, ns2__NotificationContainer *, const char*);
SOAP_FMAC1 ns2__NotificationContainer * SOAP_FMAC2 soap_instantiate_ns2__NotificationContainer(struct soap*, int, const char*, const char*, size_t*);

inline ns2__NotificationContainer * soap_new_ns2__NotificationContainer(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__NotificationContainer(soap, n, NULL, NULL, NULL);
}

inline ns2__NotificationContainer * soap_new_req_ns2__NotificationContainer(
	struct soap *soap,
	int __union_NotificationContainer,
	const union _ns2__union_NotificationContainer& union_NotificationContainer)
{
	ns2__NotificationContainer *_p = soap_new_ns2__NotificationContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__NotificationContainer::__union_NotificationContainer = __union_NotificationContainer;
		_p->ns2__NotificationContainer::union_NotificationContainer = union_NotificationContainer;
	}
	return _p;
}

inline ns2__NotificationContainer * soap_new_set_ns2__NotificationContainer(
	struct soap *soap,
	int __union_NotificationContainer,
	const union _ns2__union_NotificationContainer& union_NotificationContainer)
{
	ns2__NotificationContainer *_p = soap_new_ns2__NotificationContainer(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__NotificationContainer::__union_NotificationContainer = __union_NotificationContainer;
		_p->ns2__NotificationContainer::union_NotificationContainer = union_NotificationContainer;
	}
	return _p;
}

inline int soap_write_ns2__NotificationContainer(struct soap *soap, ns2__NotificationContainer const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:NotificationContainer", p->soap_type() == SOAP_TYPE_ns2__NotificationContainer ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__NotificationContainer * SOAP_FMAC4 soap_get_ns2__NotificationContainer(struct soap*, ns2__NotificationContainer *, const char*, const char*);

inline int soap_read_ns2__NotificationContainer(struct soap *soap, ns2__NotificationContainer *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__NotificationContainer(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__HistoricObjectListNotification_DEFINED
#define SOAP_TYPE_ns2__HistoricObjectListNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__HistoricObjectListNotification(struct soap*, const char*, int, const ns2__HistoricObjectListNotification *, const char*);
SOAP_FMAC3 ns2__HistoricObjectListNotification * SOAP_FMAC4 soap_in_ns2__HistoricObjectListNotification(struct soap*, const char*, ns2__HistoricObjectListNotification *, const char*);
SOAP_FMAC1 ns2__HistoricObjectListNotification * SOAP_FMAC2 soap_instantiate_ns2__HistoricObjectListNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__HistoricObjectListNotification * soap_new_ns2__HistoricObjectListNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__HistoricObjectListNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__HistoricObjectListNotification * soap_new_req_ns2__HistoricObjectListNotification(
	struct soap *soap,
	unsigned int lost_USCOREcount,
	int __sizeobj__1,
	ns2__HistoricObject **obj__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__HistoricObjectListNotification *_p = soap_new_ns2__HistoricObjectListNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__HistoricObjectListNotification::lost_USCOREcount = lost_USCOREcount;
		_p->ns2__HistoricObjectListNotificationBase::__sizeobj = __sizeobj__1;
		_p->ns2__HistoricObjectListNotificationBase::obj = obj__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline ns2__HistoricObjectListNotification * soap_new_set_ns2__HistoricObjectListNotification(
	struct soap *soap,
	unsigned int lost_USCOREcount,
	int __sizeobj__1,
	ns2__HistoricObject **obj__1,
	ns2__BinaryData *binary_USCOREdata__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__HistoricObjectListNotification *_p = soap_new_ns2__HistoricObjectListNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__HistoricObjectListNotification::lost_USCOREcount = lost_USCOREcount;
		_p->ns2__HistoricObjectListNotificationBase::__sizeobj = __sizeobj__1;
		_p->ns2__HistoricObjectListNotificationBase::obj = obj__1;
		_p->ns2__HistoricObjectListNotificationBase::binary_USCOREdata = binary_USCOREdata__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline int soap_write_ns2__HistoricObjectListNotification(struct soap *soap, ns2__HistoricObjectListNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:HistoricObjectListNotification", p->soap_type() == SOAP_TYPE_ns2__HistoricObjectListNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__HistoricObjectListNotification * SOAP_FMAC4 soap_get_ns2__HistoricObjectListNotification(struct soap*, ns2__HistoricObjectListNotification *, const char*, const char*);

inline int soap_read_ns2__HistoricObjectListNotification(struct soap *soap, ns2__HistoricObjectListNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__HistoricObjectListNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__HistoricObjectListNotificationBase_DEFINED
#define SOAP_TYPE_ns2__HistoricObjectListNotificationBase_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__HistoricObjectListNotificationBase(struct soap*, const char*, int, const ns2__HistoricObjectListNotificationBase *, const char*);
SOAP_FMAC3 ns2__HistoricObjectListNotificationBase * SOAP_FMAC4 soap_in_ns2__HistoricObjectListNotificationBase(struct soap*, const char*, ns2__HistoricObjectListNotificationBase *, const char*);
SOAP_FMAC1 ns2__HistoricObjectListNotificationBase * SOAP_FMAC2 soap_instantiate_ns2__HistoricObjectListNotificationBase(struct soap*, int, const char*, const char*, size_t*);

inline ns2__HistoricObjectListNotificationBase * soap_new_ns2__HistoricObjectListNotificationBase(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__HistoricObjectListNotificationBase(soap, n, NULL, NULL, NULL);
}

inline ns2__HistoricObjectListNotificationBase * soap_new_req_ns2__HistoricObjectListNotificationBase(
	struct soap *soap,
	int __sizeobj,
	ns2__HistoricObject **obj,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__HistoricObjectListNotificationBase *_p = soap_new_ns2__HistoricObjectListNotificationBase(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__HistoricObjectListNotificationBase::__sizeobj = __sizeobj;
		_p->ns2__HistoricObjectListNotificationBase::obj = obj;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline ns2__HistoricObjectListNotificationBase * soap_new_set_ns2__HistoricObjectListNotificationBase(
	struct soap *soap,
	int __sizeobj,
	ns2__HistoricObject **obj,
	ns2__BinaryData *binary_USCOREdata,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__HistoricObjectListNotificationBase *_p = soap_new_ns2__HistoricObjectListNotificationBase(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__HistoricObjectListNotificationBase::__sizeobj = __sizeobj;
		_p->ns2__HistoricObjectListNotificationBase::obj = obj;
		_p->ns2__HistoricObjectListNotificationBase::binary_USCOREdata = binary_USCOREdata;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline int soap_write_ns2__HistoricObjectListNotificationBase(struct soap *soap, ns2__HistoricObjectListNotificationBase const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:HistoricObjectListNotificationBase", p->soap_type() == SOAP_TYPE_ns2__HistoricObjectListNotificationBase ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__HistoricObjectListNotificationBase * SOAP_FMAC4 soap_get_ns2__HistoricObjectListNotificationBase(struct soap*, ns2__HistoricObjectListNotificationBase *, const char*, const char*);

inline int soap_read_ns2__HistoricObjectListNotificationBase(struct soap *soap, ns2__HistoricObjectListNotificationBase *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__HistoricObjectListNotificationBase(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CurrentObjectListNotification_DEFINED
#define SOAP_TYPE_ns2__CurrentObjectListNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CurrentObjectListNotification(struct soap*, const char*, int, const ns2__CurrentObjectListNotification *, const char*);
SOAP_FMAC3 ns2__CurrentObjectListNotification * SOAP_FMAC4 soap_in_ns2__CurrentObjectListNotification(struct soap*, const char*, ns2__CurrentObjectListNotification *, const char*);
SOAP_FMAC1 ns2__CurrentObjectListNotification * SOAP_FMAC2 soap_instantiate_ns2__CurrentObjectListNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CurrentObjectListNotification * soap_new_ns2__CurrentObjectListNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CurrentObjectListNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__CurrentObjectListNotification * soap_new_req_ns2__CurrentObjectListNotification(
	struct soap *soap,
	int __sizeobj,
	ns2__CurrentObject **obj,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__CurrentObjectListNotification *_p = soap_new_ns2__CurrentObjectListNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CurrentObjectListNotification::__sizeobj = __sizeobj;
		_p->ns2__CurrentObjectListNotification::obj = obj;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline ns2__CurrentObjectListNotification * soap_new_set_ns2__CurrentObjectListNotification(
	struct soap *soap,
	int __sizeobj,
	ns2__CurrentObject **obj,
	ns2__BinaryData *binary_USCOREdata,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__CurrentObjectListNotification *_p = soap_new_ns2__CurrentObjectListNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CurrentObjectListNotification::__sizeobj = __sizeobj;
		_p->ns2__CurrentObjectListNotification::obj = obj;
		_p->ns2__CurrentObjectListNotification::binary_USCOREdata = binary_USCOREdata;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline int soap_write_ns2__CurrentObjectListNotification(struct soap *soap, ns2__CurrentObjectListNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CurrentObjectListNotification", p->soap_type() == SOAP_TYPE_ns2__CurrentObjectListNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CurrentObjectListNotification * SOAP_FMAC4 soap_get_ns2__CurrentObjectListNotification(struct soap*, ns2__CurrentObjectListNotification *, const char*, const char*);

inline int soap_read_ns2__CurrentObjectListNotification(struct soap *soap, ns2__CurrentObjectListNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CurrentObjectListNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__HistoricObject_DEFINED
#define SOAP_TYPE_ns2__HistoricObject_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__HistoricObject(struct soap*, const char*, int, const ns2__HistoricObject *, const char*);
SOAP_FMAC3 ns2__HistoricObject * SOAP_FMAC4 soap_in_ns2__HistoricObject(struct soap*, const char*, ns2__HistoricObject *, const char*);
SOAP_FMAC1 ns2__HistoricObject * SOAP_FMAC2 soap_instantiate_ns2__HistoricObject(struct soap*, int, const char*, const char*, size_t*);

inline ns2__HistoricObject * soap_new_ns2__HistoricObject(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__HistoricObject(soap, n, NULL, NULL, NULL);
}

inline ns2__HistoricObject * soap_new_req_ns2__HistoricObject(
	struct soap *soap,
	ns2__Coordinate_USCORE3D *exit,
	time_t exit_USCOREtime,
	unsigned int height,
	ns2__Coordinate_USCORE3D *entry__1,
	unsigned int id__1,
	const std::wstring& dwell__1)
{
	ns2__HistoricObject *_p = soap_new_ns2__HistoricObject(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__HistoricObject::exit = exit;
		_p->ns2__HistoricObject::exit_USCOREtime = exit_USCOREtime;
		_p->ns2__HistoricObject::height = height;
		_p->ns2__Object::entry = entry__1;
		_p->ns2__Object::id = id__1;
		_p->ns2__Object::dwell = dwell__1;
	}
	return _p;
}

inline ns2__HistoricObject * soap_new_set_ns2__HistoricObject(
	struct soap *soap,
	ns2__Coordinate_USCORE3D *exit,
	time_t exit_USCOREtime,
	unsigned int height,
	ns2__Coordinate_USCORE3D *entry__1,
	unsigned int id__1,
	std::wstring *objClass__1,
	const std::wstring& zone__1,
	const std::wstring& dwell__1)
{
	ns2__HistoricObject *_p = soap_new_ns2__HistoricObject(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__HistoricObject::exit = exit;
		_p->ns2__HistoricObject::exit_USCOREtime = exit_USCOREtime;
		_p->ns2__HistoricObject::height = height;
		_p->ns2__Object::entry = entry__1;
		_p->ns2__Object::id = id__1;
		_p->ns2__Object::objClass = objClass__1;
		_p->ns2__Object::zone = zone__1;
		_p->ns2__Object::dwell = dwell__1;
	}
	return _p;
}

inline int soap_write_ns2__HistoricObject(struct soap *soap, ns2__HistoricObject const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:HistoricObject", p->soap_type() == SOAP_TYPE_ns2__HistoricObject ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__HistoricObject * SOAP_FMAC4 soap_get_ns2__HistoricObject(struct soap*, ns2__HistoricObject *, const char*, const char*);

inline int soap_read_ns2__HistoricObject(struct soap *soap, ns2__HistoricObject *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__HistoricObject(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CurrentObject_DEFINED
#define SOAP_TYPE_ns2__CurrentObject_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CurrentObject(struct soap*, const char*, int, const ns2__CurrentObject *, const char*);
SOAP_FMAC3 ns2__CurrentObject * SOAP_FMAC4 soap_in_ns2__CurrentObject(struct soap*, const char*, ns2__CurrentObject *, const char*);
SOAP_FMAC1 ns2__CurrentObject * SOAP_FMAC2 soap_instantiate_ns2__CurrentObject(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CurrentObject * soap_new_ns2__CurrentObject(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CurrentObject(soap, n, NULL, NULL, NULL);
}

inline ns2__CurrentObject * soap_new_req_ns2__CurrentObject(
	struct soap *soap,
	ns2__Coordinate_USCORE3D *pos,
	ns2__Coordinate_USCORE2D *mov,
	ns2__Coordinate_USCORE3D *entry__1,
	unsigned int id__1,
	const std::wstring& dwell__1)
{
	ns2__CurrentObject *_p = soap_new_ns2__CurrentObject(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CurrentObject::pos = pos;
		_p->ns2__CurrentObject::mov = mov;
		_p->ns2__Object::entry = entry__1;
		_p->ns2__Object::id = id__1;
		_p->ns2__Object::dwell = dwell__1;
	}
	return _p;
}

inline ns2__CurrentObject * soap_new_set_ns2__CurrentObject(
	struct soap *soap,
	ns2__Coordinate_USCORE3D *pos,
	ns2__Coordinate_USCORE2D *mov,
	ns2__Coordinate_USCORE3D *entry__1,
	unsigned int id__1,
	std::wstring *objClass__1,
	const std::wstring& zone__1,
	const std::wstring& dwell__1)
{
	ns2__CurrentObject *_p = soap_new_ns2__CurrentObject(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CurrentObject::pos = pos;
		_p->ns2__CurrentObject::mov = mov;
		_p->ns2__Object::entry = entry__1;
		_p->ns2__Object::id = id__1;
		_p->ns2__Object::objClass = objClass__1;
		_p->ns2__Object::zone = zone__1;
		_p->ns2__Object::dwell = dwell__1;
	}
	return _p;
}

inline int soap_write_ns2__CurrentObject(struct soap *soap, ns2__CurrentObject const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CurrentObject", p->soap_type() == SOAP_TYPE_ns2__CurrentObject ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CurrentObject * SOAP_FMAC4 soap_get_ns2__CurrentObject(struct soap*, ns2__CurrentObject *, const char*, const char*);

inline int soap_read_ns2__CurrentObject(struct soap *soap, ns2__CurrentObject *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CurrentObject(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__Object_DEFINED
#define SOAP_TYPE_ns2__Object_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__Object(struct soap*, const char*, int, const ns2__Object *, const char*);
SOAP_FMAC3 ns2__Object * SOAP_FMAC4 soap_in_ns2__Object(struct soap*, const char*, ns2__Object *, const char*);
SOAP_FMAC1 ns2__Object * SOAP_FMAC2 soap_instantiate_ns2__Object(struct soap*, int, const char*, const char*, size_t*);

inline ns2__Object * soap_new_ns2__Object(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__Object(soap, n, NULL, NULL, NULL);
}

inline ns2__Object * soap_new_req_ns2__Object(
	struct soap *soap,
	ns2__Coordinate_USCORE3D *entry,
	unsigned int id,
	const std::wstring& dwell)
{
	ns2__Object *_p = soap_new_ns2__Object(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Object::entry = entry;
		_p->ns2__Object::id = id;
		_p->ns2__Object::dwell = dwell;
	}
	return _p;
}

inline ns2__Object * soap_new_set_ns2__Object(
	struct soap *soap,
	ns2__Coordinate_USCORE3D *entry,
	unsigned int id,
	std::wstring *objClass,
	const std::wstring& zone,
	const std::wstring& dwell)
{
	ns2__Object *_p = soap_new_ns2__Object(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Object::entry = entry;
		_p->ns2__Object::id = id;
		_p->ns2__Object::objClass = objClass;
		_p->ns2__Object::zone = zone;
		_p->ns2__Object::dwell = dwell;
	}
	return _p;
}

inline int soap_write_ns2__Object(struct soap *soap, ns2__Object const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:Object", p->soap_type() == SOAP_TYPE_ns2__Object ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__Object * SOAP_FMAC4 soap_get_ns2__Object(struct soap*, ns2__Object *, const char*, const char*);

inline int soap_read_ns2__Object(struct soap *soap, ns2__Object *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__Object(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__Coordinate_USCORE3D_DEFINED
#define SOAP_TYPE_ns2__Coordinate_USCORE3D_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__Coordinate_USCORE3D(struct soap*, const char*, int, const ns2__Coordinate_USCORE3D *, const char*);
SOAP_FMAC3 ns2__Coordinate_USCORE3D * SOAP_FMAC4 soap_in_ns2__Coordinate_USCORE3D(struct soap*, const char*, ns2__Coordinate_USCORE3D *, const char*);
SOAP_FMAC1 ns2__Coordinate_USCORE3D * SOAP_FMAC2 soap_instantiate_ns2__Coordinate_USCORE3D(struct soap*, int, const char*, const char*, size_t*);

inline ns2__Coordinate_USCORE3D * soap_new_ns2__Coordinate_USCORE3D(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__Coordinate_USCORE3D(soap, n, NULL, NULL, NULL);
}

inline ns2__Coordinate_USCORE3D * soap_new_req_ns2__Coordinate_USCORE3D(
	struct soap *soap,
	int z,
	int x__1,
	int y__1)
{
	ns2__Coordinate_USCORE3D *_p = soap_new_ns2__Coordinate_USCORE3D(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Coordinate_USCORE3D::z = z;
		_p->ns2__Coordinate_USCORE2D::x = x__1;
		_p->ns2__Coordinate_USCORE2D::y = y__1;
	}
	return _p;
}

inline ns2__Coordinate_USCORE3D * soap_new_set_ns2__Coordinate_USCORE3D(
	struct soap *soap,
	int z,
	int x__1,
	int y__1)
{
	ns2__Coordinate_USCORE3D *_p = soap_new_ns2__Coordinate_USCORE3D(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Coordinate_USCORE3D::z = z;
		_p->ns2__Coordinate_USCORE2D::x = x__1;
		_p->ns2__Coordinate_USCORE2D::y = y__1;
	}
	return _p;
}

inline int soap_write_ns2__Coordinate_USCORE3D(struct soap *soap, ns2__Coordinate_USCORE3D const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:Coordinate_3D", p->soap_type() == SOAP_TYPE_ns2__Coordinate_USCORE3D ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__Coordinate_USCORE3D * SOAP_FMAC4 soap_get_ns2__Coordinate_USCORE3D(struct soap*, ns2__Coordinate_USCORE3D *, const char*, const char*);

inline int soap_read_ns2__Coordinate_USCORE3D(struct soap *soap, ns2__Coordinate_USCORE3D *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__Coordinate_USCORE3D(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__Coordinate_USCORE2D_DEFINED
#define SOAP_TYPE_ns2__Coordinate_USCORE2D_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__Coordinate_USCORE2D(struct soap*, const char*, int, const ns2__Coordinate_USCORE2D *, const char*);
SOAP_FMAC3 ns2__Coordinate_USCORE2D * SOAP_FMAC4 soap_in_ns2__Coordinate_USCORE2D(struct soap*, const char*, ns2__Coordinate_USCORE2D *, const char*);
SOAP_FMAC1 ns2__Coordinate_USCORE2D * SOAP_FMAC2 soap_instantiate_ns2__Coordinate_USCORE2D(struct soap*, int, const char*, const char*, size_t*);

inline ns2__Coordinate_USCORE2D * soap_new_ns2__Coordinate_USCORE2D(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__Coordinate_USCORE2D(soap, n, NULL, NULL, NULL);
}

inline ns2__Coordinate_USCORE2D * soap_new_req_ns2__Coordinate_USCORE2D(
	struct soap *soap,
	int x,
	int y)
{
	ns2__Coordinate_USCORE2D *_p = soap_new_ns2__Coordinate_USCORE2D(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Coordinate_USCORE2D::x = x;
		_p->ns2__Coordinate_USCORE2D::y = y;
	}
	return _p;
}

inline ns2__Coordinate_USCORE2D * soap_new_set_ns2__Coordinate_USCORE2D(
	struct soap *soap,
	int x,
	int y)
{
	ns2__Coordinate_USCORE2D *_p = soap_new_ns2__Coordinate_USCORE2D(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Coordinate_USCORE2D::x = x;
		_p->ns2__Coordinate_USCORE2D::y = y;
	}
	return _p;
}

inline int soap_write_ns2__Coordinate_USCORE2D(struct soap *soap, ns2__Coordinate_USCORE2D const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:Coordinate_2D", p->soap_type() == SOAP_TYPE_ns2__Coordinate_USCORE2D ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__Coordinate_USCORE2D * SOAP_FMAC4 soap_get_ns2__Coordinate_USCORE2D(struct soap*, ns2__Coordinate_USCORE2D *, const char*, const char*);

inline int soap_read_ns2__Coordinate_USCORE2D(struct soap *soap, ns2__Coordinate_USCORE2D *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__Coordinate_USCORE2D(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__FeatureInfoNotification_DEFINED
#define SOAP_TYPE_ns2__FeatureInfoNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__FeatureInfoNotification(struct soap*, const char*, int, const ns2__FeatureInfoNotification *, const char*);
SOAP_FMAC3 ns2__FeatureInfoNotification * SOAP_FMAC4 soap_in_ns2__FeatureInfoNotification(struct soap*, const char*, ns2__FeatureInfoNotification *, const char*);
SOAP_FMAC1 ns2__FeatureInfoNotification * SOAP_FMAC2 soap_instantiate_ns2__FeatureInfoNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__FeatureInfoNotification * soap_new_ns2__FeatureInfoNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__FeatureInfoNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__FeatureInfoNotification * soap_new_req_ns2__FeatureInfoNotification(
	struct soap *soap,
	ns2__CountChannelsFeatureInfo *active_USCOREcount_USCOREchannels,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__FeatureInfoNotification *_p = soap_new_ns2__FeatureInfoNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__FeatureInfoNotification::active_USCOREcount_USCOREchannels = active_USCOREcount_USCOREchannels;
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline ns2__FeatureInfoNotification * soap_new_set_ns2__FeatureInfoNotification(
	struct soap *soap,
	ns2__CountChannelsFeatureInfo *active_USCOREcount_USCOREchannels,
	ns2__ZoneChannelsFeatureInfo *active_USCOREzone_USCOREchannels,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	std::wstring *version__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__FeatureInfoNotification *_p = soap_new_ns2__FeatureInfoNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__FeatureInfoNotification::active_USCOREcount_USCOREchannels = active_USCOREcount_USCOREchannels;
		_p->ns2__FeatureInfoNotification::active_USCOREzone_USCOREchannels = active_USCOREzone_USCOREchannels;
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::version = version__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline int soap_write_ns2__FeatureInfoNotification(struct soap *soap, ns2__FeatureInfoNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:FeatureInfoNotification", p->soap_type() == SOAP_TYPE_ns2__FeatureInfoNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__FeatureInfoNotification * SOAP_FMAC4 soap_get_ns2__FeatureInfoNotification(struct soap*, ns2__FeatureInfoNotification *, const char*, const char*);

inline int soap_read_ns2__FeatureInfoNotification(struct soap *soap, ns2__FeatureInfoNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__FeatureInfoNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ZoneChannelsFeatureInfo_DEFINED
#define SOAP_TYPE_ns2__ZoneChannelsFeatureInfo_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ZoneChannelsFeatureInfo(struct soap*, const char*, int, const ns2__ZoneChannelsFeatureInfo *, const char*);
SOAP_FMAC3 ns2__ZoneChannelsFeatureInfo * SOAP_FMAC4 soap_in_ns2__ZoneChannelsFeatureInfo(struct soap*, const char*, ns2__ZoneChannelsFeatureInfo *, const char*);
SOAP_FMAC1 ns2__ZoneChannelsFeatureInfo * SOAP_FMAC2 soap_instantiate_ns2__ZoneChannelsFeatureInfo(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ZoneChannelsFeatureInfo * soap_new_ns2__ZoneChannelsFeatureInfo(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ZoneChannelsFeatureInfo(soap, n, NULL, NULL, NULL);
}

inline ns2__ZoneChannelsFeatureInfo * soap_new_req_ns2__ZoneChannelsFeatureInfo(
	struct soap *soap,
	int __sizezone_USCOREchannel,
	ns2__ZoneChannelFeatureInfo **zone_USCOREchannel)
{
	ns2__ZoneChannelsFeatureInfo *_p = soap_new_ns2__ZoneChannelsFeatureInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ZoneChannelsFeatureInfo::__sizezone_USCOREchannel = __sizezone_USCOREchannel;
		_p->ns2__ZoneChannelsFeatureInfo::zone_USCOREchannel = zone_USCOREchannel;
	}
	return _p;
}

inline ns2__ZoneChannelsFeatureInfo * soap_new_set_ns2__ZoneChannelsFeatureInfo(
	struct soap *soap,
	int __sizezone_USCOREchannel,
	ns2__ZoneChannelFeatureInfo **zone_USCOREchannel)
{
	ns2__ZoneChannelsFeatureInfo *_p = soap_new_ns2__ZoneChannelsFeatureInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ZoneChannelsFeatureInfo::__sizezone_USCOREchannel = __sizezone_USCOREchannel;
		_p->ns2__ZoneChannelsFeatureInfo::zone_USCOREchannel = zone_USCOREchannel;
	}
	return _p;
}

inline int soap_write_ns2__ZoneChannelsFeatureInfo(struct soap *soap, ns2__ZoneChannelsFeatureInfo const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ZoneChannelsFeatureInfo", p->soap_type() == SOAP_TYPE_ns2__ZoneChannelsFeatureInfo ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ZoneChannelsFeatureInfo * SOAP_FMAC4 soap_get_ns2__ZoneChannelsFeatureInfo(struct soap*, ns2__ZoneChannelsFeatureInfo *, const char*, const char*);

inline int soap_read_ns2__ZoneChannelsFeatureInfo(struct soap *soap, ns2__ZoneChannelsFeatureInfo *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ZoneChannelsFeatureInfo(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ZoneChannelFeatureInfo_DEFINED
#define SOAP_TYPE_ns2__ZoneChannelFeatureInfo_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ZoneChannelFeatureInfo(struct soap*, const char*, int, const ns2__ZoneChannelFeatureInfo *, const char*);
SOAP_FMAC3 ns2__ZoneChannelFeatureInfo * SOAP_FMAC4 soap_in_ns2__ZoneChannelFeatureInfo(struct soap*, const char*, ns2__ZoneChannelFeatureInfo *, const char*);
SOAP_FMAC1 ns2__ZoneChannelFeatureInfo * SOAP_FMAC2 soap_instantiate_ns2__ZoneChannelFeatureInfo(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ZoneChannelFeatureInfo * soap_new_ns2__ZoneChannelFeatureInfo(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ZoneChannelFeatureInfo(soap, n, NULL, NULL, NULL);
}

inline ns2__ZoneChannelFeatureInfo * soap_new_req_ns2__ZoneChannelFeatureInfo(
	struct soap *soap,
	const std::wstring& name)
{
	ns2__ZoneChannelFeatureInfo *_p = soap_new_ns2__ZoneChannelFeatureInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ZoneChannelFeatureInfo::name = name;
	}
	return _p;
}

inline ns2__ZoneChannelFeatureInfo * soap_new_set_ns2__ZoneChannelFeatureInfo(
	struct soap *soap,
	const std::wstring& name,
	std::wstring *objClass)
{
	ns2__ZoneChannelFeatureInfo *_p = soap_new_ns2__ZoneChannelFeatureInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ZoneChannelFeatureInfo::name = name;
		_p->ns2__ZoneChannelFeatureInfo::objClass = objClass;
	}
	return _p;
}

inline int soap_write_ns2__ZoneChannelFeatureInfo(struct soap *soap, ns2__ZoneChannelFeatureInfo const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ZoneChannelFeatureInfo", p->soap_type() == SOAP_TYPE_ns2__ZoneChannelFeatureInfo ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ZoneChannelFeatureInfo * SOAP_FMAC4 soap_get_ns2__ZoneChannelFeatureInfo(struct soap*, ns2__ZoneChannelFeatureInfo *, const char*, const char*);

inline int soap_read_ns2__ZoneChannelFeatureInfo(struct soap *soap, ns2__ZoneChannelFeatureInfo *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ZoneChannelFeatureInfo(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CountChannelsFeatureInfo_DEFINED
#define SOAP_TYPE_ns2__CountChannelsFeatureInfo_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CountChannelsFeatureInfo(struct soap*, const char*, int, const ns2__CountChannelsFeatureInfo *, const char*);
SOAP_FMAC3 ns2__CountChannelsFeatureInfo * SOAP_FMAC4 soap_in_ns2__CountChannelsFeatureInfo(struct soap*, const char*, ns2__CountChannelsFeatureInfo *, const char*);
SOAP_FMAC1 ns2__CountChannelsFeatureInfo * SOAP_FMAC2 soap_instantiate_ns2__CountChannelsFeatureInfo(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CountChannelsFeatureInfo * soap_new_ns2__CountChannelsFeatureInfo(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CountChannelsFeatureInfo(soap, n, NULL, NULL, NULL);
}

inline ns2__CountChannelsFeatureInfo * soap_new_req_ns2__CountChannelsFeatureInfo(
	struct soap *soap,
	int __sizecount_USCOREchannel,
	ns2__CountChannelFeatureInfo **count_USCOREchannel)
{
	ns2__CountChannelsFeatureInfo *_p = soap_new_ns2__CountChannelsFeatureInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountChannelsFeatureInfo::__sizecount_USCOREchannel = __sizecount_USCOREchannel;
		_p->ns2__CountChannelsFeatureInfo::count_USCOREchannel = count_USCOREchannel;
	}
	return _p;
}

inline ns2__CountChannelsFeatureInfo * soap_new_set_ns2__CountChannelsFeatureInfo(
	struct soap *soap,
	int __sizecount_USCOREchannel,
	ns2__CountChannelFeatureInfo **count_USCOREchannel)
{
	ns2__CountChannelsFeatureInfo *_p = soap_new_ns2__CountChannelsFeatureInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountChannelsFeatureInfo::__sizecount_USCOREchannel = __sizecount_USCOREchannel;
		_p->ns2__CountChannelsFeatureInfo::count_USCOREchannel = count_USCOREchannel;
	}
	return _p;
}

inline int soap_write_ns2__CountChannelsFeatureInfo(struct soap *soap, ns2__CountChannelsFeatureInfo const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CountChannelsFeatureInfo", p->soap_type() == SOAP_TYPE_ns2__CountChannelsFeatureInfo ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CountChannelsFeatureInfo * SOAP_FMAC4 soap_get_ns2__CountChannelsFeatureInfo(struct soap*, ns2__CountChannelsFeatureInfo *, const char*, const char*);

inline int soap_read_ns2__CountChannelsFeatureInfo(struct soap *soap, ns2__CountChannelsFeatureInfo *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CountChannelsFeatureInfo(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CountChannelFeatureInfo_DEFINED
#define SOAP_TYPE_ns2__CountChannelFeatureInfo_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CountChannelFeatureInfo(struct soap*, const char*, int, const ns2__CountChannelFeatureInfo *, const char*);
SOAP_FMAC3 ns2__CountChannelFeatureInfo * SOAP_FMAC4 soap_in_ns2__CountChannelFeatureInfo(struct soap*, const char*, ns2__CountChannelFeatureInfo *, const char*);
SOAP_FMAC1 ns2__CountChannelFeatureInfo * SOAP_FMAC2 soap_instantiate_ns2__CountChannelFeatureInfo(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CountChannelFeatureInfo * soap_new_ns2__CountChannelFeatureInfo(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CountChannelFeatureInfo(soap, n, NULL, NULL, NULL);
}

inline ns2__CountChannelFeatureInfo * soap_new_req_ns2__CountChannelFeatureInfo(
	struct soap *soap,
	const std::wstring& name)
{
	ns2__CountChannelFeatureInfo *_p = soap_new_ns2__CountChannelFeatureInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountChannelFeatureInfo::name = name;
	}
	return _p;
}

inline ns2__CountChannelFeatureInfo * soap_new_set_ns2__CountChannelFeatureInfo(
	struct soap *soap,
	const std::wstring& name,
	std::wstring *objClass)
{
	ns2__CountChannelFeatureInfo *_p = soap_new_ns2__CountChannelFeatureInfo(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountChannelFeatureInfo::name = name;
		_p->ns2__CountChannelFeatureInfo::objClass = objClass;
	}
	return _p;
}

inline int soap_write_ns2__CountChannelFeatureInfo(struct soap *soap, ns2__CountChannelFeatureInfo const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CountChannelFeatureInfo", p->soap_type() == SOAP_TYPE_ns2__CountChannelFeatureInfo ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CountChannelFeatureInfo * SOAP_FMAC4 soap_get_ns2__CountChannelFeatureInfo(struct soap*, ns2__CountChannelFeatureInfo *, const char*, const char*);

inline int soap_read_ns2__CountChannelFeatureInfo(struct soap *soap, ns2__CountChannelFeatureInfo *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CountChannelFeatureInfo(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__StartupNotification_DEFINED
#define SOAP_TYPE_ns2__StartupNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__StartupNotification(struct soap*, const char*, int, const ns2__StartupNotification *, const char*);
SOAP_FMAC3 ns2__StartupNotification * SOAP_FMAC4 soap_in_ns2__StartupNotification(struct soap*, const char*, ns2__StartupNotification *, const char*);
SOAP_FMAC1 ns2__StartupNotification * SOAP_FMAC2 soap_instantiate_ns2__StartupNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__StartupNotification * soap_new_ns2__StartupNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__StartupNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__StartupNotification * soap_new_req_ns2__StartupNotification(
	struct soap *soap,
	enum ns2__RebootType reboot_USCOREtype,
	const std::wstring& xml_USCOREversion,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__StartupNotification *_p = soap_new_ns2__StartupNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__StartupNotification::reboot_USCOREtype = reboot_USCOREtype;
		_p->ns2__StartupNotification::xml_USCOREversion = xml_USCOREversion;
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline ns2__StartupNotification * soap_new_set_ns2__StartupNotification(
	struct soap *soap,
	enum ns2__RebootType reboot_USCOREtype,
	const std::wstring& xml_USCOREversion,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	std::wstring *version__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__StartupNotification *_p = soap_new_ns2__StartupNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__StartupNotification::reboot_USCOREtype = reboot_USCOREtype;
		_p->ns2__StartupNotification::xml_USCOREversion = xml_USCOREversion;
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::version = version__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline int soap_write_ns2__StartupNotification(struct soap *soap, ns2__StartupNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:StartupNotification", p->soap_type() == SOAP_TYPE_ns2__StartupNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__StartupNotification * SOAP_FMAC4 soap_get_ns2__StartupNotification(struct soap*, ns2__StartupNotification *, const char*, const char*);

inline int soap_read_ns2__StartupNotification(struct soap *soap, ns2__StartupNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__StartupNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__AliveNotification_DEFINED
#define SOAP_TYPE_ns2__AliveNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__AliveNotification(struct soap*, const char*, int, const ns2__AliveNotification *, const char*);
SOAP_FMAC3 ns2__AliveNotification * SOAP_FMAC4 soap_in_ns2__AliveNotification(struct soap*, const char*, ns2__AliveNotification *, const char*);
SOAP_FMAC1 ns2__AliveNotification * SOAP_FMAC2 soap_instantiate_ns2__AliveNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__AliveNotification * soap_new_ns2__AliveNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__AliveNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__AliveNotification * soap_new_req_ns2__AliveNotification(
	struct soap *soap,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__AliveNotification *_p = soap_new_ns2__AliveNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline ns2__AliveNotification * soap_new_set_ns2__AliveNotification(
	struct soap *soap,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	std::wstring *version__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__AliveNotification *_p = soap_new_ns2__AliveNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::version = version__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline int soap_write_ns2__AliveNotification(struct soap *soap, ns2__AliveNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:AliveNotification", p->soap_type() == SOAP_TYPE_ns2__AliveNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__AliveNotification * SOAP_FMAC4 soap_get_ns2__AliveNotification(struct soap*, ns2__AliveNotification *, const char*, const char*);

inline int soap_read_ns2__AliveNotification(struct soap *soap, ns2__AliveNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__AliveNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ErrorLogfilesNotification_DEFINED
#define SOAP_TYPE_ns2__ErrorLogfilesNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ErrorLogfilesNotification(struct soap*, const char*, int, const ns2__ErrorLogfilesNotification *, const char*);
SOAP_FMAC3 ns2__ErrorLogfilesNotification * SOAP_FMAC4 soap_in_ns2__ErrorLogfilesNotification(struct soap*, const char*, ns2__ErrorLogfilesNotification *, const char*);
SOAP_FMAC1 ns2__ErrorLogfilesNotification * SOAP_FMAC2 soap_instantiate_ns2__ErrorLogfilesNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ErrorLogfilesNotification * soap_new_ns2__ErrorLogfilesNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ErrorLogfilesNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__ErrorLogfilesNotification * soap_new_req_ns2__ErrorLogfilesNotification(
	struct soap *soap,
	ns2__BinaryData *error_USCORElog_USCOREdata,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__ErrorLogfilesNotification *_p = soap_new_ns2__ErrorLogfilesNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ErrorLogfilesNotification::error_USCORElog_USCOREdata = error_USCORElog_USCOREdata;
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline ns2__ErrorLogfilesNotification * soap_new_set_ns2__ErrorLogfilesNotification(
	struct soap *soap,
	ns2__BinaryData *error_USCORElog_USCOREdata,
	const std::wstring& ip_USCOREaddress__1,
	const std::wstring& firmware_USCOREversion__1,
	const std::wstring& customer_USCOREversion__1,
	std::wstring *version__1,
	enum ns2__OSD_USCOREState osd_USCOREstate__2,
	const std::wstring& mac_USCOREaddress__3,
	const std::wstring& customer_USCOREID__3,
	enum ns2__TaskType task_USCOREtype__3,
	unsigned int notification_USCOREID__3,
	unsigned int serverTask_USCOREID__3,
	const std::wstring& callerType_USCOREID__3,
	time_t timestamp__3)
{
	ns2__ErrorLogfilesNotification *_p = soap_new_ns2__ErrorLogfilesNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ErrorLogfilesNotification::error_USCORElog_USCOREdata = error_USCORElog_USCOREdata;
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress__1;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion__1;
		_p->ns2__ExtendedNotificationBase::version = version__1;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__2;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__3;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__3;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__3;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__3;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__3;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__3;
		_p->ns2__NotificationBase::timestamp = timestamp__3;
	}
	return _p;
}

inline int soap_write_ns2__ErrorLogfilesNotification(struct soap *soap, ns2__ErrorLogfilesNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ErrorLogfilesNotification", p->soap_type() == SOAP_TYPE_ns2__ErrorLogfilesNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ErrorLogfilesNotification * SOAP_FMAC4 soap_get_ns2__ErrorLogfilesNotification(struct soap*, ns2__ErrorLogfilesNotification *, const char*, const char*);

inline int soap_read_ns2__ErrorLogfilesNotification(struct soap *soap, ns2__ErrorLogfilesNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ErrorLogfilesNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ParameterNotification_DEFINED
#define SOAP_TYPE_ns2__ParameterNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ParameterNotification(struct soap*, const char*, int, const ns2__ParameterNotification *, const char*);
SOAP_FMAC3 ns2__ParameterNotification * SOAP_FMAC4 soap_in_ns2__ParameterNotification(struct soap*, const char*, ns2__ParameterNotification *, const char*);
SOAP_FMAC1 ns2__ParameterNotification * SOAP_FMAC2 soap_instantiate_ns2__ParameterNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ParameterNotification * soap_new_ns2__ParameterNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ParameterNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__ParameterNotification * soap_new_req_ns2__ParameterNotification(
	struct soap *soap,
	ns2__BinaryData *parameter_USCOREdata,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__ParameterNotification *_p = soap_new_ns2__ParameterNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ParameterNotification::parameter_USCOREdata = parameter_USCOREdata;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline ns2__ParameterNotification * soap_new_set_ns2__ParameterNotification(
	struct soap *soap,
	ns2__BinaryData *parameter_USCOREdata,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__ParameterNotification *_p = soap_new_ns2__ParameterNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ParameterNotification::parameter_USCOREdata = parameter_USCOREdata;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline int soap_write_ns2__ParameterNotification(struct soap *soap, ns2__ParameterNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ParameterNotification", p->soap_type() == SOAP_TYPE_ns2__ParameterNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ParameterNotification * SOAP_FMAC4 soap_get_ns2__ParameterNotification(struct soap*, ns2__ParameterNotification *, const char*, const char*);

inline int soap_read_ns2__ParameterNotification(struct soap *soap, ns2__ParameterNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ParameterNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__LogfilesNotification_DEFINED
#define SOAP_TYPE_ns2__LogfilesNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__LogfilesNotification(struct soap*, const char*, int, const ns2__LogfilesNotification *, const char*);
SOAP_FMAC3 ns2__LogfilesNotification * SOAP_FMAC4 soap_in_ns2__LogfilesNotification(struct soap*, const char*, ns2__LogfilesNotification *, const char*);
SOAP_FMAC1 ns2__LogfilesNotification * SOAP_FMAC2 soap_instantiate_ns2__LogfilesNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__LogfilesNotification * soap_new_ns2__LogfilesNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__LogfilesNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__LogfilesNotification * soap_new_req_ns2__LogfilesNotification(
	struct soap *soap,
	ns2__BinaryData *log_USCOREdata,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__LogfilesNotification *_p = soap_new_ns2__LogfilesNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__LogfilesNotification::log_USCOREdata = log_USCOREdata;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline ns2__LogfilesNotification * soap_new_set_ns2__LogfilesNotification(
	struct soap *soap,
	ns2__BinaryData *log_USCOREdata,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__LogfilesNotification *_p = soap_new_ns2__LogfilesNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__LogfilesNotification::log_USCOREdata = log_USCOREdata;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline int soap_write_ns2__LogfilesNotification(struct soap *soap, ns2__LogfilesNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:LogfilesNotification", p->soap_type() == SOAP_TYPE_ns2__LogfilesNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__LogfilesNotification * SOAP_FMAC4 soap_get_ns2__LogfilesNotification(struct soap*, ns2__LogfilesNotification *, const char*, const char*);

inline int soap_read_ns2__LogfilesNotification(struct soap *soap, ns2__LogfilesNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__LogfilesNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CameraImagesNotification_DEFINED
#define SOAP_TYPE_ns2__CameraImagesNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CameraImagesNotification(struct soap*, const char*, int, const ns2__CameraImagesNotification *, const char*);
SOAP_FMAC3 ns2__CameraImagesNotification * SOAP_FMAC4 soap_in_ns2__CameraImagesNotification(struct soap*, const char*, ns2__CameraImagesNotification *, const char*);
SOAP_FMAC1 ns2__CameraImagesNotification * SOAP_FMAC2 soap_instantiate_ns2__CameraImagesNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CameraImagesNotification * soap_new_ns2__CameraImagesNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CameraImagesNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__CameraImagesNotification * soap_new_req_ns2__CameraImagesNotification(
	struct soap *soap,
	ns2__BinaryData *camera_USCOREimages,
	ns2__BinaryData *eval_USCOREmap,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__CameraImagesNotification *_p = soap_new_ns2__CameraImagesNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CameraImagesNotification::camera_USCOREimages = camera_USCOREimages;
		_p->ns2__CameraImagesNotification::eval_USCOREmap = eval_USCOREmap;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline ns2__CameraImagesNotification * soap_new_set_ns2__CameraImagesNotification(
	struct soap *soap,
	ns2__BinaryData *camera_USCOREimages,
	ns2__BinaryData *eval_USCOREmap,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__CameraImagesNotification *_p = soap_new_ns2__CameraImagesNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CameraImagesNotification::camera_USCOREimages = camera_USCOREimages;
		_p->ns2__CameraImagesNotification::eval_USCOREmap = eval_USCOREmap;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline int soap_write_ns2__CameraImagesNotification(struct soap *soap, ns2__CameraImagesNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CameraImagesNotification", p->soap_type() == SOAP_TYPE_ns2__CameraImagesNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CameraImagesNotification * SOAP_FMAC4 soap_get_ns2__CameraImagesNotification(struct soap*, ns2__CameraImagesNotification *, const char*, const char*);

inline int soap_read_ns2__CameraImagesNotification(struct soap *soap, ns2__CameraImagesNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CameraImagesNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ClearZoneNotification_DEFINED
#define SOAP_TYPE_ns2__ClearZoneNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ClearZoneNotification(struct soap*, const char*, int, const ns2__ClearZoneNotification *, const char*);
SOAP_FMAC3 ns2__ClearZoneNotification * SOAP_FMAC4 soap_in_ns2__ClearZoneNotification(struct soap*, const char*, ns2__ClearZoneNotification *, const char*);
SOAP_FMAC1 ns2__ClearZoneNotification * SOAP_FMAC2 soap_instantiate_ns2__ClearZoneNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ClearZoneNotification * soap_new_ns2__ClearZoneNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ClearZoneNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__ClearZoneNotification * soap_new_req_ns2__ClearZoneNotification(
	struct soap *soap,
	ns2__ClearZoneID *clear_USCOREzone_USCOREid,
	bool is_USCOREblocked,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__ClearZoneNotification *_p = soap_new_ns2__ClearZoneNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ClearZoneNotification::clear_USCOREzone_USCOREid = clear_USCOREzone_USCOREid;
		_p->ns2__ClearZoneNotification::is_USCOREblocked = is_USCOREblocked;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline ns2__ClearZoneNotification * soap_new_set_ns2__ClearZoneNotification(
	struct soap *soap,
	ns2__ClearZoneID *clear_USCOREzone_USCOREid,
	bool is_USCOREblocked,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__ClearZoneNotification *_p = soap_new_ns2__ClearZoneNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ClearZoneNotification::clear_USCOREzone_USCOREid = clear_USCOREzone_USCOREid;
		_p->ns2__ClearZoneNotification::is_USCOREblocked = is_USCOREblocked;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline int soap_write_ns2__ClearZoneNotification(struct soap *soap, ns2__ClearZoneNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ClearZoneNotification", p->soap_type() == SOAP_TYPE_ns2__ClearZoneNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ClearZoneNotification * SOAP_FMAC4 soap_get_ns2__ClearZoneNotification(struct soap*, ns2__ClearZoneNotification *, const char*, const char*);

inline int soap_read_ns2__ClearZoneNotification(struct soap *soap, ns2__ClearZoneNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ClearZoneNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DigitalInputNotification_DEFINED
#define SOAP_TYPE_ns2__DigitalInputNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DigitalInputNotification(struct soap*, const char*, int, const ns2__DigitalInputNotification *, const char*);
SOAP_FMAC3 ns2__DigitalInputNotification * SOAP_FMAC4 soap_in_ns2__DigitalInputNotification(struct soap*, const char*, ns2__DigitalInputNotification *, const char*);
SOAP_FMAC1 ns2__DigitalInputNotification * SOAP_FMAC2 soap_instantiate_ns2__DigitalInputNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__DigitalInputNotification * soap_new_ns2__DigitalInputNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__DigitalInputNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__DigitalInputNotification * soap_new_req_ns2__DigitalInputNotification(
	struct soap *soap,
	int __sizedigital_USCOREinput_USCOREport,
	ns2__DigitalInputElement **digital_USCOREinput_USCOREport,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__DigitalInputNotification *_p = soap_new_ns2__DigitalInputNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalInputNotification::__sizedigital_USCOREinput_USCOREport = __sizedigital_USCOREinput_USCOREport;
		_p->ns2__DigitalInputNotification::digital_USCOREinput_USCOREport = digital_USCOREinput_USCOREport;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline ns2__DigitalInputNotification * soap_new_set_ns2__DigitalInputNotification(
	struct soap *soap,
	int __sizedigital_USCOREinput_USCOREport,
	ns2__DigitalInputElement **digital_USCOREinput_USCOREport,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__DigitalInputNotification *_p = soap_new_ns2__DigitalInputNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalInputNotification::__sizedigital_USCOREinput_USCOREport = __sizedigital_USCOREinput_USCOREport;
		_p->ns2__DigitalInputNotification::digital_USCOREinput_USCOREport = digital_USCOREinput_USCOREport;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline int soap_write_ns2__DigitalInputNotification(struct soap *soap, ns2__DigitalInputNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:DigitalInputNotification", p->soap_type() == SOAP_TYPE_ns2__DigitalInputNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__DigitalInputNotification * SOAP_FMAC4 soap_get_ns2__DigitalInputNotification(struct soap*, ns2__DigitalInputNotification *, const char*, const char*);

inline int soap_read_ns2__DigitalInputNotification(struct soap *soap, ns2__DigitalInputNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__DigitalInputNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__FillNotification_DEFINED
#define SOAP_TYPE_ns2__FillNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__FillNotification(struct soap*, const char*, int, const ns2__FillNotification *, const char*);
SOAP_FMAC3 ns2__FillNotification * SOAP_FMAC4 soap_in_ns2__FillNotification(struct soap*, const char*, ns2__FillNotification *, const char*);
SOAP_FMAC1 ns2__FillNotification * SOAP_FMAC2 soap_instantiate_ns2__FillNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__FillNotification * soap_new_ns2__FillNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__FillNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__FillNotification * soap_new_req_ns2__FillNotification(
	struct soap *soap,
	ns2__FillRegionID *fill_USCOREregion_USCOREid,
	unsigned int fill_USCORElevel,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__FillNotification *_p = soap_new_ns2__FillNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__FillNotification::fill_USCOREregion_USCOREid = fill_USCOREregion_USCOREid;
		_p->ns2__FillNotification::fill_USCORElevel = fill_USCORElevel;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline ns2__FillNotification * soap_new_set_ns2__FillNotification(
	struct soap *soap,
	ns2__FillRegionID *fill_USCOREregion_USCOREid,
	unsigned int fill_USCORElevel,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__FillNotification *_p = soap_new_ns2__FillNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__FillNotification::fill_USCOREregion_USCOREid = fill_USCOREregion_USCOREid;
		_p->ns2__FillNotification::fill_USCORElevel = fill_USCORElevel;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline int soap_write_ns2__FillNotification(struct soap *soap, ns2__FillNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:FillNotification", p->soap_type() == SOAP_TYPE_ns2__FillNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__FillNotification * SOAP_FMAC4 soap_get_ns2__FillNotification(struct soap*, ns2__FillNotification *, const char*, const char*);

inline int soap_read_ns2__FillNotification(struct soap *soap, ns2__FillNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__FillNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ZoneChannelsNotification_DEFINED
#define SOAP_TYPE_ns2__ZoneChannelsNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ZoneChannelsNotification(struct soap*, const char*, int, const ns2__ZoneChannelsNotification *, const char*);
SOAP_FMAC3 ns2__ZoneChannelsNotification * SOAP_FMAC4 soap_in_ns2__ZoneChannelsNotification(struct soap*, const char*, ns2__ZoneChannelsNotification *, const char*);
SOAP_FMAC1 ns2__ZoneChannelsNotification * SOAP_FMAC2 soap_instantiate_ns2__ZoneChannelsNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ZoneChannelsNotification * soap_new_ns2__ZoneChannelsNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ZoneChannelsNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__ZoneChannelsNotification * soap_new_req_ns2__ZoneChannelsNotification(
	struct soap *soap,
	int __sizezone_USCOREchannel,
	ns2__ZoneData **zone_USCOREchannel,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__ZoneChannelsNotification *_p = soap_new_ns2__ZoneChannelsNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ZoneChannelsNotification::__sizezone_USCOREchannel = __sizezone_USCOREchannel;
		_p->ns2__ZoneChannelsNotification::zone_USCOREchannel = zone_USCOREchannel;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline ns2__ZoneChannelsNotification * soap_new_set_ns2__ZoneChannelsNotification(
	struct soap *soap,
	int __sizezone_USCOREchannel,
	ns2__ZoneData **zone_USCOREchannel,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__ZoneChannelsNotification *_p = soap_new_ns2__ZoneChannelsNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ZoneChannelsNotification::__sizezone_USCOREchannel = __sizezone_USCOREchannel;
		_p->ns2__ZoneChannelsNotification::zone_USCOREchannel = zone_USCOREchannel;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline int soap_write_ns2__ZoneChannelsNotification(struct soap *soap, ns2__ZoneChannelsNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ZoneChannelsNotification", p->soap_type() == SOAP_TYPE_ns2__ZoneChannelsNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ZoneChannelsNotification * SOAP_FMAC4 soap_get_ns2__ZoneChannelsNotification(struct soap*, ns2__ZoneChannelsNotification *, const char*, const char*);

inline int soap_read_ns2__ZoneChannelsNotification(struct soap *soap, ns2__ZoneChannelsNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ZoneChannelsNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ZoneData_DEFINED
#define SOAP_TYPE_ns2__ZoneData_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ZoneData(struct soap*, const char*, int, const ns2__ZoneData *, const char*);
SOAP_FMAC3 ns2__ZoneData * SOAP_FMAC4 soap_in_ns2__ZoneData(struct soap*, const char*, ns2__ZoneData *, const char*);
SOAP_FMAC1 ns2__ZoneData * SOAP_FMAC2 soap_instantiate_ns2__ZoneData(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ZoneData * soap_new_ns2__ZoneData(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ZoneData(soap, n, NULL, NULL, NULL);
}

inline ns2__ZoneData * soap_new_req_ns2__ZoneData(
	struct soap *soap,
	unsigned int fill_USCORElevel)
{
	ns2__ZoneData *_p = soap_new_ns2__ZoneData(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ZoneData::fill_USCORElevel = fill_USCORElevel;
	}
	return _p;
}

inline ns2__ZoneData * soap_new_set_ns2__ZoneData(
	struct soap *soap,
	std::wstring *zone_USCOREname,
	std::wstring *objClass,
	unsigned int fill_USCORElevel)
{
	ns2__ZoneData *_p = soap_new_ns2__ZoneData(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ZoneData::zone_USCOREname = zone_USCOREname;
		_p->ns2__ZoneData::objClass = objClass;
		_p->ns2__ZoneData::fill_USCORElevel = fill_USCORElevel;
	}
	return _p;
}

inline int soap_write_ns2__ZoneData(struct soap *soap, ns2__ZoneData const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ZoneData", p->soap_type() == SOAP_TYPE_ns2__ZoneData ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ZoneData * SOAP_FMAC4 soap_get_ns2__ZoneData(struct soap*, ns2__ZoneData *, const char*, const char*);

inline int soap_read_ns2__ZoneData(struct soap *soap, ns2__ZoneData *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ZoneData(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CountChannelsNotification_DEFINED
#define SOAP_TYPE_ns2__CountChannelsNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CountChannelsNotification(struct soap*, const char*, int, const ns2__CountChannelsNotification *, const char*);
SOAP_FMAC3 ns2__CountChannelsNotification * SOAP_FMAC4 soap_in_ns2__CountChannelsNotification(struct soap*, const char*, ns2__CountChannelsNotification *, const char*);
SOAP_FMAC1 ns2__CountChannelsNotification * SOAP_FMAC2 soap_instantiate_ns2__CountChannelsNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CountChannelsNotification * soap_new_ns2__CountChannelsNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CountChannelsNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__CountChannelsNotification * soap_new_req_ns2__CountChannelsNotification(
	struct soap *soap,
	int __sizecount_USCOREchannel,
	ns2__CountChannelData **count_USCOREchannel,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__CountChannelsNotification *_p = soap_new_ns2__CountChannelsNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountChannelsNotification::__sizecount_USCOREchannel = __sizecount_USCOREchannel;
		_p->ns2__CountChannelsNotification::count_USCOREchannel = count_USCOREchannel;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline ns2__CountChannelsNotification * soap_new_set_ns2__CountChannelsNotification(
	struct soap *soap,
	int __sizecount_USCOREchannel,
	ns2__CountChannelData **count_USCOREchannel,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__CountChannelsNotification *_p = soap_new_ns2__CountChannelsNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountChannelsNotification::__sizecount_USCOREchannel = __sizecount_USCOREchannel;
		_p->ns2__CountChannelsNotification::count_USCOREchannel = count_USCOREchannel;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline int soap_write_ns2__CountChannelsNotification(struct soap *soap, ns2__CountChannelsNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CountChannelsNotification", p->soap_type() == SOAP_TYPE_ns2__CountChannelsNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CountChannelsNotification * SOAP_FMAC4 soap_get_ns2__CountChannelsNotification(struct soap*, ns2__CountChannelsNotification *, const char*, const char*);

inline int soap_read_ns2__CountChannelsNotification(struct soap *soap, ns2__CountChannelsNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CountChannelsNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CountChannelData_DEFINED
#define SOAP_TYPE_ns2__CountChannelData_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CountChannelData(struct soap*, const char*, int, const ns2__CountChannelData *, const char*);
SOAP_FMAC3 ns2__CountChannelData * SOAP_FMAC4 soap_in_ns2__CountChannelData(struct soap*, const char*, ns2__CountChannelData *, const char*);
SOAP_FMAC1 ns2__CountChannelData * SOAP_FMAC2 soap_instantiate_ns2__CountChannelData(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CountChannelData * soap_new_ns2__CountChannelData(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CountChannelData(soap, n, NULL, NULL, NULL);
}

inline ns2__CountChannelData * soap_new_req_ns2__CountChannelData(
	struct soap *soap,
	unsigned int count_USCOREin,
	unsigned int count_USCOREout)
{
	ns2__CountChannelData *_p = soap_new_ns2__CountChannelData(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountChannelData::count_USCOREin = count_USCOREin;
		_p->ns2__CountChannelData::count_USCOREout = count_USCOREout;
	}
	return _p;
}

inline ns2__CountChannelData * soap_new_set_ns2__CountChannelData(
	struct soap *soap,
	std::wstring *channel_USCOREname,
	std::wstring *objClass,
	unsigned int count_USCOREin,
	unsigned int count_USCOREout)
{
	ns2__CountChannelData *_p = soap_new_ns2__CountChannelData(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountChannelData::channel_USCOREname = channel_USCOREname;
		_p->ns2__CountChannelData::objClass = objClass;
		_p->ns2__CountChannelData::count_USCOREin = count_USCOREin;
		_p->ns2__CountChannelData::count_USCOREout = count_USCOREout;
	}
	return _p;
}

inline int soap_write_ns2__CountChannelData(struct soap *soap, ns2__CountChannelData const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CountChannelData", p->soap_type() == SOAP_TYPE_ns2__CountChannelData ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CountChannelData * SOAP_FMAC4 soap_get_ns2__CountChannelData(struct soap*, ns2__CountChannelData *, const char*, const char*);

inline int soap_read_ns2__CountChannelData(struct soap *soap, ns2__CountChannelData *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CountChannelData(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CountNotification_DEFINED
#define SOAP_TYPE_ns2__CountNotification_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CountNotification(struct soap*, const char*, int, const ns2__CountNotification *, const char*);
SOAP_FMAC3 ns2__CountNotification * SOAP_FMAC4 soap_in_ns2__CountNotification(struct soap*, const char*, ns2__CountNotification *, const char*);
SOAP_FMAC1 ns2__CountNotification * SOAP_FMAC2 soap_instantiate_ns2__CountNotification(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CountNotification * soap_new_ns2__CountNotification(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CountNotification(soap, n, NULL, NULL, NULL);
}

inline ns2__CountNotification * soap_new_req_ns2__CountNotification(
	struct soap *soap,
	ns2__CountingGateID *counting_USCOREgate_USCOREid,
	unsigned int count_USCOREin,
	unsigned int count_USCOREout,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__CountNotification *_p = soap_new_ns2__CountNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountNotification::counting_USCOREgate_USCOREid = counting_USCOREgate_USCOREid;
		_p->ns2__CountNotification::count_USCOREin = count_USCOREin;
		_p->ns2__CountNotification::count_USCOREout = count_USCOREout;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline ns2__CountNotification * soap_new_set_ns2__CountNotification(
	struct soap *soap,
	ns2__CountingGateID *counting_USCOREgate_USCOREid,
	unsigned int count_USCOREin,
	unsigned int count_USCOREout,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__CountNotification *_p = soap_new_ns2__CountNotification(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountNotification::counting_USCOREgate_USCOREid = counting_USCOREgate_USCOREid;
		_p->ns2__CountNotification::count_USCOREin = count_USCOREin;
		_p->ns2__CountNotification::count_USCOREout = count_USCOREout;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline int soap_write_ns2__CountNotification(struct soap *soap, ns2__CountNotification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CountNotification", p->soap_type() == SOAP_TYPE_ns2__CountNotification ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CountNotification * SOAP_FMAC4 soap_get_ns2__CountNotification(struct soap*, ns2__CountNotification *, const char*, const char*);

inline int soap_read_ns2__CountNotification(struct soap *soap, ns2__CountNotification *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CountNotification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ExtendedNotificationBase_DEFINED
#define SOAP_TYPE_ns2__ExtendedNotificationBase_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ExtendedNotificationBase(struct soap*, const char*, int, const ns2__ExtendedNotificationBase *, const char*);
SOAP_FMAC3 ns2__ExtendedNotificationBase * SOAP_FMAC4 soap_in_ns2__ExtendedNotificationBase(struct soap*, const char*, ns2__ExtendedNotificationBase *, const char*);
SOAP_FMAC1 ns2__ExtendedNotificationBase * SOAP_FMAC2 soap_instantiate_ns2__ExtendedNotificationBase(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ExtendedNotificationBase * soap_new_ns2__ExtendedNotificationBase(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ExtendedNotificationBase(soap, n, NULL, NULL, NULL);
}

inline ns2__ExtendedNotificationBase * soap_new_req_ns2__ExtendedNotificationBase(
	struct soap *soap,
	const std::wstring& ip_USCOREaddress,
	const std::wstring& firmware_USCOREversion,
	const std::wstring& customer_USCOREversion,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__ExtendedNotificationBase *_p = soap_new_ns2__ExtendedNotificationBase(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline ns2__ExtendedNotificationBase * soap_new_set_ns2__ExtendedNotificationBase(
	struct soap *soap,
	const std::wstring& ip_USCOREaddress,
	const std::wstring& firmware_USCOREversion,
	const std::wstring& customer_USCOREversion,
	std::wstring *version,
	enum ns2__OSD_USCOREState osd_USCOREstate__1,
	const std::wstring& mac_USCOREaddress__2,
	const std::wstring& customer_USCOREID__2,
	enum ns2__TaskType task_USCOREtype__2,
	unsigned int notification_USCOREID__2,
	unsigned int serverTask_USCOREID__2,
	const std::wstring& callerType_USCOREID__2,
	time_t timestamp__2)
{
	ns2__ExtendedNotificationBase *_p = soap_new_ns2__ExtendedNotificationBase(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ExtendedNotificationBase::ip_USCOREaddress = ip_USCOREaddress;
		_p->ns2__ExtendedNotificationBase::firmware_USCOREversion = firmware_USCOREversion;
		_p->ns2__ExtendedNotificationBase::customer_USCOREversion = customer_USCOREversion;
		_p->ns2__ExtendedNotificationBase::version = version;
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate__1;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__2;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__2;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__2;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__2;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__2;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__2;
		_p->ns2__NotificationBase::timestamp = timestamp__2;
	}
	return _p;
}

inline int soap_write_ns2__ExtendedNotificationBase(struct soap *soap, ns2__ExtendedNotificationBase const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ExtendedNotificationBase", p->soap_type() == SOAP_TYPE_ns2__ExtendedNotificationBase ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ExtendedNotificationBase * SOAP_FMAC4 soap_get_ns2__ExtendedNotificationBase(struct soap*, ns2__ExtendedNotificationBase *, const char*, const char*);

inline int soap_read_ns2__ExtendedNotificationBase(struct soap *soap, ns2__ExtendedNotificationBase *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ExtendedNotificationBase(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__NotificationWithOSDState_DEFINED
#define SOAP_TYPE_ns2__NotificationWithOSDState_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__NotificationWithOSDState(struct soap*, const char*, int, const ns2__NotificationWithOSDState *, const char*);
SOAP_FMAC3 ns2__NotificationWithOSDState * SOAP_FMAC4 soap_in_ns2__NotificationWithOSDState(struct soap*, const char*, ns2__NotificationWithOSDState *, const char*);
SOAP_FMAC1 ns2__NotificationWithOSDState * SOAP_FMAC2 soap_instantiate_ns2__NotificationWithOSDState(struct soap*, int, const char*, const char*, size_t*);

inline ns2__NotificationWithOSDState * soap_new_ns2__NotificationWithOSDState(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__NotificationWithOSDState(soap, n, NULL, NULL, NULL);
}

inline ns2__NotificationWithOSDState * soap_new_req_ns2__NotificationWithOSDState(
	struct soap *soap,
	enum ns2__OSD_USCOREState osd_USCOREstate,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__NotificationWithOSDState *_p = soap_new_ns2__NotificationWithOSDState(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline ns2__NotificationWithOSDState * soap_new_set_ns2__NotificationWithOSDState(
	struct soap *soap,
	enum ns2__OSD_USCOREState osd_USCOREstate,
	const std::wstring& mac_USCOREaddress__1,
	const std::wstring& customer_USCOREID__1,
	enum ns2__TaskType task_USCOREtype__1,
	unsigned int notification_USCOREID__1,
	unsigned int serverTask_USCOREID__1,
	const std::wstring& callerType_USCOREID__1,
	time_t timestamp__1)
{
	ns2__NotificationWithOSDState *_p = soap_new_ns2__NotificationWithOSDState(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__NotificationWithOSDState::osd_USCOREstate = osd_USCOREstate;
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress__1;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID__1;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype__1;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID__1;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID__1;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID__1;
		_p->ns2__NotificationBase::timestamp = timestamp__1;
	}
	return _p;
}

inline int soap_write_ns2__NotificationWithOSDState(struct soap *soap, ns2__NotificationWithOSDState const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:NotificationWithOSDState", p->soap_type() == SOAP_TYPE_ns2__NotificationWithOSDState ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__NotificationWithOSDState * SOAP_FMAC4 soap_get_ns2__NotificationWithOSDState(struct soap*, ns2__NotificationWithOSDState *, const char*, const char*);

inline int soap_read_ns2__NotificationWithOSDState(struct soap *soap, ns2__NotificationWithOSDState *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__NotificationWithOSDState(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__NotificationBase_DEFINED
#define SOAP_TYPE_ns2__NotificationBase_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__NotificationBase(struct soap*, const char*, int, const ns2__NotificationBase *, const char*);
SOAP_FMAC3 ns2__NotificationBase * SOAP_FMAC4 soap_in_ns2__NotificationBase(struct soap*, const char*, ns2__NotificationBase *, const char*);
SOAP_FMAC1 ns2__NotificationBase * SOAP_FMAC2 soap_instantiate_ns2__NotificationBase(struct soap*, int, const char*, const char*, size_t*);

inline ns2__NotificationBase * soap_new_ns2__NotificationBase(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__NotificationBase(soap, n, NULL, NULL, NULL);
}

inline ns2__NotificationBase * soap_new_req_ns2__NotificationBase(
	struct soap *soap,
	const std::wstring& mac_USCOREaddress,
	const std::wstring& customer_USCOREID,
	enum ns2__TaskType task_USCOREtype,
	unsigned int notification_USCOREID,
	unsigned int serverTask_USCOREID,
	const std::wstring& callerType_USCOREID,
	time_t timestamp)
{
	ns2__NotificationBase *_p = soap_new_ns2__NotificationBase(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID;
		_p->ns2__NotificationBase::timestamp = timestamp;
	}
	return _p;
}

inline ns2__NotificationBase * soap_new_set_ns2__NotificationBase(
	struct soap *soap,
	const std::wstring& mac_USCOREaddress,
	const std::wstring& customer_USCOREID,
	enum ns2__TaskType task_USCOREtype,
	unsigned int notification_USCOREID,
	unsigned int serverTask_USCOREID,
	const std::wstring& callerType_USCOREID,
	time_t timestamp)
{
	ns2__NotificationBase *_p = soap_new_ns2__NotificationBase(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__NotificationBase::mac_USCOREaddress = mac_USCOREaddress;
		_p->ns2__NotificationBase::customer_USCOREID = customer_USCOREID;
		_p->ns2__NotificationBase::task_USCOREtype = task_USCOREtype;
		_p->ns2__NotificationBase::notification_USCOREID = notification_USCOREID;
		_p->ns2__NotificationBase::serverTask_USCOREID = serverTask_USCOREID;
		_p->ns2__NotificationBase::callerType_USCOREID = callerType_USCOREID;
		_p->ns2__NotificationBase::timestamp = timestamp;
	}
	return _p;
}

inline int soap_write_ns2__NotificationBase(struct soap *soap, ns2__NotificationBase const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:NotificationBase", p->soap_type() == SOAP_TYPE_ns2__NotificationBase ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__NotificationBase * SOAP_FMAC4 soap_get_ns2__NotificationBase(struct soap*, ns2__NotificationBase *, const char*, const char*);

inline int soap_read_ns2__NotificationBase(struct soap *soap, ns2__NotificationBase *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__NotificationBase(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__BinaryData_DEFINED
#define SOAP_TYPE_ns2__BinaryData_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__BinaryData(struct soap*, const char*, int, const ns2__BinaryData *, const char*);
SOAP_FMAC3 ns2__BinaryData * SOAP_FMAC4 soap_in_ns2__BinaryData(struct soap*, const char*, ns2__BinaryData *, const char*);
SOAP_FMAC1 ns2__BinaryData * SOAP_FMAC2 soap_instantiate_ns2__BinaryData(struct soap*, int, const char*, const char*, size_t*);

inline ns2__BinaryData * soap_new_ns2__BinaryData(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__BinaryData(soap, n, NULL, NULL, NULL);
}

inline ns2__BinaryData * soap_new_req_ns2__BinaryData(
	struct soap *soap,
	const xsd__base64Binary& bin_USCOREdata)
{
	ns2__BinaryData *_p = soap_new_ns2__BinaryData(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__BinaryData::bin_USCOREdata = bin_USCOREdata;
	}
	return _p;
}

inline ns2__BinaryData * soap_new_set_ns2__BinaryData(
	struct soap *soap,
	const xsd__base64Binary& bin_USCOREdata)
{
	ns2__BinaryData *_p = soap_new_ns2__BinaryData(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__BinaryData::bin_USCOREdata = bin_USCOREdata;
	}
	return _p;
}

inline int soap_write_ns2__BinaryData(struct soap *soap, ns2__BinaryData const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:BinaryData", p->soap_type() == SOAP_TYPE_ns2__BinaryData ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__BinaryData * SOAP_FMAC4 soap_get_ns2__BinaryData(struct soap*, ns2__BinaryData *, const char*, const char*);

inline int soap_read_ns2__BinaryData(struct soap *soap, ns2__BinaryData *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__BinaryData(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ClearZoneID_DEFINED
#define SOAP_TYPE_ns2__ClearZoneID_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ClearZoneID(struct soap*, const char*, int, const ns2__ClearZoneID *, const char*);
SOAP_FMAC3 ns2__ClearZoneID * SOAP_FMAC4 soap_in_ns2__ClearZoneID(struct soap*, const char*, ns2__ClearZoneID *, const char*);
SOAP_FMAC1 ns2__ClearZoneID * SOAP_FMAC2 soap_instantiate_ns2__ClearZoneID(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ClearZoneID * soap_new_ns2__ClearZoneID(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ClearZoneID(soap, n, NULL, NULL, NULL);
}

inline ns2__ClearZoneID * soap_new_req_ns2__ClearZoneID(
	struct soap *soap,
	const std::wstring& id)
{
	ns2__ClearZoneID *_p = soap_new_ns2__ClearZoneID(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ClearZoneID::id = id;
	}
	return _p;
}

inline ns2__ClearZoneID * soap_new_set_ns2__ClearZoneID(
	struct soap *soap,
	const std::wstring& id)
{
	ns2__ClearZoneID *_p = soap_new_ns2__ClearZoneID(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ClearZoneID::id = id;
	}
	return _p;
}

inline int soap_write_ns2__ClearZoneID(struct soap *soap, ns2__ClearZoneID const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ClearZoneID", p->soap_type() == SOAP_TYPE_ns2__ClearZoneID ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ClearZoneID * SOAP_FMAC4 soap_get_ns2__ClearZoneID(struct soap*, ns2__ClearZoneID *, const char*, const char*);

inline int soap_read_ns2__ClearZoneID(struct soap *soap, ns2__ClearZoneID *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ClearZoneID(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__FillRegionID_DEFINED
#define SOAP_TYPE_ns2__FillRegionID_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__FillRegionID(struct soap*, const char*, int, const ns2__FillRegionID *, const char*);
SOAP_FMAC3 ns2__FillRegionID * SOAP_FMAC4 soap_in_ns2__FillRegionID(struct soap*, const char*, ns2__FillRegionID *, const char*);
SOAP_FMAC1 ns2__FillRegionID * SOAP_FMAC2 soap_instantiate_ns2__FillRegionID(struct soap*, int, const char*, const char*, size_t*);

inline ns2__FillRegionID * soap_new_ns2__FillRegionID(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__FillRegionID(soap, n, NULL, NULL, NULL);
}

inline ns2__FillRegionID * soap_new_req_ns2__FillRegionID(
	struct soap *soap,
	const std::wstring& id)
{
	ns2__FillRegionID *_p = soap_new_ns2__FillRegionID(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__FillRegionID::id = id;
	}
	return _p;
}

inline ns2__FillRegionID * soap_new_set_ns2__FillRegionID(
	struct soap *soap,
	const std::wstring& id)
{
	ns2__FillRegionID *_p = soap_new_ns2__FillRegionID(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__FillRegionID::id = id;
	}
	return _p;
}

inline int soap_write_ns2__FillRegionID(struct soap *soap, ns2__FillRegionID const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:FillRegionID", p->soap_type() == SOAP_TYPE_ns2__FillRegionID ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__FillRegionID * SOAP_FMAC4 soap_get_ns2__FillRegionID(struct soap*, ns2__FillRegionID *, const char*, const char*);

inline int soap_read_ns2__FillRegionID(struct soap *soap, ns2__FillRegionID *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__FillRegionID(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CountingGateID_DEFINED
#define SOAP_TYPE_ns2__CountingGateID_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CountingGateID(struct soap*, const char*, int, const ns2__CountingGateID *, const char*);
SOAP_FMAC3 ns2__CountingGateID * SOAP_FMAC4 soap_in_ns2__CountingGateID(struct soap*, const char*, ns2__CountingGateID *, const char*);
SOAP_FMAC1 ns2__CountingGateID * SOAP_FMAC2 soap_instantiate_ns2__CountingGateID(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CountingGateID * soap_new_ns2__CountingGateID(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CountingGateID(soap, n, NULL, NULL, NULL);
}

inline ns2__CountingGateID * soap_new_req_ns2__CountingGateID(
	struct soap *soap,
	const std::wstring& id)
{
	ns2__CountingGateID *_p = soap_new_ns2__CountingGateID(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountingGateID::id = id;
	}
	return _p;
}

inline ns2__CountingGateID * soap_new_set_ns2__CountingGateID(
	struct soap *soap,
	const std::wstring& id)
{
	ns2__CountingGateID *_p = soap_new_ns2__CountingGateID(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountingGateID::id = id;
	}
	return _p;
}

inline int soap_write_ns2__CountingGateID(struct soap *soap, ns2__CountingGateID const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CountingGateID", p->soap_type() == SOAP_TYPE_ns2__CountingGateID ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CountingGateID * SOAP_FMAC4 soap_get_ns2__CountingGateID(struct soap*, ns2__CountingGateID *, const char*, const char*);

inline int soap_read_ns2__CountingGateID(struct soap *soap, ns2__CountingGateID *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CountingGateID(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__Trigger_DEFINED
#define SOAP_TYPE_ns2__Trigger_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__Trigger(struct soap*, const char*, int, const ns2__Trigger *, const char*);
SOAP_FMAC3 ns2__Trigger * SOAP_FMAC4 soap_in_ns2__Trigger(struct soap*, const char*, ns2__Trigger *, const char*);
SOAP_FMAC1 ns2__Trigger * SOAP_FMAC2 soap_instantiate_ns2__Trigger(struct soap*, int, const char*, const char*, size_t*);

inline ns2__Trigger * soap_new_ns2__Trigger(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__Trigger(soap, n, NULL, NULL, NULL);
}

inline ns2__Trigger * soap_new_req_ns2__Trigger(
	struct soap *soap,
	int __union_Trigger,
	const union _ns2__union_Trigger& union_Trigger)
{
	ns2__Trigger *_p = soap_new_ns2__Trigger(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Trigger::__union_Trigger = __union_Trigger;
		_p->ns2__Trigger::union_Trigger = union_Trigger;
	}
	return _p;
}

inline ns2__Trigger * soap_new_set_ns2__Trigger(
	struct soap *soap,
	int __union_Trigger,
	const union _ns2__union_Trigger& union_Trigger)
{
	ns2__Trigger *_p = soap_new_ns2__Trigger(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Trigger::__union_Trigger = __union_Trigger;
		_p->ns2__Trigger::union_Trigger = union_Trigger;
	}
	return _p;
}

inline int soap_write_ns2__Trigger(struct soap *soap, ns2__Trigger const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:Trigger", p->soap_type() == SOAP_TYPE_ns2__Trigger ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__Trigger * SOAP_FMAC4 soap_get_ns2__Trigger(struct soap*, ns2__Trigger *, const char*, const char*);

inline int soap_read_ns2__Trigger(struct soap *soap, ns2__Trigger *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__Trigger(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__TimeTrigger_DEFINED
#define SOAP_TYPE_ns2__TimeTrigger_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__TimeTrigger(struct soap*, const char*, int, const ns2__TimeTrigger *, const char*);
SOAP_FMAC3 ns2__TimeTrigger * SOAP_FMAC4 soap_in_ns2__TimeTrigger(struct soap*, const char*, ns2__TimeTrigger *, const char*);
SOAP_FMAC1 ns2__TimeTrigger * SOAP_FMAC2 soap_instantiate_ns2__TimeTrigger(struct soap*, int, const char*, const char*, size_t*);

inline ns2__TimeTrigger * soap_new_ns2__TimeTrigger(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__TimeTrigger(soap, n, NULL, NULL, NULL);
}

inline ns2__TimeTrigger * soap_new_req_ns2__TimeTrigger(
	struct soap *soap,
	ns2__ClockTime *start)
{
	ns2__TimeTrigger *_p = soap_new_ns2__TimeTrigger(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TimeTrigger::start = start;
	}
	return _p;
}

inline ns2__TimeTrigger * soap_new_set_ns2__TimeTrigger(
	struct soap *soap,
	ns2__Date *date,
	ns2__ClockTime *start,
	LONG64 *cycle,
	LONG64 *random_USCOREoffset)
{
	ns2__TimeTrigger *_p = soap_new_ns2__TimeTrigger(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__TimeTrigger::date = date;
		_p->ns2__TimeTrigger::start = start;
		_p->ns2__TimeTrigger::cycle = cycle;
		_p->ns2__TimeTrigger::random_USCOREoffset = random_USCOREoffset;
	}
	return _p;
}

inline int soap_write_ns2__TimeTrigger(struct soap *soap, ns2__TimeTrigger const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:TimeTrigger", p->soap_type() == SOAP_TYPE_ns2__TimeTrigger ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__TimeTrigger * SOAP_FMAC4 soap_get_ns2__TimeTrigger(struct soap*, ns2__TimeTrigger *, const char*, const char*);

inline int soap_read_ns2__TimeTrigger(struct soap *soap, ns2__TimeTrigger *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__TimeTrigger(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ClockTime_DEFINED
#define SOAP_TYPE_ns2__ClockTime_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ClockTime(struct soap*, const char*, int, const ns2__ClockTime *, const char*);
SOAP_FMAC3 ns2__ClockTime * SOAP_FMAC4 soap_in_ns2__ClockTime(struct soap*, const char*, ns2__ClockTime *, const char*);
SOAP_FMAC1 ns2__ClockTime * SOAP_FMAC2 soap_instantiate_ns2__ClockTime(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ClockTime * soap_new_ns2__ClockTime(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ClockTime(soap, n, NULL, NULL, NULL);
}

inline ns2__ClockTime * soap_new_req_ns2__ClockTime(
	struct soap *soap,
	unsigned int hours,
	unsigned int minutes,
	unsigned int seconds)
{
	ns2__ClockTime *_p = soap_new_ns2__ClockTime(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ClockTime::hours = hours;
		_p->ns2__ClockTime::minutes = minutes;
		_p->ns2__ClockTime::seconds = seconds;
	}
	return _p;
}

inline ns2__ClockTime * soap_new_set_ns2__ClockTime(
	struct soap *soap,
	unsigned int hours,
	unsigned int minutes,
	unsigned int seconds)
{
	ns2__ClockTime *_p = soap_new_ns2__ClockTime(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ClockTime::hours = hours;
		_p->ns2__ClockTime::minutes = minutes;
		_p->ns2__ClockTime::seconds = seconds;
	}
	return _p;
}

inline int soap_write_ns2__ClockTime(struct soap *soap, ns2__ClockTime const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ClockTime", p->soap_type() == SOAP_TYPE_ns2__ClockTime ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ClockTime * SOAP_FMAC4 soap_get_ns2__ClockTime(struct soap*, ns2__ClockTime *, const char*, const char*);

inline int soap_read_ns2__ClockTime(struct soap *soap, ns2__ClockTime *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ClockTime(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__Date_DEFINED
#define SOAP_TYPE_ns2__Date_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__Date(struct soap*, const char*, int, const ns2__Date *, const char*);
SOAP_FMAC3 ns2__Date * SOAP_FMAC4 soap_in_ns2__Date(struct soap*, const char*, ns2__Date *, const char*);
SOAP_FMAC1 ns2__Date * SOAP_FMAC2 soap_instantiate_ns2__Date(struct soap*, int, const char*, const char*, size_t*);

inline ns2__Date * soap_new_ns2__Date(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__Date(soap, n, NULL, NULL, NULL);
}

inline ns2__Date * soap_new_req_ns2__Date(
	struct soap *soap,
	enum ns2__DateType kind)
{
	ns2__Date *_p = soap_new_ns2__Date(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Date::kind = kind;
	}
	return _p;
}

inline ns2__Date * soap_new_set_ns2__Date(
	struct soap *soap,
	enum ns2__DateType kind,
	enum ns2__DayOfWeek *day_USCOREof_USCOREweek,
	unsigned int *day_USCOREof_USCOREmonth)
{
	ns2__Date *_p = soap_new_ns2__Date(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__Date::kind = kind;
		_p->ns2__Date::day_USCOREof_USCOREweek = day_USCOREof_USCOREweek;
		_p->ns2__Date::day_USCOREof_USCOREmonth = day_USCOREof_USCOREmonth;
	}
	return _p;
}

inline int soap_write_ns2__Date(struct soap *soap, ns2__Date const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:Date", p->soap_type() == SOAP_TYPE_ns2__Date ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__Date * SOAP_FMAC4 soap_get_ns2__Date(struct soap*, ns2__Date *, const char*, const char*);

inline int soap_read_ns2__Date(struct soap *soap, ns2__Date *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__Date(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__EventTrigger_DEFINED
#define SOAP_TYPE_ns2__EventTrigger_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__EventTrigger(struct soap*, const char*, int, const ns2__EventTrigger *, const char*);
SOAP_FMAC3 ns2__EventTrigger * SOAP_FMAC4 soap_in_ns2__EventTrigger(struct soap*, const char*, ns2__EventTrigger *, const char*);
SOAP_FMAC1 ns2__EventTrigger * SOAP_FMAC2 soap_instantiate_ns2__EventTrigger(struct soap*, int, const char*, const char*, size_t*);

inline ns2__EventTrigger * soap_new_ns2__EventTrigger(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__EventTrigger(soap, n, NULL, NULL, NULL);
}

inline ns2__EventTrigger * soap_new_req_ns2__EventTrigger(
	struct soap *soap,
	int __union_EventTrigger,
	const union _ns2__union_EventTrigger& union_EventTrigger)
{
	ns2__EventTrigger *_p = soap_new_ns2__EventTrigger(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__EventTrigger::__union_EventTrigger = __union_EventTrigger;
		_p->ns2__EventTrigger::union_EventTrigger = union_EventTrigger;
	}
	return _p;
}

inline ns2__EventTrigger * soap_new_set_ns2__EventTrigger(
	struct soap *soap,
	int __union_EventTrigger,
	const union _ns2__union_EventTrigger& union_EventTrigger)
{
	ns2__EventTrigger *_p = soap_new_ns2__EventTrigger(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__EventTrigger::__union_EventTrigger = __union_EventTrigger;
		_p->ns2__EventTrigger::union_EventTrigger = union_EventTrigger;
	}
	return _p;
}

inline int soap_write_ns2__EventTrigger(struct soap *soap, ns2__EventTrigger const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:EventTrigger", p->soap_type() == SOAP_TYPE_ns2__EventTrigger ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__EventTrigger * SOAP_FMAC4 soap_get_ns2__EventTrigger(struct soap*, ns2__EventTrigger *, const char*, const char*);

inline int soap_read_ns2__EventTrigger(struct soap *soap, ns2__EventTrigger *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__EventTrigger(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__FeatureChangedEvent_DEFINED
#define SOAP_TYPE_ns2__FeatureChangedEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__FeatureChangedEvent(struct soap*, const char*, int, const ns2__FeatureChangedEvent *, const char*);
SOAP_FMAC3 ns2__FeatureChangedEvent * SOAP_FMAC4 soap_in_ns2__FeatureChangedEvent(struct soap*, const char*, ns2__FeatureChangedEvent *, const char*);
SOAP_FMAC1 ns2__FeatureChangedEvent * SOAP_FMAC2 soap_instantiate_ns2__FeatureChangedEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__FeatureChangedEvent * soap_new_ns2__FeatureChangedEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__FeatureChangedEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__FeatureChangedEvent * soap_new_req_ns2__FeatureChangedEvent(
	struct soap *soap)
{
	ns2__FeatureChangedEvent *_p = soap_new_ns2__FeatureChangedEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline ns2__FeatureChangedEvent * soap_new_set_ns2__FeatureChangedEvent(
	struct soap *soap)
{
	ns2__FeatureChangedEvent *_p = soap_new_ns2__FeatureChangedEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline int soap_write_ns2__FeatureChangedEvent(struct soap *soap, ns2__FeatureChangedEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:FeatureChangedEvent", p->soap_type() == SOAP_TYPE_ns2__FeatureChangedEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__FeatureChangedEvent * SOAP_FMAC4 soap_get_ns2__FeatureChangedEvent(struct soap*, ns2__FeatureChangedEvent *, const char*, const char*);

inline int soap_read_ns2__FeatureChangedEvent(struct soap *soap, ns2__FeatureChangedEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__FeatureChangedEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__OSD_USCOREEvent_DEFINED
#define SOAP_TYPE_ns2__OSD_USCOREEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__OSD_USCOREEvent(struct soap*, const char*, int, const ns2__OSD_USCOREEvent *, const char*);
SOAP_FMAC3 ns2__OSD_USCOREEvent * SOAP_FMAC4 soap_in_ns2__OSD_USCOREEvent(struct soap*, const char*, ns2__OSD_USCOREEvent *, const char*);
SOAP_FMAC1 ns2__OSD_USCOREEvent * SOAP_FMAC2 soap_instantiate_ns2__OSD_USCOREEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__OSD_USCOREEvent * soap_new_ns2__OSD_USCOREEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__OSD_USCOREEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__OSD_USCOREEvent * soap_new_req_ns2__OSD_USCOREEvent(
	struct soap *soap)
{
	ns2__OSD_USCOREEvent *_p = soap_new_ns2__OSD_USCOREEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline ns2__OSD_USCOREEvent * soap_new_set_ns2__OSD_USCOREEvent(
	struct soap *soap)
{
	ns2__OSD_USCOREEvent *_p = soap_new_ns2__OSD_USCOREEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline int soap_write_ns2__OSD_USCOREEvent(struct soap *soap, ns2__OSD_USCOREEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:OSD_Event", p->soap_type() == SOAP_TYPE_ns2__OSD_USCOREEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__OSD_USCOREEvent * SOAP_FMAC4 soap_get_ns2__OSD_USCOREEvent(struct soap*, ns2__OSD_USCOREEvent *, const char*, const char*);

inline int soap_read_ns2__OSD_USCOREEvent(struct soap *soap, ns2__OSD_USCOREEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__OSD_USCOREEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CurrentObjectListEvent_DEFINED
#define SOAP_TYPE_ns2__CurrentObjectListEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CurrentObjectListEvent(struct soap*, const char*, int, const ns2__CurrentObjectListEvent *, const char*);
SOAP_FMAC3 ns2__CurrentObjectListEvent * SOAP_FMAC4 soap_in_ns2__CurrentObjectListEvent(struct soap*, const char*, ns2__CurrentObjectListEvent *, const char*);
SOAP_FMAC1 ns2__CurrentObjectListEvent * SOAP_FMAC2 soap_instantiate_ns2__CurrentObjectListEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CurrentObjectListEvent * soap_new_ns2__CurrentObjectListEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CurrentObjectListEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__CurrentObjectListEvent * soap_new_req_ns2__CurrentObjectListEvent(
	struct soap *soap)
{
	ns2__CurrentObjectListEvent *_p = soap_new_ns2__CurrentObjectListEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline ns2__CurrentObjectListEvent * soap_new_set_ns2__CurrentObjectListEvent(
	struct soap *soap,
	unsigned int skip)
{
	ns2__CurrentObjectListEvent *_p = soap_new_ns2__CurrentObjectListEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CurrentObjectListEvent::skip = skip;
	}
	return _p;
}

inline int soap_write_ns2__CurrentObjectListEvent(struct soap *soap, ns2__CurrentObjectListEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CurrentObjectListEvent", p->soap_type() == SOAP_TYPE_ns2__CurrentObjectListEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CurrentObjectListEvent * SOAP_FMAC4 soap_get_ns2__CurrentObjectListEvent(struct soap*, ns2__CurrentObjectListEvent *, const char*, const char*);

inline int soap_read_ns2__CurrentObjectListEvent(struct soap *soap, ns2__CurrentObjectListEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CurrentObjectListEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__OneTimeEvent_DEFINED
#define SOAP_TYPE_ns2__OneTimeEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__OneTimeEvent(struct soap*, const char*, int, const ns2__OneTimeEvent *, const char*);
SOAP_FMAC3 ns2__OneTimeEvent * SOAP_FMAC4 soap_in_ns2__OneTimeEvent(struct soap*, const char*, ns2__OneTimeEvent *, const char*);
SOAP_FMAC1 ns2__OneTimeEvent * SOAP_FMAC2 soap_instantiate_ns2__OneTimeEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__OneTimeEvent * soap_new_ns2__OneTimeEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__OneTimeEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__OneTimeEvent * soap_new_req_ns2__OneTimeEvent(
	struct soap *soap)
{
	ns2__OneTimeEvent *_p = soap_new_ns2__OneTimeEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline ns2__OneTimeEvent * soap_new_set_ns2__OneTimeEvent(
	struct soap *soap)
{
	ns2__OneTimeEvent *_p = soap_new_ns2__OneTimeEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline int soap_write_ns2__OneTimeEvent(struct soap *soap, ns2__OneTimeEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:OneTimeEvent", p->soap_type() == SOAP_TYPE_ns2__OneTimeEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__OneTimeEvent * SOAP_FMAC4 soap_get_ns2__OneTimeEvent(struct soap*, ns2__OneTimeEvent *, const char*, const char*);

inline int soap_read_ns2__OneTimeEvent(struct soap *soap, ns2__OneTimeEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__OneTimeEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DigitalInputEvent_DEFINED
#define SOAP_TYPE_ns2__DigitalInputEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DigitalInputEvent(struct soap*, const char*, int, const ns2__DigitalInputEvent *, const char*);
SOAP_FMAC3 ns2__DigitalInputEvent * SOAP_FMAC4 soap_in_ns2__DigitalInputEvent(struct soap*, const char*, ns2__DigitalInputEvent *, const char*);
SOAP_FMAC1 ns2__DigitalInputEvent * SOAP_FMAC2 soap_instantiate_ns2__DigitalInputEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__DigitalInputEvent * soap_new_ns2__DigitalInputEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__DigitalInputEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__DigitalInputEvent * soap_new_req_ns2__DigitalInputEvent(
	struct soap *soap,
	int __sizeevent,
	enum ns2__DigitalInputEventType *event)
{
	ns2__DigitalInputEvent *_p = soap_new_ns2__DigitalInputEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalInputEvent::__sizeevent = __sizeevent;
		_p->ns2__DigitalInputEvent::event = event;
	}
	return _p;
}

inline ns2__DigitalInputEvent * soap_new_set_ns2__DigitalInputEvent(
	struct soap *soap,
	int __sizeevent,
	enum ns2__DigitalInputEventType *event)
{
	ns2__DigitalInputEvent *_p = soap_new_ns2__DigitalInputEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalInputEvent::__sizeevent = __sizeevent;
		_p->ns2__DigitalInputEvent::event = event;
	}
	return _p;
}

inline int soap_write_ns2__DigitalInputEvent(struct soap *soap, ns2__DigitalInputEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:DigitalInputEvent", p->soap_type() == SOAP_TYPE_ns2__DigitalInputEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__DigitalInputEvent * SOAP_FMAC4 soap_get_ns2__DigitalInputEvent(struct soap*, ns2__DigitalInputEvent *, const char*, const char*);

inline int soap_read_ns2__DigitalInputEvent(struct soap *soap, ns2__DigitalInputEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__DigitalInputEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ClearZoneEvent_DEFINED
#define SOAP_TYPE_ns2__ClearZoneEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ClearZoneEvent(struct soap*, const char*, int, const ns2__ClearZoneEvent *, const char*);
SOAP_FMAC3 ns2__ClearZoneEvent * SOAP_FMAC4 soap_in_ns2__ClearZoneEvent(struct soap*, const char*, ns2__ClearZoneEvent *, const char*);
SOAP_FMAC1 ns2__ClearZoneEvent * SOAP_FMAC2 soap_instantiate_ns2__ClearZoneEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ClearZoneEvent * soap_new_ns2__ClearZoneEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ClearZoneEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__ClearZoneEvent * soap_new_req_ns2__ClearZoneEvent(
	struct soap *soap,
	enum ns2__ClearZoneEventType clear_USCOREzone_USCOREevent_USCOREtype)
{
	ns2__ClearZoneEvent *_p = soap_new_ns2__ClearZoneEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ClearZoneEvent::clear_USCOREzone_USCOREevent_USCOREtype = clear_USCOREzone_USCOREevent_USCOREtype;
	}
	return _p;
}

inline ns2__ClearZoneEvent * soap_new_set_ns2__ClearZoneEvent(
	struct soap *soap,
	enum ns2__ClearZoneEventType clear_USCOREzone_USCOREevent_USCOREtype)
{
	ns2__ClearZoneEvent *_p = soap_new_ns2__ClearZoneEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__ClearZoneEvent::clear_USCOREzone_USCOREevent_USCOREtype = clear_USCOREzone_USCOREevent_USCOREtype;
	}
	return _p;
}

inline int soap_write_ns2__ClearZoneEvent(struct soap *soap, ns2__ClearZoneEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ClearZoneEvent", p->soap_type() == SOAP_TYPE_ns2__ClearZoneEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ClearZoneEvent * SOAP_FMAC4 soap_get_ns2__ClearZoneEvent(struct soap*, ns2__ClearZoneEvent *, const char*, const char*);

inline int soap_read_ns2__ClearZoneEvent(struct soap *soap, ns2__ClearZoneEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ClearZoneEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__FillEvent_DEFINED
#define SOAP_TYPE_ns2__FillEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__FillEvent(struct soap*, const char*, int, const ns2__FillEvent *, const char*);
SOAP_FMAC3 ns2__FillEvent * SOAP_FMAC4 soap_in_ns2__FillEvent(struct soap*, const char*, ns2__FillEvent *, const char*);
SOAP_FMAC1 ns2__FillEvent * SOAP_FMAC2 soap_instantiate_ns2__FillEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__FillEvent * soap_new_ns2__FillEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__FillEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__FillEvent * soap_new_req_ns2__FillEvent(
	struct soap *soap,
	enum ns2__FillEventType fill_USCOREevent_USCOREtype)
{
	ns2__FillEvent *_p = soap_new_ns2__FillEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__FillEvent::fill_USCOREevent_USCOREtype = fill_USCOREevent_USCOREtype;
	}
	return _p;
}

inline ns2__FillEvent * soap_new_set_ns2__FillEvent(
	struct soap *soap,
	enum ns2__FillEventType fill_USCOREevent_USCOREtype,
	unsigned int *threshold)
{
	ns2__FillEvent *_p = soap_new_ns2__FillEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__FillEvent::fill_USCOREevent_USCOREtype = fill_USCOREevent_USCOREtype;
		_p->ns2__FillEvent::threshold = threshold;
	}
	return _p;
}

inline int soap_write_ns2__FillEvent(struct soap *soap, ns2__FillEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:FillEvent", p->soap_type() == SOAP_TYPE_ns2__FillEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__FillEvent * SOAP_FMAC4 soap_get_ns2__FillEvent(struct soap*, ns2__FillEvent *, const char*, const char*);

inline int soap_read_ns2__FillEvent(struct soap *soap, ns2__FillEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__FillEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__ZoneChannelsEvent_DEFINED
#define SOAP_TYPE_ns2__ZoneChannelsEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__ZoneChannelsEvent(struct soap*, const char*, int, const ns2__ZoneChannelsEvent *, const char*);
SOAP_FMAC3 ns2__ZoneChannelsEvent * SOAP_FMAC4 soap_in_ns2__ZoneChannelsEvent(struct soap*, const char*, ns2__ZoneChannelsEvent *, const char*);
SOAP_FMAC1 ns2__ZoneChannelsEvent * SOAP_FMAC2 soap_instantiate_ns2__ZoneChannelsEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__ZoneChannelsEvent * soap_new_ns2__ZoneChannelsEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__ZoneChannelsEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__ZoneChannelsEvent * soap_new_req_ns2__ZoneChannelsEvent(
	struct soap *soap)
{
	ns2__ZoneChannelsEvent *_p = soap_new_ns2__ZoneChannelsEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline ns2__ZoneChannelsEvent * soap_new_set_ns2__ZoneChannelsEvent(
	struct soap *soap)
{
	ns2__ZoneChannelsEvent *_p = soap_new_ns2__ZoneChannelsEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline int soap_write_ns2__ZoneChannelsEvent(struct soap *soap, ns2__ZoneChannelsEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:ZoneChannelsEvent", p->soap_type() == SOAP_TYPE_ns2__ZoneChannelsEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__ZoneChannelsEvent * SOAP_FMAC4 soap_get_ns2__ZoneChannelsEvent(struct soap*, ns2__ZoneChannelsEvent *, const char*, const char*);

inline int soap_read_ns2__ZoneChannelsEvent(struct soap *soap, ns2__ZoneChannelsEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__ZoneChannelsEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CountChannelsEvent_DEFINED
#define SOAP_TYPE_ns2__CountChannelsEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CountChannelsEvent(struct soap*, const char*, int, const ns2__CountChannelsEvent *, const char*);
SOAP_FMAC3 ns2__CountChannelsEvent * SOAP_FMAC4 soap_in_ns2__CountChannelsEvent(struct soap*, const char*, ns2__CountChannelsEvent *, const char*);
SOAP_FMAC1 ns2__CountChannelsEvent * SOAP_FMAC2 soap_instantiate_ns2__CountChannelsEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CountChannelsEvent * soap_new_ns2__CountChannelsEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CountChannelsEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__CountChannelsEvent * soap_new_req_ns2__CountChannelsEvent(
	struct soap *soap)
{
	ns2__CountChannelsEvent *_p = soap_new_ns2__CountChannelsEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline ns2__CountChannelsEvent * soap_new_set_ns2__CountChannelsEvent(
	struct soap *soap)
{
	ns2__CountChannelsEvent *_p = soap_new_ns2__CountChannelsEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline int soap_write_ns2__CountChannelsEvent(struct soap *soap, ns2__CountChannelsEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CountChannelsEvent", p->soap_type() == SOAP_TYPE_ns2__CountChannelsEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CountChannelsEvent * SOAP_FMAC4 soap_get_ns2__CountChannelsEvent(struct soap*, ns2__CountChannelsEvent *, const char*, const char*);

inline int soap_read_ns2__CountChannelsEvent(struct soap *soap, ns2__CountChannelsEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CountChannelsEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__CountEvent_DEFINED
#define SOAP_TYPE_ns2__CountEvent_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__CountEvent(struct soap*, const char*, int, const ns2__CountEvent *, const char*);
SOAP_FMAC3 ns2__CountEvent * SOAP_FMAC4 soap_in_ns2__CountEvent(struct soap*, const char*, ns2__CountEvent *, const char*);
SOAP_FMAC1 ns2__CountEvent * SOAP_FMAC2 soap_instantiate_ns2__CountEvent(struct soap*, int, const char*, const char*, size_t*);

inline ns2__CountEvent * soap_new_ns2__CountEvent(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__CountEvent(soap, n, NULL, NULL, NULL);
}

inline ns2__CountEvent * soap_new_req_ns2__CountEvent(
	struct soap *soap,
	enum ns2__CountEventType count_USCOREevent_USCOREtype)
{
	ns2__CountEvent *_p = soap_new_ns2__CountEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountEvent::count_USCOREevent_USCOREtype = count_USCOREevent_USCOREtype;
	}
	return _p;
}

inline ns2__CountEvent * soap_new_set_ns2__CountEvent(
	struct soap *soap,
	enum ns2__CountEventType count_USCOREevent_USCOREtype,
	unsigned int delta)
{
	ns2__CountEvent *_p = soap_new_ns2__CountEvent(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__CountEvent::count_USCOREevent_USCOREtype = count_USCOREevent_USCOREtype;
		_p->ns2__CountEvent::delta = delta;
	}
	return _p;
}

inline int soap_write_ns2__CountEvent(struct soap *soap, ns2__CountEvent const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:CountEvent", p->soap_type() == SOAP_TYPE_ns2__CountEvent ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__CountEvent * SOAP_FMAC4 soap_get_ns2__CountEvent(struct soap*, ns2__CountEvent *, const char*, const char*);

inline int soap_read_ns2__CountEvent(struct soap *soap, ns2__CountEvent *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__CountEvent(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DigitalOutputElement_DEFINED
#define SOAP_TYPE_ns2__DigitalOutputElement_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DigitalOutputElement(struct soap*, const char*, int, const ns2__DigitalOutputElement *, const char*);
SOAP_FMAC3 ns2__DigitalOutputElement * SOAP_FMAC4 soap_in_ns2__DigitalOutputElement(struct soap*, const char*, ns2__DigitalOutputElement *, const char*);
SOAP_FMAC1 ns2__DigitalOutputElement * SOAP_FMAC2 soap_instantiate_ns2__DigitalOutputElement(struct soap*, int, const char*, const char*, size_t*);

inline ns2__DigitalOutputElement * soap_new_ns2__DigitalOutputElement(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__DigitalOutputElement(soap, n, NULL, NULL, NULL);
}

inline ns2__DigitalOutputElement * soap_new_req_ns2__DigitalOutputElement(
	struct soap *soap,
	enum ns2__DigitalOutputActivity activity)
{
	ns2__DigitalOutputElement *_p = soap_new_ns2__DigitalOutputElement(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalOutputElement::activity = activity;
	}
	return _p;
}

inline ns2__DigitalOutputElement * soap_new_set_ns2__DigitalOutputElement(
	struct soap *soap,
	enum ns2__DigitalOutputActivity activity)
{
	ns2__DigitalOutputElement *_p = soap_new_ns2__DigitalOutputElement(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalOutputElement::activity = activity;
	}
	return _p;
}

inline int soap_write_ns2__DigitalOutputElement(struct soap *soap, ns2__DigitalOutputElement const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:DigitalOutputElement", p->soap_type() == SOAP_TYPE_ns2__DigitalOutputElement ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__DigitalOutputElement * SOAP_FMAC4 soap_get_ns2__DigitalOutputElement(struct soap*, ns2__DigitalOutputElement *, const char*, const char*);

inline int soap_read_ns2__DigitalOutputElement(struct soap *soap, ns2__DigitalOutputElement *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__DigitalOutputElement(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_ns2__DigitalInputElement_DEFINED
#define SOAP_TYPE_ns2__DigitalInputElement_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_ns2__DigitalInputElement(struct soap*, const char*, int, const ns2__DigitalInputElement *, const char*);
SOAP_FMAC3 ns2__DigitalInputElement * SOAP_FMAC4 soap_in_ns2__DigitalInputElement(struct soap*, const char*, ns2__DigitalInputElement *, const char*);
SOAP_FMAC1 ns2__DigitalInputElement * SOAP_FMAC2 soap_instantiate_ns2__DigitalInputElement(struct soap*, int, const char*, const char*, size_t*);

inline ns2__DigitalInputElement * soap_new_ns2__DigitalInputElement(struct soap *soap, int n = -1)
{
	return soap_instantiate_ns2__DigitalInputElement(soap, n, NULL, NULL, NULL);
}

inline ns2__DigitalInputElement * soap_new_req_ns2__DigitalInputElement(
	struct soap *soap,
	enum ns2__DigitalInputValue value)
{
	ns2__DigitalInputElement *_p = soap_new_ns2__DigitalInputElement(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalInputElement::value = value;
	}
	return _p;
}

inline ns2__DigitalInputElement * soap_new_set_ns2__DigitalInputElement(
	struct soap *soap,
	enum ns2__DigitalInputValue value)
{
	ns2__DigitalInputElement *_p = soap_new_ns2__DigitalInputElement(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->ns2__DigitalInputElement::value = value;
	}
	return _p;
}

inline int soap_write_ns2__DigitalInputElement(struct soap *soap, ns2__DigitalInputElement const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "ns2:DigitalInputElement", p->soap_type() == SOAP_TYPE_ns2__DigitalInputElement ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 ns2__DigitalInputElement * SOAP_FMAC4 soap_get_ns2__DigitalInputElement(struct soap*, ns2__DigitalInputElement *, const char*, const char*);

inline int soap_read_ns2__DigitalInputElement(struct soap *soap, ns2__DigitalInputElement *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_ns2__DigitalInputElement(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_xsd__decimal_DEFINED
#define SOAP_TYPE_xsd__decimal_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_xsd__decimal(struct soap*, std::wstring *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_xsd__decimal(struct soap*, const std::wstring *);

#define soap_xsd__decimal2s(soap, a) soap_wchar2s((soap), (a).c_str())
SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__decimal(struct soap*, const char*, int, const std::wstring*, const char*);

#define soap_s2xsd__decimal(soap, s, a) soap_s2stdwchar((soap), (s), (a), 0, -1, NULL)
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_in_xsd__decimal(struct soap*, const char*, std::wstring*, const char*);

#define soap_instantiate_xsd__decimal soap_instantiate_std__wstring


#define soap_new_xsd__decimal soap_new_std__wstring

SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__decimal(struct soap*, const std::wstring *, const char*, const char*);

inline int soap_write_xsd__decimal(struct soap *soap, std::wstring const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_xsd__decimal(soap, p, "xsd:decimal", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_get_xsd__decimal(struct soap*, std::wstring *, const char*, const char*);

inline int soap_read_xsd__decimal(struct soap *soap, std::wstring *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_xsd__decimal(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_std__wstring_DEFINED
#define SOAP_TYPE_std__wstring_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_std__wstring(struct soap*, std::wstring *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_std__wstring(struct soap*, const std::wstring *);

#define soap_std__wstring2s(soap, a) soap_wchar2s((soap), (a).c_str())
SOAP_FMAC3 int SOAP_FMAC4 soap_out_std__wstring(struct soap*, const char*, int, const std::wstring*, const char*);

#define soap_s2std__wstring(soap, s, a) soap_s2stdwchar((soap), (s), (a), 0, -1, NULL)
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_in_std__wstring(struct soap*, const char*, std::wstring*, const char*);
SOAP_FMAC1 std::wstring * SOAP_FMAC2 soap_instantiate_std__wstring(struct soap*, int, const char*, const char*, size_t*);

inline std::wstring * soap_new_std__wstring(struct soap *soap, int n = -1)
{
	return soap_instantiate_std__wstring(soap, n, NULL, NULL, NULL);
}

inline std::wstring * soap_new_req_std__wstring(
	struct soap *soap)
{
	std::wstring *_p = soap_new_std__wstring(soap);
	if (_p)
	{	soap_default_std__wstring(soap, _p);
	}
	return _p;
}

inline std::wstring * soap_new_set_std__wstring(
	struct soap *soap)
{
	std::wstring *_p = soap_new_std__wstring(soap);
	if (_p)
	{	soap_default_std__wstring(soap, _p);
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_std__wstring(struct soap*, const std::wstring *, const char*, const char*);

inline int soap_write_std__wstring(struct soap *soap, std::wstring const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_std__wstring(soap, p, "string", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 std::wstring * SOAP_FMAC4 soap_get_std__wstring(struct soap*, std::wstring *, const char*, const char*);

inline int soap_read_std__wstring(struct soap *soap, std::wstring *p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_std__wstring(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_xsd__base64Binary_DEFINED
#define SOAP_TYPE_xsd__base64Binary_DEFINED
SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__base64Binary(struct soap*, const char*, int, const xsd__base64Binary *, const char*);
SOAP_FMAC3S const char* SOAP_FMAC4S soap_xsd__base64Binary2s(struct soap*, xsd__base64Binary);
SOAP_FMAC3 xsd__base64Binary * SOAP_FMAC4 soap_in_xsd__base64Binary(struct soap*, const char*, xsd__base64Binary *, const char*);
SOAP_FMAC3S int SOAP_FMAC4S soap_s2xsd__base64Binary(struct soap*, const char*, xsd__base64Binary *);
SOAP_FMAC1 xsd__base64Binary * SOAP_FMAC2 soap_instantiate_xsd__base64Binary(struct soap*, int, const char*, const char*, size_t*);

inline xsd__base64Binary * soap_new_xsd__base64Binary(struct soap *soap, int n = -1)
{
	return soap_instantiate_xsd__base64Binary(soap, n, NULL, NULL, NULL);
}

inline xsd__base64Binary * soap_new_req_xsd__base64Binary(
	struct soap *soap)
{
	xsd__base64Binary *_p = soap_new_xsd__base64Binary(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline xsd__base64Binary * soap_new_set_xsd__base64Binary(
	struct soap *soap,
	unsigned char *__ptr,
	int __size,
	char *id,
	char *type,
	char *options)
{
	xsd__base64Binary *_p = soap_new_xsd__base64Binary(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->xsd__base64Binary::__ptr = __ptr;
		_p->xsd__base64Binary::__size = __size;
		_p->xsd__base64Binary::id = id;
		_p->xsd__base64Binary::type = type;
		_p->xsd__base64Binary::options = options;
	}
	return _p;
}

inline int soap_write_xsd__base64Binary(struct soap *soap, xsd__base64Binary const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (p->soap_serialize(soap), 0) || p->soap_put(soap, "xsd:base64Binary", p->soap_type() == SOAP_TYPE_xsd__base64Binary ? "" : NULL) || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 xsd__base64Binary * SOAP_FMAC4 soap_get_xsd__base64Binary(struct soap*, xsd__base64Binary *, const char*, const char*);

inline int soap_read_xsd__base64Binary(struct soap *soap, xsd__base64Binary *p)
{
	if (p)
	{	p->soap_default(soap);
		if (soap_begin_recv(soap) || soap_get_xsd__base64Binary(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault_DEFINED
#define SOAP_TYPE_SOAP_ENV__Fault_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Fault(struct soap*, const char*, int, const struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_in_SOAP_ENV__Fault(struct soap*, const char*, struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Fault * soap_new_SOAP_ENV__Fault(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Fault(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Fault * soap_new_req_SOAP_ENV__Fault(
	struct soap *soap)
{
	struct SOAP_ENV__Fault *_p = soap_new_SOAP_ENV__Fault(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Fault(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Fault * soap_new_set_SOAP_ENV__Fault(
	struct soap *soap,
	char *faultcode,
	char *faultstring,
	char *faultactor,
	struct SOAP_ENV__Detail *detail,
	struct SOAP_ENV__Code *SOAP_ENV__Code,
	struct SOAP_ENV__Reason *SOAP_ENV__Reason,
	char *SOAP_ENV__Node,
	char *SOAP_ENV__Role,
	struct SOAP_ENV__Detail *SOAP_ENV__Detail)
{
	struct SOAP_ENV__Fault *_p = soap_new_SOAP_ENV__Fault(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Fault(soap, _p);
		_p->faultcode = faultcode;
		_p->faultstring = faultstring;
		_p->faultactor = faultactor;
		_p->detail = detail;
		_p->SOAP_ENV__Code = SOAP_ENV__Code;
		_p->SOAP_ENV__Reason = SOAP_ENV__Reason;
		_p->SOAP_ENV__Node = SOAP_ENV__Node;
		_p->SOAP_ENV__Role = SOAP_ENV__Role;
		_p->SOAP_ENV__Detail = SOAP_ENV__Detail;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *, const char*, const char*);

inline int soap_write_SOAP_ENV__Fault(struct soap *soap, struct SOAP_ENV__Fault const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Fault(soap, p), 0) || soap_put_SOAP_ENV__Fault(soap, p, "SOAP-ENV:Fault", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_get_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *, const char*, const char*);

inline int soap_read_SOAP_ENV__Fault(struct soap *soap, struct SOAP_ENV__Fault *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Fault(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Fault(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason_DEFINED
#define SOAP_TYPE_SOAP_ENV__Reason_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Reason(struct soap*, const char*, int, const struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_in_SOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Reason * soap_new_SOAP_ENV__Reason(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Reason(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Reason * soap_new_req_SOAP_ENV__Reason(
	struct soap *soap)
{
	struct SOAP_ENV__Reason *_p = soap_new_SOAP_ENV__Reason(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Reason(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Reason * soap_new_set_SOAP_ENV__Reason(
	struct soap *soap,
	char *SOAP_ENV__Text)
{
	struct SOAP_ENV__Reason *_p = soap_new_SOAP_ENV__Reason(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Reason(soap, _p);
		_p->SOAP_ENV__Text = SOAP_ENV__Text;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *, const char*, const char*);

inline int soap_write_SOAP_ENV__Reason(struct soap *soap, struct SOAP_ENV__Reason const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Reason(soap, p), 0) || soap_put_SOAP_ENV__Reason(soap, p, "SOAP-ENV:Reason", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_get_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *, const char*, const char*);

inline int soap_read_SOAP_ENV__Reason(struct soap *soap, struct SOAP_ENV__Reason *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Reason(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Reason(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail_DEFINED
#define SOAP_TYPE_SOAP_ENV__Detail_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Detail(struct soap*, const char*, int, const struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_in_SOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Detail * soap_new_SOAP_ENV__Detail(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Detail(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Detail * soap_new_req_SOAP_ENV__Detail(
	struct soap *soap,
	int __type,
	void *fault)
{
	struct SOAP_ENV__Detail *_p = soap_new_SOAP_ENV__Detail(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Detail(soap, _p);
		_p->__type = __type;
		_p->fault = fault;
	}
	return _p;
}

inline struct SOAP_ENV__Detail * soap_new_set_SOAP_ENV__Detail(
	struct soap *soap,
	char *__any,
	int __type,
	void *fault)
{
	struct SOAP_ENV__Detail *_p = soap_new_SOAP_ENV__Detail(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Detail(soap, _p);
		_p->__any = __any;
		_p->__type = __type;
		_p->fault = fault;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *, const char*, const char*);

inline int soap_write_SOAP_ENV__Detail(struct soap *soap, struct SOAP_ENV__Detail const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Detail(soap, p), 0) || soap_put_SOAP_ENV__Detail(soap, p, "SOAP-ENV:Detail", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_get_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *, const char*, const char*);

inline int soap_read_SOAP_ENV__Detail(struct soap *soap, struct SOAP_ENV__Detail *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Detail(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Detail(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code_DEFINED
#define SOAP_TYPE_SOAP_ENV__Code_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Code(struct soap*, const char*, int, const struct SOAP_ENV__Code *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_in_SOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Code * soap_new_SOAP_ENV__Code(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Code(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Code * soap_new_req_SOAP_ENV__Code(
	struct soap *soap)
{
	struct SOAP_ENV__Code *_p = soap_new_SOAP_ENV__Code(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Code(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Code * soap_new_set_SOAP_ENV__Code(
	struct soap *soap,
	char *SOAP_ENV__Value,
	struct SOAP_ENV__Code *SOAP_ENV__Subcode)
{
	struct SOAP_ENV__Code *_p = soap_new_SOAP_ENV__Code(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Code(soap, _p);
		_p->SOAP_ENV__Value = SOAP_ENV__Value;
		_p->SOAP_ENV__Subcode = SOAP_ENV__Subcode;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *, const char*, const char*);

inline int soap_write_SOAP_ENV__Code(struct soap *soap, struct SOAP_ENV__Code const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Code(soap, p), 0) || soap_put_SOAP_ENV__Code(soap, p, "SOAP-ENV:Code", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_get_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *, const char*, const char*);

inline int soap_read_SOAP_ENV__Code(struct soap *soap, struct SOAP_ENV__Code *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Code(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Code(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header_DEFINED
#define SOAP_TYPE_SOAP_ENV__Header_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Header(struct soap*, const char*, int, const struct SOAP_ENV__Header *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_in_SOAP_ENV__Header(struct soap*, const char*, struct SOAP_ENV__Header *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Header * soap_new_SOAP_ENV__Header(struct soap *soap, int n = -1)
{
	return soap_instantiate_SOAP_ENV__Header(soap, n, NULL, NULL, NULL);
}

inline struct SOAP_ENV__Header * soap_new_req_SOAP_ENV__Header(
	struct soap *soap)
{
	struct SOAP_ENV__Header *_p = soap_new_SOAP_ENV__Header(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Header(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Header * soap_new_set_SOAP_ENV__Header(
	struct soap *soap)
{
	struct SOAP_ENV__Header *_p = soap_new_SOAP_ENV__Header(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Header(soap, _p);
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *, const char*, const char*);

inline int soap_write_SOAP_ENV__Header(struct soap *soap, struct SOAP_ENV__Header const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Header(soap, p), 0) || soap_put_SOAP_ENV__Header(soap, p, "SOAP-ENV:Header", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_get_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *, const char*, const char*);

inline int soap_read_SOAP_ENV__Header(struct soap *soap, struct SOAP_ENV__Header *p)
{
	if (p)
	{	soap_default_SOAP_ENV__Header(soap, p);
		if (soap_begin_recv(soap) || soap_get_SOAP_ENV__Header(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

#ifndef SOAP_TYPE___ns1__Error_DEFINED
#define SOAP_TYPE___ns1__Error_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default___ns1__Error(struct soap*, struct __ns1__Error *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___ns1__Error(struct soap*, const struct __ns1__Error *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out___ns1__Error(struct soap*, const char*, int, const struct __ns1__Error *, const char*);
SOAP_FMAC3 struct __ns1__Error * SOAP_FMAC4 soap_in___ns1__Error(struct soap*, const char*, struct __ns1__Error *, const char*);
SOAP_FMAC1 struct __ns1__Error * SOAP_FMAC2 soap_instantiate___ns1__Error(struct soap*, int, const char*, const char*, size_t*);

inline struct __ns1__Error * soap_new___ns1__Error(struct soap *soap, int n = -1)
{
	return soap_instantiate___ns1__Error(soap, n, NULL, NULL, NULL);
}

inline struct __ns1__Error * soap_new_req___ns1__Error(
	struct soap *soap)
{
	struct __ns1__Error *_p = soap_new___ns1__Error(soap);
	if (_p)
	{	soap_default___ns1__Error(soap, _p);
	}
	return _p;
}

inline struct __ns1__Error * soap_new_set___ns1__Error(
	struct soap *soap,
	ns2__ErrorContainer *ns2__error_USCOREmessage)
{
	struct __ns1__Error *_p = soap_new___ns1__Error(soap);
	if (_p)
	{	soap_default___ns1__Error(soap, _p);
		_p->ns2__error_USCOREmessage = ns2__error_USCOREmessage;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put___ns1__Error(struct soap*, const struct __ns1__Error *, const char*, const char*);

inline int soap_write___ns1__Error(struct soap *soap, struct __ns1__Error const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize___ns1__Error(soap, p), 0) || soap_put___ns1__Error(soap, p, "-ns1:Error", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct __ns1__Error * SOAP_FMAC4 soap_get___ns1__Error(struct soap*, struct __ns1__Error *, const char*, const char*);

inline int soap_read___ns1__Error(struct soap *soap, struct __ns1__Error *p)
{
	if (p)
	{	soap_default___ns1__Error(soap, p);
		if (soap_begin_recv(soap) || soap_get___ns1__Error(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE___ns1__Notification_DEFINED
#define SOAP_TYPE___ns1__Notification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default___ns1__Notification(struct soap*, struct __ns1__Notification *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize___ns1__Notification(struct soap*, const struct __ns1__Notification *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out___ns1__Notification(struct soap*, const char*, int, const struct __ns1__Notification *, const char*);
SOAP_FMAC3 struct __ns1__Notification * SOAP_FMAC4 soap_in___ns1__Notification(struct soap*, const char*, struct __ns1__Notification *, const char*);
SOAP_FMAC1 struct __ns1__Notification * SOAP_FMAC2 soap_instantiate___ns1__Notification(struct soap*, int, const char*, const char*, size_t*);

inline struct __ns1__Notification * soap_new___ns1__Notification(struct soap *soap, int n = -1)
{
	return soap_instantiate___ns1__Notification(soap, n, NULL, NULL, NULL);
}

inline struct __ns1__Notification * soap_new_req___ns1__Notification(
	struct soap *soap)
{
	struct __ns1__Notification *_p = soap_new___ns1__Notification(soap);
	if (_p)
	{	soap_default___ns1__Notification(soap, _p);
	}
	return _p;
}

inline struct __ns1__Notification * soap_new_set___ns1__Notification(
	struct soap *soap,
	ns2__NotificationContainer *ns2__notification_USCOREmessage)
{
	struct __ns1__Notification *_p = soap_new___ns1__Notification(soap);
	if (_p)
	{	soap_default___ns1__Notification(soap, _p);
		_p->ns2__notification_USCOREmessage = ns2__notification_USCOREmessage;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put___ns1__Notification(struct soap*, const struct __ns1__Notification *, const char*, const char*);

inline int soap_write___ns1__Notification(struct soap *soap, struct __ns1__Notification const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || (soap_serialize___ns1__Notification(soap, p), 0) || soap_put___ns1__Notification(soap, p, "-ns1:Notification", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 struct __ns1__Notification * SOAP_FMAC4 soap_get___ns1__Notification(struct soap*, struct __ns1__Notification *, const char*, const char*);

inline int soap_read___ns1__Notification(struct soap *soap, struct __ns1__Notification *p)
{
	if (p)
	{	soap_default___ns1__Notification(soap, p);
		if (soap_begin_recv(soap) || soap_get___ns1__Notification(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE__ns2__union_TaskContainer_DEFINED
#define SOAP_TYPE__ns2__union_TaskContainer_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns2__union_TaskContainer(struct soap*, int, const union _ns2__union_TaskContainer *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns2__union_TaskContainer(struct soap*, int, const union _ns2__union_TaskContainer *);
SOAP_FMAC3 union _ns2__union_TaskContainer * SOAP_FMAC4 soap_in__ns2__union_TaskContainer(struct soap*, int*, union _ns2__union_TaskContainer *);
#endif

#ifndef SOAP_TYPE__ns2__union_NotificationContainer_DEFINED
#define SOAP_TYPE__ns2__union_NotificationContainer_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns2__union_NotificationContainer(struct soap*, int, const union _ns2__union_NotificationContainer *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns2__union_NotificationContainer(struct soap*, int, const union _ns2__union_NotificationContainer *);
SOAP_FMAC3 union _ns2__union_NotificationContainer * SOAP_FMAC4 soap_in__ns2__union_NotificationContainer(struct soap*, int*, union _ns2__union_NotificationContainer *);
#endif

#ifndef SOAP_TYPE__ns2__union_Trigger_DEFINED
#define SOAP_TYPE__ns2__union_Trigger_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns2__union_Trigger(struct soap*, int, const union _ns2__union_Trigger *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns2__union_Trigger(struct soap*, int, const union _ns2__union_Trigger *);
SOAP_FMAC3 union _ns2__union_Trigger * SOAP_FMAC4 soap_in__ns2__union_Trigger(struct soap*, int*, union _ns2__union_Trigger *);
#endif

#ifndef SOAP_TYPE__ns2__union_EventTrigger_DEFINED
#define SOAP_TYPE__ns2__union_EventTrigger_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__ns2__union_EventTrigger(struct soap*, int, const union _ns2__union_EventTrigger *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out__ns2__union_EventTrigger(struct soap*, int, const union _ns2__union_EventTrigger *);
SOAP_FMAC3 union _ns2__union_EventTrigger * SOAP_FMAC4 soap_in__ns2__union_EventTrigger(struct soap*, int*, union _ns2__union_EventTrigger *);
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason_DEFINED
#define SOAP_TYPE_PointerToSOAP_ENV__Reason_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Reason(struct soap*, const char *, int, struct SOAP_ENV__Reason *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason **, const char*, const char*);
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail_DEFINED
#define SOAP_TYPE_PointerToSOAP_ENV__Detail_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Detail(struct soap*, const char *, int, struct SOAP_ENV__Detail *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail **, const char*, const char*);
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code_DEFINED
#define SOAP_TYPE_PointerToSOAP_ENV__Code_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Code(struct soap*, const char *, int, struct SOAP_ENV__Code *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*, const char*, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code **, const char*, const char*);
#endif

#endif

#ifndef SOAP_TYPE_PointerTons2__ErrorContainer_DEFINED
#define SOAP_TYPE_PointerTons2__ErrorContainer_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ErrorContainer(struct soap*, ns2__ErrorContainer *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ErrorContainer(struct soap*, const char *, int, ns2__ErrorContainer *const*, const char *);
SOAP_FMAC3 ns2__ErrorContainer ** SOAP_FMAC4 soap_in_PointerTons2__ErrorContainer(struct soap*, const char*, ns2__ErrorContainer **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ErrorContainer(struct soap*, ns2__ErrorContainer *const*, const char*, const char*);
SOAP_FMAC3 ns2__ErrorContainer ** SOAP_FMAC4 soap_get_PointerTons2__ErrorContainer(struct soap*, ns2__ErrorContainer **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__NotificationContainer_DEFINED
#define SOAP_TYPE_PointerTons2__NotificationContainer_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__NotificationContainer(struct soap*, ns2__NotificationContainer *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__NotificationContainer(struct soap*, const char *, int, ns2__NotificationContainer *const*, const char *);
SOAP_FMAC3 ns2__NotificationContainer ** SOAP_FMAC4 soap_in_PointerTons2__NotificationContainer(struct soap*, const char*, ns2__NotificationContainer **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__NotificationContainer(struct soap*, ns2__NotificationContainer *const*, const char*, const char*);
SOAP_FMAC3 ns2__NotificationContainer ** SOAP_FMAC4 soap_get_PointerTons2__NotificationContainer(struct soap*, ns2__NotificationContainer **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToPointerTons2__DigitalInputControl_DEFINED
#define SOAP_TYPE_PointerToPointerTons2__DigitalInputControl_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons2__DigitalInputControl(struct soap*, ns2__DigitalInputControl **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons2__DigitalInputControl(struct soap*, const char *, int, ns2__DigitalInputControl **const*, const char *);
SOAP_FMAC3 ns2__DigitalInputControl *** SOAP_FMAC4 soap_in_PointerToPointerTons2__DigitalInputControl(struct soap*, const char*, ns2__DigitalInputControl ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons2__DigitalInputControl(struct soap*, ns2__DigitalInputControl **const*, const char*, const char*);
SOAP_FMAC3 ns2__DigitalInputControl *** SOAP_FMAC4 soap_get_PointerToPointerTons2__DigitalInputControl(struct soap*, ns2__DigitalInputControl ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__DigitalInputControl_DEFINED
#define SOAP_TYPE_PointerTons2__DigitalInputControl_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__DigitalInputControl(struct soap*, ns2__DigitalInputControl *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__DigitalInputControl(struct soap*, const char *, int, ns2__DigitalInputControl *const*, const char *);
SOAP_FMAC3 ns2__DigitalInputControl ** SOAP_FMAC4 soap_in_PointerTons2__DigitalInputControl(struct soap*, const char*, ns2__DigitalInputControl **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__DigitalInputControl(struct soap*, ns2__DigitalInputControl *const*, const char*, const char*);
SOAP_FMAC3 ns2__DigitalInputControl ** SOAP_FMAC4 soap_get_PointerTons2__DigitalInputControl(struct soap*, ns2__DigitalInputControl **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_wstring_DEFINED
#define SOAP_TYPE_wstring_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_wstring(struct soap*, wchar_t *const*);

#define soap_wstring2s(soap, a) soap_wchar2s((soap), (a))
SOAP_FMAC3 int SOAP_FMAC4 soap_out_wstring(struct soap*, const char*, int, wchar_t*const*, const char*);

#define soap_s2wstring(soap, s, a) soap_s2wchar((soap), (s), (wchar_t**)(a), 0, -1, NULL)
SOAP_FMAC3 wchar_t * * SOAP_FMAC4 soap_in_wstring(struct soap*, const char*, wchar_t **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_wstring(struct soap*, wchar_t *const*, const char*, const char*);

inline int soap_write_wstring(struct soap *soap, wchar_t *const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_wstring(soap, p, "string", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 wchar_t ** SOAP_FMAC4 soap_get_wstring(struct soap*, wchar_t **, const char*, const char*);

inline int soap_read_wstring(struct soap *soap, wchar_t **p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_wstring(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_PointerTons2__ZoneChannelsFeatureInfo_DEFINED
#define SOAP_TYPE_PointerTons2__ZoneChannelsFeatureInfo_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ZoneChannelsFeatureInfo(struct soap*, ns2__ZoneChannelsFeatureInfo *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ZoneChannelsFeatureInfo(struct soap*, const char *, int, ns2__ZoneChannelsFeatureInfo *const*, const char *);
SOAP_FMAC3 ns2__ZoneChannelsFeatureInfo ** SOAP_FMAC4 soap_in_PointerTons2__ZoneChannelsFeatureInfo(struct soap*, const char*, ns2__ZoneChannelsFeatureInfo **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ZoneChannelsFeatureInfo(struct soap*, ns2__ZoneChannelsFeatureInfo *const*, const char*, const char*);
SOAP_FMAC3 ns2__ZoneChannelsFeatureInfo ** SOAP_FMAC4 soap_get_PointerTons2__ZoneChannelsFeatureInfo(struct soap*, ns2__ZoneChannelsFeatureInfo **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CountChannelsFeatureInfo_DEFINED
#define SOAP_TYPE_PointerTons2__CountChannelsFeatureInfo_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CountChannelsFeatureInfo(struct soap*, ns2__CountChannelsFeatureInfo *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CountChannelsFeatureInfo(struct soap*, const char *, int, ns2__CountChannelsFeatureInfo *const*, const char *);
SOAP_FMAC3 ns2__CountChannelsFeatureInfo ** SOAP_FMAC4 soap_in_PointerTons2__CountChannelsFeatureInfo(struct soap*, const char*, ns2__CountChannelsFeatureInfo **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CountChannelsFeatureInfo(struct soap*, ns2__CountChannelsFeatureInfo *const*, const char*, const char*);
SOAP_FMAC3 ns2__CountChannelsFeatureInfo ** SOAP_FMAC4 soap_get_PointerTons2__CountChannelsFeatureInfo(struct soap*, ns2__CountChannelsFeatureInfo **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__Trigger_DEFINED
#define SOAP_TYPE_PointerTons2__Trigger_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__Trigger(struct soap*, ns2__Trigger *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__Trigger(struct soap*, const char *, int, ns2__Trigger *const*, const char *);
SOAP_FMAC3 ns2__Trigger ** SOAP_FMAC4 soap_in_PointerTons2__Trigger(struct soap*, const char*, ns2__Trigger **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__Trigger(struct soap*, ns2__Trigger *const*, const char*, const char*);
SOAP_FMAC3 ns2__Trigger ** SOAP_FMAC4 soap_get_PointerTons2__Trigger(struct soap*, ns2__Trigger **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToPointerTons2__DigitalOutputElement_DEFINED
#define SOAP_TYPE_PointerToPointerTons2__DigitalOutputElement_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons2__DigitalOutputElement(struct soap*, ns2__DigitalOutputElement **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons2__DigitalOutputElement(struct soap*, const char *, int, ns2__DigitalOutputElement **const*, const char *);
SOAP_FMAC3 ns2__DigitalOutputElement *** SOAP_FMAC4 soap_in_PointerToPointerTons2__DigitalOutputElement(struct soap*, const char*, ns2__DigitalOutputElement ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons2__DigitalOutputElement(struct soap*, ns2__DigitalOutputElement **const*, const char*, const char*);
SOAP_FMAC3 ns2__DigitalOutputElement *** SOAP_FMAC4 soap_get_PointerToPointerTons2__DigitalOutputElement(struct soap*, ns2__DigitalOutputElement ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__DigitalOutputElement_DEFINED
#define SOAP_TYPE_PointerTons2__DigitalOutputElement_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__DigitalOutputElement(struct soap*, ns2__DigitalOutputElement *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__DigitalOutputElement(struct soap*, const char *, int, ns2__DigitalOutputElement *const*, const char *);
SOAP_FMAC3 ns2__DigitalOutputElement ** SOAP_FMAC4 soap_in_PointerTons2__DigitalOutputElement(struct soap*, const char*, ns2__DigitalOutputElement **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__DigitalOutputElement(struct soap*, ns2__DigitalOutputElement *const*, const char*, const char*);
SOAP_FMAC3 ns2__DigitalOutputElement ** SOAP_FMAC4 soap_get_PointerTons2__DigitalOutputElement(struct soap*, ns2__DigitalOutputElement **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToPointerTons2__CurrentObject_DEFINED
#define SOAP_TYPE_PointerToPointerTons2__CurrentObject_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons2__CurrentObject(struct soap*, ns2__CurrentObject **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons2__CurrentObject(struct soap*, const char *, int, ns2__CurrentObject **const*, const char *);
SOAP_FMAC3 ns2__CurrentObject *** SOAP_FMAC4 soap_in_PointerToPointerTons2__CurrentObject(struct soap*, const char*, ns2__CurrentObject ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons2__CurrentObject(struct soap*, ns2__CurrentObject **const*, const char*, const char*);
SOAP_FMAC3 ns2__CurrentObject *** SOAP_FMAC4 soap_get_PointerToPointerTons2__CurrentObject(struct soap*, ns2__CurrentObject ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CurrentObject_DEFINED
#define SOAP_TYPE_PointerTons2__CurrentObject_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CurrentObject(struct soap*, ns2__CurrentObject *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CurrentObject(struct soap*, const char *, int, ns2__CurrentObject *const*, const char *);
SOAP_FMAC3 ns2__CurrentObject ** SOAP_FMAC4 soap_in_PointerTons2__CurrentObject(struct soap*, const char*, ns2__CurrentObject **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CurrentObject(struct soap*, ns2__CurrentObject *const*, const char*, const char*);
SOAP_FMAC3 ns2__CurrentObject ** SOAP_FMAC4 soap_get_PointerTons2__CurrentObject(struct soap*, ns2__CurrentObject **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ClearZoneID_DEFINED
#define SOAP_TYPE_PointerTons2__ClearZoneID_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ClearZoneID(struct soap*, ns2__ClearZoneID *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ClearZoneID(struct soap*, const char *, int, ns2__ClearZoneID *const*, const char *);
SOAP_FMAC3 ns2__ClearZoneID ** SOAP_FMAC4 soap_in_PointerTons2__ClearZoneID(struct soap*, const char*, ns2__ClearZoneID **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ClearZoneID(struct soap*, ns2__ClearZoneID *const*, const char*, const char*);
SOAP_FMAC3 ns2__ClearZoneID ** SOAP_FMAC4 soap_get_PointerTons2__ClearZoneID(struct soap*, ns2__ClearZoneID **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__FillRegionID_DEFINED
#define SOAP_TYPE_PointerTons2__FillRegionID_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__FillRegionID(struct soap*, ns2__FillRegionID *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__FillRegionID(struct soap*, const char *, int, ns2__FillRegionID *const*, const char *);
SOAP_FMAC3 ns2__FillRegionID ** SOAP_FMAC4 soap_in_PointerTons2__FillRegionID(struct soap*, const char*, ns2__FillRegionID **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__FillRegionID(struct soap*, ns2__FillRegionID *const*, const char*, const char*);
SOAP_FMAC3 ns2__FillRegionID ** SOAP_FMAC4 soap_get_PointerTons2__FillRegionID(struct soap*, ns2__FillRegionID **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToPointerTons2__ZoneData_DEFINED
#define SOAP_TYPE_PointerToPointerTons2__ZoneData_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons2__ZoneData(struct soap*, ns2__ZoneData **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons2__ZoneData(struct soap*, const char *, int, ns2__ZoneData **const*, const char *);
SOAP_FMAC3 ns2__ZoneData *** SOAP_FMAC4 soap_in_PointerToPointerTons2__ZoneData(struct soap*, const char*, ns2__ZoneData ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons2__ZoneData(struct soap*, ns2__ZoneData **const*, const char*, const char*);
SOAP_FMAC3 ns2__ZoneData *** SOAP_FMAC4 soap_get_PointerToPointerTons2__ZoneData(struct soap*, ns2__ZoneData ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ZoneData_DEFINED
#define SOAP_TYPE_PointerTons2__ZoneData_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ZoneData(struct soap*, ns2__ZoneData *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ZoneData(struct soap*, const char *, int, ns2__ZoneData *const*, const char *);
SOAP_FMAC3 ns2__ZoneData ** SOAP_FMAC4 soap_in_PointerTons2__ZoneData(struct soap*, const char*, ns2__ZoneData **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ZoneData(struct soap*, ns2__ZoneData *const*, const char*, const char*);
SOAP_FMAC3 ns2__ZoneData ** SOAP_FMAC4 soap_get_PointerTons2__ZoneData(struct soap*, ns2__ZoneData **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToPointerTons2__CountChannelData_DEFINED
#define SOAP_TYPE_PointerToPointerTons2__CountChannelData_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons2__CountChannelData(struct soap*, ns2__CountChannelData **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons2__CountChannelData(struct soap*, const char *, int, ns2__CountChannelData **const*, const char *);
SOAP_FMAC3 ns2__CountChannelData *** SOAP_FMAC4 soap_in_PointerToPointerTons2__CountChannelData(struct soap*, const char*, ns2__CountChannelData ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons2__CountChannelData(struct soap*, ns2__CountChannelData **const*, const char*, const char*);
SOAP_FMAC3 ns2__CountChannelData *** SOAP_FMAC4 soap_get_PointerToPointerTons2__CountChannelData(struct soap*, ns2__CountChannelData ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CountChannelData_DEFINED
#define SOAP_TYPE_PointerTons2__CountChannelData_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CountChannelData(struct soap*, ns2__CountChannelData *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CountChannelData(struct soap*, const char *, int, ns2__CountChannelData *const*, const char *);
SOAP_FMAC3 ns2__CountChannelData ** SOAP_FMAC4 soap_in_PointerTons2__CountChannelData(struct soap*, const char*, ns2__CountChannelData **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CountChannelData(struct soap*, ns2__CountChannelData *const*, const char*, const char*);
SOAP_FMAC3 ns2__CountChannelData ** SOAP_FMAC4 soap_get_PointerTons2__CountChannelData(struct soap*, ns2__CountChannelData **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CountingGateID_DEFINED
#define SOAP_TYPE_PointerTons2__CountingGateID_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CountingGateID(struct soap*, ns2__CountingGateID *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CountingGateID(struct soap*, const char *, int, ns2__CountingGateID *const*, const char *);
SOAP_FMAC3 ns2__CountingGateID ** SOAP_FMAC4 soap_in_PointerTons2__CountingGateID(struct soap*, const char*, ns2__CountingGateID **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CountingGateID(struct soap*, ns2__CountingGateID *const*, const char*, const char*);
SOAP_FMAC3 ns2__CountingGateID ** SOAP_FMAC4 soap_get_PointerTons2__CountingGateID(struct soap*, ns2__CountingGateID **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToxsd__decimal_DEFINED
#define SOAP_TYPE_PointerToxsd__decimal_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToxsd__decimal(struct soap*, std::wstring *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToxsd__decimal(struct soap*, const char *, int, std::wstring *const*, const char *);
SOAP_FMAC3 std::wstring ** SOAP_FMAC4 soap_in_PointerToxsd__decimal(struct soap*, const char*, std::wstring **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToxsd__decimal(struct soap*, std::wstring *const*, const char*, const char*);
SOAP_FMAC3 std::wstring ** SOAP_FMAC4 soap_get_PointerToxsd__decimal(struct soap*, std::wstring **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTobool_DEFINED
#define SOAP_TYPE_PointerTobool_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTobool(struct soap*, bool *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTobool(struct soap*, const char *, int, bool *const*, const char *);
SOAP_FMAC3 bool ** SOAP_FMAC4 soap_in_PointerTobool(struct soap*, const char*, bool **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTobool(struct soap*, bool *const*, const char*, const char*);
SOAP_FMAC3 bool ** SOAP_FMAC4 soap_get_PointerTobool(struct soap*, bool **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToPointerTons2__HistoricObject_DEFINED
#define SOAP_TYPE_PointerToPointerTons2__HistoricObject_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons2__HistoricObject(struct soap*, ns2__HistoricObject **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons2__HistoricObject(struct soap*, const char *, int, ns2__HistoricObject **const*, const char *);
SOAP_FMAC3 ns2__HistoricObject *** SOAP_FMAC4 soap_in_PointerToPointerTons2__HistoricObject(struct soap*, const char*, ns2__HistoricObject ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons2__HistoricObject(struct soap*, ns2__HistoricObject **const*, const char*, const char*);
SOAP_FMAC3 ns2__HistoricObject *** SOAP_FMAC4 soap_get_PointerToPointerTons2__HistoricObject(struct soap*, ns2__HistoricObject ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__HistoricObject_DEFINED
#define SOAP_TYPE_PointerTons2__HistoricObject_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__HistoricObject(struct soap*, ns2__HistoricObject *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__HistoricObject(struct soap*, const char *, int, ns2__HistoricObject *const*, const char *);
SOAP_FMAC3 ns2__HistoricObject ** SOAP_FMAC4 soap_in_PointerTons2__HistoricObject(struct soap*, const char*, ns2__HistoricObject **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__HistoricObject(struct soap*, ns2__HistoricObject *const*, const char*, const char*);
SOAP_FMAC3 ns2__HistoricObject ** SOAP_FMAC4 soap_get_PointerTons2__HistoricObject(struct soap*, ns2__HistoricObject **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__Coordinate_USCORE2D_DEFINED
#define SOAP_TYPE_PointerTons2__Coordinate_USCORE2D_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__Coordinate_USCORE2D(struct soap*, ns2__Coordinate_USCORE2D *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__Coordinate_USCORE2D(struct soap*, const char *, int, ns2__Coordinate_USCORE2D *const*, const char *);
SOAP_FMAC3 ns2__Coordinate_USCORE2D ** SOAP_FMAC4 soap_in_PointerTons2__Coordinate_USCORE2D(struct soap*, const char*, ns2__Coordinate_USCORE2D **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__Coordinate_USCORE2D(struct soap*, ns2__Coordinate_USCORE2D *const*, const char*, const char*);
SOAP_FMAC3 ns2__Coordinate_USCORE2D ** SOAP_FMAC4 soap_get_PointerTons2__Coordinate_USCORE2D(struct soap*, ns2__Coordinate_USCORE2D **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__BinaryData_DEFINED
#define SOAP_TYPE_PointerTons2__BinaryData_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__BinaryData(struct soap*, ns2__BinaryData *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__BinaryData(struct soap*, const char *, int, ns2__BinaryData *const*, const char *);
SOAP_FMAC3 ns2__BinaryData ** SOAP_FMAC4 soap_in_PointerTons2__BinaryData(struct soap*, const char*, ns2__BinaryData **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__BinaryData(struct soap*, ns2__BinaryData *const*, const char*, const char*);
SOAP_FMAC3 ns2__BinaryData ** SOAP_FMAC4 soap_get_PointerTons2__BinaryData(struct soap*, ns2__BinaryData **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToPointerTons2__DigitalInputElement_DEFINED
#define SOAP_TYPE_PointerToPointerTons2__DigitalInputElement_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons2__DigitalInputElement(struct soap*, ns2__DigitalInputElement **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons2__DigitalInputElement(struct soap*, const char *, int, ns2__DigitalInputElement **const*, const char *);
SOAP_FMAC3 ns2__DigitalInputElement *** SOAP_FMAC4 soap_in_PointerToPointerTons2__DigitalInputElement(struct soap*, const char*, ns2__DigitalInputElement ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons2__DigitalInputElement(struct soap*, ns2__DigitalInputElement **const*, const char*, const char*);
SOAP_FMAC3 ns2__DigitalInputElement *** SOAP_FMAC4 soap_get_PointerToPointerTons2__DigitalInputElement(struct soap*, ns2__DigitalInputElement ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__DigitalInputElement_DEFINED
#define SOAP_TYPE_PointerTons2__DigitalInputElement_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__DigitalInputElement(struct soap*, ns2__DigitalInputElement *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__DigitalInputElement(struct soap*, const char *, int, ns2__DigitalInputElement *const*, const char *);
SOAP_FMAC3 ns2__DigitalInputElement ** SOAP_FMAC4 soap_in_PointerTons2__DigitalInputElement(struct soap*, const char*, ns2__DigitalInputElement **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__DigitalInputElement(struct soap*, ns2__DigitalInputElement *const*, const char*, const char*);
SOAP_FMAC3 ns2__DigitalInputElement ** SOAP_FMAC4 soap_get_PointerTons2__DigitalInputElement(struct soap*, ns2__DigitalInputElement **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTo__ns2__union_TaskContainer_DEFINED
#define SOAP_TYPE_PointerTo__ns2__union_TaskContainer_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTo__ns2__union_TaskContainer(struct soap*, __ns2__union_TaskContainer *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTo__ns2__union_TaskContainer(struct soap*, const char *, int, __ns2__union_TaskContainer *const*, const char *);
SOAP_FMAC3 __ns2__union_TaskContainer ** SOAP_FMAC4 soap_in_PointerTo__ns2__union_TaskContainer(struct soap*, const char*, __ns2__union_TaskContainer **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTo__ns2__union_TaskContainer(struct soap*, __ns2__union_TaskContainer *const*, const char*, const char*);
SOAP_FMAC3 __ns2__union_TaskContainer ** SOAP_FMAC4 soap_get_PointerTo__ns2__union_TaskContainer(struct soap*, __ns2__union_TaskContainer **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskDeleteAllNotifications_DEFINED
#define SOAP_TYPE_PointerTons2__TaskDeleteAllNotifications_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskDeleteAllNotifications(struct soap*, ns2__TaskDeleteAllNotifications *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskDeleteAllNotifications(struct soap*, const char *, int, ns2__TaskDeleteAllNotifications *const*, const char *);
SOAP_FMAC3 ns2__TaskDeleteAllNotifications ** SOAP_FMAC4 soap_in_PointerTons2__TaskDeleteAllNotifications(struct soap*, const char*, ns2__TaskDeleteAllNotifications **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskDeleteAllNotifications(struct soap*, ns2__TaskDeleteAllNotifications *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskDeleteAllNotifications ** SOAP_FMAC4 soap_get_PointerTons2__TaskDeleteAllNotifications(struct soap*, ns2__TaskDeleteAllNotifications **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskDeleteAllTasks_DEFINED
#define SOAP_TYPE_PointerTons2__TaskDeleteAllTasks_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskDeleteAllTasks(struct soap*, ns2__TaskDeleteAllTasks *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskDeleteAllTasks(struct soap*, const char *, int, ns2__TaskDeleteAllTasks *const*, const char *);
SOAP_FMAC3 ns2__TaskDeleteAllTasks ** SOAP_FMAC4 soap_in_PointerTons2__TaskDeleteAllTasks(struct soap*, const char*, ns2__TaskDeleteAllTasks **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskDeleteAllTasks(struct soap*, ns2__TaskDeleteAllTasks *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskDeleteAllTasks ** SOAP_FMAC4 soap_get_PointerTons2__TaskDeleteAllTasks(struct soap*, ns2__TaskDeleteAllTasks **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeFeaturesInfo_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeFeaturesInfo_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeFeaturesInfo(struct soap*, ns2__TaskSubscribeFeaturesInfo *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeFeaturesInfo(struct soap*, const char *, int, ns2__TaskSubscribeFeaturesInfo *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeFeaturesInfo ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeFeaturesInfo(struct soap*, const char*, ns2__TaskSubscribeFeaturesInfo **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeFeaturesInfo(struct soap*, ns2__TaskSubscribeFeaturesInfo *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeFeaturesInfo ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeFeaturesInfo(struct soap*, ns2__TaskSubscribeFeaturesInfo **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeZoneChannels_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeZoneChannels_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeZoneChannels(struct soap*, ns2__TaskSubscribeZoneChannels *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeZoneChannels(struct soap*, const char *, int, ns2__TaskSubscribeZoneChannels *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeZoneChannels ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeZoneChannels(struct soap*, const char*, ns2__TaskSubscribeZoneChannels **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeZoneChannels(struct soap*, ns2__TaskSubscribeZoneChannels *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeZoneChannels ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeZoneChannels(struct soap*, ns2__TaskSubscribeZoneChannels **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeCountChannels_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeCountChannels_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeCountChannels(struct soap*, ns2__TaskSubscribeCountChannels *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeCountChannels(struct soap*, const char *, int, ns2__TaskSubscribeCountChannels *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeCountChannels ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeCountChannels(struct soap*, const char*, ns2__TaskSubscribeCountChannels **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeCountChannels(struct soap*, ns2__TaskSubscribeCountChannels *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeCountChannels ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeCountChannels(struct soap*, ns2__TaskSubscribeCountChannels **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeClearZone_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeClearZone_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeClearZone(struct soap*, ns2__TaskSubscribeClearZone *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeClearZone(struct soap*, const char *, int, ns2__TaskSubscribeClearZone *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeClearZone ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeClearZone(struct soap*, const char*, ns2__TaskSubscribeClearZone **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeClearZone(struct soap*, ns2__TaskSubscribeClearZone *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeClearZone ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeClearZone(struct soap*, ns2__TaskSubscribeClearZone **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskRebootNow_DEFINED
#define SOAP_TYPE_PointerTons2__TaskRebootNow_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskRebootNow(struct soap*, ns2__TaskRebootNow *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskRebootNow(struct soap*, const char *, int, ns2__TaskRebootNow *const*, const char *);
SOAP_FMAC3 ns2__TaskRebootNow ** SOAP_FMAC4 soap_in_PointerTons2__TaskRebootNow(struct soap*, const char*, ns2__TaskRebootNow **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskRebootNow(struct soap*, ns2__TaskRebootNow *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskRebootNow ** SOAP_FMAC4 soap_get_PointerTons2__TaskRebootNow(struct soap*, ns2__TaskRebootNow **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeObjectList_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeObjectList_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeObjectList(struct soap*, ns2__TaskSubscribeObjectList *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeObjectList(struct soap*, const char *, int, ns2__TaskSubscribeObjectList *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeObjectList ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeObjectList(struct soap*, const char*, ns2__TaskSubscribeObjectList **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeObjectList(struct soap*, ns2__TaskSubscribeObjectList *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeObjectList ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeObjectList(struct soap*, ns2__TaskSubscribeObjectList **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeAlive_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeAlive_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeAlive(struct soap*, ns2__TaskSubscribeAlive *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeAlive(struct soap*, const char *, int, ns2__TaskSubscribeAlive *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeAlive ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeAlive(struct soap*, const char*, ns2__TaskSubscribeAlive **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeAlive(struct soap*, ns2__TaskSubscribeAlive *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeAlive ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeAlive(struct soap*, ns2__TaskSubscribeAlive **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeVideoStore_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeVideoStore_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeVideoStore(struct soap*, ns2__TaskSubscribeVideoStore *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeVideoStore(struct soap*, const char *, int, ns2__TaskSubscribeVideoStore *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeVideoStore ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeVideoStore(struct soap*, const char*, ns2__TaskSubscribeVideoStore **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeVideoStore(struct soap*, ns2__TaskSubscribeVideoStore *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeVideoStore ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeVideoStore(struct soap*, ns2__TaskSubscribeVideoStore **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeSendParameters_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeSendParameters_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeSendParameters(struct soap*, ns2__TaskSubscribeSendParameters *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeSendParameters(struct soap*, const char *, int, ns2__TaskSubscribeSendParameters *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeSendParameters ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeSendParameters(struct soap*, const char*, ns2__TaskSubscribeSendParameters **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeSendParameters(struct soap*, ns2__TaskSubscribeSendParameters *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeSendParameters ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeSendParameters(struct soap*, ns2__TaskSubscribeSendParameters **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeCameraImages_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeCameraImages_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeCameraImages(struct soap*, ns2__TaskSubscribeCameraImages *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeCameraImages(struct soap*, const char *, int, ns2__TaskSubscribeCameraImages *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeCameraImages ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeCameraImages(struct soap*, const char*, ns2__TaskSubscribeCameraImages **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeCameraImages(struct soap*, ns2__TaskSubscribeCameraImages *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeCameraImages ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeCameraImages(struct soap*, ns2__TaskSubscribeCameraImages **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeDigitalInput_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeDigitalInput_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeDigitalInput(struct soap*, ns2__TaskSubscribeDigitalInput *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeDigitalInput(struct soap*, const char *, int, ns2__TaskSubscribeDigitalInput *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeDigitalInput ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeDigitalInput(struct soap*, const char*, ns2__TaskSubscribeDigitalInput **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeDigitalInput(struct soap*, ns2__TaskSubscribeDigitalInput *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeDigitalInput ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeDigitalInput(struct soap*, ns2__TaskSubscribeDigitalInput **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeFill_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeFill_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeFill(struct soap*, ns2__TaskSubscribeFill *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeFill(struct soap*, const char *, int, ns2__TaskSubscribeFill *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeFill ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeFill(struct soap*, const char*, ns2__TaskSubscribeFill **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeFill(struct soap*, ns2__TaskSubscribeFill *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeFill ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeFill(struct soap*, ns2__TaskSubscribeFill **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeCounting_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeCounting_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeCounting(struct soap*, ns2__TaskSubscribeCounting *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeCounting(struct soap*, const char *, int, ns2__TaskSubscribeCounting *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeCounting ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeCounting(struct soap*, const char*, ns2__TaskSubscribeCounting **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeCounting(struct soap*, ns2__TaskSubscribeCounting *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeCounting ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeCounting(struct soap*, ns2__TaskSubscribeCounting **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSetDateTime_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSetDateTime_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSetDateTime(struct soap*, ns2__TaskSetDateTime *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSetDateTime(struct soap*, const char *, int, ns2__TaskSetDateTime *const*, const char *);
SOAP_FMAC3 ns2__TaskSetDateTime ** SOAP_FMAC4 soap_in_PointerTons2__TaskSetDateTime(struct soap*, const char*, ns2__TaskSetDateTime **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSetDateTime(struct soap*, ns2__TaskSetDateTime *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSetDateTime ** SOAP_FMAC4 soap_get_PointerTons2__TaskSetDateTime(struct soap*, ns2__TaskSetDateTime **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSetDigitalOutput_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSetDigitalOutput_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSetDigitalOutput(struct soap*, ns2__TaskSetDigitalOutput *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSetDigitalOutput(struct soap*, const char *, int, ns2__TaskSetDigitalOutput *const*, const char *);
SOAP_FMAC3 ns2__TaskSetDigitalOutput ** SOAP_FMAC4 soap_in_PointerTons2__TaskSetDigitalOutput(struct soap*, const char*, ns2__TaskSetDigitalOutput **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSetDigitalOutput(struct soap*, ns2__TaskSetDigitalOutput *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSetDigitalOutput ** SOAP_FMAC4 soap_get_PointerTons2__TaskSetDigitalOutput(struct soap*, ns2__TaskSetDigitalOutput **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeErrorLog_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeErrorLog_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeErrorLog(struct soap*, ns2__TaskSubscribeErrorLog *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeErrorLog(struct soap*, const char *, int, ns2__TaskSubscribeErrorLog *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeErrorLog ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeErrorLog(struct soap*, const char*, ns2__TaskSubscribeErrorLog **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeErrorLog(struct soap*, ns2__TaskSubscribeErrorLog *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeErrorLog ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeErrorLog(struct soap*, ns2__TaskSubscribeErrorLog **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskSubscribeLogfiles_DEFINED
#define SOAP_TYPE_PointerTons2__TaskSubscribeLogfiles_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskSubscribeLogfiles(struct soap*, ns2__TaskSubscribeLogfiles *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskSubscribeLogfiles(struct soap*, const char *, int, ns2__TaskSubscribeLogfiles *const*, const char *);
SOAP_FMAC3 ns2__TaskSubscribeLogfiles ** SOAP_FMAC4 soap_in_PointerTons2__TaskSubscribeLogfiles(struct soap*, const char*, ns2__TaskSubscribeLogfiles **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskSubscribeLogfiles(struct soap*, ns2__TaskSubscribeLogfiles *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskSubscribeLogfiles ** SOAP_FMAC4 soap_get_PointerTons2__TaskSubscribeLogfiles(struct soap*, ns2__TaskSubscribeLogfiles **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskRequestParameters_DEFINED
#define SOAP_TYPE_PointerTons2__TaskRequestParameters_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskRequestParameters(struct soap*, ns2__TaskRequestParameters *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskRequestParameters(struct soap*, const char *, int, ns2__TaskRequestParameters *const*, const char *);
SOAP_FMAC3 ns2__TaskRequestParameters ** SOAP_FMAC4 soap_in_PointerTons2__TaskRequestParameters(struct soap*, const char*, ns2__TaskRequestParameters **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskRequestParameters(struct soap*, ns2__TaskRequestParameters *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskRequestParameters ** SOAP_FMAC4 soap_get_PointerTons2__TaskRequestParameters(struct soap*, ns2__TaskRequestParameters **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TaskRequestUpdate_DEFINED
#define SOAP_TYPE_PointerTons2__TaskRequestUpdate_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TaskRequestUpdate(struct soap*, ns2__TaskRequestUpdate *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TaskRequestUpdate(struct soap*, const char *, int, ns2__TaskRequestUpdate *const*, const char *);
SOAP_FMAC3 ns2__TaskRequestUpdate ** SOAP_FMAC4 soap_in_PointerTons2__TaskRequestUpdate(struct soap*, const char*, ns2__TaskRequestUpdate **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TaskRequestUpdate(struct soap*, ns2__TaskRequestUpdate *const*, const char*, const char*);
SOAP_FMAC3 ns2__TaskRequestUpdate ** SOAP_FMAC4 soap_get_PointerTons2__TaskRequestUpdate(struct soap*, ns2__TaskRequestUpdate **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__FeatureInfoNotification_DEFINED
#define SOAP_TYPE_PointerTons2__FeatureInfoNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__FeatureInfoNotification(struct soap*, ns2__FeatureInfoNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__FeatureInfoNotification(struct soap*, const char *, int, ns2__FeatureInfoNotification *const*, const char *);
SOAP_FMAC3 ns2__FeatureInfoNotification ** SOAP_FMAC4 soap_in_PointerTons2__FeatureInfoNotification(struct soap*, const char*, ns2__FeatureInfoNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__FeatureInfoNotification(struct soap*, ns2__FeatureInfoNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__FeatureInfoNotification ** SOAP_FMAC4 soap_get_PointerTons2__FeatureInfoNotification(struct soap*, ns2__FeatureInfoNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ZoneChannelsNotification_DEFINED
#define SOAP_TYPE_PointerTons2__ZoneChannelsNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ZoneChannelsNotification(struct soap*, ns2__ZoneChannelsNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ZoneChannelsNotification(struct soap*, const char *, int, ns2__ZoneChannelsNotification *const*, const char *);
SOAP_FMAC3 ns2__ZoneChannelsNotification ** SOAP_FMAC4 soap_in_PointerTons2__ZoneChannelsNotification(struct soap*, const char*, ns2__ZoneChannelsNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ZoneChannelsNotification(struct soap*, ns2__ZoneChannelsNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__ZoneChannelsNotification ** SOAP_FMAC4 soap_get_PointerTons2__ZoneChannelsNotification(struct soap*, ns2__ZoneChannelsNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CountChannelsNotification_DEFINED
#define SOAP_TYPE_PointerTons2__CountChannelsNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CountChannelsNotification(struct soap*, ns2__CountChannelsNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CountChannelsNotification(struct soap*, const char *, int, ns2__CountChannelsNotification *const*, const char *);
SOAP_FMAC3 ns2__CountChannelsNotification ** SOAP_FMAC4 soap_in_PointerTons2__CountChannelsNotification(struct soap*, const char*, ns2__CountChannelsNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CountChannelsNotification(struct soap*, ns2__CountChannelsNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__CountChannelsNotification ** SOAP_FMAC4 soap_get_PointerTons2__CountChannelsNotification(struct soap*, ns2__CountChannelsNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ClearZoneNotification_DEFINED
#define SOAP_TYPE_PointerTons2__ClearZoneNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ClearZoneNotification(struct soap*, ns2__ClearZoneNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ClearZoneNotification(struct soap*, const char *, int, ns2__ClearZoneNotification *const*, const char *);
SOAP_FMAC3 ns2__ClearZoneNotification ** SOAP_FMAC4 soap_in_PointerTons2__ClearZoneNotification(struct soap*, const char*, ns2__ClearZoneNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ClearZoneNotification(struct soap*, ns2__ClearZoneNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__ClearZoneNotification ** SOAP_FMAC4 soap_get_PointerTons2__ClearZoneNotification(struct soap*, ns2__ClearZoneNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__StartupNotification_DEFINED
#define SOAP_TYPE_PointerTons2__StartupNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__StartupNotification(struct soap*, ns2__StartupNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__StartupNotification(struct soap*, const char *, int, ns2__StartupNotification *const*, const char *);
SOAP_FMAC3 ns2__StartupNotification ** SOAP_FMAC4 soap_in_PointerTons2__StartupNotification(struct soap*, const char*, ns2__StartupNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__StartupNotification(struct soap*, ns2__StartupNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__StartupNotification ** SOAP_FMAC4 soap_get_PointerTons2__StartupNotification(struct soap*, ns2__StartupNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__HistoricObjectListNotification_DEFINED
#define SOAP_TYPE_PointerTons2__HistoricObjectListNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__HistoricObjectListNotification(struct soap*, ns2__HistoricObjectListNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__HistoricObjectListNotification(struct soap*, const char *, int, ns2__HistoricObjectListNotification *const*, const char *);
SOAP_FMAC3 ns2__HistoricObjectListNotification ** SOAP_FMAC4 soap_in_PointerTons2__HistoricObjectListNotification(struct soap*, const char*, ns2__HistoricObjectListNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__HistoricObjectListNotification(struct soap*, ns2__HistoricObjectListNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__HistoricObjectListNotification ** SOAP_FMAC4 soap_get_PointerTons2__HistoricObjectListNotification(struct soap*, ns2__HistoricObjectListNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CurrentObjectListNotification_DEFINED
#define SOAP_TYPE_PointerTons2__CurrentObjectListNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CurrentObjectListNotification(struct soap*, ns2__CurrentObjectListNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CurrentObjectListNotification(struct soap*, const char *, int, ns2__CurrentObjectListNotification *const*, const char *);
SOAP_FMAC3 ns2__CurrentObjectListNotification ** SOAP_FMAC4 soap_in_PointerTons2__CurrentObjectListNotification(struct soap*, const char*, ns2__CurrentObjectListNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CurrentObjectListNotification(struct soap*, ns2__CurrentObjectListNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__CurrentObjectListNotification ** SOAP_FMAC4 soap_get_PointerTons2__CurrentObjectListNotification(struct soap*, ns2__CurrentObjectListNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__AliveNotification_DEFINED
#define SOAP_TYPE_PointerTons2__AliveNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__AliveNotification(struct soap*, ns2__AliveNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__AliveNotification(struct soap*, const char *, int, ns2__AliveNotification *const*, const char *);
SOAP_FMAC3 ns2__AliveNotification ** SOAP_FMAC4 soap_in_PointerTons2__AliveNotification(struct soap*, const char*, ns2__AliveNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__AliveNotification(struct soap*, ns2__AliveNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__AliveNotification ** SOAP_FMAC4 soap_get_PointerTons2__AliveNotification(struct soap*, ns2__AliveNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ErrorLogfilesNotification_DEFINED
#define SOAP_TYPE_PointerTons2__ErrorLogfilesNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ErrorLogfilesNotification(struct soap*, ns2__ErrorLogfilesNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ErrorLogfilesNotification(struct soap*, const char *, int, ns2__ErrorLogfilesNotification *const*, const char *);
SOAP_FMAC3 ns2__ErrorLogfilesNotification ** SOAP_FMAC4 soap_in_PointerTons2__ErrorLogfilesNotification(struct soap*, const char*, ns2__ErrorLogfilesNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ErrorLogfilesNotification(struct soap*, ns2__ErrorLogfilesNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__ErrorLogfilesNotification ** SOAP_FMAC4 soap_get_PointerTons2__ErrorLogfilesNotification(struct soap*, ns2__ErrorLogfilesNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__LogfilesNotification_DEFINED
#define SOAP_TYPE_PointerTons2__LogfilesNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__LogfilesNotification(struct soap*, ns2__LogfilesNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__LogfilesNotification(struct soap*, const char *, int, ns2__LogfilesNotification *const*, const char *);
SOAP_FMAC3 ns2__LogfilesNotification ** SOAP_FMAC4 soap_in_PointerTons2__LogfilesNotification(struct soap*, const char*, ns2__LogfilesNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__LogfilesNotification(struct soap*, ns2__LogfilesNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__LogfilesNotification ** SOAP_FMAC4 soap_get_PointerTons2__LogfilesNotification(struct soap*, ns2__LogfilesNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ParameterNotification_DEFINED
#define SOAP_TYPE_PointerTons2__ParameterNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ParameterNotification(struct soap*, ns2__ParameterNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ParameterNotification(struct soap*, const char *, int, ns2__ParameterNotification *const*, const char *);
SOAP_FMAC3 ns2__ParameterNotification ** SOAP_FMAC4 soap_in_PointerTons2__ParameterNotification(struct soap*, const char*, ns2__ParameterNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ParameterNotification(struct soap*, ns2__ParameterNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__ParameterNotification ** SOAP_FMAC4 soap_get_PointerTons2__ParameterNotification(struct soap*, ns2__ParameterNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CameraImagesNotification_DEFINED
#define SOAP_TYPE_PointerTons2__CameraImagesNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CameraImagesNotification(struct soap*, ns2__CameraImagesNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CameraImagesNotification(struct soap*, const char *, int, ns2__CameraImagesNotification *const*, const char *);
SOAP_FMAC3 ns2__CameraImagesNotification ** SOAP_FMAC4 soap_in_PointerTons2__CameraImagesNotification(struct soap*, const char*, ns2__CameraImagesNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CameraImagesNotification(struct soap*, ns2__CameraImagesNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__CameraImagesNotification ** SOAP_FMAC4 soap_get_PointerTons2__CameraImagesNotification(struct soap*, ns2__CameraImagesNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__DigitalInputNotification_DEFINED
#define SOAP_TYPE_PointerTons2__DigitalInputNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__DigitalInputNotification(struct soap*, ns2__DigitalInputNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__DigitalInputNotification(struct soap*, const char *, int, ns2__DigitalInputNotification *const*, const char *);
SOAP_FMAC3 ns2__DigitalInputNotification ** SOAP_FMAC4 soap_in_PointerTons2__DigitalInputNotification(struct soap*, const char*, ns2__DigitalInputNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__DigitalInputNotification(struct soap*, ns2__DigitalInputNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__DigitalInputNotification ** SOAP_FMAC4 soap_get_PointerTons2__DigitalInputNotification(struct soap*, ns2__DigitalInputNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__FillNotification_DEFINED
#define SOAP_TYPE_PointerTons2__FillNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__FillNotification(struct soap*, ns2__FillNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__FillNotification(struct soap*, const char *, int, ns2__FillNotification *const*, const char *);
SOAP_FMAC3 ns2__FillNotification ** SOAP_FMAC4 soap_in_PointerTons2__FillNotification(struct soap*, const char*, ns2__FillNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__FillNotification(struct soap*, ns2__FillNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__FillNotification ** SOAP_FMAC4 soap_get_PointerTons2__FillNotification(struct soap*, ns2__FillNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CountNotification_DEFINED
#define SOAP_TYPE_PointerTons2__CountNotification_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CountNotification(struct soap*, ns2__CountNotification *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CountNotification(struct soap*, const char *, int, ns2__CountNotification *const*, const char *);
SOAP_FMAC3 ns2__CountNotification ** SOAP_FMAC4 soap_in_PointerTons2__CountNotification(struct soap*, const char*, ns2__CountNotification **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CountNotification(struct soap*, ns2__CountNotification *const*, const char*, const char*);
SOAP_FMAC3 ns2__CountNotification ** SOAP_FMAC4 soap_get_PointerTons2__CountNotification(struct soap*, ns2__CountNotification **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__Coordinate_USCORE3D_DEFINED
#define SOAP_TYPE_PointerTons2__Coordinate_USCORE3D_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__Coordinate_USCORE3D(struct soap*, ns2__Coordinate_USCORE3D *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__Coordinate_USCORE3D(struct soap*, const char *, int, ns2__Coordinate_USCORE3D *const*, const char *);
SOAP_FMAC3 ns2__Coordinate_USCORE3D ** SOAP_FMAC4 soap_in_PointerTons2__Coordinate_USCORE3D(struct soap*, const char*, ns2__Coordinate_USCORE3D **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__Coordinate_USCORE3D(struct soap*, ns2__Coordinate_USCORE3D *const*, const char*, const char*);
SOAP_FMAC3 ns2__Coordinate_USCORE3D ** SOAP_FMAC4 soap_get_PointerTons2__Coordinate_USCORE3D(struct soap*, ns2__Coordinate_USCORE3D **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToPointerTons2__ZoneChannelFeatureInfo_DEFINED
#define SOAP_TYPE_PointerToPointerTons2__ZoneChannelFeatureInfo_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons2__ZoneChannelFeatureInfo(struct soap*, ns2__ZoneChannelFeatureInfo **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons2__ZoneChannelFeatureInfo(struct soap*, const char *, int, ns2__ZoneChannelFeatureInfo **const*, const char *);
SOAP_FMAC3 ns2__ZoneChannelFeatureInfo *** SOAP_FMAC4 soap_in_PointerToPointerTons2__ZoneChannelFeatureInfo(struct soap*, const char*, ns2__ZoneChannelFeatureInfo ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons2__ZoneChannelFeatureInfo(struct soap*, ns2__ZoneChannelFeatureInfo **const*, const char*, const char*);
SOAP_FMAC3 ns2__ZoneChannelFeatureInfo *** SOAP_FMAC4 soap_get_PointerToPointerTons2__ZoneChannelFeatureInfo(struct soap*, ns2__ZoneChannelFeatureInfo ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ZoneChannelFeatureInfo_DEFINED
#define SOAP_TYPE_PointerTons2__ZoneChannelFeatureInfo_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ZoneChannelFeatureInfo(struct soap*, ns2__ZoneChannelFeatureInfo *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ZoneChannelFeatureInfo(struct soap*, const char *, int, ns2__ZoneChannelFeatureInfo *const*, const char *);
SOAP_FMAC3 ns2__ZoneChannelFeatureInfo ** SOAP_FMAC4 soap_in_PointerTons2__ZoneChannelFeatureInfo(struct soap*, const char*, ns2__ZoneChannelFeatureInfo **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ZoneChannelFeatureInfo(struct soap*, ns2__ZoneChannelFeatureInfo *const*, const char*, const char*);
SOAP_FMAC3 ns2__ZoneChannelFeatureInfo ** SOAP_FMAC4 soap_get_PointerTons2__ZoneChannelFeatureInfo(struct soap*, ns2__ZoneChannelFeatureInfo **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToPointerTons2__CountChannelFeatureInfo_DEFINED
#define SOAP_TYPE_PointerToPointerTons2__CountChannelFeatureInfo_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToPointerTons2__CountChannelFeatureInfo(struct soap*, ns2__CountChannelFeatureInfo **const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToPointerTons2__CountChannelFeatureInfo(struct soap*, const char *, int, ns2__CountChannelFeatureInfo **const*, const char *);
SOAP_FMAC3 ns2__CountChannelFeatureInfo *** SOAP_FMAC4 soap_in_PointerToPointerTons2__CountChannelFeatureInfo(struct soap*, const char*, ns2__CountChannelFeatureInfo ***, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToPointerTons2__CountChannelFeatureInfo(struct soap*, ns2__CountChannelFeatureInfo **const*, const char*, const char*);
SOAP_FMAC3 ns2__CountChannelFeatureInfo *** SOAP_FMAC4 soap_get_PointerToPointerTons2__CountChannelFeatureInfo(struct soap*, ns2__CountChannelFeatureInfo ***, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CountChannelFeatureInfo_DEFINED
#define SOAP_TYPE_PointerTons2__CountChannelFeatureInfo_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CountChannelFeatureInfo(struct soap*, ns2__CountChannelFeatureInfo *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CountChannelFeatureInfo(struct soap*, const char *, int, ns2__CountChannelFeatureInfo *const*, const char *);
SOAP_FMAC3 ns2__CountChannelFeatureInfo ** SOAP_FMAC4 soap_in_PointerTons2__CountChannelFeatureInfo(struct soap*, const char*, ns2__CountChannelFeatureInfo **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CountChannelFeatureInfo(struct soap*, ns2__CountChannelFeatureInfo *const*, const char*, const char*);
SOAP_FMAC3 ns2__CountChannelFeatureInfo ** SOAP_FMAC4 soap_get_PointerTons2__CountChannelFeatureInfo(struct soap*, ns2__CountChannelFeatureInfo **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ObjectClassName_DEFINED
#define SOAP_TYPE_PointerTons2__ObjectClassName_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ObjectClassName(struct soap*, std::wstring *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ObjectClassName(struct soap*, const char *, int, std::wstring *const*, const char *);
SOAP_FMAC3 std::wstring ** SOAP_FMAC4 soap_in_PointerTons2__ObjectClassName(struct soap*, const char*, std::wstring **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ObjectClassName(struct soap*, std::wstring *const*, const char*, const char*);
SOAP_FMAC3 std::wstring ** SOAP_FMAC4 soap_get_PointerTons2__ObjectClassName(struct soap*, std::wstring **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__MeasuringChannelName_DEFINED
#define SOAP_TYPE_PointerTons2__MeasuringChannelName_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__MeasuringChannelName(struct soap*, std::wstring *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__MeasuringChannelName(struct soap*, const char *, int, std::wstring *const*, const char *);
SOAP_FMAC3 std::wstring ** SOAP_FMAC4 soap_in_PointerTons2__MeasuringChannelName(struct soap*, const char*, std::wstring **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__MeasuringChannelName(struct soap*, std::wstring *const*, const char*, const char*);
SOAP_FMAC3 std::wstring ** SOAP_FMAC4 soap_get_PointerTons2__MeasuringChannelName(struct soap*, std::wstring **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__TimeTrigger_DEFINED
#define SOAP_TYPE_PointerTons2__TimeTrigger_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__TimeTrigger(struct soap*, ns2__TimeTrigger *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__TimeTrigger(struct soap*, const char *, int, ns2__TimeTrigger *const*, const char *);
SOAP_FMAC3 ns2__TimeTrigger ** SOAP_FMAC4 soap_in_PointerTons2__TimeTrigger(struct soap*, const char*, ns2__TimeTrigger **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__TimeTrigger(struct soap*, ns2__TimeTrigger *const*, const char*, const char*);
SOAP_FMAC3 ns2__TimeTrigger ** SOAP_FMAC4 soap_get_PointerTons2__TimeTrigger(struct soap*, ns2__TimeTrigger **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__EventTrigger_DEFINED
#define SOAP_TYPE_PointerTons2__EventTrigger_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__EventTrigger(struct soap*, ns2__EventTrigger *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__EventTrigger(struct soap*, const char *, int, ns2__EventTrigger *const*, const char *);
SOAP_FMAC3 ns2__EventTrigger ** SOAP_FMAC4 soap_in_PointerTons2__EventTrigger(struct soap*, const char*, ns2__EventTrigger **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__EventTrigger(struct soap*, ns2__EventTrigger *const*, const char*, const char*);
SOAP_FMAC3 ns2__EventTrigger ** SOAP_FMAC4 soap_get_PointerTons2__EventTrigger(struct soap*, ns2__EventTrigger **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerToxsd__duration_DEFINED
#define SOAP_TYPE_PointerToxsd__duration_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToxsd__duration(struct soap*, LONG64 *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToxsd__duration(struct soap*, const char *, int, LONG64 *const*, const char *);
SOAP_FMAC3 LONG64 ** SOAP_FMAC4 soap_in_PointerToxsd__duration(struct soap*, const char*, LONG64 **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToxsd__duration(struct soap*, LONG64 *const*, const char*, const char*);
SOAP_FMAC3 LONG64 ** SOAP_FMAC4 soap_get_PointerToxsd__duration(struct soap*, LONG64 **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ClockTime_DEFINED
#define SOAP_TYPE_PointerTons2__ClockTime_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ClockTime(struct soap*, ns2__ClockTime *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ClockTime(struct soap*, const char *, int, ns2__ClockTime *const*, const char *);
SOAP_FMAC3 ns2__ClockTime ** SOAP_FMAC4 soap_in_PointerTons2__ClockTime(struct soap*, const char*, ns2__ClockTime **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ClockTime(struct soap*, ns2__ClockTime *const*, const char*, const char*);
SOAP_FMAC3 ns2__ClockTime ** SOAP_FMAC4 soap_get_PointerTons2__ClockTime(struct soap*, ns2__ClockTime **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__Date_DEFINED
#define SOAP_TYPE_PointerTons2__Date_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__Date(struct soap*, ns2__Date *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__Date(struct soap*, const char *, int, ns2__Date *const*, const char *);
SOAP_FMAC3 ns2__Date ** SOAP_FMAC4 soap_in_PointerTons2__Date(struct soap*, const char*, ns2__Date **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__Date(struct soap*, ns2__Date *const*, const char*, const char*);
SOAP_FMAC3 ns2__Date ** SOAP_FMAC4 soap_get_PointerTons2__Date(struct soap*, ns2__Date **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__DayOfMonth_DEFINED
#define SOAP_TYPE_PointerTons2__DayOfMonth_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__DayOfMonth(struct soap*, unsigned int *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__DayOfMonth(struct soap*, const char *, int, unsigned int *const*, const char *);
SOAP_FMAC3 unsigned int ** SOAP_FMAC4 soap_in_PointerTons2__DayOfMonth(struct soap*, const char*, unsigned int **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__DayOfMonth(struct soap*, unsigned int *const*, const char*, const char*);
SOAP_FMAC3 unsigned int ** SOAP_FMAC4 soap_get_PointerTons2__DayOfMonth(struct soap*, unsigned int **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__DayOfWeek_DEFINED
#define SOAP_TYPE_PointerTons2__DayOfWeek_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__DayOfWeek(struct soap*, enum ns2__DayOfWeek *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__DayOfWeek(struct soap*, const char *, int, enum ns2__DayOfWeek *const*, const char *);
SOAP_FMAC3 enum ns2__DayOfWeek ** SOAP_FMAC4 soap_in_PointerTons2__DayOfWeek(struct soap*, const char*, enum ns2__DayOfWeek **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__DayOfWeek(struct soap*, enum ns2__DayOfWeek *const*, const char*, const char*);
SOAP_FMAC3 enum ns2__DayOfWeek ** SOAP_FMAC4 soap_get_PointerTons2__DayOfWeek(struct soap*, enum ns2__DayOfWeek **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__FeatureChangedEvent_DEFINED
#define SOAP_TYPE_PointerTons2__FeatureChangedEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__FeatureChangedEvent(struct soap*, ns2__FeatureChangedEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__FeatureChangedEvent(struct soap*, const char *, int, ns2__FeatureChangedEvent *const*, const char *);
SOAP_FMAC3 ns2__FeatureChangedEvent ** SOAP_FMAC4 soap_in_PointerTons2__FeatureChangedEvent(struct soap*, const char*, ns2__FeatureChangedEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__FeatureChangedEvent(struct soap*, ns2__FeatureChangedEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__FeatureChangedEvent ** SOAP_FMAC4 soap_get_PointerTons2__FeatureChangedEvent(struct soap*, ns2__FeatureChangedEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ZoneChannelsEvent_DEFINED
#define SOAP_TYPE_PointerTons2__ZoneChannelsEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ZoneChannelsEvent(struct soap*, ns2__ZoneChannelsEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ZoneChannelsEvent(struct soap*, const char *, int, ns2__ZoneChannelsEvent *const*, const char *);
SOAP_FMAC3 ns2__ZoneChannelsEvent ** SOAP_FMAC4 soap_in_PointerTons2__ZoneChannelsEvent(struct soap*, const char*, ns2__ZoneChannelsEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ZoneChannelsEvent(struct soap*, ns2__ZoneChannelsEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__ZoneChannelsEvent ** SOAP_FMAC4 soap_get_PointerTons2__ZoneChannelsEvent(struct soap*, ns2__ZoneChannelsEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CountChannelsEvent_DEFINED
#define SOAP_TYPE_PointerTons2__CountChannelsEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CountChannelsEvent(struct soap*, ns2__CountChannelsEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CountChannelsEvent(struct soap*, const char *, int, ns2__CountChannelsEvent *const*, const char *);
SOAP_FMAC3 ns2__CountChannelsEvent ** SOAP_FMAC4 soap_in_PointerTons2__CountChannelsEvent(struct soap*, const char*, ns2__CountChannelsEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CountChannelsEvent(struct soap*, ns2__CountChannelsEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__CountChannelsEvent ** SOAP_FMAC4 soap_get_PointerTons2__CountChannelsEvent(struct soap*, ns2__CountChannelsEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__ClearZoneEvent_DEFINED
#define SOAP_TYPE_PointerTons2__ClearZoneEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__ClearZoneEvent(struct soap*, ns2__ClearZoneEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__ClearZoneEvent(struct soap*, const char *, int, ns2__ClearZoneEvent *const*, const char *);
SOAP_FMAC3 ns2__ClearZoneEvent ** SOAP_FMAC4 soap_in_PointerTons2__ClearZoneEvent(struct soap*, const char*, ns2__ClearZoneEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__ClearZoneEvent(struct soap*, ns2__ClearZoneEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__ClearZoneEvent ** SOAP_FMAC4 soap_get_PointerTons2__ClearZoneEvent(struct soap*, ns2__ClearZoneEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CurrentObjectListEvent_DEFINED
#define SOAP_TYPE_PointerTons2__CurrentObjectListEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CurrentObjectListEvent(struct soap*, ns2__CurrentObjectListEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CurrentObjectListEvent(struct soap*, const char *, int, ns2__CurrentObjectListEvent *const*, const char *);
SOAP_FMAC3 ns2__CurrentObjectListEvent ** SOAP_FMAC4 soap_in_PointerTons2__CurrentObjectListEvent(struct soap*, const char*, ns2__CurrentObjectListEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CurrentObjectListEvent(struct soap*, ns2__CurrentObjectListEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__CurrentObjectListEvent ** SOAP_FMAC4 soap_get_PointerTons2__CurrentObjectListEvent(struct soap*, ns2__CurrentObjectListEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__OSD_USCOREEvent_DEFINED
#define SOAP_TYPE_PointerTons2__OSD_USCOREEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__OSD_USCOREEvent(struct soap*, ns2__OSD_USCOREEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__OSD_USCOREEvent(struct soap*, const char *, int, ns2__OSD_USCOREEvent *const*, const char *);
SOAP_FMAC3 ns2__OSD_USCOREEvent ** SOAP_FMAC4 soap_in_PointerTons2__OSD_USCOREEvent(struct soap*, const char*, ns2__OSD_USCOREEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__OSD_USCOREEvent(struct soap*, ns2__OSD_USCOREEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__OSD_USCOREEvent ** SOAP_FMAC4 soap_get_PointerTons2__OSD_USCOREEvent(struct soap*, ns2__OSD_USCOREEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__OneTimeEvent_DEFINED
#define SOAP_TYPE_PointerTons2__OneTimeEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__OneTimeEvent(struct soap*, ns2__OneTimeEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__OneTimeEvent(struct soap*, const char *, int, ns2__OneTimeEvent *const*, const char *);
SOAP_FMAC3 ns2__OneTimeEvent ** SOAP_FMAC4 soap_in_PointerTons2__OneTimeEvent(struct soap*, const char*, ns2__OneTimeEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__OneTimeEvent(struct soap*, ns2__OneTimeEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__OneTimeEvent ** SOAP_FMAC4 soap_get_PointerTons2__OneTimeEvent(struct soap*, ns2__OneTimeEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__DigitalInputEvent_DEFINED
#define SOAP_TYPE_PointerTons2__DigitalInputEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__DigitalInputEvent(struct soap*, ns2__DigitalInputEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__DigitalInputEvent(struct soap*, const char *, int, ns2__DigitalInputEvent *const*, const char *);
SOAP_FMAC3 ns2__DigitalInputEvent ** SOAP_FMAC4 soap_in_PointerTons2__DigitalInputEvent(struct soap*, const char*, ns2__DigitalInputEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__DigitalInputEvent(struct soap*, ns2__DigitalInputEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__DigitalInputEvent ** SOAP_FMAC4 soap_get_PointerTons2__DigitalInputEvent(struct soap*, ns2__DigitalInputEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__FillEvent_DEFINED
#define SOAP_TYPE_PointerTons2__FillEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__FillEvent(struct soap*, ns2__FillEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__FillEvent(struct soap*, const char *, int, ns2__FillEvent *const*, const char *);
SOAP_FMAC3 ns2__FillEvent ** SOAP_FMAC4 soap_in_PointerTons2__FillEvent(struct soap*, const char*, ns2__FillEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__FillEvent(struct soap*, ns2__FillEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__FillEvent ** SOAP_FMAC4 soap_get_PointerTons2__FillEvent(struct soap*, ns2__FillEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__CountEvent_DEFINED
#define SOAP_TYPE_PointerTons2__CountEvent_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__CountEvent(struct soap*, ns2__CountEvent *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__CountEvent(struct soap*, const char *, int, ns2__CountEvent *const*, const char *);
SOAP_FMAC3 ns2__CountEvent ** SOAP_FMAC4 soap_in_PointerTons2__CountEvent(struct soap*, const char*, ns2__CountEvent **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__CountEvent(struct soap*, ns2__CountEvent *const*, const char*, const char*);
SOAP_FMAC3 ns2__CountEvent ** SOAP_FMAC4 soap_get_PointerTons2__CountEvent(struct soap*, ns2__CountEvent **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTons2__DigitalInputEventType_DEFINED
#define SOAP_TYPE_PointerTons2__DigitalInputEventType_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTons2__DigitalInputEventType(struct soap*, enum ns2__DigitalInputEventType *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTons2__DigitalInputEventType(struct soap*, const char *, int, enum ns2__DigitalInputEventType *const*, const char *);
SOAP_FMAC3 enum ns2__DigitalInputEventType ** SOAP_FMAC4 soap_in_PointerTons2__DigitalInputEventType(struct soap*, const char*, enum ns2__DigitalInputEventType **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTons2__DigitalInputEventType(struct soap*, enum ns2__DigitalInputEventType *const*, const char*, const char*);
SOAP_FMAC3 enum ns2__DigitalInputEventType ** SOAP_FMAC4 soap_get_PointerTons2__DigitalInputEventType(struct soap*, enum ns2__DigitalInputEventType **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTounsignedInt_DEFINED
#define SOAP_TYPE_PointerTounsignedInt_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTounsignedInt(struct soap*, unsigned int *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTounsignedInt(struct soap*, const char *, int, unsigned int *const*, const char *);
SOAP_FMAC3 unsigned int ** SOAP_FMAC4 soap_in_PointerTounsignedInt(struct soap*, const char*, unsigned int **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTounsignedInt(struct soap*, unsigned int *const*, const char*, const char*);
SOAP_FMAC3 unsigned int ** SOAP_FMAC4 soap_get_PointerTounsignedInt(struct soap*, unsigned int **, const char*, const char*);
#endif

#ifndef SOAP_TYPE_PointerTounsignedByte_DEFINED
#define SOAP_TYPE_PointerTounsignedByte_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTounsignedByte(struct soap*, unsigned char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTounsignedByte(struct soap*, const char *, int, unsigned char *const*, const char *);
SOAP_FMAC3 unsigned char ** SOAP_FMAC4 soap_in_PointerTounsignedByte(struct soap*, const char*, unsigned char **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTounsignedByte(struct soap*, unsigned char *const*, const char*, const char*);
SOAP_FMAC3 unsigned char ** SOAP_FMAC4 soap_get_PointerTounsignedByte(struct soap*, unsigned char **, const char*, const char*);
#endif

#ifndef SOAP_TYPE__XML_DEFINED
#define SOAP_TYPE__XML_DEFINED
#endif

#ifndef SOAP_TYPE__QName_DEFINED
#define SOAP_TYPE__QName_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default__QName(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__QName(struct soap*, char *const*);

#define soap__QName2s(soap, a) soap_QName2s(soap, (a))
SOAP_FMAC3 int SOAP_FMAC4 soap_out__QName(struct soap*, const char*, int, char*const*, const char*);

#define soap_s2_QName(soap, s, a) soap_s2QName((soap), (s), (char**)(a), 0, -1, NULL)
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in__QName(struct soap*, const char*, char **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put__QName(struct soap*, char *const*, const char*, const char*);

inline int soap_write__QName(struct soap *soap, char *const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put__QName(soap, p, "QName", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get__QName(struct soap*, char **, const char*, const char*);

inline int soap_read__QName(struct soap *soap, char **p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get__QName(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#ifndef SOAP_TYPE_string_DEFINED
#define SOAP_TYPE_string_DEFINED
SOAP_FMAC3 void SOAP_FMAC4 soap_default_string(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_string(struct soap*, char *const*);

#define soap_string2s(soap, a) (a)
SOAP_FMAC3 int SOAP_FMAC4 soap_out_string(struct soap*, const char*, int, char*const*, const char*);

#define soap_s2string(soap, s, a) soap_s2char((soap), (s), (char**)(a), 0, -1, NULL)
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in_string(struct soap*, const char*, char **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_string(struct soap*, char *const*, const char*, const char*);

inline int soap_write_string(struct soap *soap, char *const*p)
{
	soap_free_temp(soap);
	if (p)
	{	if (soap_begin_send(soap) || soap_put_string(soap, p, "string", "") || soap_end_send(soap))
			return soap->error;
	}
	return SOAP_OK;
}
SOAP_FMAC3 char ** SOAP_FMAC4 soap_get_string(struct soap*, char **, const char*, const char*);

inline int soap_read_string(struct soap *soap, char **p)
{
	if (p)
	{	if (soap_begin_recv(soap) || soap_get_string(soap, p, NULL, NULL) == NULL || soap_end_recv(soap))
			return soap->error;
	}
	return SOAP_OK;
}
#endif

#endif

/* End of soapH.h */
