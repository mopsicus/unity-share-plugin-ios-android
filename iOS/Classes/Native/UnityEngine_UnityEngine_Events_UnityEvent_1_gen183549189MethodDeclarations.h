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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t183549189;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t4186098975;
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

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C"  void UnityEvent_1__ctor_m1354608473_gshared (UnityEvent_1_t183549189 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1354608473(__this, method) ((  void (*) (UnityEvent_1_t183549189 *, const MethodInfo*))UnityEvent_1__ctor_m1354608473_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m994670587_gshared (UnityEvent_1_t183549189 * __this, UnityAction_1_t4186098975 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m994670587(__this, ___call0, method) ((  void (*) (UnityEvent_1_t183549189 *, UnityAction_1_t4186098975 *, const MethodInfo*))UnityEvent_1_AddListener_m994670587_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m1402724082_gshared (UnityEvent_1_t183549189 * __this, UnityAction_1_t4186098975 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m1402724082(__this, ___call0, method) ((  void (*) (UnityEvent_1_t183549189 *, UnityAction_1_t4186098975 *, const MethodInfo*))UnityEvent_1_RemoveListener_m1402724082_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m941410756_gshared (UnityEvent_1_t183549189 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m941410756(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t183549189 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m941410756_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_1_GetDelegate_m3630876836_gshared (UnityEvent_1_t183549189 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3630876836(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1559630662 * (*) (UnityEvent_1_t183549189 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m3630876836_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_1_GetDelegate_m3019506241_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t4186098975 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m3019506241(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t1559630662 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t4186098975 *, const MethodInfo*))UnityEvent_1_GetDelegate_m3019506241_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m3551800820_gshared (UnityEvent_1_t183549189 * __this, float ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m3551800820(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t183549189 *, float, const MethodInfo*))UnityEvent_1_Invoke_m3551800820_gshared)(__this, ___arg00, method)
