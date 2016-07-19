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

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t864200549;
// System.Object
struct Il2CppObject;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2054899105;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2054899105.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventFunction_1__ctor_m252996987_gshared (EventFunction_1_t864200549 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define EventFunction_1__ctor_m252996987(__this, ___object0, ___method1, method) ((  void (*) (EventFunction_1_t864200549 *, Il2CppObject *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m252996987_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventFunction_1_Invoke_m1750245256_gshared (EventFunction_1_t864200549 * __this, Il2CppObject * ___handler0, BaseEventData_t2054899105 * ___eventData1, const MethodInfo* method);
#define EventFunction_1_Invoke_m1750245256(__this, ___handler0, ___eventData1, method) ((  void (*) (EventFunction_1_t864200549 *, Il2CppObject *, BaseEventData_t2054899105 *, const MethodInfo*))EventFunction_1_Invoke_m1750245256_gshared)(__this, ___handler0, ___eventData1, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventFunction_1_BeginInvoke_m2337669695_gshared (EventFunction_1_t864200549 * __this, Il2CppObject * ___handler0, BaseEventData_t2054899105 * ___eventData1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m2337669695(__this, ___handler0, ___eventData1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (EventFunction_1_t864200549 *, Il2CppObject *, BaseEventData_t2054899105 *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))EventFunction_1_BeginInvoke_m2337669695_gshared)(__this, ___handler0, ___eventData1, ___callback2, ___object3, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void EventFunction_1_EndInvoke_m1184355595_gshared (EventFunction_1_t864200549 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m1184355595(__this, ___result0, method) ((  void (*) (EventFunction_1_t864200549 *, Il2CppObject *, const MethodInfo*))EventFunction_1_EndInvoke_m1184355595_gshared)(__this, ___result0, method)
