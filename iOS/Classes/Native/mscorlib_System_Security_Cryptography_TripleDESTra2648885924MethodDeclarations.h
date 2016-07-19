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

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t2648885924;
// System.Security.Cryptography.TripleDES
struct TripleDES_t3018929210;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_TripleDES3018929210.h"

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void TripleDESTransform__ctor_m3679252923 (TripleDESTransform_t2648885924 * __this, TripleDES_t3018929210 * ___algo0, bool ___encryption1, ByteU5BU5D_t4260760469* ___key2, ByteU5BU5D_t4260760469* ___iv3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void TripleDESTransform_ECB_m1823441441 (TripleDESTransform_t2648885924 * __this, ByteU5BU5D_t4260760469* ___input0, ByteU5BU5D_t4260760469* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
extern "C"  ByteU5BU5D_t4260760469* TripleDESTransform_GetStrongKey_m101650019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
