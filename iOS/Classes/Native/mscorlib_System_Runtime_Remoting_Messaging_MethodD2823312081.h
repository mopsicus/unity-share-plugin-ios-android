﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3612140663;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t2823312081  : public Il2CppObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	Il2CppObject * ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	Il2CppObject * ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t4054002952* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MethodDictionary_t2823312081, ____internalProperties_0)); }
	inline Il2CppObject * get__internalProperties_0() const { return ____internalProperties_0; }
	inline Il2CppObject ** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(Il2CppObject * value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier(&____internalProperties_0, value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MethodDictionary_t2823312081, ____message_1)); }
	inline Il2CppObject * get__message_1() const { return ____message_1; }
	inline Il2CppObject ** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(Il2CppObject * value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier(&____message_1, value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MethodDictionary_t2823312081, ____methodKeys_2)); }
	inline StringU5BU5D_t4054002952* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t4054002952** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t4054002952* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier(&____methodKeys_2, value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MethodDictionary_t2823312081, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

struct MethodDictionary_t2823312081_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map26
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map26_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map27
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map27_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map26_4() { return static_cast<int32_t>(offsetof(MethodDictionary_t2823312081_StaticFields, ___U3CU3Ef__switchU24map26_4)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map26_4() const { return ___U3CU3Ef__switchU24map26_4; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map26_4() { return &___U3CU3Ef__switchU24map26_4; }
	inline void set_U3CU3Ef__switchU24map26_4(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map26_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map26_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map27_5() { return static_cast<int32_t>(offsetof(MethodDictionary_t2823312081_StaticFields, ___U3CU3Ef__switchU24map27_5)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map27_5() const { return ___U3CU3Ef__switchU24map27_5; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map27_5() { return &___U3CU3Ef__switchU24map27_5; }
	inline void set_U3CU3Ef__switchU24map27_5(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map27_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map27_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
