﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t402472668;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t293418230;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.BaseFixupRecord
struct  BaseFixupRecord_t293418230  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t402472668 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t402472668 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t293418230 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t293418230 * ___NextSameRequired_3;

public:
	inline static int32_t get_offset_of_ObjectToBeFixed_0() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t293418230, ___ObjectToBeFixed_0)); }
	inline ObjectRecord_t402472668 * get_ObjectToBeFixed_0() const { return ___ObjectToBeFixed_0; }
	inline ObjectRecord_t402472668 ** get_address_of_ObjectToBeFixed_0() { return &___ObjectToBeFixed_0; }
	inline void set_ObjectToBeFixed_0(ObjectRecord_t402472668 * value)
	{
		___ObjectToBeFixed_0 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectToBeFixed_0, value);
	}

	inline static int32_t get_offset_of_ObjectRequired_1() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t293418230, ___ObjectRequired_1)); }
	inline ObjectRecord_t402472668 * get_ObjectRequired_1() const { return ___ObjectRequired_1; }
	inline ObjectRecord_t402472668 ** get_address_of_ObjectRequired_1() { return &___ObjectRequired_1; }
	inline void set_ObjectRequired_1(ObjectRecord_t402472668 * value)
	{
		___ObjectRequired_1 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectRequired_1, value);
	}

	inline static int32_t get_offset_of_NextSameContainer_2() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t293418230, ___NextSameContainer_2)); }
	inline BaseFixupRecord_t293418230 * get_NextSameContainer_2() const { return ___NextSameContainer_2; }
	inline BaseFixupRecord_t293418230 ** get_address_of_NextSameContainer_2() { return &___NextSameContainer_2; }
	inline void set_NextSameContainer_2(BaseFixupRecord_t293418230 * value)
	{
		___NextSameContainer_2 = value;
		Il2CppCodeGenWriteBarrier(&___NextSameContainer_2, value);
	}

	inline static int32_t get_offset_of_NextSameRequired_3() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t293418230, ___NextSameRequired_3)); }
	inline BaseFixupRecord_t293418230 * get_NextSameRequired_3() const { return ___NextSameRequired_3; }
	inline BaseFixupRecord_t293418230 ** get_address_of_NextSameRequired_3() { return &___NextSameRequired_3; }
	inline void set_NextSameRequired_3(BaseFixupRecord_t293418230 * value)
	{
		___NextSameRequired_3 = value;
		Il2CppCodeGenWriteBarrier(&___NextSameRequired_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
