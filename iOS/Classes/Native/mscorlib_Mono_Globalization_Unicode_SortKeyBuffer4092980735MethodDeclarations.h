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

// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t4092980735;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Globalization.SortKey
struct SortKey_t3130563595;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CompareOptions2860691451.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Globalization.Unicode.SortKeyBuffer::.ctor(System.Int32)
extern "C"  void SortKeyBuffer__ctor_m3429486059 (SortKeyBuffer_t4092980735 * __this, int32_t ___lcid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::Reset()
extern "C"  void SortKeyBuffer_Reset_m3243252295 (SortKeyBuffer_t4092980735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::Initialize(System.Globalization.CompareOptions,System.Int32,System.String,System.Boolean)
extern "C"  void SortKeyBuffer_Initialize_m100616957 (SortKeyBuffer_t4092980735 * __this, int32_t ___options0, int32_t ___lcid1, String_t* ___s2, bool ___frenchSort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendCJKExtension(System.Byte,System.Byte)
extern "C"  void SortKeyBuffer_AppendCJKExtension_m2180112849 (SortKeyBuffer_t4092980735 * __this, uint8_t ___lv1msb0, uint8_t ___lv1lsb1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendKana(System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean,System.Byte,System.Boolean,System.Boolean)
extern "C"  void SortKeyBuffer_AppendKana_m1941661717 (SortKeyBuffer_t4092980735 * __this, uint8_t ___category0, uint8_t ___lv11, uint8_t ___lv22, uint8_t ___lv33, bool ___isSmallKana4, uint8_t ___markType5, bool ___isKatakana6, bool ___isHalfWidth7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendNormal(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void SortKeyBuffer_AppendNormal_m789725103 (SortKeyBuffer_t4092980735 * __this, uint8_t ___category0, uint8_t ___lv11, uint8_t ___lv22, uint8_t ___lv33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendLevel5(System.Byte,System.Byte)
extern "C"  void SortKeyBuffer_AppendLevel5_m3934449371 (SortKeyBuffer_t4092980735 * __this, uint8_t ___category0, uint8_t ___lv11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendBufferPrimitive(System.Byte,System.Byte[]&,System.Int32&)
extern "C"  void SortKeyBuffer_AppendBufferPrimitive_m2920762936 (SortKeyBuffer_t4092980735 * __this, uint8_t ___value0, ByteU5BU5D_t4260760469** ___buf1, int32_t* ___bidx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SortKeyBuffer::GetResultAndReset()
extern "C"  SortKey_t3130563595 * SortKeyBuffer_GetResultAndReset_m4049148397 (SortKeyBuffer_t4092980735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::GetOptimizedLength(System.Byte[],System.Int32,System.Byte)
extern "C"  int32_t SortKeyBuffer_GetOptimizedLength_m4238719184 (SortKeyBuffer_t4092980735 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___len1, uint8_t ___defaultValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SortKeyBuffer::GetResult()
extern "C"  SortKey_t3130563595 * SortKeyBuffer_GetResult_m3192512021 (SortKeyBuffer_t4092980735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
