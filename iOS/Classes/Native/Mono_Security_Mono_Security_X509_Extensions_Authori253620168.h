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

#include "Mono_Security_Mono_Security_X509_X509Extension4211806919.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
struct  AuthorityKeyIdentifierExtension_t253620168  : public X509Extension_t4211806920
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::aki
	ByteU5BU5D_t4260760469* ___aki_3;

public:
	inline static int32_t get_offset_of_aki_3() { return static_cast<int32_t>(offsetof(AuthorityKeyIdentifierExtension_t253620168, ___aki_3)); }
	inline ByteU5BU5D_t4260760469* get_aki_3() const { return ___aki_3; }
	inline ByteU5BU5D_t4260760469** get_address_of_aki_3() { return &___aki_3; }
	inline void set_aki_3(ByteU5BU5D_t4260760469* value)
	{
		___aki_3 = value;
		Il2CppCodeGenWriteBarrier(&___aki_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
