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

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct CrossContextDelegate_t651537830;
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

// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CrossContextDelegate__ctor_m489758422 (CrossContextDelegate_t651537830 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::Invoke()
extern "C"  void CrossContextDelegate_Invoke_m3190794928 (CrossContextDelegate_t651537830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Runtime.Remoting.Contexts.CrossContextDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CrossContextDelegate_BeginInvoke_m1978908379 (CrossContextDelegate_t651537830 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.CrossContextDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void CrossContextDelegate_EndInvoke_m2472635366 (CrossContextDelegate_t651537830 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
