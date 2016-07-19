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

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Type[]
struct TypeU5BU5D_t3339007067;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes2305219977.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Reflection.PropertyInfo::.ctor()
extern "C"  void PropertyInfo__ctor_m539791979 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
extern "C"  int32_t PropertyInfo_get_MemberType_m3698268270 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
extern "C"  MethodInfo_t * PropertyInfo_GetGetMethod_m1125167762 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
extern "C"  Il2CppObject * PropertyInfo_GetValue_m396207607 (PropertyInfo_t * __this, Il2CppObject * ___obj0, ObjectU5BU5D_t1108656482* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
extern "C"  void PropertyInfo_SetValue_m3226288870 (PropertyInfo_t * __this, Il2CppObject * ___obj0, Il2CppObject * ___value1, ObjectU5BU5D_t1108656482* ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.PropertyInfo::GetOptionalCustomModifiers()
extern "C"  TypeU5BU5D_t3339007067* PropertyInfo_GetOptionalCustomModifiers_m1611882438 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.PropertyInfo::GetRequiredCustomModifiers()
extern "C"  TypeU5BU5D_t3339007067* PropertyInfo_GetRequiredCustomModifiers_m3981387111 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
