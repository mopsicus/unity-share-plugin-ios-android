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

// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t2626711275;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t370978721;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void InvokableCall_1__ctor_m364542482_gshared (InvokableCall_1_t2626711275 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define InvokableCall_1__ctor_m364542482(__this, ___target0, ___theFunction1, method) ((  void (*) (InvokableCall_1_t2626711275 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m364542482_gshared)(__this, ___target0, ___theFunction1, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C"  void InvokableCall_1__ctor_m1301209584_gshared (InvokableCall_1_t2626711275 * __this, UnityAction_1_t370978721 * ___action0, const MethodInfo* method);
#define InvokableCall_1__ctor_m1301209584(__this, ___action0, method) ((  void (*) (InvokableCall_1_t2626711275 *, UnityAction_1_t370978721 *, const MethodInfo*))InvokableCall_1__ctor_m1301209584_gshared)(__this, ___action0, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
extern "C"  void InvokableCall_1_Invoke_m4112204073_gshared (InvokableCall_1_t2626711275 * __this, ObjectU5BU5D_t1108656482* ___args0, const MethodInfo* method);
#define InvokableCall_1_Invoke_m4112204073(__this, ___args0, method) ((  void (*) (InvokableCall_1_t2626711275 *, ObjectU5BU5D_t1108656482*, const MethodInfo*))InvokableCall_1_Invoke_m4112204073_gshared)(__this, ___args0, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
extern "C"  bool InvokableCall_1_Find_m560012207_gshared (InvokableCall_1_t2626711275 * __this, Il2CppObject * ___targetObj0, MethodInfo_t * ___method1, const MethodInfo* method);
#define InvokableCall_1_Find_m560012207(__this, ___targetObj0, ___method1, method) ((  bool (*) (InvokableCall_1_t2626711275 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m560012207_gshared)(__this, ___targetObj0, ___method1, method)
