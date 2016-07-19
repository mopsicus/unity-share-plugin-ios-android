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

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t4186098975;
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

// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m480548041_gshared (UnityAction_1_t4186098975 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_1__ctor_m480548041(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_1_t4186098975 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m480548041_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m3075983123_gshared (UnityAction_1_t4186098975 * __this, float ___arg00, const MethodInfo* method);
#define UnityAction_1_Invoke_m3075983123(__this, ___arg00, method) ((  void (*) (UnityAction_1_t4186098975 *, float, const MethodInfo*))UnityAction_1_Invoke_m3075983123_gshared)(__this, ___arg00, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m3950699582_gshared (UnityAction_1_t4186098975 * __this, float ___arg00, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m3950699582(__this, ___arg00, ___callback1, ___object2, method) ((  Il2CppObject * (*) (UnityAction_1_t4186098975 *, float, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m3950699582_gshared)(__this, ___arg00, ___callback1, ___object2, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m146102117_gshared (UnityAction_1_t4186098975 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m146102117(__this, ___result0, method) ((  void (*) (UnityAction_1_t4186098975 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m146102117_gshared)(__this, ___result0, method)
