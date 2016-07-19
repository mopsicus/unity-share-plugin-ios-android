﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t2297606589;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2623608376.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct  TlsServerCertificateRequest_t3188160136  : public HandshakeMessage_t2623608376
{
public:
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::certificateTypes
	ClientCertificateTypeU5BU5D_t2297606589* ___certificateTypes_10;
	// System.String[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::distinguisedNames
	StringU5BU5D_t4054002952* ___distinguisedNames_11;

public:
	inline static int32_t get_offset_of_certificateTypes_10() { return static_cast<int32_t>(offsetof(TlsServerCertificateRequest_t3188160136, ___certificateTypes_10)); }
	inline ClientCertificateTypeU5BU5D_t2297606589* get_certificateTypes_10() const { return ___certificateTypes_10; }
	inline ClientCertificateTypeU5BU5D_t2297606589** get_address_of_certificateTypes_10() { return &___certificateTypes_10; }
	inline void set_certificateTypes_10(ClientCertificateTypeU5BU5D_t2297606589* value)
	{
		___certificateTypes_10 = value;
		Il2CppCodeGenWriteBarrier(&___certificateTypes_10, value);
	}

	inline static int32_t get_offset_of_distinguisedNames_11() { return static_cast<int32_t>(offsetof(TlsServerCertificateRequest_t3188160136, ___distinguisedNames_11)); }
	inline StringU5BU5D_t4054002952* get_distinguisedNames_11() const { return ___distinguisedNames_11; }
	inline StringU5BU5D_t4054002952** get_address_of_distinguisedNames_11() { return &___distinguisedNames_11; }
	inline void set_distinguisedNames_11(StringU5BU5D_t4054002952* value)
	{
		___distinguisedNames_11 = value;
		Il2CppCodeGenWriteBarrier(&___distinguisedNames_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
