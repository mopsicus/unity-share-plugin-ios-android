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

// System.Security.Cryptography.RSA
struct RSA_t2466814310;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter3219890992.h"

// System.Void System.Security.Cryptography.RSA::.ctor()
extern "C"  void RSA__ctor_m1717134245 (RSA_t2466814310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
extern "C"  RSA_t2466814310 * RSA_Create_m3157832121 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create(System.String)
extern "C"  RSA_t2466814310 * RSA_Create_m1188512233 (Il2CppObject * __this /* static, unused */, String_t* ___algName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::ZeroizePrivateKey(System.Security.Cryptography.RSAParameters)
extern "C"  void RSA_ZeroizePrivateKey_m3364848340 (RSA_t2466814310 * __this, RSAParameters_t3219890992  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSA::FromXmlString(System.String)
extern "C"  void RSA_FromXmlString_m3641838305 (RSA_t2466814310 * __this, String_t* ___xmlString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean)
extern "C"  String_t* RSA_ToXmlString_m2919494468 (RSA_t2466814310 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
