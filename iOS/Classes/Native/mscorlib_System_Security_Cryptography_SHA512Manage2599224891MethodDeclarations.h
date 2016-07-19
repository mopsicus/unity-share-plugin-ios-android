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

// System.Security.Cryptography.SHA512Managed
struct SHA512Managed_t2599224891;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA512Managed::.ctor()
extern "C"  void SHA512Managed__ctor_m2261764016 (SHA512Managed_t2599224891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize(System.Boolean)
extern "C"  void SHA512Managed_Initialize_m3491115867 (SHA512Managed_t2599224891 * __this, bool ___reuse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize()
extern "C"  void SHA512Managed_Initialize_m1471536356 (SHA512Managed_t2599224891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void SHA512Managed_HashCore_m1161829416 (SHA512Managed_t2599224891 * __this, ByteU5BU5D_t4260760469* ___rgb0, int32_t ___ibStart1, int32_t ___cbSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA512Managed::HashFinal()
extern "C"  ByteU5BU5D_t4260760469* SHA512Managed_HashFinal_m2897219948 (SHA512Managed_t2599224891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::update(System.Byte)
extern "C"  void SHA512Managed_update_m2004423182 (SHA512Managed_t2599224891 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processWord(System.Byte[],System.Int32)
extern "C"  void SHA512Managed_processWord_m2245859317 (SHA512Managed_t2599224891 * __this, ByteU5BU5D_t4260760469* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
extern "C"  void SHA512Managed_unpackWord_m3783776233 (SHA512Managed_t2599224891 * __this, uint64_t ___word0, ByteU5BU5D_t4260760469* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::adjustByteCounts()
extern "C"  void SHA512Managed_adjustByteCounts_m2278926735 (SHA512Managed_t2599224891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processLength(System.UInt64,System.UInt64)
extern "C"  void SHA512Managed_processLength_m3040052269 (SHA512Managed_t2599224891 * __this, uint64_t ___lowW0, uint64_t ___hiW1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processBlock()
extern "C"  void SHA512Managed_processBlock_m4228260946 (SHA512Managed_t2599224891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::rotateRight(System.UInt64,System.Int32)
extern "C"  uint64_t SHA512Managed_rotateRight_m2879233295 (SHA512Managed_t2599224891 * __this, uint64_t ___x0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Ch(System.UInt64,System.UInt64,System.UInt64)
extern "C"  uint64_t SHA512Managed_Ch_m311063408 (SHA512Managed_t2599224891 * __this, uint64_t ___x0, uint64_t ___y1, uint64_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Maj(System.UInt64,System.UInt64,System.UInt64)
extern "C"  uint64_t SHA512Managed_Maj_m3317611421 (SHA512Managed_t2599224891 * __this, uint64_t ___x0, uint64_t ___y1, uint64_t ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum0(System.UInt64)
extern "C"  uint64_t SHA512Managed_Sum0_m1128336038 (SHA512Managed_t2599224891 * __this, uint64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum1(System.UInt64)
extern "C"  uint64_t SHA512Managed_Sum1_m617801861 (SHA512Managed_t2599224891 * __this, uint64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma0(System.UInt64)
extern "C"  uint64_t SHA512Managed_Sigma0_m945953344 (SHA512Managed_t2599224891 * __this, uint64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma1(System.UInt64)
extern "C"  uint64_t SHA512Managed_Sigma1_m435419167 (SHA512Managed_t2599224891 * __this, uint64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
