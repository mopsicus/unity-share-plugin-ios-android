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

// System.Text.RegularExpressions.FactoryCache/Key
struct Key_t447833941;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Text_RegularExpressions_RegexOptions3066443743.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Text.RegularExpressions.FactoryCache/Key::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  void Key__ctor_m422488661 (Key_t447833941 * __this, String_t* ___pattern0, int32_t ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.FactoryCache/Key::GetHashCode()
extern "C"  int32_t Key_GetHashCode_m3621609140 (Key_t447833941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.FactoryCache/Key::Equals(System.Object)
extern "C"  bool Key_Equals_m3415530204 (Key_t447833941 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.FactoryCache/Key::ToString()
extern "C"  String_t* Key_ToString_m2241865016 (Key_t447833941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
