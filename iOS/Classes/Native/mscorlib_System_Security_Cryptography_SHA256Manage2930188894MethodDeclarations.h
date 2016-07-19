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

// System.Security.Cryptography.SHA256Managed
struct SHA256Managed_t2930188894;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA256Managed::.ctor()
extern "C"  void SHA256Managed__ctor_m1925161709 (SHA256Managed_t2930188894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA256Managed_HashCore_m1891998501 (SHA256Managed_t2930188894 * __this, ByteU5BU5D_t4260760469* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA256Managed::HashFinal()
extern "C"  ByteU5BU5D_t4260760469* SHA256Managed_HashFinal_m446039593 (SHA256Managed_t2930188894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::Initialize()
extern "C"  void SHA256Managed_Initialize_m2794356679 (SHA256Managed_t2930188894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessBlock(System.Byte[],System.Int32)
extern "C"  void SHA256Managed_ProcessBlock_m4117131779 (SHA256Managed_t2930188894 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA256Managed_ProcessFinalBlock_m2991256248 (SHA256Managed_t2930188894 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA256Managed::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C"  void SHA256Managed_AddLength_m4004035979 (SHA256Managed_t2930188894 * __this, uint64_t ___length0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
