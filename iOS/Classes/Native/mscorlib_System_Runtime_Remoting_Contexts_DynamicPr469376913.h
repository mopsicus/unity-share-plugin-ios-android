﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t496223037;
// System.Runtime.Remoting.Contexts.IDynamicMessageSink
struct IDynamicMessageSink_t3953303566;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
struct  DynamicPropertyReg_t469376913  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Contexts.IDynamicProperty System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Property
	Il2CppObject * ___Property_0;
	// System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Sink
	Il2CppObject * ___Sink_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t469376913, ___Property_0)); }
	inline Il2CppObject * get_Property_0() const { return ___Property_0; }
	inline Il2CppObject ** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(Il2CppObject * value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier(&___Property_0, value);
	}

	inline static int32_t get_offset_of_Sink_1() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t469376913, ___Sink_1)); }
	inline Il2CppObject * get_Sink_1() const { return ___Sink_1; }
	inline Il2CppObject ** get_address_of_Sink_1() { return &___Sink_1; }
	inline void set_Sink_1(Il2CppObject * value)
	{
		___Sink_1 = value;
		Il2CppCodeGenWriteBarrier(&___Sink_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
