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

// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t2185673872;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ConsoleKeyInfo265972618.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Handles1104890401.h"
#include "mscorlib_System_ConsoleScreenBufferInfo1990999783.h"
#include "mscorlib_System_InputRecord3889994513.h"

// System.Void System.WindowsConsoleDriver::.ctor()
extern "C"  void WindowsConsoleDriver__ctor_m3567726553 (WindowsConsoleDriver_t2185673872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t265972618  WindowsConsoleDriver_ReadKey_m1393188309 (WindowsConsoleDriver_t2185673872 * __this, bool ___intercept0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  IntPtr_t WindowsConsoleDriver_GetStdHandle_m2710701471 (Il2CppObject * __this /* static, unused */, int32_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m4057528648 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, ConsoleScreenBufferInfo_t1990999783 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m9651400 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, InputRecord_t3889994513 * ___record1, int32_t ___length2, int32_t* ___nread3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
