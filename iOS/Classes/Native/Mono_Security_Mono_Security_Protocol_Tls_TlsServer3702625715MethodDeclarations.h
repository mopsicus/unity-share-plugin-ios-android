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

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t3702625715;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t2297606589;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo4135795357.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter3219890992.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
extern "C"  void TlsServerSettings__ctor_m1004039293 (TlsServerSettings_t3702625715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
extern "C"  bool TlsServerSettings_get_ServerKeyExchange_m635755587 (TlsServerSettings_t3702625715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
extern "C"  void TlsServerSettings_set_ServerKeyExchange_m1327105940 (TlsServerSettings_t3702625715 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
extern "C"  X509CertificateCollection_t4135795358 * TlsServerSettings_get_Certificates_m2110079385 (TlsServerSettings_t3702625715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void TlsServerSettings_set_Certificates_m3296554870 (TlsServerSettings_t3702625715 * __this, X509CertificateCollection_t4135795358 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
extern "C"  RSA_t2466814310 * TlsServerSettings_get_CertificateRSA_m2184825443 (TlsServerSettings_t3702625715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
extern "C"  RSAParameters_t3219890992  TlsServerSettings_get_RsaParameters_m2649016060 (TlsServerSettings_t3702625715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void TlsServerSettings_set_RsaParameters_m1298390193 (TlsServerSettings_t3702625715 * __this, RSAParameters_t3219890992  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
extern "C"  void TlsServerSettings_set_SignedParams_m1629591715 (TlsServerSettings_t3702625715 * __this, ByteU5BU5D_t4260760469* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
extern "C"  bool TlsServerSettings_get_CertificateRequest_m741313462 (TlsServerSettings_t3702625715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
extern "C"  void TlsServerSettings_set_CertificateRequest_m3309749971 (TlsServerSettings_t3702625715 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
extern "C"  void TlsServerSettings_set_CertificateTypes_m2445254267 (TlsServerSettings_t3702625715 * __this, ClientCertificateTypeU5BU5D_t2297606589* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
extern "C"  void TlsServerSettings_set_DistinguisedNames_m3842714172 (TlsServerSettings_t3702625715 * __this, StringU5BU5D_t4054002952* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
extern "C"  void TlsServerSettings_UpdateCertificateRSA_m2131580665 (TlsServerSettings_t3702625715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
