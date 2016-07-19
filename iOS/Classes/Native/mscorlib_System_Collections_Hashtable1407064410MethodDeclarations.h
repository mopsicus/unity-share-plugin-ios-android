﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1357740943;
// System.Collections.IComparer
struct IComparer_t4034294160;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t926437290;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2935089736;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Hashtable_EnumeratorMo1296986318.h"

// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1514037738 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m880032671 (Hashtable_t1407064410 * __this, int32_t ___capacity0, float ___loadFactor1, Il2CppObject * ___hcp2, Il2CppObject * ___comparer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
extern "C"  void Hashtable__ctor_m2919534560 (Hashtable_t1407064410 * __this, int32_t ___capacity0, float ___loadFactor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
extern "C"  void Hashtable__ctor_m2902886459 (Hashtable_t1407064410 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
extern "C"  void Hashtable__ctor_m556844962 (Hashtable_t1407064410 * __this, Hashtable_t1407064410 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m2095001914 (Hashtable_t1407064410 * __this, int32_t ___capacity0, Il2CppObject * ___hcp1, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m775991879 (Hashtable_t1407064410 * __this, Il2CppObject * ___d0, float ___loadFactor1, Il2CppObject * ___hcp2, Il2CppObject * ___comparer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m1961291234 (Hashtable_t1407064410 * __this, Il2CppObject * ___d0, Il2CppObject * ___hcp1, Il2CppObject * ___comparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m346689243 (Hashtable_t1407064410 * __this, Il2CppObject * ___hcp0, Il2CppObject * ___comparer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Hashtable__ctor_m2213883947 (Hashtable_t1407064410 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C"  void Hashtable__ctor_m553622419 (Hashtable_t1407064410 * __this, int32_t ___capacity0, Il2CppObject * ___equalityComparer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
extern "C"  void Hashtable__ctor_m2202593038 (Hashtable_t1407064410 * __this, int32_t ___capacity0, float ___loadFactor1, Il2CppObject * ___equalityComparer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
extern "C"  void Hashtable__cctor_m3503400707 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Hashtable_System_Collections_IEnumerable_GetEnumerator_m2131971349 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
extern "C"  void Hashtable_set_comparer_m3192953638 (Hashtable_t1407064410 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
extern "C"  void Hashtable_set_hcp_m3304781571 (Hashtable_t1407064410 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
extern "C"  int32_t Hashtable_get_Count_m3337476178 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
extern "C"  bool Hashtable_get_IsSynchronized_m1352381059 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
extern "C"  Il2CppObject * Hashtable_get_SyncRoot_m2620554101 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
extern "C"  Il2CppObject * Hashtable_get_Keys_m17177747 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
extern "C"  Il2CppObject * Hashtable_get_Values_m1695500481 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
extern "C"  Il2CppObject * Hashtable_get_Item_m492674313 (Hashtable_t1407064410 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
extern "C"  void Hashtable_set_Item_m1018975416 (Hashtable_t1407064410 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
extern "C"  void Hashtable_CopyTo_m3581696583 (Hashtable_t1407064410 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
extern "C"  void Hashtable_Add_m2279986841 (Hashtable_t1407064410 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
extern "C"  void Hashtable_Clear_m3215138325 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
extern "C"  bool Hashtable_Contains_m1066475641 (Hashtable_t1407064410 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
extern "C"  Il2CppObject * Hashtable_GetEnumerator_m737865954 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
extern "C"  void Hashtable_Remove_m2304720630 (Hashtable_t1407064410 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
extern "C"  bool Hashtable_ContainsKey_m1913745934 (Hashtable_t1407064410 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
extern "C"  Il2CppObject * Hashtable_Clone_m3562010576 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Hashtable_GetObjectData_m4219804808 (Hashtable_t1407064410 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
extern "C"  void Hashtable_OnDeserialization_m2896861916 (Hashtable_t1407064410 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Collections.Hashtable::Synchronized(System.Collections.Hashtable)
extern "C"  Hashtable_t1407064410 * Hashtable_Synchronized_m4005846889 (Il2CppObject * __this /* static, unused */, Hashtable_t1407064410 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
extern "C"  int32_t Hashtable_GetHash_m527227236 (Hashtable_t1407064410 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
extern "C"  bool Hashtable_KeyEquals_m1149622430 (Hashtable_t1407064410 * __this, Il2CppObject * ___item0, Il2CppObject * ___key1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
extern "C"  void Hashtable_AdjustThreshold_m2169901284 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
extern "C"  void Hashtable_SetTable_m463771856 (Hashtable_t1407064410 * __this, SlotU5BU5D_t2935089736* ___table0, Int32U5BU5D_t3230847821* ___hashes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
extern "C"  int32_t Hashtable_Find_m3443418693 (Hashtable_t1407064410 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
extern "C"  void Hashtable_Rehash_m3720779099 (Hashtable_t1407064410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
extern "C"  void Hashtable_PutImpl_m3449217138 (Hashtable_t1407064410 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, bool ___overwrite2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
extern "C"  void Hashtable_CopyToArray_m3683911294 (Hashtable_t1407064410 * __this, Il2CppArray * ___arr0, int32_t ___i1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
extern "C"  bool Hashtable_TestPrime_m2080981348 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
extern "C"  int32_t Hashtable_CalcPrime_m1477965287 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
extern "C"  int32_t Hashtable_ToPrime_m840372929 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
