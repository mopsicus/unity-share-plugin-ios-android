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

// System.Security.Cryptography.DSA
struct DSA_t2466800856;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter3032565794.h"

// System.Void System.Security.Cryptography.DSA::.ctor()
extern "C"  void DSA__ctor_m4204943475 (DSA_t2466800856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
extern "C"  DSA_t2466800856 * DSA_Create_m2357499897 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create(System.String)
extern "C"  DSA_t2466800856 * DSA_Create_m1124303785 (Il2CppObject * __this /* static, unused */, String_t* ___algName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::ZeroizePrivateKey(System.Security.Cryptography.DSAParameters)
extern "C"  void DSA_ZeroizePrivateKey_m2681539184 (DSA_t2466800856 * __this, DSAParameters_t3032565794  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::FromXmlString(System.String)
extern "C"  void DSA_FromXmlString_m4148544211 (DSA_t2466800856 * __this, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.DSA::ToXmlString(System.Boolean)
extern "C"  String_t* DSA_ToXmlString_m996177170 (DSA_t2466800856 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
