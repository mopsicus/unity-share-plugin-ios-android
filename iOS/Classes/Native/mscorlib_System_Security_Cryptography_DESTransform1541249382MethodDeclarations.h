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

// System.Security.Cryptography.DESTransform
struct DESTransform_t1541249382;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3097904804;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.UInt32[]
struct UInt32U5BU5D_t3230734560;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlg3097904804.h"

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void DESTransform__ctor_m3930717539 (DESTransform_t1541249382 * __this, SymmetricAlgorithm_t3097904804 * ___symmAlgo0, bool ___encryption1, ByteU5BU5D_t4260760469* ___key2, ByteU5BU5D_t4260760469* ___iv3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C"  void DESTransform__cctor_m3334109542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C"  uint32_t DESTransform_CipherFunct_m2387646882 (DESTransform_t1541249382 * __this, uint32_t ___r0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C"  void DESTransform_Permutation_m2822081834 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___input0, ByteU5BU5D_t4260760469* ___output1, UInt32U5BU5D_t3230734560* ___permTab2, bool ___preSwap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C"  void DESTransform_BSwap_m93014511 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___byteBuff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C"  void DESTransform_SetKey_m2023182447 (DESTransform_t1541249382 * __this, ByteU5BU5D_t4260760469* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C"  void DESTransform_ProcessBlock_m2076172049 (DESTransform_t1541249382 * __this, ByteU5BU5D_t4260760469* ___input0, ByteU5BU5D_t4260760469* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void DESTransform_ECB_m1050005411 (DESTransform_t1541249382 * __this, ByteU5BU5D_t4260760469* ___input0, ByteU5BU5D_t4260760469* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C"  ByteU5BU5D_t4260760469* DESTransform_GetStrongKey_m1123999973 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
