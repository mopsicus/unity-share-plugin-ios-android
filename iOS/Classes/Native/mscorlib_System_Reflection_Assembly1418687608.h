﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t3538800511;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;
// System.Security.PermissionSet
struct PermissionSet_t1199249641;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t1418687608  : public Il2CppObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t3538800511 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t4141397151 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t1199249641 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t1199249641 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t1199249641 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t1199249641 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t1199249641 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t3538800511 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t3538800511 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t3538800511 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier(&___resolve_event_holder_1, value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ____evidence_2)); }
	inline Evidence_t4141397151 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t4141397151 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t4141397151 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier(&____evidence_2, value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ____minimum_3)); }
	inline PermissionSet_t1199249641 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t1199249641 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t1199249641 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier(&____minimum_3, value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ____optional_4)); }
	inline PermissionSet_t1199249641 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t1199249641 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t1199249641 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier(&____optional_4, value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ____refuse_5)); }
	inline PermissionSet_t1199249641 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t1199249641 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t1199249641 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier(&____refuse_5, value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ____granted_6)); }
	inline PermissionSet_t1199249641 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t1199249641 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t1199249641 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier(&____granted_6, value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ____denied_7)); }
	inline PermissionSet_t1199249641 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t1199249641 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t1199249641 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier(&____denied_7, value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t1418687608, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyName_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
