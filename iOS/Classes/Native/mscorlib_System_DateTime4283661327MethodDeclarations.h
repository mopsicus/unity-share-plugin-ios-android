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

// System.IFormatProvider
struct IFormatProvider_t192740775;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t3991598821;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2490955586;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "mscorlib_System_DateTimeKind1472618179.h"
#include "mscorlib_System_Decimal1954350631.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_DateTime_Which178170920.h"
#include "mscorlib_System_DayOfWeek1779421117.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Globalization_DateTimeStyles1282965087.h"
#include "mscorlib_System_DateTimeOffset3884714306.h"
#include "mscorlib_System_Exception3991598821.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2490955586.h"

// System.Void System.DateTime::.ctor(System.Int64)
extern "C"  void DateTime__ctor_m4059138700 (DateTime_t4283661327 * __this, int64_t ___ticks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m145640619 (DateTime_t4283661327 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m580066412 (DateTime_t4283661327 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m1594789867 (DateTime_t4283661327 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Boolean,System.TimeSpan)
extern "C"  void DateTime__ctor_m270463751 (DateTime_t4283661327 * __this, bool ___check0, TimeSpan_t413522987  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
extern "C"  void DateTime__ctor_m2747883466 (DateTime_t4283661327 * __this, int64_t ___ticks0, int32_t ___kind1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C"  void DateTime__ctor_m3805233578 (DateTime_t4283661327 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.cctor()
extern "C"  void DateTime__cctor_m2266812979 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool DateTime_System_IConvertible_ToBoolean_m2607169538 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DateTime::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t DateTime_System_IConvertible_ToByte_m3369899810 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DateTime::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar DateTime_System_IConvertible_ToChar_m4085197502 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t4283661327  DateTime_System_IConvertible_ToDateTime_m1478929736 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DateTime::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1954350631  DateTime_System_IConvertible_ToDecimal_m53652706 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double DateTime_System_IConvertible_ToDouble_m3492146548 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DateTime::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t DateTime_System_IConvertible_ToInt16_m3303672066 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t DateTime_System_IConvertible_ToInt32_m2595315522 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t DateTime_System_IConvertible_ToInt64_m3286355362 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DateTime::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t DateTime_System_IConvertible_ToSByte_m551886946 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DateTime::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float DateTime_System_IConvertible_ToSingle_m1051597858 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DateTime::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * DateTime_System_IConvertible_ToType_m1980756024 (DateTime_t4283661327 * __this, Type_t * ___targetType0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DateTime::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t DateTime_System_IConvertible_ToUInt16_m3136984848 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DateTime::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t DateTime_System_IConvertible_ToUInt32_m634562052 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DateTime::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t DateTime_System_IConvertible_ToUInt64_m2163654274 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::AbsoluteDays(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t DateTime_AbsoluteDays_m1774199309 (Il2CppObject * __this /* static, unused */, int32_t ___year0, int32_t ___month1, int32_t ___day2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::FromTicks(System.DateTime/Which)
extern "C"  int32_t DateTime_FromTicks_m1238653738 (DateTime_t4283661327 * __this, int32_t ___what0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
extern "C"  int32_t DateTime_get_Month_m1871036171 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
extern "C"  int32_t DateTime_get_Day_m609985447 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
extern "C"  int32_t DateTime_get_DayOfWeek_m1793620473 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
extern "C"  int32_t DateTime_get_Hour_m1857077531 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
extern "C"  int32_t DateTime_get_Minute_m1138831307 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
extern "C"  int32_t DateTime_get_Second_m3430069803 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetTimeMonotonic()
extern "C"  int64_t DateTime_GetTimeMonotonic_m2483860980 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
extern "C"  int64_t DateTime_GetNow_m2752959917 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t4283661327  DateTime_get_Now_m1812131422 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C"  int64_t DateTime_get_Ticks_m386468226 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Today()
extern "C"  DateTime_t4283661327  DateTime_get_Today_m3010825801 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
extern "C"  DateTime_t4283661327  DateTime_get_UtcNow_m685282732 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
extern "C"  int32_t DateTime_get_Year_m2333942068 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C"  int32_t DateTime_get_Kind_m3496013602 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C"  DateTime_t4283661327  DateTime_Add_m1332740042 (DateTime_t4283661327 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
extern "C"  DateTime_t4283661327  DateTime_AddTicks_m2395456952 (DateTime_t4283661327 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
extern "C"  DateTime_t4283661327  DateTime_AddMilliseconds_m1717403134 (DateTime_t4283661327 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C"  DateTime_t4283661327  DateTime_AddSeconds_m2515640243 (DateTime_t4283661327 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
extern "C"  int32_t DateTime_Compare_m1646075697 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___t10, DateTime_t4283661327  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.Object)
extern "C"  int32_t DateTime_CompareTo_m246114144 (DateTime_t4283661327 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
extern "C"  int32_t DateTime_CompareTo_m1522800900 (DateTime_t4283661327 * __this, DateTime_t4283661327  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.DateTime)
extern "C"  bool DateTime_Equals_m1479384337 (DateTime_t4283661327 * __this, DateTime_t4283661327  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::ToBinary()
extern "C"  int64_t DateTime_ToBinary_m1940170345 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromBinary(System.Int64)
extern "C"  DateTime_t4283661327  DateTime_FromBinary_m1447091502 (Il2CppObject * __this /* static, unused */, int64_t ___dateData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C"  DateTime_t4283661327  DateTime_SpecifyKind_m2123544880 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___value0, int32_t ___kind1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C"  int32_t DateTime_DaysInMonth_m1394183022 (Il2CppObject * __this /* static, unused */, int32_t ___year0, int32_t ___month1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.Object)
extern "C"  bool DateTime_Equals_m13666989 (DateTime_t4283661327 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckDateTimeKind(System.DateTimeKind)
extern "C"  void DateTime_CheckDateTimeKind_m1840811157 (DateTime_t4283661327 * __this, int32_t ___kind0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
extern "C"  int32_t DateTime_GetHashCode_m2255586565 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLeapYear(System.Int32)
extern "C"  bool DateTime_IsLeapYear_m3404721384 (Il2CppObject * __this /* static, unused */, int32_t ___year0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
extern "C"  DateTime_t4283661327  DateTime_Parse_m1801557718 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTime_t4283661327  DateTime_Parse_m1424797081 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Il2CppObject * ___provider1, int32_t ___styles2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::CoreParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&,System.DateTimeOffset&,System.Boolean,System.Exception&)
extern "C"  bool DateTime_CoreParse_m2501063101 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Il2CppObject * ___provider1, int32_t ___styles2, DateTime_t4283661327 * ___result3, DateTimeOffset_t3884714306 * ___dto4, bool ___setExceptionOnError5, Exception_t3991598821 ** ___exception6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::YearMonthDayFormats(System.Globalization.DateTimeFormatInfo,System.Boolean,System.Exception&)
extern "C"  StringU5BU5D_t4054002952* DateTime_YearMonthDayFormats_m200860137 (Il2CppObject * __this /* static, unused */, DateTimeFormatInfo_t2490955586 * ___dfi0, bool ___setExceptionOnError1, Exception_t3991598821 ** ___exc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseNumber(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  int32_t DateTime__ParseNumber_m223303221 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___valuePos1, int32_t ___min_digits2, int32_t ___digits3, bool ___leadingzero4, bool ___sloppy_parsing5, int32_t* ___num_parsed6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseEnum(System.String,System.Int32,System.String[],System.String[],System.Boolean,System.Int32&)
extern "C"  int32_t DateTime__ParseEnum_m780384966 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___sPos1, StringU5BU5D_t4054002952* ___values2, StringU5BU5D_t4054002952* ___invValues3, bool ___exact4, int32_t* ___num_parsed5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseString(System.String,System.Int32,System.Int32,System.String,System.Int32&)
extern "C"  bool DateTime__ParseString_m3760446054 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___sPos1, int32_t ___maxlength2, String_t* ___value3, int32_t* ___num_parsed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseAmPm(System.String,System.Int32,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&,System.Int32&)
extern "C"  bool DateTime__ParseAmPm_m618382890 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___valuePos1, int32_t ___num2, DateTimeFormatInfo_t2490955586 * ___dfi3, bool ___exact4, int32_t* ___num_parsed5, int32_t* ___ampm6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseTimeSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C"  bool DateTime__ParseTimeSeparator_m4168494975 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___sPos1, DateTimeFormatInfo_t2490955586 * ___dfi2, bool ___exact3, int32_t* ___num_parsed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseDateSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C"  bool DateTime__ParseDateSeparator_m1287691040 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___sPos1, DateTimeFormatInfo_t2490955586 * ___dfi2, bool ___exact3, int32_t* ___num_parsed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLetter(System.String,System.Int32)
extern "C"  bool DateTime_IsLetter_m3983328653 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_DoParse(System.String,System.String,System.String,System.Boolean,System.DateTime&,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.Boolean,System.Boolean&,System.Boolean&)
extern "C"  bool DateTime__DoParse_m760672305 (Il2CppObject * __this /* static, unused */, String_t* ___s0, String_t* ___firstPart1, String_t* ___secondPart2, bool ___exact3, DateTime_t4283661327 * ___result4, DateTimeOffset_t3884714306 * ___dto5, DateTimeFormatInfo_t2490955586 * ___dfi6, int32_t ___style7, bool ___firstPartIsDate8, bool* ___incompleteFormat9, bool* ___longYear10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTime_t4283661327  DateTime_ParseExact_m3158704214 (Il2CppObject * __this /* static, unused */, String_t* ___s0, String_t* ___format1, Il2CppObject * ___provider2, int32_t ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTime_t4283661327  DateTime_ParseExact_m4017898168 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t4054002952* ___formats1, Il2CppObject * ___provider2, int32_t ___style3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckStyle(System.Globalization.DateTimeStyles)
extern "C"  void DateTime_CheckStyle_m1804676438 (Il2CppObject * __this /* static, unused */, int32_t ___style0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&,System.Boolean,System.Boolean&,System.Boolean,System.Exception&)
extern "C"  bool DateTime_ParseExact_m3576065686 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t4054002952* ___formats1, DateTimeFormatInfo_t2490955586 * ___dfi2, int32_t ___style3, DateTime_t4283661327 * ___ret4, bool ___exact5, bool* ___longYear6, bool ___setExceptionOnError7, Exception_t3991598821 ** ___exception8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
extern "C"  DateTime_t4283661327  DateTime_Subtract_m4130550807 (DateTime_t4283661327 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
extern "C"  String_t* DateTime_ToString_m3221907059 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.IFormatProvider)
extern "C"  String_t* DateTime_ToString_m1268589345 (DateTime_t4283661327 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTime_ToString_m2141430949 (DateTime_t4283661327 * __this, String_t* ___format0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
extern "C"  DateTime_t4283661327  DateTime_ToLocalTime_m3629183118 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C"  DateTime_t4283661327  DateTime_ToUniversalTime_m691668206 (DateTime_t4283661327 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t4283661327  DateTime_op_Addition_m4061583523 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___d0, TimeSpan_t413522987  ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Equality_m2277436664 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___d10, DateTime_t4283661327  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThan_m3846016869 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___t10, DateTime_t4283661327  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThanOrEqual_m717787228 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___t10, DateTime_t4283661327  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Inequality_m3446449971 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___d10, DateTime_t4283661327  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_LessThan_m35073816 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___t10, DateTime_t4283661327  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_LessThanOrEqual_m354447689 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___t10, DateTime_t4283661327  ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
extern "C"  TimeSpan_t413522987  DateTime_op_Subtraction_m3612355463 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___d10, DateTime_t4283661327  ___d21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t4283661327  DateTime_op_Subtraction_m3609021319 (Il2CppObject * __this /* static, unused */, DateTime_t4283661327  ___d0, TimeSpan_t413522987  ___t1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
