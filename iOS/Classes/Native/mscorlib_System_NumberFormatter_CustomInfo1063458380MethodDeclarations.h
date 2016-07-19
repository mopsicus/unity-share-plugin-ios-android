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

// System.NumberFormatter/CustomInfo
struct CustomInfo_t1063458380;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1637637232;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Globalization_NumberFormatInfo1637637232.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void System.NumberFormatter/CustomInfo::.ctor()
extern "C"  void CustomInfo__ctor_m1055759592 (CustomInfo_t1063458380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
extern "C"  void CustomInfo_GetActiveSection_m3861978683 (Il2CppObject * __this /* static, unused */, String_t* ___format0, bool* ___positive1, bool ___zero2, int32_t* ___offset3, int32_t* ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter/CustomInfo System.NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  CustomInfo_t1063458380 * CustomInfo_Parse_m2971752052 (Il2CppObject * __this /* static, unused */, String_t* ___format0, int32_t ___offset1, int32_t ___length2, NumberFormatInfo_t1637637232 * ___nfi3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
extern "C"  String_t* CustomInfo_Format_m1427734085 (CustomInfo_t1063458380 * __this, String_t* ___format0, int32_t ___offset1, int32_t ___length2, NumberFormatInfo_t1637637232 * ___nfi3, bool ___positive4, StringBuilder_t243639308 * ___sb_int5, StringBuilder_t243639308 * ___sb_dec6, StringBuilder_t243639308 * ___sb_exp7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
