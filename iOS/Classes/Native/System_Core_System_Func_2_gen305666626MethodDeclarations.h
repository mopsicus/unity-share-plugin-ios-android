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

// System.Func`2<System.Object,System.Single>
struct Func_2_t305666626;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m4057262499_gshared (Func_2_t305666626 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m4057262499(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t305666626 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m4057262499_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C"  float Func_2_Invoke_m3938512095_gshared (Func_2_t305666626 * __this, Il2CppObject * ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m3938512095(__this, ___arg10, method) ((  float (*) (Func_2_t305666626 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m3938512095_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m905918990_gshared (Func_2_t305666626 * __this, Il2CppObject * ___arg10, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m905918990(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t305666626 *, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m905918990_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Func_2_EndInvoke_m43804757_gshared (Func_2_t305666626 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m43804757(__this, ___result0, method) ((  float (*) (Func_2_t305666626 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m43804757_gshared)(__this, ___result0, method)
