﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.UI.Mask>[]
struct List_1U5BU5D_t1071654105;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<UnityEngine.UI.Mask>>
struct  Stack_1_t180605860  : public Il2CppObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	List_1U5BU5D_t1071654105* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t180605860, ____array_0)); }
	inline List_1U5BU5D_t1071654105* get__array_0() const { return ____array_0; }
	inline List_1U5BU5D_t1071654105** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(List_1U5BU5D_t1071654105* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier(&____array_0, value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t180605860, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t180605860, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
