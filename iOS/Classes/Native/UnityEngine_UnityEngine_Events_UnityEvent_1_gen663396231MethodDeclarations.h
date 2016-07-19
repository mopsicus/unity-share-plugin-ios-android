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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t663396231;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t370978721;
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

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C"  void UnityEvent_1__ctor_m1579102881_gshared (UnityEvent_1_t663396231 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1579102881(__this, method) ((  void (*) (UnityEvent_1_t663396231 *, const MethodInfo*))UnityEvent_1__ctor_m1579102881_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m4118700355_gshared (UnityEvent_1_t663396231 * __this, UnityAction_1_t370978721 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m4118700355(__this, ___call0, method) ((  void (*) (UnityEvent_1_t663396231 *, UnityAction_1_t370978721 *, const MethodInfo*))UnityEvent_1_AddListener_m4118700355_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m3796628131_gshared (UnityEvent_1_t663396231 * __this, UnityAction_1_t370978721 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m3796628131(__this, ___call0, method) ((  void (*) (UnityEvent_1_t663396231 *, UnityAction_1_t370978721 *, const MethodInfo*))UnityEvent_1_RemoveListener_m3796628131_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2991727964_gshared (UnityEvent_1_t663396231 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2991727964(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t663396231 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m2991727964_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_1_GetDelegate_m183928870_gshared (UnityEvent_1_t663396231 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m183928870(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1559630662 * (*) (UnityEvent_1_t663396231 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m183928870_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_1_GetDelegate_m2888043331_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t370978721 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2888043331(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t1559630662 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t370978721 *, const MethodInfo*))UnityEvent_1_GetDelegate_m2888043331_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m4200629676_gshared (UnityEvent_1_t663396231 * __this, bool ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m4200629676(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t663396231 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m4200629676_gshared)(__this, ___arg00, method)
