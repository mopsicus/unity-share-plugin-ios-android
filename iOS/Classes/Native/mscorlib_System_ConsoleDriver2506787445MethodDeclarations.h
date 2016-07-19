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

// System.IConsoleDriver
struct IConsoleDriver_t127637418;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_ConsoleKeyInfo265972618.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void System.ConsoleDriver::.cctor()
extern "C"  void ConsoleDriver__cctor_m107835675 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateNullConsoleDriver()
extern "C" IL2CPP_NO_INLINE Il2CppObject * ConsoleDriver_CreateNullConsoleDriver_m636297422 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateWindowsConsoleDriver()
extern "C" IL2CPP_NO_INLINE Il2CppObject * ConsoleDriver_CreateWindowsConsoleDriver_m2206983368 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IConsoleDriver System.ConsoleDriver::CreateTermInfoDriver(System.String)
extern "C" IL2CPP_NO_INLINE Il2CppObject * ConsoleDriver_CreateTermInfoDriver_m3249193172 (Il2CppObject * __this /* static, unused */, String_t* ___term0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKeyInfo System.ConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t265972618  ConsoleDriver_ReadKey_m3609437714 (Il2CppObject * __this /* static, unused */, bool ___intercept0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::get_IsConsole()
extern "C"  bool ConsoleDriver_get_IsConsole_m1257434962 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::Isatty(System.IntPtr)
extern "C"  bool ConsoleDriver_Isatty_m1339398398 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ConsoleDriver::InternalKeyAvailable(System.Int32)
extern "C"  int32_t ConsoleDriver_InternalKeyAvailable_m818093286 (Il2CppObject * __this /* static, unused */, int32_t ___ms_timeout0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::TtySetup(System.String,System.String,System.Byte[]&,System.Int32*&)
extern "C"  bool ConsoleDriver_TtySetup_m1308557272 (Il2CppObject * __this /* static, unused */, String_t* ___keypadXmit0, String_t* ___teardown1, ByteU5BU5D_t4260760469** ___control_characters2, int32_t** ___address3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleDriver::SetEcho(System.Boolean)
extern "C"  bool ConsoleDriver_SetEcho_m137134988 (Il2CppObject * __this /* static, unused */, bool ___wantEcho0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
