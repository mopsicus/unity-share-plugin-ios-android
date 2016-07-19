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

// Mono.Security.X509.X509Chain
struct X509Chain_t2146754506;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369440;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo4135795357.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFl3401646578.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate1623369439.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m4239706530 (X509Chain_t2146754506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509Chain__ctor_m2818311608 (X509Chain_t2146754506 * __this, X509CertificateCollection_t4135795358 * ___chain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
extern "C"  int32_t X509Chain_get_Status_m4000836433 (X509Chain_t2146754506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C"  X509CertificateCollection_t4135795358 * X509Chain_get_TrustAnchors_m885238782 (X509Chain_t2146754506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_Build_m2539190260 (X509Chain_t2146754506 * __this, X509Certificate_t1623369440 * ___leaf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsValid_m122831928 (X509Chain_t2146754506 * __this, X509Certificate_t1623369440 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t1623369440 * X509Chain_FindCertificateParent_m3659377521 (X509Chain_t2146754506 * __this, X509Certificate_t1623369440 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t1623369440 * X509Chain_FindCertificateRoot_m3426389033 (X509Chain_t2146754506 * __this, X509Certificate_t1623369440 * ___potentialRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsTrusted_m622221811 (X509Chain_t2146754506 * __this, X509Certificate_t1623369440 * ___potentialTrusted0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsParent_m3808002146 (X509Chain_t2146754506 * __this, X509Certificate_t1623369440 * ___child0, X509Certificate_t1623369440 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
