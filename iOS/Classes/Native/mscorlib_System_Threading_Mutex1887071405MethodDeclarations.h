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

// System.Threading.Mutex
struct Mutex_t1887071405;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Threading.Mutex::.ctor(System.Boolean)
extern "C"  void Mutex__ctor_m2061869791 (Mutex_t1887071405 * __this, bool ___initiallyOwned0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
extern "C"  IntPtr_t Mutex_CreateMutex_internal_m62389004 (Il2CppObject * __this /* static, unused */, bool ___initiallyOwned0, String_t* ___name1, bool* ___created2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
extern "C"  bool Mutex_ReleaseMutex_internal_m3646831020 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Mutex::ReleaseMutex()
extern "C"  void Mutex_ReleaseMutex_m564775316 (Mutex_t1887071405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
