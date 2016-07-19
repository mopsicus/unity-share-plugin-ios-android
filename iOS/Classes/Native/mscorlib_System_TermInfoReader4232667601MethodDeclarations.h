#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.TermInfoReader
struct TermInfoReader_t4232667601;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_TermInfoNumbers1883868038.h"
#include "mscorlib_System_TermInfoStrings2002624446.h"

// System.Void System.TermInfoReader::.ctor(System.String,System.String)
extern "C"  void TermInfoReader__ctor_m1302979654 (TermInfoReader_t4232667601 * __this, String_t* ___term0, String_t* ___filename1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::.ctor(System.String,System.Byte[])
extern "C"  void TermInfoReader__ctor_m3540141325 (TermInfoReader_t4232667601 * __this, String_t* ___term0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadHeader(System.Byte[],System.Int32&)
extern "C"  void TermInfoReader_ReadHeader_m4013801455 (TermInfoReader_t4232667601 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TermInfoReader::ReadNames(System.Byte[],System.Int32&)
extern "C"  void TermInfoReader_ReadNames_m2648058614 (TermInfoReader_t4232667601 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t* ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TermInfoReader::Get(System.TermInfoNumbers)
extern "C"  int32_t TermInfoReader_Get_m2971495351 (TermInfoReader_t4232667601 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::Get(System.TermInfoStrings)
extern "C"  String_t* TermInfoReader_Get_m2499976838 (TermInfoReader_t4232667601 * __this, int32_t ___tstr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.TermInfoStrings)
extern "C"  ByteU5BU5D_t4260760469* TermInfoReader_GetStringBytes_m447772157 (TermInfoReader_t4232667601 * __this, int32_t ___tstr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.TermInfoReader::GetInt16(System.Byte[],System.Int32)
extern "C"  int16_t TermInfoReader_GetInt16_m1978272194 (TermInfoReader_t4232667601 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TermInfoReader::GetString(System.Byte[],System.Int32)
extern "C"  String_t* TermInfoReader_GetString_m3202419502 (TermInfoReader_t4232667601 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.TermInfoReader::GetStringBytes(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4260760469* TermInfoReader_GetStringBytes_m3815155956 (TermInfoReader_t4232667601 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
