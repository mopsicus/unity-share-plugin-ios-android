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

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t2904781384;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1918496398.h"

// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
extern "C"  void SerializationInfoEnumerator__ctor_m1782497732 (SerializationInfoEnumerator_t2904781384 * __this, ArrayList_t3948406897 * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m1751158349 (SerializationInfoEnumerator_t2904781384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
extern "C"  SerializationEntry_t1918496398  SerializationInfoEnumerator_get_Current_m1674825235 (SerializationInfoEnumerator_t2904781384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
extern "C"  String_t* SerializationInfoEnumerator_get_Name_m4156977240 (SerializationInfoEnumerator_t2904781384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.SerializationInfoEnumerator::get_ObjectType()
extern "C"  Type_t * SerializationInfoEnumerator_get_ObjectType_m1119292125 (SerializationInfoEnumerator_t2904781384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
extern "C"  Il2CppObject * SerializationInfoEnumerator_get_Value_m4259496148 (SerializationInfoEnumerator_t2904781384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
extern "C"  bool SerializationInfoEnumerator_MoveNext_m4116766855 (SerializationInfoEnumerator_t2904781384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::Reset()
extern "C"  void SerializationInfoEnumerator_Reset_m1660715632 (SerializationInfoEnumerator_t2904781384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
