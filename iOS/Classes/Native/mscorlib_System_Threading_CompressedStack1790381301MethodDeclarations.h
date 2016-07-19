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

// System.Threading.CompressedStack
struct CompressedStack_t1790381301;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_CompressedStack1790381301.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
extern "C"  void CompressedStack__ctor_m2633734833 (CompressedStack_t1790381301 * __this, int32_t ___length0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
extern "C"  void CompressedStack__ctor_m1552323470 (CompressedStack_t1790381301 * __this, CompressedStack_t1790381301 * ___cs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
extern "C"  CompressedStack_t1790381301 * CompressedStack_CreateCopy_m2704662702 (CompressedStack_t1790381301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
extern "C"  CompressedStack_t1790381301 * CompressedStack_Capture_m4188936939 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void CompressedStack_GetObjectData_m1776876798 (CompressedStack_t1790381301 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
extern "C"  bool CompressedStack_IsEmpty_m35500159 (CompressedStack_t1790381301 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
