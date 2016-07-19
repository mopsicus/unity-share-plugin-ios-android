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

// System.Diagnostics.StackFrame
struct StackFrame_t1034942277;
// System.Reflection.MethodBase
struct MethodBase_t318515428;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodBase318515428.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Diagnostics.StackFrame::.ctor()
extern "C"  void StackFrame__ctor_m3629772014 (StackFrame_t1034942277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
extern "C"  void StackFrame__ctor_m926982238 (StackFrame_t1034942277 * __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
extern "C"  bool StackFrame_get_frame_info_m2232383397 (Il2CppObject * __this /* static, unused */, int32_t ___skip0, bool ___needFileInfo1, MethodBase_t318515428 ** ___method2, int32_t* ___iloffset3, int32_t* ___native_offset4, String_t** ___file5, int32_t* ___line6, int32_t* ___column7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
extern "C"  int32_t StackFrame_GetFileLineNumber_m3834796759 (StackFrame_t1034942277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetFileName()
extern "C"  String_t* StackFrame_GetFileName_m3640041868 (StackFrame_t1034942277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
extern "C"  String_t* StackFrame_GetSecureFileName_m2430240099 (StackFrame_t1034942277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
extern "C"  int32_t StackFrame_GetILOffset_m2885157332 (StackFrame_t1034942277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
extern "C"  MethodBase_t318515428 * StackFrame_GetMethod_m1989802200 (StackFrame_t1034942277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
extern "C"  int32_t StackFrame_GetNativeOffset_m2753641064 (StackFrame_t1034942277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
extern "C"  String_t* StackFrame_GetInternalMethodName_m623093646 (StackFrame_t1034942277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::ToString()
extern "C"  String_t* StackFrame_ToString_m2085846783 (StackFrame_t1034942277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
