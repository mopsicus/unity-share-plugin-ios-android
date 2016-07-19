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

// System.Object
struct Il2CppObject;
// System.ConsoleKeyInfo
struct ConsoleKeyInfo_t265972618;
struct ConsoleKeyInfo_t265972618_marshaled_pinvoke;
struct ConsoleKeyInfo_t265972618_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ConsoleKeyInfo265972618.h"
#include "mscorlib_System_ConsoleKey2761899580.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ConsoleKeyInfo__ctor_m3416959802 (ConsoleKeyInfo_t265972618 * __this, Il2CppChar ___keyChar0, int32_t ___key1, bool ___shift2, bool ___alt3, bool ___control4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::.cctor()
extern "C"  void ConsoleKeyInfo__cctor_m2679301294 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::SetModifiers(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ConsoleKeyInfo_SetModifiers_m614469974 (ConsoleKeyInfo_t265972618 * __this, bool ___shift0, bool ___alt1, bool ___control2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ConsoleKey System.ConsoleKeyInfo::get_Key()
extern "C"  int32_t ConsoleKeyInfo_get_Key_m1981446207 (ConsoleKeyInfo_t265972618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.ConsoleKeyInfo::get_KeyChar()
extern "C"  Il2CppChar ConsoleKeyInfo_get_KeyChar_m2767678951 (ConsoleKeyInfo_t265972618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleKeyInfo::Equals(System.Object)
extern "C"  bool ConsoleKeyInfo_Equals_m778301074 (ConsoleKeyInfo_t265972618 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ConsoleKeyInfo::Equals(System.ConsoleKeyInfo)
extern "C"  bool ConsoleKeyInfo_Equals_m3931220571 (ConsoleKeyInfo_t265972618 * __this, ConsoleKeyInfo_t265972618  ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ConsoleKeyInfo::GetHashCode()
extern "C"  int32_t ConsoleKeyInfo_GetHashCode_m796590698 (ConsoleKeyInfo_t265972618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ConsoleKeyInfo_t265972618;
struct ConsoleKeyInfo_t265972618_marshaled_pinvoke;

extern "C" void ConsoleKeyInfo_t265972618_marshal_pinvoke(const ConsoleKeyInfo_t265972618& unmarshaled, ConsoleKeyInfo_t265972618_marshaled_pinvoke& marshaled);
extern "C" void ConsoleKeyInfo_t265972618_marshal_pinvoke_back(const ConsoleKeyInfo_t265972618_marshaled_pinvoke& marshaled, ConsoleKeyInfo_t265972618& unmarshaled);
extern "C" void ConsoleKeyInfo_t265972618_marshal_pinvoke_cleanup(ConsoleKeyInfo_t265972618_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ConsoleKeyInfo_t265972618;
struct ConsoleKeyInfo_t265972618_marshaled_com;

extern "C" void ConsoleKeyInfo_t265972618_marshal_com(const ConsoleKeyInfo_t265972618& unmarshaled, ConsoleKeyInfo_t265972618_marshaled_com& marshaled);
extern "C" void ConsoleKeyInfo_t265972618_marshal_com_back(const ConsoleKeyInfo_t265972618_marshaled_com& marshaled, ConsoleKeyInfo_t265972618& unmarshaled);
extern "C" void ConsoleKeyInfo_t265972618_marshal_com_cleanup(ConsoleKeyInfo_t265972618_marshaled_com& marshaled);
