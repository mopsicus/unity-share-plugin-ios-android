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

// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2015293532;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1372150788;
struct MonoMethodInfo_t1372150788_marshaled_pinvoke;
struct MonoMethodInfo_t1372150788_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Reflection_MonoMethodInfo1372150788.h"
#include "mscorlib_System_Reflection_MethodAttributes1709777834.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"

// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C"  void MonoMethodInfo_get_method_info_m2207164051 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, MonoMethodInfo_t1372150788 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C"  MonoMethodInfo_t1372150788  MonoMethodInfo_GetMethodInfo_m3883823882 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern "C"  Type_t * MonoMethodInfo_GetDeclaringType_m1399000903 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern "C"  Type_t * MonoMethodInfo_GetReturnType_m2167465812 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern "C"  int32_t MonoMethodInfo_GetAttributes_m3368954492 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern "C"  int32_t MonoMethodInfo_GetCallingConvention_m4186754404 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C"  ParameterInfoU5BU5D_t2015293532* MonoMethodInfo_get_parameter_info_m584685721 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, MemberInfo_t * ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern "C"  ParameterInfoU5BU5D_t2015293532* MonoMethodInfo_GetParametersInfo_m1882458608 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, MemberInfo_t * ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MonoMethodInfo_t1372150788;
struct MonoMethodInfo_t1372150788_marshaled_pinvoke;

extern "C" void MonoMethodInfo_t1372150788_marshal_pinvoke(const MonoMethodInfo_t1372150788& unmarshaled, MonoMethodInfo_t1372150788_marshaled_pinvoke& marshaled);
extern "C" void MonoMethodInfo_t1372150788_marshal_pinvoke_back(const MonoMethodInfo_t1372150788_marshaled_pinvoke& marshaled, MonoMethodInfo_t1372150788& unmarshaled);
extern "C" void MonoMethodInfo_t1372150788_marshal_pinvoke_cleanup(MonoMethodInfo_t1372150788_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MonoMethodInfo_t1372150788;
struct MonoMethodInfo_t1372150788_marshaled_com;

extern "C" void MonoMethodInfo_t1372150788_marshal_com(const MonoMethodInfo_t1372150788& unmarshaled, MonoMethodInfo_t1372150788_marshaled_com& marshaled);
extern "C" void MonoMethodInfo_t1372150788_marshal_com_back(const MonoMethodInfo_t1372150788_marshaled_com& marshaled, MonoMethodInfo_t1372150788& unmarshaled);
extern "C" void MonoMethodInfo_t1372150788_marshal_com_cleanup(MonoMethodInfo_t1372150788_marshaled_com& marshaled);
