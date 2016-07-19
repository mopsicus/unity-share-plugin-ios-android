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

// Mono.Security.X509.SafeBag
struct SafeBag_t95817450;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3752917378;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Mono_Security_Mono_Security_ASN13752917377.h"

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C"  void SafeBag__ctor_m2711801934 (SafeBag_t95817450 * __this, String_t* ___bagOID0, ASN1_t3752917378 * ___asn11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C"  String_t* SafeBag_get_BagOID_m2256458192 (SafeBag_t95817450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C"  ASN1_t3752917378 * SafeBag_get_ASN1_m3365953951 (SafeBag_t95817450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
