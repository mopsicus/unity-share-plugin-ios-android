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

// Mono.Security.PKCS7/SignedData
struct SignedData_t3980768940;
// Mono.Security.ASN1
struct ASN1_t3752917377;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795357;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3081670593;
// System.String
struct String_t;
// Mono.Security.PKCS7/SignerInfo
struct SignerInfo_t3993859262;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN13752917377.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Security.PKCS7/SignedData::.ctor(Mono.Security.ASN1)
extern "C"  void SignedData__ctor_m3045467662 (SignedData_t3980768940 * __this, ASN1_t3752917377 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.PKCS7/SignedData::get_Certificates()
extern "C"  X509CertificateCollection_t4135795357 * SignedData_get_Certificates_m2588762020 (SignedData_t3980768940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/SignedData::get_ContentInfo()
extern "C"  ContentInfo_t3081670593 * SignedData_get_ContentInfo_m1754582864 (SignedData_t3980768940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/SignedData::set_HashName(System.String)
extern "C"  void SignedData_set_HashName_m70996302 (SignedData_t3980768940 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/SignerInfo Mono.Security.PKCS7/SignedData::get_SignerInfo()
extern "C"  SignerInfo_t3993859262 * SignedData_get_SignerInfo_m440356364 (SignedData_t3980768940 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/SignedData::OidToName(System.String)
extern "C"  String_t* SignedData_OidToName_m1635943665 (SignedData_t3980768940 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
