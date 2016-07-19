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

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t3217839941;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1918497079;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t2708692954;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2015293532;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1499877190;
// System.Reflection.Module
struct Module_t1394482686;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_TypeBuilder1918497079.h"
#include "mscorlib_System_Reflection_MethodAttributes1709777834.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_RuntimeMethodHandle2199484343.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_Emit_MethodToken23137230.h"

// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C"  void ConstructorBuilder__ctor_m3776339611 (ConstructorBuilder_t3217839941 * __this, TypeBuilder_t1918497079 * ___tb0, int32_t ___attributes1, int32_t ___callingConvention2, TypeU5BU5D_t3339007067* ___parameterTypes3, TypeU5BU5DU5BU5D_t2708692954* ___paramModReq4, TypeU5BU5DU5BU5D_t2708692954* ___paramModOpt5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C"  int32_t ConstructorBuilder_get_CallingConvention_m1759375919 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C"  TypeBuilder_t1918497079 * ConstructorBuilder_get_TypeBuilder_m1751255827 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C"  ParameterInfoU5BU5D_t2015293532* ConstructorBuilder_GetParameters_m888861432 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C"  ParameterInfoU5BU5D_t2015293532* ConstructorBuilder_GetParametersInternal_m465564565 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C"  int32_t ConstructorBuilder_GetParameterCount_m3832553394 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * ConstructorBuilder_Invoke_m3130091177 (ConstructorBuilder_t3217839941 * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, ObjectU5BU5D_t1108656482* ___parameters3, CultureInfo_t1065375142 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * ConstructorBuilder_Invoke_m3839663735 (ConstructorBuilder_t3217839941 * __this, int32_t ___invokeAttr0, Binder_t1074302268 * ___binder1, ObjectU5BU5D_t1108656482* ___parameters2, CultureInfo_t1065375142 * ___culture3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t2199484343  ConstructorBuilder_get_MethodHandle_m3811757201 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C"  int32_t ConstructorBuilder_get_Attributes_m1523127289 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C"  Type_t * ConstructorBuilder_get_ReflectedType_m1081966177 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C"  Type_t * ConstructorBuilder_get_DeclaringType_m1851519404 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C"  String_t* ConstructorBuilder_get_Name_m693047033 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool ConstructorBuilder_IsDefined_m503974687 (ConstructorBuilder_t3217839941 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* ConstructorBuilder_GetCustomAttributes_m1576913186 (ConstructorBuilder_t3217839941 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* ConstructorBuilder_GetCustomAttributes_m2593734159 (ConstructorBuilder_t3217839941 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C"  ILGenerator_t1499877190 * ConstructorBuilder_GetILGenerator_m1097527344 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern "C"  ILGenerator_t1499877190 * ConstructorBuilder_GetILGenerator_m396483969 (ConstructorBuilder_t3217839941 * __this, int32_t ___streamSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C"  MethodToken_t23137230  ConstructorBuilder_GetToken_m2130394273 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C"  Module_t1394482686 * ConstructorBuilder_get_Module_m779973538 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C"  String_t* ConstructorBuilder_ToString_m54772113 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ConstructorBuilder::fixup()
extern "C"  void ConstructorBuilder_fixup_m3991829194 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t ConstructorBuilder_get_next_table_index_m4060451216 (ConstructorBuilder_t3217839941 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C"  bool ConstructorBuilder_get_IsCompilerContext_m884160345 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C"  Exception_t3991598821 * ConstructorBuilder_not_supported_m993826647 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C"  Exception_t3991598821 * ConstructorBuilder_not_created_m1839318289 (ConstructorBuilder_t3217839941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
