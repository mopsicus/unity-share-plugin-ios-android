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

// System.Runtime.Remoting.Activation.UrlAttribute
struct UrlAttribute_t2914013939;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t46526869;
// System.Runtime.Remoting.Contexts.Context
struct Context_t515654137;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Remoting_Contexts_Context515654137.h"

// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C"  String_t* UrlAttribute_get_UrlValue_m2943225223 (UrlAttribute_t2914013939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern "C"  bool UrlAttribute_Equals_m3166584024 (UrlAttribute_t2914013939 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern "C"  int32_t UrlAttribute_GetHashCode_m1694018096 (UrlAttribute_t2914013939 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  void UrlAttribute_GetPropertiesForNewContext_m28161747 (UrlAttribute_t2914013939 * __this, Il2CppObject * ___ctorMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C"  bool UrlAttribute_IsContextOK_m864962150 (UrlAttribute_t2914013939 * __this, Context_t515654137 * ___ctx0, Il2CppObject * ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
