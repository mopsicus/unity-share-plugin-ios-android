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

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t1128159800;
// Mono.Security.ASN1
struct ASN1_t3752917378;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN13752917377.h"

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C"  void GeneralNames__ctor_m2995468779 (GeneralNames_t1128159800 * __this, ASN1_t3752917378 * ___sequence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C"  StringU5BU5D_t4054002952* GeneralNames_get_DNSNames_m2643734506 (GeneralNames_t1128159800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C"  StringU5BU5D_t4054002952* GeneralNames_get_IPAddresses_m2790419794 (GeneralNames_t1128159800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C"  String_t* GeneralNames_ToString_m1119274128 (GeneralNames_t1128159800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
