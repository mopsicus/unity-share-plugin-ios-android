﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t4294171512  : public Il2CppObject
{
public:

public:
};

struct CrossAppDomainChannel_t4294171512_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	Il2CppObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t4294171512_StaticFields, ___s_lock_0)); }
	inline Il2CppObject * get_s_lock_0() const { return ___s_lock_0; }
	inline Il2CppObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(Il2CppObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_lock_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
