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

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t1668724050;
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

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_3__ctor_m4248091138_gshared (UnityEvent_3_t1668724050 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m4248091138(__this, method) ((  void (*) (UnityEvent_3_t1668724050 *, const MethodInfo*))UnityEvent_3__ctor_m4248091138_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_3_FindMethod_Impl_m859190087_gshared (UnityEvent_3_t1668724050 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m859190087(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_3_t1668724050 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m859190087_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_3_GetDelegate_m3227786433_gshared (UnityEvent_3_t1668724050 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m3227786433(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1559630662 * (*) (UnityEvent_3_t1668724050 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m3227786433_gshared)(__this, ___target0, ___theFunction1, method)
