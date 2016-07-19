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

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t3104883481;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA2466814310.h"

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
extern "C"  void MD5SHA1__ctor_m2374690196 (MD5SHA1_t3104883481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
extern "C"  void MD5SHA1_Initialize_m1333120384 (MD5SHA1_t3104883481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
extern "C"  ByteU5BU5D_t4260760469* MD5SHA1_HashFinal_m1928907216 (MD5SHA1_t3104883481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void MD5SHA1_HashCore_m1242406156 (MD5SHA1_t3104883481 * __this, ByteU5BU5D_t4260760469* ___array0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t4260760469* MD5SHA1_CreateSignature_m1164435223 (MD5SHA1_t3104883481 * __this, RSA_t2466814310 * ___rsa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  bool MD5SHA1_VerifySignature_m3462577241 (MD5SHA1_t3104883481 * __this, RSA_t2466814310 * ___rsa0, ByteU5BU5D_t4260760469* ___rgbSignature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
