﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Array
struct Il2CppArray;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Object
struct Il2CppObject;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t867971690;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t1318805963;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t1678224062;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t1939100039;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo
struct  MonoEnumInfo_t3537819206 
{
public:
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	Il2CppArray * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t4054002952* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t1407064410 * ___name_hash_3;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206, ___utype_0)); }
	inline Type_t * get_utype_0() const { return ___utype_0; }
	inline Type_t ** get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(Type_t * value)
	{
		___utype_0 = value;
		Il2CppCodeGenWriteBarrier(&___utype_0, value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206, ___values_1)); }
	inline Il2CppArray * get_values_1() const { return ___values_1; }
	inline Il2CppArray ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(Il2CppArray * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier(&___values_1, value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206, ___names_2)); }
	inline StringU5BU5D_t4054002952* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t4054002952** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t4054002952* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier(&___names_2, value);
	}

	inline static int32_t get_offset_of_name_hash_3() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206, ___name_hash_3)); }
	inline Hashtable_t1407064410 * get_name_hash_3() const { return ___name_hash_3; }
	inline Hashtable_t1407064410 ** get_address_of_name_hash_3() { return &___name_hash_3; }
	inline void set_name_hash_3(Hashtable_t1407064410 * value)
	{
		___name_hash_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_hash_3, value);
	}
};

struct MonoEnumInfo_t3537819206_StaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t1407064410 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	Il2CppObject * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t867971690 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t1318805963 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t1678224062 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t1939100039 * ___long_comparer_10;

public:
	inline static int32_t get_offset_of_global_cache_5() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206_StaticFields, ___global_cache_5)); }
	inline Hashtable_t1407064410 * get_global_cache_5() const { return ___global_cache_5; }
	inline Hashtable_t1407064410 ** get_address_of_global_cache_5() { return &___global_cache_5; }
	inline void set_global_cache_5(Hashtable_t1407064410 * value)
	{
		___global_cache_5 = value;
		Il2CppCodeGenWriteBarrier(&___global_cache_5, value);
	}

	inline static int32_t get_offset_of_global_cache_monitor_6() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206_StaticFields, ___global_cache_monitor_6)); }
	inline Il2CppObject * get_global_cache_monitor_6() const { return ___global_cache_monitor_6; }
	inline Il2CppObject ** get_address_of_global_cache_monitor_6() { return &___global_cache_monitor_6; }
	inline void set_global_cache_monitor_6(Il2CppObject * value)
	{
		___global_cache_monitor_6 = value;
		Il2CppCodeGenWriteBarrier(&___global_cache_monitor_6, value);
	}

	inline static int32_t get_offset_of_sbyte_comparer_7() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206_StaticFields, ___sbyte_comparer_7)); }
	inline SByteComparer_t867971690 * get_sbyte_comparer_7() const { return ___sbyte_comparer_7; }
	inline SByteComparer_t867971690 ** get_address_of_sbyte_comparer_7() { return &___sbyte_comparer_7; }
	inline void set_sbyte_comparer_7(SByteComparer_t867971690 * value)
	{
		___sbyte_comparer_7 = value;
		Il2CppCodeGenWriteBarrier(&___sbyte_comparer_7, value);
	}

	inline static int32_t get_offset_of_short_comparer_8() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206_StaticFields, ___short_comparer_8)); }
	inline ShortComparer_t1318805963 * get_short_comparer_8() const { return ___short_comparer_8; }
	inline ShortComparer_t1318805963 ** get_address_of_short_comparer_8() { return &___short_comparer_8; }
	inline void set_short_comparer_8(ShortComparer_t1318805963 * value)
	{
		___short_comparer_8 = value;
		Il2CppCodeGenWriteBarrier(&___short_comparer_8, value);
	}

	inline static int32_t get_offset_of_int_comparer_9() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206_StaticFields, ___int_comparer_9)); }
	inline IntComparer_t1678224062 * get_int_comparer_9() const { return ___int_comparer_9; }
	inline IntComparer_t1678224062 ** get_address_of_int_comparer_9() { return &___int_comparer_9; }
	inline void set_int_comparer_9(IntComparer_t1678224062 * value)
	{
		___int_comparer_9 = value;
		Il2CppCodeGenWriteBarrier(&___int_comparer_9, value);
	}

	inline static int32_t get_offset_of_long_comparer_10() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206_StaticFields, ___long_comparer_10)); }
	inline LongComparer_t1939100039 * get_long_comparer_10() const { return ___long_comparer_10; }
	inline LongComparer_t1939100039 ** get_address_of_long_comparer_10() { return &___long_comparer_10; }
	inline void set_long_comparer_10(LongComparer_t1939100039 * value)
	{
		___long_comparer_10 = value;
		Il2CppCodeGenWriteBarrier(&___long_comparer_10, value);
	}
};

struct MonoEnumInfo_t3537819206_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t1407064410 * ___cache_4;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3537819206_ThreadStaticFields, ___cache_4)); }
	inline Hashtable_t1407064410 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t1407064410 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t1407064410 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier(&___cache_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.MonoEnumInfo
struct MonoEnumInfo_t3537819206_marshaled_pinvoke
{
	Type_t * ___utype_0;
	Il2CppArray * ___values_1;
	char** ___names_2;
	Hashtable_t1407064410 * ___name_hash_3;
};
// Native definition for marshalling of: System.MonoEnumInfo
struct MonoEnumInfo_t3537819206_marshaled_com
{
	Type_t * ___utype_0;
	Il2CppArray * ___values_1;
	Il2CppChar** ___names_2;
	Hashtable_t1407064410 * ___name_hash_3;
};
