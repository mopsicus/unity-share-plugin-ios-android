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

// UnityEngine.Events.PersistentCall
struct PersistentCall_t2972625667;
// UnityEngine.Object
struct Object_t3071478659;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t1171347191;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1559630662;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t1020378628;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerM3900400668.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase1020378628.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCache1171347191.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern "C"  void PersistentCall__ctor_m3363339247 (PersistentCall_t2972625667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C"  Object_t3071478659 * PersistentCall_get_target_m3400889750 (PersistentCall_t2972625667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C"  String_t* PersistentCall_get_methodName_m3021973351 (PersistentCall_t2972625667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C"  int32_t PersistentCall_get_mode_m1522877562 (PersistentCall_t2972625667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C"  ArgumentCache_t1171347191 * PersistentCall_get_arguments_m1871980514 (PersistentCall_t2972625667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern "C"  bool PersistentCall_IsValid_m1010437221 (PersistentCall_t2972625667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern "C"  BaseInvokableCall_t1559630662 * PersistentCall_GetRuntimeCall_m3912860610 (PersistentCall_t2972625667 * __this, UnityEventBase_t1020378628 * ___theEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern "C"  BaseInvokableCall_t1559630662 * PersistentCall_GetObjectCall_m1043326447 (Il2CppObject * __this /* static, unused */, Object_t3071478659 * ___target0, MethodInfo_t * ___method1, ArgumentCache_t1171347191 * ___arguments2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
