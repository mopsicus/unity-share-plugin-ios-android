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

// System.IO.TextReader
struct TextReader_t2148718976;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader2148718976.h"

// System.Void System.IO.TextReader::.ctor()
extern "C"  void TextReader__ctor_m3562505977 (TextReader_t2148718976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
extern "C"  void TextReader__cctor_m2581406676 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
extern "C"  void TextReader_Dispose_m377592054 (TextReader_t2148718976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C"  void TextReader_Dispose_m3273025517 (TextReader_t2148718976 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
extern "C"  int32_t TextReader_Peek_m2382758882 (TextReader_t2148718976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
extern "C"  int32_t TextReader_Read_m2439891293 (TextReader_t2148718976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t TextReader_Read_m1326787678 (TextReader_t2148718976 * __this, CharU5BU5D_t3324145743* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
extern "C"  String_t* TextReader_ReadLine_m4100402744 (TextReader_t2148718976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
extern "C"  String_t* TextReader_ReadToEnd_m1202764670 (TextReader_t2148718976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern "C"  TextReader_t2148718976 * TextReader_Synchronized_m4205261080 (Il2CppObject * __this /* static, unused */, TextReader_t2148718976 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
