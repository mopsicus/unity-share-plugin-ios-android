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


#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"

// System.Boolean System.Globalization.CCGregorianCalendar::is_leap_year(System.Int32)
extern "C"  bool CCGregorianCalendar_is_leap_year_m229298524 (Il2CppObject * __this /* static, unused */, int32_t ___year0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::fixed_from_dmy(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t CCGregorianCalendar_fixed_from_dmy_m3822859421 (Il2CppObject * __this /* static, unused */, int32_t ___day0, int32_t ___month1, int32_t ___year2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::year_from_fixed(System.Int32)
extern "C"  int32_t CCGregorianCalendar_year_from_fixed_m1525760974 (Il2CppObject * __this /* static, unused */, int32_t ___date0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::my_from_fixed(System.Int32&,System.Int32&,System.Int32)
extern "C"  void CCGregorianCalendar_my_from_fixed_m3120089585 (Il2CppObject * __this /* static, unused */, int32_t* ___month0, int32_t* ___year1, int32_t ___date2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::dmy_from_fixed(System.Int32&,System.Int32&,System.Int32&,System.Int32)
extern "C"  void CCGregorianCalendar_dmy_from_fixed_m3698401994 (Il2CppObject * __this /* static, unused */, int32_t* ___day0, int32_t* ___month1, int32_t* ___year2, int32_t ___date3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::month_from_fixed(System.Int32)
extern "C"  int32_t CCGregorianCalendar_month_from_fixed_m3688850581 (Il2CppObject * __this /* static, unused */, int32_t ___date0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::day_from_fixed(System.Int32)
extern "C"  int32_t CCGregorianCalendar_day_from_fixed_m3729332281 (Il2CppObject * __this /* static, unused */, int32_t ___date0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C"  int32_t CCGregorianCalendar_GetDayOfMonth_m2484684921 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetMonth(System.DateTime)
extern "C"  int32_t CCGregorianCalendar_GetMonth_m2310195656 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetYear(System.DateTime)
extern "C"  int32_t CCGregorianCalendar_GetYear_m632074537 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
