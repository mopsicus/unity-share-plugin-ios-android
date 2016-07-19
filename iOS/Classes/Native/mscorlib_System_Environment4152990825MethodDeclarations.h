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

// System.String
struct String_t;
// System.OperatingSystem
struct OperatingSystem_t1654038694;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID785953154.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Environment_SpecialFolder124599404.h"

// System.Boolean System.Environment::get_SocketSecurityEnabled()
extern "C"  bool Environment_get_SocketSecurityEnabled_m2002704895 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m1034655108 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.Environment::get_Platform()
extern "C"  int32_t Environment_get_Platform_m977128040 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetOSVersionString()
extern "C"  String_t* Environment_GetOSVersionString_m2885926456 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.OperatingSystem System.Environment::get_OSVersion()
extern "C"  OperatingSystem_t1654038694 * Environment_get_OSVersion_m2506362029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Environment::get_TickCount()
extern "C"  int32_t Environment_get_TickCount_m2991349545 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Environment::Exit(System.Int32)
extern "C"  void Environment_Exit_m1197045077 (Il2CppObject * __this /* static, unused */, int32_t ___exitCode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetEnvironmentVariable(System.String)
extern "C"  String_t* Environment_internalGetEnvironmentVariable_m1433380067 (Il2CppObject * __this /* static, unused */, String_t* ___variable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetEnvironmentVariable(System.String)
extern "C"  String_t* Environment_GetEnvironmentVariable_m3419218304 (Il2CppObject * __this /* static, unused */, String_t* ___variable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetWindowsFolderPath(System.Int32)
extern "C"  String_t* Environment_GetWindowsFolderPath_m274642490 (Il2CppObject * __this /* static, unused */, int32_t ___folder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C"  String_t* Environment_GetFolderPath_m4247985398 (Il2CppObject * __this /* static, unused */, int32_t ___folder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::ReadXdgUserDir(System.String,System.String,System.String,System.String)
extern "C"  String_t* Environment_ReadXdgUserDir_m2296308400 (Il2CppObject * __this /* static, unused */, String_t* ___config_dir0, String_t* ___home_dir1, String_t* ___key2, String_t* ___fallback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::InternalGetFolderPath(System.Environment/SpecialFolder)
extern "C"  String_t* Environment_InternalGetFolderPath_m3585366137 (Il2CppObject * __this /* static, unused */, int32_t ___folder0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_IsRunningOnWindows()
extern "C"  bool Environment_get_IsRunningOnWindows_m1303597216 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetMachineConfigPath()
extern "C"  String_t* Environment_GetMachineConfigPath_m4130630145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetHome()
extern "C"  String_t* Environment_internalGetHome_m253471857 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
