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

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t4088726908;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m3352102596_gshared (UnityAction_1_t4088726908 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define UnityAction_1__ctor_m3352102596(__this, ___object0, ___method1, method) ((  void (*) (UnityAction_1_t4088726908 *, Il2CppObject *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m3352102596_gshared)(__this, ___object0, ___method1, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
extern "C"  void UnityAction_1_Invoke_m3753038862_gshared (UnityAction_1_t4088726908 * __this, Color_t4194546905  ___arg00, const MethodInfo* method);
#define UnityAction_1_Invoke_m3753038862(__this, ___arg00, method) ((  void (*) (UnityAction_1_t4088726908 *, Color_t4194546905 , const MethodInfo*))UnityAction_1_Invoke_m3753038862_gshared)(__this, ___arg00, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnityAction_1_BeginInvoke_m3065986105_gshared (UnityAction_1_t4088726908 * __this, Color_t4194546905  ___arg00, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m3065986105(__this, ___arg00, ___callback1, ___object2, method) ((  Il2CppObject * (*) (UnityAction_1_t4088726908 *, Color_t4194546905 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))UnityAction_1_BeginInvoke_m3065986105_gshared)(__this, ___arg00, ___callback1, ___object2, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  void UnityAction_1_EndInvoke_m4211808480_gshared (UnityAction_1_t4088726908 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m4211808480(__this, ___result0, method) ((  void (*) (UnityAction_1_t4088726908 *, Il2CppObject *, const MethodInfo*))UnityAction_1_EndInvoke_m4211808480_gshared)(__this, ___result0, method)
