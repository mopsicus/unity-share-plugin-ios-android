#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.PermissionSet
struct PermissionSet_t1199249641;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Security.IPermission
struct IPermission_t1411806254;
// System.Array
struct Il2CppArray;
// System.Security.SecurityElement
struct SecurityElement_t2125293618;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Type
struct Type_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1214940608;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionStat240192512.h"
#include "mscorlib_System_Security_PermissionSet1199249641.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Security_Policy_PolicyLevel1214940608.h"

// System.Void System.Security.PermissionSet::.ctor()
extern "C"  void PermissionSet__ctor_m3410884176 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.Permissions.PermissionState)
extern "C"  void PermissionSet__ctor_m3799523257 (PermissionSet_t1199249641 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.PermissionSet)
extern "C"  void PermissionSet__ctor_m3180536702 (PermissionSet_t1199249641 * __this, PermissionSet_t1199249641 * ___permSet0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C"  void PermissionSet__ctor_m1161980594 (PermissionSet_t1199249641 * __this, String_t* ___xml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.cctor()
extern "C"  void PermissionSet__cctor_m2176098141 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void PermissionSet_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1273961510 (PermissionSet_t1199249641 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::AddPermission(System.Security.IPermission)
extern "C"  Il2CppObject * PermissionSet_AddPermission_m3057746721 (PermissionSet_t1199249641 * __this, Il2CppObject * ___perm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Copy()
extern "C"  PermissionSet_t1199249641 * PermissionSet_Copy_m4031587802 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::CopyTo(System.Array,System.Int32)
extern "C"  void PermissionSet_CopyTo_m3049757485 (PermissionSet_t1199249641 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::Demand()
extern "C"  void PermissionSet_Demand_m3906928575 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::FromXml(System.Security.SecurityElement)
extern "C"  void PermissionSet_FromXml_m1531635466 (PermissionSet_t1199249641 * __this, SecurityElement_t2125293618 * ___et0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.PermissionSet::GetEnumerator()
extern "C"  Il2CppObject * PermissionSet_GetEnumerator_m3924226494 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsSubsetOf(System.Security.PermissionSet)
extern "C"  bool PermissionSet_IsSubsetOf_m3112305497 (PermissionSet_t1199249641 * __this, PermissionSet_t1199249641 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::GetPermission(System.Type)
extern "C"  Il2CppObject * PermissionSet_GetPermission_m2983136476 (PermissionSet_t1199249641 * __this, Type_t * ___permClass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Intersect(System.Security.PermissionSet)
extern "C"  PermissionSet_t1199249641 * PermissionSet_Intersect_m3705603858 (PermissionSet_t1199249641 * __this, PermissionSet_t1199249641 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::InternalIntersect(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C"  void PermissionSet_InternalIntersect_m3438764847 (PermissionSet_t1199249641 * __this, PermissionSet_t1199249641 * ___intersect0, PermissionSet_t1199249641 * ___a1, PermissionSet_t1199249641 * ___b2, bool ___unrestricted3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsEmpty()
extern "C"  bool PermissionSet_IsEmpty_m2795951795 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsUnrestricted()
extern "C"  bool PermissionSet_IsUnrestricted_m1051292784 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::RemovePermission(System.Type)
extern "C"  Il2CppObject * PermissionSet_RemovePermission_m1209482748 (PermissionSet_t1199249641 * __this, Type_t * ___permClass0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.PermissionSet::ToString()
extern "C"  String_t* PermissionSet_ToString_m958620253 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.PermissionSet::ToXml()
extern "C"  SecurityElement_t2125293618 * PermissionSet_ToXml_m3013767952 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Union(System.Security.PermissionSet)
extern "C"  PermissionSet_t1199249641 * PermissionSet_Union_m4174795106 (PermissionSet_t1199249641 * __this, PermissionSet_t1199249641 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::get_Count()
extern "C"  int32_t PermissionSet_get_Count_m735956848 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::get_IsSynchronized()
extern "C"  bool PermissionSet_get_IsSynchronized_m4008480537 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.PermissionSet::get_SyncRoot()
extern "C"  Il2CppObject * PermissionSet_get_SyncRoot_m866164997 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C"  void PermissionSet_set_DeclarativeSecurity_m1327442290 (PermissionSet_t1199249641 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::Equals(System.Object)
extern "C"  bool PermissionSet_Equals_m2181178947 (PermissionSet_t1199249641 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::GetHashCode()
extern "C"  int32_t PermissionSet_GetHashCode_m4009476379 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.PermissionSet::get_Resolver()
extern "C"  PolicyLevel_t1214940608 * PermissionSet_get_Resolver_m3026689981 (PermissionSet_t1199249641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_Resolver(System.Security.Policy.PolicyLevel)
extern "C"  void PermissionSet_set_Resolver_m1887663282 (PermissionSet_t1199249641 * __this, PolicyLevel_t1214940608 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::SetReadOnly(System.Boolean)
extern "C"  void PermissionSet_SetReadOnly_m1922354057 (PermissionSet_t1199249641 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C"  PermissionSet_t1199249641 * PermissionSet_CreateFromBinaryFormat_m554196038 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::ReadEncodedInt(System.Byte[],System.Int32&)
extern "C"  int32_t PermissionSet_ReadEncodedInt_m4006268527 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, int32_t* ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::ProcessAttribute(System.Byte[],System.Int32&)
extern "C"  Il2CppObject * PermissionSet_ProcessAttribute_m3481827623 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___data0, int32_t* ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
