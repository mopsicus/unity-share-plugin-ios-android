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

// Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
struct AuthorityKeyIdentifierExtension_t253620168;
// Mono.Security.X509.X509Extension
struct X509Extension_t4211806920;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Extension4211806919.h"

// System.Void Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void AuthorityKeyIdentifierExtension__ctor_m273322001 (AuthorityKeyIdentifierExtension_t253620168 * __this, X509Extension_t4211806920 * ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::Decode()
extern "C"  void AuthorityKeyIdentifierExtension_Decode_m3261570505 (AuthorityKeyIdentifierExtension_t253620168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::get_Identifier()
extern "C"  ByteU5BU5D_t4260760469* AuthorityKeyIdentifierExtension_get_Identifier_m3285341703 (AuthorityKeyIdentifierExtension_t253620168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::ToString()
extern "C"  String_t* AuthorityKeyIdentifierExtension_ToString_m196471364 (AuthorityKeyIdentifierExtension_t253620168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
