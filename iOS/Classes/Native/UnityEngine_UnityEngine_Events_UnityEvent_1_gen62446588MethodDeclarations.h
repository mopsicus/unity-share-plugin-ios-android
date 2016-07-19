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

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t62446588;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t4064996374;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1559630662;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
extern "C"  void UnityEvent_1__ctor_m4139691420_gshared (UnityEvent_1_t62446588 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m4139691420(__this, method) ((  void (*) (UnityEvent_1_t62446588 *, const MethodInfo*))UnityEvent_1__ctor_m4139691420_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m1298407787_gshared (UnityEvent_1_t62446588 * __this, UnityAction_1_t4064996374 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1298407787(__this, ___call0, method) ((  void (*) (UnityEvent_1_t62446588 *, UnityAction_1_t4064996374 *, const MethodInfo*))UnityEvent_1_AddListener_m1298407787_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m2525028476_gshared (UnityEvent_1_t62446588 * __this, UnityAction_1_t4064996374 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m2525028476(__this, ___call0, method) ((  void (*) (UnityEvent_1_t62446588 *, UnityAction_1_t4064996374 *, const MethodInfo*))UnityEvent_1_RemoveListener_m2525028476_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m936319469_gshared (UnityEvent_1_t62446588 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m936319469(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t62446588 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m936319469_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_1_GetDelegate_m882504923_gshared (UnityEvent_1_t62446588 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m882504923(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1559630662 * (*) (UnityEvent_1_t62446588 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m882504923_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_1_GetDelegate_m2100323256_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t4064996374 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2100323256(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t1559630662 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t4064996374 *, const MethodInfo*))UnityEvent_1_GetDelegate_m2100323256_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m3779699780_gshared (UnityEvent_1_t62446588 * __this, Il2CppObject * ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3779699780(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t62446588 *, Il2CppObject *, const MethodInfo*))UnityEvent_1_Invoke_m3779699780_gshared)(__this, ___arg00, method)
