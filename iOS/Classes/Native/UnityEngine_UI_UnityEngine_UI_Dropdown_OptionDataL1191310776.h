#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_t1553873098;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Dropdown/OptionDataList
struct  OptionDataList_t1191310776  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown/OptionDataList::m_Options
	List_1_t1553873098 * ___m_Options_0;

public:
	inline static int32_t get_offset_of_m_Options_0() { return static_cast<int32_t>(offsetof(OptionDataList_t1191310776, ___m_Options_0)); }
	inline List_1_t1553873098 * get_m_Options_0() const { return ___m_Options_0; }
	inline List_1_t1553873098 ** get_address_of_m_Options_0() { return &___m_Options_0; }
	inline void set_m_Options_0(List_1_t1553873098 * value)
	{
		___m_Options_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Options_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
