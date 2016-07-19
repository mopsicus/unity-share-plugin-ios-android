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

// System.Threading.Thread
struct Thread_t1973216770;
// System.Threading.ThreadStart
struct ThreadStart_t124146534;
// System.Runtime.Remoting.Contexts.Context
struct Context_t515654137;
// System.AppDomain
struct AppDomain_t3575612635;
// System.MulticastDelegate
struct MulticastDelegate_t3389745971;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t1900239151;
// System.Threading.CompressedStack
struct CompressedStack_t1790381301;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_ThreadStart124146534.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_MulticastDelegate3389745971.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Threading_ThreadState124146581.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C"  void Thread__ctor_m4293845138 (Thread_t1973216770 * __this, ThreadStart_t124146534 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
extern "C"  void Thread__cctor_m3597056408 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C"  Context_t515654137 * Thread_get_CurrentContext_m1613403838 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C"  Thread_t1973216770 * Thread_CurrentThread_internal_m3803103476 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C"  Thread_t1973216770 * Thread_get_CurrentThread_m1523593825 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::FreeLocalSlotValues(System.Int32,System.Boolean)
extern "C"  void Thread_FreeLocalSlotValues_m3189496250 (Il2CppObject * __this /* static, unused */, int32_t ___slot0, bool ___thread_local1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Threading.Thread::GetDomain()
extern "C"  AppDomain_t3575612635 * Thread_GetDomain_m1860535634 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C"  int32_t Thread_GetDomainID_m3584395396 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
extern "C"  IntPtr_t Thread_Thread_internal_m1309677628 (Thread_t1973216770 * __this, MulticastDelegate_t3389745971 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
extern "C"  void Thread_Thread_init_m3945232696 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C"  CultureInfo_t1065375142 * Thread_GetCachedCurrentCulture_m432100475 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C"  ByteU5BU5D_t4260760469* Thread_GetSerializedCurrentCulture_m2858784716 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C"  void Thread_SetCachedCurrentCulture_m1882292988 (Thread_t1973216770 * __this, CultureInfo_t1065375142 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C"  CultureInfo_t1065375142 * Thread_GetCachedCurrentUICulture_m4218701159 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C"  ByteU5BU5D_t4260760469* Thread_GetSerializedCurrentUICulture_m4095015032 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C"  void Thread_SetCachedCurrentUICulture_m1939313576 (Thread_t1973216770 * __this, CultureInfo_t1065375142 * ___culture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C"  CultureInfo_t1065375142 * Thread_get_CurrentCulture_m334626002 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern "C"  CultureInfo_t1065375142 * Thread_get_CurrentUICulture_m740045822 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
extern "C"  void Thread_set_IsBackground_m1141752027 (Thread_t1973216770 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetName_internal(System.String)
extern "C"  void Thread_SetName_internal_m3255834084 (Thread_t1973216770 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_Name(System.String)
extern "C"  void Thread_set_Name_m597236523 (Thread_t1973216770 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
extern "C"  void Thread_Start_m4066427317 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C"  void Thread_Thread_free_internal_m1268585386 (Thread_t1973216770 * __this, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
extern "C"  void Thread_Finalize_m3157999501 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
extern "C"  void Thread_SetState_m2581989004 (Thread_t1973216770 * __this, int32_t ___set0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
extern "C"  void Thread_ClrState_m634688613 (Thread_t1973216770 * __this, int32_t ___clr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern "C"  int32_t Thread_GetNewManagedId_m3980934719 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C"  int32_t Thread_GetNewManagedId_internal_m3921195679 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
extern "C"  ExecutionContext_t1900239151 * Thread_get_ExecutionContext_m1683588744 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C"  int32_t Thread_get_ManagedThreadId_m3915632970 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C"  int32_t Thread_GetHashCode_m736270528 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
extern "C"  CompressedStack_t1790381301 * Thread_GetCompressedStack_m3328677543 (Thread_t1973216770 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
