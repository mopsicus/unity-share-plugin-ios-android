#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Threading.WaitCallback
struct WaitCallback_t777536786;
// System.Object
struct Il2CppObject;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t2539114327;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t2612136768;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitCallback777536786.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Threading_WaitHandle1661568373.h"
#include "mscorlib_System_Threading_WaitOrTimerCallback2612136768.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
extern "C"  bool ThreadPool_QueueUserWorkItem_m3855506648 (Il2CppObject * __this /* static, unused */, WaitCallback_t777536786 * ___callBack0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.Int64,System.Boolean)
extern "C"  RegisteredWaitHandle_t2539114327 * ThreadPool_RegisterWaitForSingleObject_m2307848074 (Il2CppObject * __this /* static, unused */, WaitHandle_t1661568373 * ___waitObject0, WaitOrTimerCallback_t2612136768 * ___callBack1, Il2CppObject * ___state2, int64_t ___millisecondsTimeOutInterval3, bool ___executeOnlyOnce4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  RegisteredWaitHandle_t2539114327 * ThreadPool_RegisterWaitForSingleObject_m3955614434 (Il2CppObject * __this /* static, unused */, WaitHandle_t1661568373 * ___waitObject0, WaitOrTimerCallback_t2612136768 * ___callBack1, Il2CppObject * ___state2, TimeSpan_t413522987  ___timeout3, bool ___executeOnlyOnce4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
