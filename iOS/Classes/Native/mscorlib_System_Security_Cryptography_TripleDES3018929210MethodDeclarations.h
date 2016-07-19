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

// System.Security.Cryptography.TripleDES
struct TripleDES_t3018929210;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Security.Cryptography.TripleDES::.ctor()
extern "C"  void TripleDES__ctor_m394410001 (TripleDES_t3018929210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDES::get_Key()
extern "C"  ByteU5BU5D_t4260760469* TripleDES_get_Key_m3541813947 (TripleDES_t3018929210 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDES::set_Key(System.Byte[])
extern "C"  void TripleDES_set_Key_m1852525880 (TripleDES_t3018929210 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.TripleDES::IsWeakKey(System.Byte[])
extern "C"  bool TripleDES_IsWeakKey_m2750070815 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___rgbKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create()
extern "C"  TripleDES_t3018929210 * TripleDES_Create_m1830328057 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create(System.String)
extern "C"  TripleDES_t3018929210 * TripleDES_Create_m354804905 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
