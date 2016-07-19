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

// System.Text.UnicodeEncoding
struct UnicodeEncoding_t1820170642;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Text.Decoder
struct Decoder_t2225063046;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Text.UnicodeEncoding::.ctor()
extern "C"  void UnicodeEncoding__ctor_m2464846694 (UnicodeEncoding_t1820170642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
extern "C"  void UnicodeEncoding__ctor_m628477824 (UnicodeEncoding_t1820170642 * __this, bool ___bigEndian0, bool ___byteOrderMark1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void UnicodeEncoding__ctor_m1753322493 (UnicodeEncoding_t1820170642 * __this, bool ___bigEndian0, bool ___byteOrderMark1, bool ___throwOnInvalidBytes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetByteCount_m1713744008 (UnicodeEncoding_t1820170642 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.String)
extern "C"  int32_t UnicodeEncoding_GetByteCount_m3953856879 (UnicodeEncoding_t1820170642 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetByteCount_m2364391577 (UnicodeEncoding_t1820170642 * __this, Il2CppChar* ___chars0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytes_m1303521840 (UnicodeEncoding_t1820170642 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytes_m877800521 (UnicodeEncoding_t1820170642 * __this, String_t* ___s0, int32_t ___charIndex1, int32_t ___charCount2, ByteU5BU5D_t4260760469* ___bytes3, int32_t ___byteIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytes_m1942137033 (UnicodeEncoding_t1820170642 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetBytesInternal_m3215369228 (UnicodeEncoding_t1820170642 * __this, Il2CppChar* ___chars0, int32_t ___charCount1, uint8_t* ___bytes2, int32_t ___byteCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetCharCount_m515156452 (UnicodeEncoding_t1820170642 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C"  int32_t UnicodeEncoding_GetChars_m3643772578 (UnicodeEncoding_t1820170642 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___byteIndex1, int32_t ___byteCount2, CharU5BU5D_t3324145743* ___chars3, int32_t ___charIndex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UnicodeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* UnicodeEncoding_GetString_m254667515 (UnicodeEncoding_t1820170642 * __this, ByteU5BU5D_t4260760469* ___bytes0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharsInternal(System.Byte*,System.Int32,System.Char*,System.Int32)
extern "C"  int32_t UnicodeEncoding_GetCharsInternal_m801541210 (UnicodeEncoding_t1820170642 * __this, uint8_t* ___bytes0, int32_t ___byteCount1, Il2CppChar* ___chars2, int32_t ___charCount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxByteCount(System.Int32)
extern "C"  int32_t UnicodeEncoding_GetMaxByteCount_m2171016138 (UnicodeEncoding_t1820170642 * __this, int32_t ___charCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxCharCount(System.Int32)
extern "C"  int32_t UnicodeEncoding_GetMaxCharCount_m2962551484 (UnicodeEncoding_t1820170642 * __this, int32_t ___byteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UnicodeEncoding::GetDecoder()
extern "C"  Decoder_t2225063046 * UnicodeEncoding_GetDecoder_m3461174523 (UnicodeEncoding_t1820170642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UnicodeEncoding::GetPreamble()
extern "C"  ByteU5BU5D_t4260760469* UnicodeEncoding_GetPreamble_m2255522896 (UnicodeEncoding_t1820170642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UnicodeEncoding::Equals(System.Object)
extern "C"  bool UnicodeEncoding_Equals_m258981209 (UnicodeEncoding_t1820170642 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetHashCode()
extern "C"  int32_t UnicodeEncoding_GetHashCode_m2705427633 (UnicodeEncoding_t1820170642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::CopyChars(System.Byte*,System.Byte*,System.Int32,System.Boolean)
extern "C"  void UnicodeEncoding_CopyChars_m137508992 (Il2CppObject * __this /* static, unused */, uint8_t* ___src0, uint8_t* ___dest1, int32_t ___count2, bool ___bigEndian3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
