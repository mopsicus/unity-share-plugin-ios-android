﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t2101301545;

#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t3745725366  : public Context_t658806145
{
public:
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t2101301545 * ___sslStream_30;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_31;

public:
	inline static int32_t get_offset_of_sslStream_30() { return static_cast<int32_t>(offsetof(ClientContext_t3745725366, ___sslStream_30)); }
	inline SslClientStream_t2101301545 * get_sslStream_30() const { return ___sslStream_30; }
	inline SslClientStream_t2101301545 ** get_address_of_sslStream_30() { return &___sslStream_30; }
	inline void set_sslStream_30(SslClientStream_t2101301545 * value)
	{
		___sslStream_30 = value;
		Il2CppCodeGenWriteBarrier(&___sslStream_30, value);
	}

	inline static int32_t get_offset_of_clientHelloProtocol_31() { return static_cast<int32_t>(offsetof(ClientContext_t3745725366, ___clientHelloProtocol_31)); }
	inline int16_t get_clientHelloProtocol_31() const { return ___clientHelloProtocol_31; }
	inline int16_t* get_address_of_clientHelloProtocol_31() { return &___clientHelloProtocol_31; }
	inline void set_clientHelloProtocol_31(int16_t value)
	{
		___clientHelloProtocol_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
