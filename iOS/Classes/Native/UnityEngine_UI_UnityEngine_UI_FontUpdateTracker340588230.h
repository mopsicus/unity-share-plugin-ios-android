﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct Dictionary_2_t1597579653;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.FontUpdateTracker
struct  FontUpdateTracker_t340588230  : public Il2CppObject
{
public:

public:
};

struct FontUpdateTracker_t340588230_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>> UnityEngine.UI.FontUpdateTracker::m_Tracked
	Dictionary_2_t1597579653 * ___m_Tracked_0;

public:
	inline static int32_t get_offset_of_m_Tracked_0() { return static_cast<int32_t>(offsetof(FontUpdateTracker_t340588230_StaticFields, ___m_Tracked_0)); }
	inline Dictionary_2_t1597579653 * get_m_Tracked_0() const { return ___m_Tracked_0; }
	inline Dictionary_2_t1597579653 ** get_address_of_m_Tracked_0() { return &___m_Tracked_0; }
	inline void set_m_Tracked_0(Dictionary_2_t1597579653 * value)
	{
		___m_Tracked_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Tracked_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
