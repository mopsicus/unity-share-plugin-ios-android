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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct TlsServerFinished_t3787353090;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsServerFinished__ctor_m3574461054 (TlsServerFinished_t3787353090 * __this, Context_t658806145 * ___context0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern "C"  void TlsServerFinished__cctor_m1271550057 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern "C"  void TlsServerFinished_Update_m3480508361 (TlsServerFinished_t3787353090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern "C"  void TlsServerFinished_ProcessAsSsl3_m887802922 (TlsServerFinished_t3787353090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern "C"  void TlsServerFinished_ProcessAsTls1_m910174041 (TlsServerFinished_t3787353090 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
