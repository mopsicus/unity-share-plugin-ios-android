#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t1474775431;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t2198782602  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t2761351129  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t1407064410 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t1474775431 * ___callbacks_2;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t2198782602, ___context_0)); }
	inline StreamingContext_t2761351129  get_context_0() const { return ___context_0; }
	inline StreamingContext_t2761351129 * get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(StreamingContext_t2761351129  value)
	{
		___context_0 = value;
	}

	inline static int32_t get_offset_of_seen_1() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t2198782602, ___seen_1)); }
	inline Hashtable_t1407064410 * get_seen_1() const { return ___seen_1; }
	inline Hashtable_t1407064410 ** get_address_of_seen_1() { return &___seen_1; }
	inline void set_seen_1(Hashtable_t1407064410 * value)
	{
		___seen_1 = value;
		Il2CppCodeGenWriteBarrier(&___seen_1, value);
	}

	inline static int32_t get_offset_of_callbacks_2() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t2198782602, ___callbacks_2)); }
	inline CallbackHandler_t1474775431 * get_callbacks_2() const { return ___callbacks_2; }
	inline CallbackHandler_t1474775431 ** get_address_of_callbacks_2() { return &___callbacks_2; }
	inline void set_callbacks_2(CallbackHandler_t1474775431 * value)
	{
		___callbacks_2 = value;
		Il2CppCodeGenWriteBarrier(&___callbacks_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
