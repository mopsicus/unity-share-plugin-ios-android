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

// System.Security.SecurityElement
struct SecurityElement_t2125293618;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t1645524282;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_SecurityElement2125293618.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void System.Security.SecurityElement::.ctor(System.String)
extern "C"  void SecurityElement__ctor_m3616501115 (SecurityElement_t2125293618 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
extern "C"  void SecurityElement__ctor_m2591154807 (SecurityElement_t2125293618 * __this, String_t* ___tag0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
extern "C"  void SecurityElement__cctor_m429967270 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Security.SecurityElement::get_Attributes()
extern "C"  Hashtable_t1407064410 * SecurityElement_get_Attributes_m3003513658 (SecurityElement_t2125293618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
extern "C"  ArrayList_t3948406897 * SecurityElement_get_Children_m3662285689 (SecurityElement_t2125293618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
extern "C"  String_t* SecurityElement_get_Tag_m1611173913 (SecurityElement_t2125293618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
extern "C"  void SecurityElement_set_Text_m2824457339 (SecurityElement_t2125293618 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
extern "C"  void SecurityElement_AddAttribute_m979045638 (SecurityElement_t2125293618 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
extern "C"  void SecurityElement_AddChild_m17363117 (SecurityElement_t2125293618 * __this, SecurityElement_t2125293618 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Attribute(System.String)
extern "C"  String_t* SecurityElement_Attribute_m4005812862 (SecurityElement_t2125293618 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
extern "C"  String_t* SecurityElement_Escape_m855150247 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
extern "C"  String_t* SecurityElement_Unescape_m249625582 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::FromString(System.String)
extern "C"  SecurityElement_t2125293618 * SecurityElement_FromString_m1029343728 (Il2CppObject * __this /* static, unused */, String_t* ___xml0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
extern "C"  bool SecurityElement_IsValidAttributeName_m190948498 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
extern "C"  bool SecurityElement_IsValidAttributeValue_m1458092724 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
extern "C"  bool SecurityElement_IsValidTag_m3543842271 (Il2CppObject * __this /* static, unused */, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
extern "C"  bool SecurityElement_IsValidText_m2889048252 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
extern "C"  SecurityElement_t2125293618 * SecurityElement_SearchForChildByTag_m1597451503 (SecurityElement_t2125293618 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
extern "C"  String_t* SecurityElement_ToString_m1891938598 (SecurityElement_t2125293618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
extern "C"  void SecurityElement_ToXml_m2446329140 (SecurityElement_t2125293618 * __this, StringBuilder_t243639308 ** ___s0, int32_t ___level1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
extern "C"  SecurityAttribute_t1645524282 * SecurityElement_GetAttribute_m3634791704 (SecurityElement_t2125293618 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
