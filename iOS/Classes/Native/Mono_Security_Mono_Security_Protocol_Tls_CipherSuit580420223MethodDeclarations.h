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

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t580420223;
// System.String
struct String_t;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t153068654;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1039941647;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlg1887515856.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor4118445357.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeA3271961912.h"
#include "mscorlib_System_Security_Cryptography_CipherMode2662187258.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C"  void CipherSuite__ctor_m658209606 (CipherSuite_t580420223 * __this, int16_t ___code0, String_t* ___name1, int32_t ___cipherAlgorithmType2, int32_t ___hashAlgorithmType3, int32_t ___exchangeAlgorithmType4, bool ___exportable5, bool ___blockMode6, uint8_t ___keyMaterialSize7, uint8_t ___expandedKeyMaterialSize8, int16_t ___effectiveKeyBits9, uint8_t ___ivSize10, uint8_t ___blockSize11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::.cctor()
extern "C"  void CipherSuite__cctor_m2830170332 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_EncryptionCipher()
extern "C"  Il2CppObject * CipherSuite_get_EncryptionCipher_m3951497384 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::get_DecryptionCipher()
extern "C"  Il2CppObject * CipherSuite_get_DecryptionCipher_m1358717056 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ClientHMAC()
extern "C"  KeyedHashAlgorithm_t1039941647 * CipherSuite_get_ClientHMAC_m3918386475 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::get_ServerHMAC()
extern "C"  KeyedHashAlgorithm_t1039941647 * CipherSuite_get_ServerHMAC_m2966460067 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_CipherAlgorithmType()
extern "C"  int32_t CipherSuite_get_CipherAlgorithmType_m4289432549 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmName()
extern "C"  String_t* CipherSuite_get_HashAlgorithmName_m1304664079 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_HashAlgorithmType()
extern "C"  int32_t CipherSuite_get_HashAlgorithmType_m687406047 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_HashSize()
extern "C"  int32_t CipherSuite_get_HashSize_m2484224531 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::get_ExchangeAlgorithmType()
extern "C"  int32_t CipherSuite_get_ExchangeAlgorithmType_m987153461 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::get_CipherMode()
extern "C"  int32_t CipherSuite_get_CipherMode_m2092929468 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_Code()
extern "C"  int16_t CipherSuite_get_Code_m3312642635 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.CipherSuite::get_Name()
extern "C"  String_t* CipherSuite_get_Name_m1995865258 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::get_IsExportable()
extern "C"  bool CipherSuite_get_IsExportable_m534474210 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_KeyMaterialSize()
extern "C"  uint8_t CipherSuite_get_KeyMaterialSize_m166819169 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::get_KeyBlockSize()
extern "C"  int32_t CipherSuite_get_KeyBlockSize_m3692693747 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_ExpandedKeyMaterialSize()
extern "C"  uint8_t CipherSuite_get_ExpandedKeyMaterialSize_m2373093544 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::get_EffectiveKeyBits()
extern "C"  int16_t CipherSuite_get_EffectiveKeyBits_m1093264636 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.CipherSuite::get_IvSize()
extern "C"  uint8_t CipherSuite_get_IvSize_m633403350 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::get_Context()
extern "C"  Context_t658806145 * CipherSuite_get_Context_m3949655367 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::set_Context(Mono.Security.Protocol.Tls.Context)
extern "C"  void CipherSuite_set_Context_m2407825304 (CipherSuite_t580420223 * __this, Context_t658806145 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.Int16)
extern "C"  void CipherSuite_Write_m920521461 (CipherSuite_t580420223 * __this, ByteU5BU5D_t4260760469* ___array0, int32_t ___offset1, int16_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::Write(System.Byte[],System.Int32,System.UInt64)
extern "C"  void CipherSuite_Write_m3763647761 (CipherSuite_t580420223 * __this, ByteU5BU5D_t4260760469* ___array0, int32_t ___offset1, uint64_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::InitializeCipher()
extern "C"  void CipherSuite_InitializeCipher_m1046105646 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EncryptRecord(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* CipherSuite_EncryptRecord_m1686609905 (CipherSuite_t580420223 * __this, ByteU5BU5D_t4260760469* ___fragment0, ByteU5BU5D_t4260760469* ___mac1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::DecryptRecord(System.Byte[],System.Byte[]&,System.Byte[]&)
extern "C"  void CipherSuite_DecryptRecord_m3553271804 (CipherSuite_t580420223 * __this, ByteU5BU5D_t4260760469* ___fragment0, ByteU5BU5D_t4260760469** ___dcrFragment1, ByteU5BU5D_t4260760469** ___dcrMAC2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::CreatePremasterSecret()
extern "C"  ByteU5BU5D_t4260760469* CipherSuite_CreatePremasterSecret_m4245710238 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::PRF(System.Byte[],System.String,System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4260760469* CipherSuite_PRF_m4080641496 (CipherSuite_t580420223 * __this, ByteU5BU5D_t4260760469* ___secret0, String_t* ___label1, ByteU5BU5D_t4260760469* ___data2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::Expand(System.String,System.Byte[],System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4260760469* CipherSuite_Expand_m4170799558 (CipherSuite_t580420223 * __this, String_t* ___hashName0, ByteU5BU5D_t4260760469* ___secret1, ByteU5BU5D_t4260760469* ___seed2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createEncryptionCipher()
extern "C"  void CipherSuite_createEncryptionCipher_m347042717 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuite::createDecryptionCipher()
extern "C"  void CipherSuite_createDecryptionCipher_m2049229685 (CipherSuite_t580420223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
