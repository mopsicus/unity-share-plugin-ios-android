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

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t553556921;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t4136801618;
// System.Reflection.Binder
struct Binder_t1074302268;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3896472559;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t2079826215;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t2567562023;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2824366364;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.Reflection.Module
struct Module_t1394482686;
// System.Exception
struct Exception_t3991598821;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_TypeAttributes1370933187.h"
#include "mscorlib_System_Reflection_BindingFlags1523912596.h"
#include "mscorlib_System_Reflection_Binder1074302268.h"
#include "mscorlib_System_Reflection_CallingConventions2863034704.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Globalization_CultureInfo1065375142.h"
#include "mscorlib_System_RuntimeTypeHandle2669177232.h"

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern "C"  bool GenericTypeParameterBuilder_IsSubclassOf_m952653568 (GenericTypeParameterBuilder_t553556921 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m1663262351 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t4136801618 * GenericTypeParameterBuilder_GetConstructorImpl_m545561302 (GenericTypeParameterBuilder_t553556921 * __this, int32_t ___bindingAttr0, Binder_t1074302268 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t3339007067* ___types3, ParameterModifierU5BU5D_t3896472559* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t2079826215* GenericTypeParameterBuilder_GetConstructors_m3161529504 (GenericTypeParameterBuilder_t553556921 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * GenericTypeParameterBuilder_GetEvent_m2196072623 (GenericTypeParameterBuilder_t553556921 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * GenericTypeParameterBuilder_GetField_m2024354991 (GenericTypeParameterBuilder_t553556921 * __this, String_t* ___name0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t2567562023* GenericTypeParameterBuilder_GetFields_m128303008 (GenericTypeParameterBuilder_t553556921 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t3339007067* GenericTypeParameterBuilder_GetInterfaces_m437688604 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t2824366364* GenericTypeParameterBuilder_GetMethods_m1386969194 (GenericTypeParameterBuilder_t553556921 * __this, int32_t ___bindingAttr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m3486858252 (GenericTypeParameterBuilder_t553556921 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t1074302268 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t3339007067* ___types4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m3933236897 (GenericTypeParameterBuilder_t553556921 * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t1074302268 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t3339007067* ___types4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C"  bool GenericTypeParameterBuilder_HasElementTypeImpl_m814733436 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C"  bool GenericTypeParameterBuilder_IsAssignableFrom_m2291646236 (GenericTypeParameterBuilder_t553556921 * __this, Type_t * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C"  bool GenericTypeParameterBuilder_IsInstanceOfType_m2833041284 (GenericTypeParameterBuilder_t553556921 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C"  bool GenericTypeParameterBuilder_IsArrayImpl_m3637457745 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C"  bool GenericTypeParameterBuilder_IsByRefImpl_m1167485812 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C"  bool GenericTypeParameterBuilder_IsPointerImpl_m763708021 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C"  bool GenericTypeParameterBuilder_IsPrimitiveImpl_m2352879583 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C"  bool GenericTypeParameterBuilder_IsValueTypeImpl_m2835178563 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Il2CppObject * GenericTypeParameterBuilder_InvokeMember_m2055705555 (GenericTypeParameterBuilder_t553556921 * __this, String_t* ___name0, int32_t ___invokeAttr1, Binder_t1074302268 * ___binder2, Il2CppObject * ___target3, ObjectU5BU5D_t1108656482* ___args4, ParameterModifierU5BU5D_t3896472559* ___modifiers5, CultureInfo_t1065375142 * ___culture6, StringU5BU5D_t4054002952* ___namedParameters7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C"  Type_t * GenericTypeParameterBuilder_GetElementType_m3868625048 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m2109324167 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C"  Assembly_t1418687608 * GenericTypeParameterBuilder_get_Assembly_m3923688878 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m1986145049 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_BaseType_m1305573036 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C"  String_t* GenericTypeParameterBuilder_get_FullName_m79189380 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool GenericTypeParameterBuilder_IsDefined_m1789048485 (GenericTypeParameterBuilder_t553556921 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* GenericTypeParameterBuilder_GetCustomAttributes_m3157542694 (GenericTypeParameterBuilder_t553556921 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t1108656482* GenericTypeParameterBuilder_GetCustomAttributes_m2400114195 (GenericTypeParameterBuilder_t553556921 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C"  String_t* GenericTypeParameterBuilder_get_Name_m1381612181 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C"  String_t* GenericTypeParameterBuilder_get_Namespace_m2668458867 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C"  Module_t1394482686 * GenericTypeParameterBuilder_get_Module_m4212322478 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_DeclaringType_m2257580418 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_ReflectedType_m1488027191 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t2669177232  GenericTypeParameterBuilder_get_TypeHandle_m1599953625 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t3339007067* GenericTypeParameterBuilder_GetGenericArguments_m4080596481 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern "C"  Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m1742966118 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C"  bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m2518773659 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericParameter_m633698693 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericType_m1264804288 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m39731123 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C"  Exception_t3991598821 * GenericTypeParameterBuilder_not_supported_m716718603 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C"  String_t* GenericTypeParameterBuilder_ToString_m743337261 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C"  bool GenericTypeParameterBuilder_Equals_m1747582869 (GenericTypeParameterBuilder_t553556921 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C"  int32_t GenericTypeParameterBuilder_GetHashCode_m3071919225 (GenericTypeParameterBuilder_t553556921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C"  Type_t * GenericTypeParameterBuilder_MakeGenericType_m3404220394 (GenericTypeParameterBuilder_t553556921 * __this, TypeU5BU5D_t3339007067* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
