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

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t785513668;
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

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m563515303_gshared (Func_2_t785513668 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m563515303(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t785513668 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m563515303_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m1882130143_gshared (Func_2_t785513668 * __this, Il2CppObject * ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m1882130143(__this, ___arg10, method) ((  bool (*) (Func_2_t785513668 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m1882130143_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m1852288274_gshared (Func_2_t785513668 * __this, Il2CppObject * ___arg10, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m1852288274(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t785513668 *, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m1852288274_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m1659014741_gshared (Func_2_t785513668 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m1659014741(__this, ___result0, method) ((  bool (*) (Func_2_t785513668 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m1659014741_gshared)(__this, ___result0, method)
