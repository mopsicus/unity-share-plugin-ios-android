﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t2263956512;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t48641242;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "System_System_Text_RegularExpressions_RegexOptions3066443743.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t2161232213  : public Il2CppObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	Il2CppObject * ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	Il2CppObject * ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t4054002952* ___group_names_5;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t3230847821* ___group_numbers_6;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_7;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_8;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t2161232213, ___machineFactory_1)); }
	inline Il2CppObject * get_machineFactory_1() const { return ___machineFactory_1; }
	inline Il2CppObject ** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(Il2CppObject * value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier(&___machineFactory_1, value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t2161232213, ___mapping_2)); }
	inline Il2CppObject * get_mapping_2() const { return ___mapping_2; }
	inline Il2CppObject ** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(Il2CppObject * value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier(&___mapping_2, value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t2161232213, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t2161232213, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_group_names_5() { return static_cast<int32_t>(offsetof(Regex_t2161232213, ___group_names_5)); }
	inline StringU5BU5D_t4054002952* get_group_names_5() const { return ___group_names_5; }
	inline StringU5BU5D_t4054002952** get_address_of_group_names_5() { return &___group_names_5; }
	inline void set_group_names_5(StringU5BU5D_t4054002952* value)
	{
		___group_names_5 = value;
		Il2CppCodeGenWriteBarrier(&___group_names_5, value);
	}

	inline static int32_t get_offset_of_group_numbers_6() { return static_cast<int32_t>(offsetof(Regex_t2161232213, ___group_numbers_6)); }
	inline Int32U5BU5D_t3230847821* get_group_numbers_6() const { return ___group_numbers_6; }
	inline Int32U5BU5D_t3230847821** get_address_of_group_numbers_6() { return &___group_numbers_6; }
	inline void set_group_numbers_6(Int32U5BU5D_t3230847821* value)
	{
		___group_numbers_6 = value;
		Il2CppCodeGenWriteBarrier(&___group_numbers_6, value);
	}

	inline static int32_t get_offset_of_pattern_7() { return static_cast<int32_t>(offsetof(Regex_t2161232213, ___pattern_7)); }
	inline String_t* get_pattern_7() const { return ___pattern_7; }
	inline String_t** get_address_of_pattern_7() { return &___pattern_7; }
	inline void set_pattern_7(String_t* value)
	{
		___pattern_7 = value;
		Il2CppCodeGenWriteBarrier(&___pattern_7, value);
	}

	inline static int32_t get_offset_of_roptions_8() { return static_cast<int32_t>(offsetof(Regex_t2161232213, ___roptions_8)); }
	inline int32_t get_roptions_8() const { return ___roptions_8; }
	inline int32_t* get_address_of_roptions_8() { return &___roptions_8; }
	inline void set_roptions_8(int32_t value)
	{
		___roptions_8 = value;
	}
};

struct Regex_t2161232213_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t2263956512 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t2161232213_StaticFields, ___cache_0)); }
	inline FactoryCache_t2263956512 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t2263956512 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t2263956512 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier(&___cache_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
