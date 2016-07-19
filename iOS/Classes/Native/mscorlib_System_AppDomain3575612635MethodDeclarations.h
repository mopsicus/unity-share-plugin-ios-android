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

// System.AppDomain
struct AppDomain_t3575612635;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t2544755120;
// System.String
struct String_t;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1002978443;
// System.Reflection.AssemblyName
struct AssemblyName_t2915647011;
// System.Object
struct Il2CppObject;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.Security.Policy.Evidence
struct Evidence_t4141397151;
// System.Runtime.Remoting.Contexts.Context
struct Context_t515654137;
// System.AppDomainManager
struct AppDomainManager_t1352507164;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_UnhandledExceptionEventHandler2544755120.h"
#include "mscorlib_System_Reflection_AssemblyName2915647011.h"
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAcc2771074959.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_Policy_Evidence4141397151.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context515654137.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C"  void AppDomain_add_UnhandledException_m1729490677 (AppDomain_t3575612635 * __this, UnhandledExceptionEventHandler_t2544755120 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C"  void AppDomain_remove_UnhandledException_m1873750054 (AppDomain_t3575612635 * __this, UnhandledExceptionEventHandler_t2544755120 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C"  String_t* AppDomain_getFriendlyName_m290133299 (AppDomain_t3575612635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C"  AppDomain_t3575612635 * AppDomain_getCurDomain_m2514231979 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C"  AppDomain_t3575612635 * AppDomain_get_CurrentDomain_m3448347417 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineInternalDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C"  AssemblyBuilder_t1002978443 * AppDomain_DefineInternalDynamicAssembly_m2942189295 (AppDomain_t3575612635 * __this, AssemblyName_t2915647011 * ___name0, int32_t ___access1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.AppDomain::InitializeLifetimeService()
extern "C"  Il2CppObject * AppDomain_InitializeLifetimeService_m3976192241 (AppDomain_t3575612635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t1418687608 * AppDomain_LoadAssembly_m4215712056 (AppDomain_t3575612635 * __this, String_t* ___assemblyRef0, Evidence_t4141397151 * ___securityEvidence1, bool ___refOnly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C"  Assembly_t1418687608 * AppDomain_Load_m3534527363 (AppDomain_t3575612635 * __this, String_t* ___assemblyString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t1418687608 * AppDomain_Load_m2577869746 (AppDomain_t3575612635 * __this, String_t* ___assemblyString0, Evidence_t4141397151 * ___assemblySecurity1, bool ___refonly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C"  Context_t515654137 * AppDomain_InternalSetContext_m3131801719 (Il2CppObject * __this /* static, unused */, Context_t515654137 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C"  Context_t515654137 * AppDomain_InternalGetContext_m41184350 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C"  Context_t515654137 * AppDomain_InternalGetDefaultContext_m3839071361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C"  String_t* AppDomain_InternalGetProcessGuid_m3162302728 (Il2CppObject * __this /* static, unused */, String_t* ___newguid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C"  String_t* AppDomain_GetProcessGuid_m3698396509 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C"  String_t* AppDomain_ToString_m1440401511 (AppDomain_t3575612635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C"  Assembly_t1418687608 * AppDomain_DoTypeResolve_m2539304708 (AppDomain_t3575612635 * __this, Il2CppObject * ___name_or_tb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainManager System.AppDomain::get_DomainManager()
extern "C"  AppDomainManager_t1352507164 * AppDomain_get_DomainManager_m3503506942 (AppDomain_t3575612635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
