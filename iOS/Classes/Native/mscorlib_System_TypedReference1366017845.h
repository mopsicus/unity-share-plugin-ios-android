﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType1744280289.h"
#include "mscorlib_System_RuntimeTypeHandle2669177232.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t1366017845 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t2669177232  ___type_0;
	// System.IntPtr System.TypedReference::value
	IntPtr_t ___value_1;
	// System.IntPtr System.TypedReference::klass
	IntPtr_t ___klass_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t1366017845, ___type_0)); }
	inline RuntimeTypeHandle_t2669177232  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t2669177232 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t2669177232  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(TypedReference_t1366017845, ___value_1)); }
	inline IntPtr_t get_value_1() const { return ___value_1; }
	inline IntPtr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(IntPtr_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_klass_2() { return static_cast<int32_t>(offsetof(TypedReference_t1366017845, ___klass_2)); }
	inline IntPtr_t get_klass_2() const { return ___klass_2; }
	inline IntPtr_t* get_address_of_klass_2() { return &___klass_2; }
	inline void set_klass_2(IntPtr_t value)
	{
		___klass_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.TypedReference
struct TypedReference_t1366017845_marshaled_pinvoke
{
	RuntimeTypeHandle_t2669177232_marshaled_pinvoke ___type_0;
	intptr_t ___value_1;
	intptr_t ___klass_2;
};
// Native definition for marshalling of: System.TypedReference
struct TypedReference_t1366017845_marshaled_com
{
	RuntimeTypeHandle_t2669177232_marshaled_com ___type_0;
	intptr_t ___value_1;
	intptr_t ___klass_2;
};
