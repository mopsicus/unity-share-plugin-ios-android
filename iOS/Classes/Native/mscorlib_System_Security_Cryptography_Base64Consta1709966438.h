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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t1709966438  : public Il2CppObject
{
public:

public:
};

struct Base64Constants_t1709966438_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t4260760469* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t4260760469* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t1709966438_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t4260760469* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t4260760469** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t4260760469* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier(&___EncodeTable_0, value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t1709966438_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t4260760469* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t4260760469** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t4260760469* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier(&___DecodeTable_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
