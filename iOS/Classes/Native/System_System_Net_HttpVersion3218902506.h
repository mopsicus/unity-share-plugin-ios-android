﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t763695022;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpVersion
struct  HttpVersion_t3218902506  : public Il2CppObject
{
public:

public:
};

struct HttpVersion_t3218902506_StaticFields
{
public:
	// System.Version System.Net.HttpVersion::Version10
	Version_t763695022 * ___Version10_0;
	// System.Version System.Net.HttpVersion::Version11
	Version_t763695022 * ___Version11_1;

public:
	inline static int32_t get_offset_of_Version10_0() { return static_cast<int32_t>(offsetof(HttpVersion_t3218902506_StaticFields, ___Version10_0)); }
	inline Version_t763695022 * get_Version10_0() const { return ___Version10_0; }
	inline Version_t763695022 ** get_address_of_Version10_0() { return &___Version10_0; }
	inline void set_Version10_0(Version_t763695022 * value)
	{
		___Version10_0 = value;
		Il2CppCodeGenWriteBarrier(&___Version10_0, value);
	}

	inline static int32_t get_offset_of_Version11_1() { return static_cast<int32_t>(offsetof(HttpVersion_t3218902506_StaticFields, ___Version11_1)); }
	inline Version_t763695022 * get_Version11_1() const { return ___Version11_1; }
	inline Version_t763695022 ** get_address_of_Version11_1() { return &___Version11_1; }
	inline void set_Version11_1(Version_t763695022 * value)
	{
		___Version11_1 = value;
		Il2CppCodeGenWriteBarrier(&___Version11_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
