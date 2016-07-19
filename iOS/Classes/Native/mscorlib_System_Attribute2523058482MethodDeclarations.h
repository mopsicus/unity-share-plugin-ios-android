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

// System.Attribute
struct Attribute_t2523058482;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2235474049;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Reflection_ParameterInfo2235474049.h"

// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m2985353781 (Attribute_t2523058482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
extern "C"  void Attribute_CheckParameters_m1745623298 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C"  Attribute_t2523058482 * Attribute_GetCustomAttribute_m506754809 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  Attribute_t2523058482 * Attribute_GetCustomAttribute_m3786533732 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C"  int32_t Attribute_GetHashCode_m3717491592 (Attribute_t2523058482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
extern "C"  bool Attribute_IsDefined_m165799938 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2235474049 * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C"  bool Attribute_IsDefined_m3508553943 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  bool Attribute_IsDefined_m1309172166 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C"  bool Attribute_IsDefined_m3614779195 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2235474049 * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
extern "C"  bool Attribute_Equals_m2390113828 (Attribute_t2523058482 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
