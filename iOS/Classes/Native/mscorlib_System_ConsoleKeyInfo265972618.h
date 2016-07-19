#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "mscorlib_System_ConsoleKeyInfo265972618.h"
#include "mscorlib_System_ConsoleKey2761899580.h"
#include "mscorlib_System_ConsoleModifiers4207387225.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t265972618 
{
public:
	// System.ConsoleKey System.ConsoleKeyInfo::key
	int32_t ___key_1;
	// System.Char System.ConsoleKeyInfo::keychar
	Il2CppChar ___keychar_2;
	// System.ConsoleModifiers System.ConsoleKeyInfo::modifiers
	int32_t ___modifiers_3;

public:
	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t265972618, ___key_1)); }
	inline int32_t get_key_1() const { return ___key_1; }
	inline int32_t* get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(int32_t value)
	{
		___key_1 = value;
	}

	inline static int32_t get_offset_of_keychar_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t265972618, ___keychar_2)); }
	inline Il2CppChar get_keychar_2() const { return ___keychar_2; }
	inline Il2CppChar* get_address_of_keychar_2() { return &___keychar_2; }
	inline void set_keychar_2(Il2CppChar value)
	{
		___keychar_2 = value;
	}

	inline static int32_t get_offset_of_modifiers_3() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t265972618, ___modifiers_3)); }
	inline int32_t get_modifiers_3() const { return ___modifiers_3; }
	inline int32_t* get_address_of_modifiers_3() { return &___modifiers_3; }
	inline void set_modifiers_3(int32_t value)
	{
		___modifiers_3 = value;
	}
};

struct ConsoleKeyInfo_t265972618_StaticFields
{
public:
	// System.ConsoleKeyInfo System.ConsoleKeyInfo::Empty
	ConsoleKeyInfo_t265972618  ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t265972618_StaticFields, ___Empty_0)); }
	inline ConsoleKeyInfo_t265972618  get_Empty_0() const { return ___Empty_0; }
	inline ConsoleKeyInfo_t265972618 * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(ConsoleKeyInfo_t265972618  value)
	{
		___Empty_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.ConsoleKeyInfo
struct ConsoleKeyInfo_t265972618_marshaled_pinvoke
{
	int32_t ___key_1;
	char ___keychar_2;
	int32_t ___modifiers_3;
};
// Native definition for marshalling of: System.ConsoleKeyInfo
struct ConsoleKeyInfo_t265972618_marshaled_com
{
	int32_t ___key_1;
	char ___keychar_2;
	int32_t ___modifiers_3;
};
