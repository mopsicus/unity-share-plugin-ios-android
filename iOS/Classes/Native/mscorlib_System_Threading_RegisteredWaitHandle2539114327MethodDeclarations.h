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

// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t2539114327;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t2612136768;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_WaitHandle1661568373.h"
#include "mscorlib_System_Threading_WaitOrTimerCallback2612136768.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void System.Threading.RegisteredWaitHandle::.ctor(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
extern "C"  void RegisteredWaitHandle__ctor_m3130282384 (RegisteredWaitHandle_t2539114327 * __this, WaitHandle_t1661568373 * ___waitObject0, WaitOrTimerCallback_t2612136768 * ___callback1, Il2CppObject * ___state2, TimeSpan_t413522987  ___timeout3, bool ___executeOnlyOnce4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::Wait(System.Object)
extern "C"  void RegisteredWaitHandle_Wait_m4214353403 (RegisteredWaitHandle_t2539114327 * __this, Il2CppObject * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.RegisteredWaitHandle::DoCallBack(System.Object)
extern "C"  void RegisteredWaitHandle_DoCallBack_m3198153280 (RegisteredWaitHandle_t2539114327 * __this, Il2CppObject * ___timedOut0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
