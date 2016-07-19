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

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t3880155831;
// UnityEngine.Object
struct Object_t3071478659;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m3760156124_gshared (CachedInvokableCall_1_t3880155831 * __this, Object_t3071478659 * ___target0, MethodInfo_t * ___theFunction1, float ___argument2, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3760156124(__this, ___target0, ___theFunction1, ___argument2, method) ((  void (*) (CachedInvokableCall_1_t3880155831 *, Object_t3071478659 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3760156124_gshared)(__this, ___target0, ___theFunction1, ___argument2, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C"  void CachedInvokableCall_1_Invoke_m4174790843_gshared (CachedInvokableCall_1_t3880155831 * __this, ObjectU5BU5D_t1108656482* ___args0, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m4174790843(__this, ___args0, method) ((  void (*) (CachedInvokableCall_1_t3880155831 *, ObjectU5BU5D_t1108656482*, const MethodInfo*))CachedInvokableCall_1_Invoke_m4174790843_gshared)(__this, ___args0, method)
