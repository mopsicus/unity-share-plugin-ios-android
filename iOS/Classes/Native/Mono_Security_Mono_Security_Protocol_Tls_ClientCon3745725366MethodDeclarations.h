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

// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3745725366;
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t2101301545;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClient2101301545.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP1707327472.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Security_Cryptography_X509Certificat3220522733.h"

// System.Void Mono.Security.Protocol.Tls.ClientContext::.ctor(Mono.Security.Protocol.Tls.SslClientStream,Mono.Security.Protocol.Tls.SecurityProtocolType,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void ClientContext__ctor_m483520879 (ClientContext_t3745725366 * __this, SslClientStream_t2101301545 * ___stream0, int32_t ___securityProtocolType1, String_t* ___targetHost2, X509CertificateCollection_t3220522733 * ___clientCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::get_SslStream()
extern "C"  SslClientStream_t2101301545 * ClientContext_get_SslStream_m714880213 (ClientContext_t3745725366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.ClientContext::get_ClientHelloProtocol()
extern "C"  int16_t ClientContext_get_ClientHelloProtocol_m3083636780 (ClientContext_t3745725366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientContext::set_ClientHelloProtocol(System.Int16)
extern "C"  void ClientContext_set_ClientHelloProtocol_m31446181 (ClientContext_t3745725366 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientContext::Clear()
extern "C"  void ClientContext_Clear_m2709420165 (ClientContext_t3745725366 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
