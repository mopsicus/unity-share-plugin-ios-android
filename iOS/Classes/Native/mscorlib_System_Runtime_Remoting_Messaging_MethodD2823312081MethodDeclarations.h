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

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t2823312081;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3612140663;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t2643922881;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Array1146569071.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  void MethodDictionary__ctor_m2378316062 (MethodDictionary_t2823312081 * __this, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m630697764 (MethodDictionary_t2823312081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C"  void MethodDictionary_set_MethodKeys_m3153125541 (MethodDictionary_t2823312081 * __this, StringU5BU5D_t4054002952* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern "C"  Il2CppObject * MethodDictionary_AllocInternalProperties_m1059718266 (MethodDictionary_t2823312081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C"  Il2CppObject * MethodDictionary_GetInternalProperties_m3176512283 (MethodDictionary_t2823312081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern "C"  bool MethodDictionary_IsOverridenKey_m2316740400 (MethodDictionary_t2823312081 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern "C"  Il2CppObject * MethodDictionary_get_Item_m2581436698 (MethodDictionary_t2823312081 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C"  void MethodDictionary_set_Item_m213586249 (MethodDictionary_t2823312081 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern "C"  Il2CppObject * MethodDictionary_GetMethodProperty_m1794768370 (MethodDictionary_t2823312081 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern "C"  void MethodDictionary_SetMethodProperty_m3901784959 (MethodDictionary_t2823312081 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern "C"  Il2CppObject * MethodDictionary_get_Values_m1423085072 (MethodDictionary_t2823312081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern "C"  void MethodDictionary_Add_m3929391976 (MethodDictionary_t2823312081 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern "C"  void MethodDictionary_Remove_m2229484935 (MethodDictionary_t2823312081 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern "C"  int32_t MethodDictionary_get_Count_m2528789795 (MethodDictionary_t2823312081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C"  bool MethodDictionary_get_IsSynchronized_m687173714 (MethodDictionary_t2823312081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C"  Il2CppObject * MethodDictionary_get_SyncRoot_m1527806020 (MethodDictionary_t2823312081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern "C"  void MethodDictionary_CopyTo_m3173648216 (MethodDictionary_t2823312081 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern "C"  Il2CppObject * MethodDictionary_GetEnumerator_m3961911347 (MethodDictionary_t2823312081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
