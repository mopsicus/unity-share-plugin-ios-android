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

// System.IO.TextWriter
struct TextWriter_t2304124208;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.IO.TextWriter::.ctor()
extern "C"  void TextWriter__ctor_m4246102345 (TextWriter_t2304124208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
extern "C"  void TextWriter__cctor_m2298057604 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
extern "C"  void TextWriter_Close_m1661994591 (TextWriter_t2304124208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C"  void TextWriter_Dispose_m2348196413 (TextWriter_t2304124208 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
extern "C"  void TextWriter_Dispose_m183705414 (TextWriter_t2304124208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
extern "C"  void TextWriter_Flush_m35082347 (TextWriter_t2304124208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern "C"  TextWriter_t2304124208 * TextWriter_Synchronized_m2249444629 (Il2CppObject * __this /* static, unused */, TextWriter_t2304124208 * ___writer0, bool ___neverClose1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C"  void TextWriter_Write_m3406376087 (TextWriter_t2304124208 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C"  void TextWriter_Write_m762391029 (TextWriter_t2304124208 * __this, CharU5BU5D_t3324145743* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
extern "C"  void TextWriter_Write_m2436548156 (TextWriter_t2304124208 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void TextWriter_Write_m212256533 (TextWriter_t2304124208 * __this, CharU5BU5D_t3324145743* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
extern "C"  void TextWriter_WriteLine_m1071433498 (TextWriter_t2304124208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern "C"  void TextWriter_WriteLine_m2487661096 (TextWriter_t2304124208 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
