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

// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t2310767978;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
extern "C"  void SerializationCallbacks__ctor_m2320337270 (SerializationCallbacks_t2310767978 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
extern "C"  void SerializationCallbacks__cctor_m562445802 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasSerializedCallbacks()
extern "C"  bool SerializationCallbacks_get_HasSerializedCallbacks_m1064335224 (SerializationCallbacks_t2310767978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
extern "C"  bool SerializationCallbacks_get_HasDeserializedCallbacks_m4051490391 (SerializationCallbacks_t2310767978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
extern "C"  ArrayList_t3948406897 * SerializationCallbacks_GetMethodsByAttribute_m1743114550 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___attr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_Invoke_m807932308 (Il2CppObject * __this /* static, unused */, ArrayList_t3948406897 * ___list0, Il2CppObject * ___target1, StreamingContext_t2761351129  ___context2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnSerializing_m4133985485 (SerializationCallbacks_t2310767978 * __this, Il2CppObject * ___target0, StreamingContext_t2761351129  ___contex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnSerialized_m1158955600 (SerializationCallbacks_t2310767978 * __this, Il2CppObject * ___target0, StreamingContext_t2761351129  ___contex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnDeserializing_m873572750 (SerializationCallbacks_t2310767978 * __this, Il2CppObject * ___target0, StreamingContext_t2761351129  ___contex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallbacks_RaiseOnDeserialized_m361044335 (SerializationCallbacks_t2310767978 * __this, Il2CppObject * ___target0, StreamingContext_t2761351129  ___contex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
extern "C"  SerializationCallbacks_t2310767978 * SerializationCallbacks_GetSerializationCallbacks_m1535695330 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
