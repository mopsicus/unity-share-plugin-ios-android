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

// System.Reflection.ParameterInfo
struct ParameterInfo_t2235474049;
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t3159962230;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_ParameterBuilder3159962230.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Reflection_ParameterInfo2235474049.h"
#include "mscorlib_System_Reflection_ParameterAttributes358477162.h"

// System.Void System.Reflection.ParameterInfo::.ctor()
extern "C"  void ParameterInfo__ctor_m3597008161 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern "C"  void ParameterInfo__ctor_m703590456 (ParameterInfo_t2235474049 * __this, ParameterBuilder_t3159962230 * ___pb0, Type_t * ___type1, MemberInfo_t * ___member2, int32_t ___position3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C"  void ParameterInfo__ctor_m3736663868 (ParameterInfo_t2235474049 * __this, ParameterInfo_t2235474049 * ___pinfo0, MemberInfo_t * ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::ToString()
extern "C"  String_t* ParameterInfo_ToString_m608350892 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C"  Type_t * ParameterInfo_get_ParameterType_m962921011 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C"  int32_t ParameterInfo_get_Attributes_m3667882316 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C"  bool ParameterInfo_get_IsIn_m462729209 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C"  bool ParameterInfo_get_IsOptional_m2840883508 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C"  bool ParameterInfo_get_IsOut_m1465526300 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C"  bool ParameterInfo_get_IsRetval_m843554164 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern "C"  MemberInfo_t * ParameterInfo_get_Member_m215664551 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C"  String_t* ParameterInfo_get_Name_m1246625812 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C"  int32_t ParameterInfo_get_Position_m2226484697 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* ParameterInfo_GetCustomAttributes_m3587382740 (ParameterInfo_t2235474049 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern "C"  bool ParameterInfo_IsDefined_m1420905444 (ParameterInfo_t2235474049 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t1108656482* ParameterInfo_GetPseudoCustomAttributes_m760090638 (ParameterInfo_t2235474049 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
