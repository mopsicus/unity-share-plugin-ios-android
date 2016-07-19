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

// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t1354014707;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t153068654;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.ARC4Managed::.ctor()
extern "C"  void ARC4Managed__ctor_m340859770 (ARC4Managed_t1354014707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Finalize()
extern "C"  void ARC4Managed_Finalize_m1353226920 (ARC4Managed_t1354014707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Dispose(System.Boolean)
extern "C"  void ARC4Managed_Dispose_m3405830766 (ARC4Managed_t1354014707 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::get_Key()
extern "C"  ByteU5BU5D_t4260760469* ARC4Managed_get_Key_m2464321124 (ARC4Managed_t1354014707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::set_Key(System.Byte[])
extern "C"  void ARC4Managed_set_Key_m1483606703 (ARC4Managed_t1354014707 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.ARC4Managed::get_CanReuseTransform()
extern "C"  bool ARC4Managed_get_CanReuseTransform_m1071201641 (ARC4Managed_t1354014707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * ARC4Managed_CreateEncryptor_m2178579654 (ARC4Managed_t1354014707 * __this, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgvIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * ARC4Managed_CreateDecryptor_m1872851102 (ARC4Managed_t1354014707 * __this, ByteU5BU5D_t4260760469* ___rgbKey0, ByteU5BU5D_t4260760469* ___rgvIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateIV()
extern "C"  void ARC4Managed_GenerateIV_m2349135020 (ARC4Managed_t1354014707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateKey()
extern "C"  void ARC4Managed_GenerateKey_m4106080642 (ARC4Managed_t1354014707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::KeySetup(System.Byte[])
extern "C"  void ARC4Managed_KeySetup_m705764065 (ARC4Managed_t1354014707 * __this, ByteU5BU5D_t4260760469* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C"  void ARC4Managed_CheckInput_m3884405629 (ARC4Managed_t1354014707 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ARC4Managed_TransformBlock_m961675998 (ARC4Managed_t1354014707 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4260760469* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ARC4Managed_InternalTransformBlock_m158418811 (ARC4Managed_t1354014707 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4260760469* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* ARC4Managed_TransformFinalBlock_m1879343064 (ARC4Managed_t1354014707 * __this, ByteU5BU5D_t4260760469* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
