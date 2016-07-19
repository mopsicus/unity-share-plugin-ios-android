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

// System.IO.CStreamReader
struct CStreamReader_t3496556516;
// System.IO.Stream
struct Stream_t1561764144;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.Void System.IO.CStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void CStreamReader__ctor_m725065443 (CStreamReader_t3496556516 * __this, Stream_t1561764144 * ___stream0, Encoding_t2012439129 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Peek()
extern "C"  int32_t CStreamReader_Peek_m2109289740 (CStreamReader_t3496556516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read()
extern "C"  int32_t CStreamReader_Read_m2166422151 (CStreamReader_t3496556516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.CStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t CStreamReader_Read_m4060504052 (CStreamReader_t3496556516 * __this, CharU5BU5D_t3324145743* ___dest0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadLine()
extern "C"  String_t* CStreamReader_ReadLine_m1098008948 (CStreamReader_t3496556516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.CStreamReader::ReadToEnd()
extern "C"  String_t* CStreamReader_ReadToEnd_m2617837506 (CStreamReader_t3496556516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
