﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Threading.Timer
struct Timer_t1893171827;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t2601135431  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t3948406897 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t1893171827 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t2601135431, ____objects_0)); }
	inline ArrayList_t3948406897 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t3948406897 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t3948406897 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier(&____objects_0, value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t2601135431, ____timer_1)); }
	inline Timer_t1893171827 * get__timer_1() const { return ____timer_1; }
	inline Timer_t1893171827 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t1893171827 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier(&____timer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
