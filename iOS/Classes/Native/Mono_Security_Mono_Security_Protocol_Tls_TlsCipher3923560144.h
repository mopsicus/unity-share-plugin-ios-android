﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Object
struct Il2CppObject;

#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuit580420223.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsCipherSuite
struct  TlsCipherSuite_t3923560144  : public CipherSuite_t580420223
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.TlsCipherSuite::header
	ByteU5BU5D_t4260760469* ___header_21;
	// System.Object Mono.Security.Protocol.Tls.TlsCipherSuite::headerLock
	Il2CppObject * ___headerLock_22;

public:
	inline static int32_t get_offset_of_header_21() { return static_cast<int32_t>(offsetof(TlsCipherSuite_t3923560144, ___header_21)); }
	inline ByteU5BU5D_t4260760469* get_header_21() const { return ___header_21; }
	inline ByteU5BU5D_t4260760469** get_address_of_header_21() { return &___header_21; }
	inline void set_header_21(ByteU5BU5D_t4260760469* value)
	{
		___header_21 = value;
		Il2CppCodeGenWriteBarrier(&___header_21, value);
	}

	inline static int32_t get_offset_of_headerLock_22() { return static_cast<int32_t>(offsetof(TlsCipherSuite_t3923560144, ___headerLock_22)); }
	inline Il2CppObject * get_headerLock_22() const { return ___headerLock_22; }
	inline Il2CppObject ** get_address_of_headerLock_22() { return &___headerLock_22; }
	inline void set_headerLock_22(Il2CppObject * value)
	{
		___headerLock_22 = value;
		Il2CppCodeGenWriteBarrier(&___headerLock_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
