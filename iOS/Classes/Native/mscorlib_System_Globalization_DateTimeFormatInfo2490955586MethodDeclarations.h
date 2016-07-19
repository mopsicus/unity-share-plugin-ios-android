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

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2490955586;
// System.IFormatProvider
struct IFormatProvider_t192740775;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Globalization.Calendar
struct Calendar_t3558528576;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2490955586.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Globalization_Calendar3558528576.h"
#include "mscorlib_System_DayOfWeek1779421117.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
extern "C"  void DateTimeFormatInfo__ctor_m476740351 (DateTimeFormatInfo_t2490955586 * __this, bool ___read_only0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
extern "C"  void DateTimeFormatInfo__ctor_m594580360 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
extern "C"  void DateTimeFormatInfo__cctor_m770025765 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
extern "C"  DateTimeFormatInfo_t2490955586 * DateTimeFormatInfo_GetInstance_m619500550 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
extern "C"  bool DateTimeFormatInfo_get_IsReadOnly_m1677012783 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
extern "C"  DateTimeFormatInfo_t2490955586 * DateTimeFormatInfo_ReadOnly_m3611650447 (Il2CppObject * __this /* static, unused */, DateTimeFormatInfo_t2490955586 * ___dtfi0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
extern "C"  Il2CppObject * DateTimeFormatInfo_Clone_m1570337592 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
extern "C"  Il2CppObject * DateTimeFormatInfo_GetFormat_m3554337457 (DateTimeFormatInfo_t2490955586 * __this, Type_t * ___formatType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
extern "C"  String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m3331851106 (DateTimeFormatInfo_t2490955586 * __this, int32_t ___month0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
extern "C"  String_t* DateTimeFormatInfo_GetEraName_m766646867 (DateTimeFormatInfo_t2490955586 * __this, int32_t ___era0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
extern "C"  String_t* DateTimeFormatInfo_GetMonthName_m2729105407 (DateTimeFormatInfo_t2490955586 * __this, int32_t ___month0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
extern "C"  StringU5BU5D_t4054002952* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m771068001 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
extern "C"  StringU5BU5D_t4054002952* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m3687851005 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
extern "C"  StringU5BU5D_t4054002952* DateTimeFormatInfo_get_RawDayNames_m3273728530 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
extern "C"  StringU5BU5D_t4054002952* DateTimeFormatInfo_get_RawMonthNames_m3562933614 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
extern "C"  String_t* DateTimeFormatInfo_get_AMDesignator_m878927810 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
extern "C"  String_t* DateTimeFormatInfo_get_PMDesignator_m1885483027 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
extern "C"  String_t* DateTimeFormatInfo_get_DateSeparator_m2833276087 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
extern "C"  String_t* DateTimeFormatInfo_get_TimeSeparator_m3488620600 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
extern "C"  String_t* DateTimeFormatInfo_get_LongDatePattern_m3644703302 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
extern "C"  String_t* DateTimeFormatInfo_get_ShortDatePattern_m1215316584 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_ShortTimePattern_m1542255145 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_LongTimePattern_m3971641863 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
extern "C"  String_t* DateTimeFormatInfo_get_MonthDayPattern_m1446747604 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
extern "C"  String_t* DateTimeFormatInfo_get_YearMonthPattern_m2214456463 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_FullDateTimePattern_m1244884934 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
extern "C"  DateTimeFormatInfo_t2490955586 * DateTimeFormatInfo_get_CurrentInfo_m2432806571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C"  DateTimeFormatInfo_t2490955586 * DateTimeFormatInfo_get_InvariantInfo_m1430381298 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
extern "C"  Calendar_t3558528576 * DateTimeFormatInfo_get_Calendar_m1179014650 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
extern "C"  void DateTimeFormatInfo_set_Calendar_m2253923569 (DateTimeFormatInfo_t2490955586 * __this, Calendar_t3558528576 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
extern "C"  String_t* DateTimeFormatInfo_get_RFC1123Pattern_m3931364898 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
extern "C"  String_t* DateTimeFormatInfo_get_RoundtripPattern_m3512058911 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m1830034941 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m1771717908 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
extern "C"  StringU5BU5D_t4054002952* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m1326261985 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
extern "C"  void DateTimeFormatInfo_FillAllDateTimePatterns_m1091470146 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
extern "C"  StringU5BU5D_t4054002952* DateTimeFormatInfo_GetAllRawDateTimePatterns_m655159675 (DateTimeFormatInfo_t2490955586 * __this, Il2CppChar ___format0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
extern "C"  String_t* DateTimeFormatInfo_GetDayName_m186743586 (DateTimeFormatInfo_t2490955586 * __this, int32_t ___dayofweek0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
extern "C"  String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m3899742661 (DateTimeFormatInfo_t2490955586 * __this, int32_t ___dayofweek0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
extern "C"  void DateTimeFormatInfo_FillInvariantPatterns_m1116985894 (DateTimeFormatInfo_t2490955586 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
extern "C"  StringU5BU5D_t4054002952* DateTimeFormatInfo_PopulateCombinedList_m498527762 (DateTimeFormatInfo_t2490955586 * __this, StringU5BU5D_t4054002952* ___dates0, StringU5BU5D_t4054002952* ___times1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
