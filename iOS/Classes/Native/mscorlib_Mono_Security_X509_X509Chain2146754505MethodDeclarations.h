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
struct X509Chain_t2146754505;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795357;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369439;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_X509_X509CertificateCollect4135795357.h"
#include "mscorlib_Mono_Security_X509_X509Certificate1623369439.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m1780268188 (X509Chain_t2146754505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C"  X509CertificateCollection_t4135795357 * X509Chain_get_TrustAnchors_m1552322552 (X509Chain_t2146754505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::LoadCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509Chain_LoadCertificates_m2374849536 (X509Chain_t2146754505 * __this, X509CertificateCollection_t4135795357 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_Build_m1896692026 (X509Chain_t2146754505 * __this, X509Certificate_t1623369439 * ___leaf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::Reset()
extern "C"  void X509Chain_Reset_m3721668425 (X509Chain_t2146754505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsValid_m1157319678 (X509Chain_t2146754505 * __this, X509Certificate_t1623369439 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t1623369439 * X509Chain_FindCertificateParent_m3865657783 (X509Chain_t2146754505 * __this, X509Certificate_t1623369439 * ___child0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t1623369439 * X509Chain_FindCertificateRoot_m1625488367 (X509Chain_t2146754505 * __this, X509Certificate_t1623369439 * ___potentialRoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsTrusted_m2627504185 (X509Chain_t2146754505 * __this, X509Certificate_t1623369439 * ___potentialTrusted0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsParent_m179871016 (X509Chain_t2146754505 * __this, X509Certificate_t1623369439 * ___child0, X509Certificate_t1623369439 * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
