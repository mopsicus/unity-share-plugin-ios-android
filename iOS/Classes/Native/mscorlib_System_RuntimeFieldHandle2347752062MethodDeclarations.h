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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t2347752062;
struct RuntimeFieldHandle_t2347752062_marshaled_pinvoke;
struct RuntimeFieldHandle_t2347752062_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeFieldHandle2347752062.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.RuntimeFieldHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeFieldHandle__ctor_m4059484332 (RuntimeFieldHandle_t2347752062 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeFieldHandle::get_Value()
extern "C"  IntPtr_t RuntimeFieldHandle_get_Value_m2124751302 (RuntimeFieldHandle_t2347752062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeFieldHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeFieldHandle_GetObjectData_m1415752713 (RuntimeFieldHandle_t2347752062 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeFieldHandle::Equals(System.Object)
extern "C"  bool RuntimeFieldHandle_Equals_m3155639198 (RuntimeFieldHandle_t2347752062 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeFieldHandle::GetHashCode()
extern "C"  int32_t RuntimeFieldHandle_GetHashCode_m2620685942 (RuntimeFieldHandle_t2347752062 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RuntimeFieldHandle_t2347752062;
struct RuntimeFieldHandle_t2347752062_marshaled_pinvoke;

extern "C" void RuntimeFieldHandle_t2347752062_marshal_pinvoke(const RuntimeFieldHandle_t2347752062& unmarshaled, RuntimeFieldHandle_t2347752062_marshaled_pinvoke& marshaled);
extern "C" void RuntimeFieldHandle_t2347752062_marshal_pinvoke_back(const RuntimeFieldHandle_t2347752062_marshaled_pinvoke& marshaled, RuntimeFieldHandle_t2347752062& unmarshaled);
extern "C" void RuntimeFieldHandle_t2347752062_marshal_pinvoke_cleanup(RuntimeFieldHandle_t2347752062_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RuntimeFieldHandle_t2347752062;
struct RuntimeFieldHandle_t2347752062_marshaled_com;

extern "C" void RuntimeFieldHandle_t2347752062_marshal_com(const RuntimeFieldHandle_t2347752062& unmarshaled, RuntimeFieldHandle_t2347752062_marshaled_com& marshaled);
extern "C" void RuntimeFieldHandle_t2347752062_marshal_com_back(const RuntimeFieldHandle_t2347752062_marshaled_com& marshaled, RuntimeFieldHandle_t2347752062& unmarshaled);
extern "C" void RuntimeFieldHandle_t2347752062_marshal_com_cleanup(RuntimeFieldHandle_t2347752062_marshaled_com& marshaled);
