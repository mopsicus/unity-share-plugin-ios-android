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

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_t1836038224;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369439;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Mono.Security.PKCS7/SignedData
struct SignedData_t3980768940;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t532578791;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t3993859262;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_Mono_Security_X509_X509Certificate1623369439.h"
#include "mscorlib_Mono_Security_PKCS7_SignedData3980768940.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm532578791.h"
#include "mscorlib_Mono_Security_PKCS7_SignerInfo3993859262.h"

// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor()
extern "C"  void AuthenticodeDeformatter__ctor_m2813546644 (AuthenticodeDeformatter_t1836038224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor(System.String)
extern "C"  void AuthenticodeDeformatter__ctor_m1825103598 (AuthenticodeDeformatter_t1836038224 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::set_FileName(System.String)
extern "C"  void AuthenticodeDeformatter_set_FileName_m995910638 (AuthenticodeDeformatter_t1836038224 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::get_SigningCertificate()
extern "C"  X509Certificate_t1623369439 * AuthenticodeDeformatter_get_SigningCertificate_m1080501994 (AuthenticodeDeformatter_t1836038224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CheckSignature(System.String)
extern "C"  bool AuthenticodeDeformatter_CheckSignature_m273272896 (AuthenticodeDeformatter_t1836038224 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::CompareIssuerSerial(System.String,System.Byte[],Mono.Security.X509.X509Certificate)
extern "C"  bool AuthenticodeDeformatter_CompareIssuerSerial_m1845840631 (AuthenticodeDeformatter_t1836038224 * __this, String_t* ___issuer0, ByteU5BU5D_t4260760469* ___serial1, X509Certificate_t1623369439 * ___x5092, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifySignature(Mono.Security.PKCS7/SignedData,System.Byte[],System.Security.Cryptography.HashAlgorithm)
extern "C"  bool AuthenticodeDeformatter_VerifySignature_m1923757650 (AuthenticodeDeformatter_t1836038224 * __this, SignedData_t3980768940 * ___sd0, ByteU5BU5D_t4260760469* ___calculatedMessageDigest1, HashAlgorithm_t532578791 * ___ha2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::VerifyCounterSignature(Mono.Security.PKCS7/SignerInfo,System.Byte[])
extern "C"  bool AuthenticodeDeformatter_VerifyCounterSignature_m3609487276 (AuthenticodeDeformatter_t1836038224 * __this, SignerInfo_t3993859262 * ___cs0, ByteU5BU5D_t4260760469* ___signature1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::Reset()
extern "C"  void AuthenticodeDeformatter_Reset_m459979585 (AuthenticodeDeformatter_t1836038224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
