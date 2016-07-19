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

// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t3348198711;
// System.Object
struct Il2CppObject;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t3918260506;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_ConsoleCancelEventArgs3918260506.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.ConsoleCancelEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ConsoleCancelEventHandler__ctor_m1663124562 (ConsoleCancelEventHandler_t3348198711 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::Invoke(System.Object,System.ConsoleCancelEventArgs)
extern "C"  void ConsoleCancelEventHandler_Invoke_m3426425839 (ConsoleCancelEventHandler_t3348198711 * __this, Il2CppObject * ___sender0, ConsoleCancelEventArgs_t3918260506 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ConsoleCancelEventHandler::BeginInvoke(System.Object,System.ConsoleCancelEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ConsoleCancelEventHandler_BeginInvoke_m2504764258 (ConsoleCancelEventHandler_t3348198711 * __this, Il2CppObject * ___sender0, ConsoleCancelEventArgs_t3918260506 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleCancelEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ConsoleCancelEventHandler_EndInvoke_m223850338 (ConsoleCancelEventHandler_t3348198711 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
