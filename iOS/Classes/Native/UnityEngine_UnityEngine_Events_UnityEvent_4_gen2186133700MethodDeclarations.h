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

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2186133700;
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

// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_4__ctor_m492943285_gshared (UnityEvent_4_t2186133700 * __this, const MethodInfo* method);
#define UnityEvent_4__ctor_m492943285(__this, method) ((  void (*) (UnityEvent_4_t2186133700 *, const MethodInfo*))UnityEvent_4__ctor_m492943285_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_4_FindMethod_Impl_m1344084084_gshared (UnityEvent_4_t2186133700 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_4_FindMethod_Impl_m1344084084(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_4_t2186133700 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_4_FindMethod_Impl_m1344084084_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_4_GetDelegate_m1269387316_gshared (UnityEvent_4_t2186133700 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_4_GetDelegate_m1269387316(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1559630662 * (*) (UnityEvent_4_t2186133700 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_4_GetDelegate_m1269387316_gshared)(__this, ___target0, ___theFunction1, method)
