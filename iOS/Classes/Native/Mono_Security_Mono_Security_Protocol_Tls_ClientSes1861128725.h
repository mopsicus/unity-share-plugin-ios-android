﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionCache
struct  ClientSessionCache_t1861128725  : public Il2CppObject
{
public:

public:
};

struct ClientSessionCache_t1861128725_StaticFields
{
public:
	// System.Collections.Hashtable Mono.Security.Protocol.Tls.ClientSessionCache::cache
	Hashtable_t1407064410 * ___cache_0;
	// System.Object Mono.Security.Protocol.Tls.ClientSessionCache::locker
	Il2CppObject * ___locker_1;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(ClientSessionCache_t1861128725_StaticFields, ___cache_0)); }
	inline Hashtable_t1407064410 * get_cache_0() const { return ___cache_0; }
	inline Hashtable_t1407064410 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Hashtable_t1407064410 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier(&___cache_0, value);
	}

	inline static int32_t get_offset_of_locker_1() { return static_cast<int32_t>(offsetof(ClientSessionCache_t1861128725_StaticFields, ___locker_1)); }
	inline Il2CppObject * get_locker_1() const { return ___locker_1; }
	inline Il2CppObject ** get_address_of_locker_1() { return &___locker_1; }
	inline void set_locker_1(Il2CppObject * value)
	{
		___locker_1 = value;
		Il2CppCodeGenWriteBarrier(&___locker_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
