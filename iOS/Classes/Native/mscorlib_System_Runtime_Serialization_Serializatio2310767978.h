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
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t2310767978  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t3948406897 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t3948406897 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t3948406897 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t3948406897 * ___onDeserializedList_3;

public:
	inline static int32_t get_offset_of_onSerializingList_0() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t2310767978, ___onSerializingList_0)); }
	inline ArrayList_t3948406897 * get_onSerializingList_0() const { return ___onSerializingList_0; }
	inline ArrayList_t3948406897 ** get_address_of_onSerializingList_0() { return &___onSerializingList_0; }
	inline void set_onSerializingList_0(ArrayList_t3948406897 * value)
	{
		___onSerializingList_0 = value;
		Il2CppCodeGenWriteBarrier(&___onSerializingList_0, value);
	}

	inline static int32_t get_offset_of_onSerializedList_1() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t2310767978, ___onSerializedList_1)); }
	inline ArrayList_t3948406897 * get_onSerializedList_1() const { return ___onSerializedList_1; }
	inline ArrayList_t3948406897 ** get_address_of_onSerializedList_1() { return &___onSerializedList_1; }
	inline void set_onSerializedList_1(ArrayList_t3948406897 * value)
	{
		___onSerializedList_1 = value;
		Il2CppCodeGenWriteBarrier(&___onSerializedList_1, value);
	}

	inline static int32_t get_offset_of_onDeserializingList_2() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t2310767978, ___onDeserializingList_2)); }
	inline ArrayList_t3948406897 * get_onDeserializingList_2() const { return ___onDeserializingList_2; }
	inline ArrayList_t3948406897 ** get_address_of_onDeserializingList_2() { return &___onDeserializingList_2; }
	inline void set_onDeserializingList_2(ArrayList_t3948406897 * value)
	{
		___onDeserializingList_2 = value;
		Il2CppCodeGenWriteBarrier(&___onDeserializingList_2, value);
	}

	inline static int32_t get_offset_of_onDeserializedList_3() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t2310767978, ___onDeserializedList_3)); }
	inline ArrayList_t3948406897 * get_onDeserializedList_3() const { return ___onDeserializedList_3; }
	inline ArrayList_t3948406897 ** get_address_of_onDeserializedList_3() { return &___onDeserializedList_3; }
	inline void set_onDeserializedList_3(ArrayList_t3948406897 * value)
	{
		___onDeserializedList_3 = value;
		Il2CppCodeGenWriteBarrier(&___onDeserializedList_3, value);
	}
};

struct SerializationCallbacks_t2310767978_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t1407064410 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	Il2CppObject * ___cache_lock_5;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t2310767978_StaticFields, ___cache_4)); }
	inline Hashtable_t1407064410 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t1407064410 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t1407064410 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier(&___cache_4, value);
	}

	inline static int32_t get_offset_of_cache_lock_5() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t2310767978_StaticFields, ___cache_lock_5)); }
	inline Il2CppObject * get_cache_lock_5() const { return ___cache_lock_5; }
	inline Il2CppObject ** get_address_of_cache_lock_5() { return &___cache_lock_5; }
	inline void set_cache_lock_5(Il2CppObject * value)
	{
		___cache_lock_5 = value;
		Il2CppCodeGenWriteBarrier(&___cache_lock_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
