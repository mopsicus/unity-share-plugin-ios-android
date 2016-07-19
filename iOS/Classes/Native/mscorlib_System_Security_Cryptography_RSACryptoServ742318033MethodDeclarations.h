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

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t742318033;
// System.Security.Cryptography.CspParameters
struct CspParameters_t309313264;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t2540831021;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_CspParameters309313264.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter3219890992.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_EventArgs2540831021.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C"  void RSACryptoServiceProvider__ctor_m8796060 (RSACryptoServiceProvider_t742318033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider__ctor_m32080133 (RSACryptoServiceProvider_t742318033 * __this, CspParameters_t309313264 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C"  void RSACryptoServiceProvider__ctor_m4233192173 (RSACryptoServiceProvider_t742318033 * __this, int32_t ___dwKeySize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
extern "C"  void RSACryptoServiceProvider__cctor_m4085548945 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider_Common_m3809083019 (RSACryptoServiceProvider_t742318033 * __this, int32_t ___dwKeySize0, CspParameters_t309313264 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
extern "C"  void RSACryptoServiceProvider_Finalize_m152924998 (RSACryptoServiceProvider_t742318033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
extern "C"  int32_t RSACryptoServiceProvider_get_KeySize_m1022373229 (RSACryptoServiceProvider_t742318033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
extern "C"  bool RSACryptoServiceProvider_get_PublicOnly_m2755170020 (RSACryptoServiceProvider_t742318033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RSACryptoServiceProvider_DecryptValue_m3565674343 (RSACryptoServiceProvider_t742318033 * __this, ByteU5BU5D_t4260760469* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RSACryptoServiceProvider_EncryptValue_m511499327 (RSACryptoServiceProvider_t742318033 * __this, ByteU5BU5D_t4260760469* ___rgb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t3219890992  RSACryptoServiceProvider_ExportParameters_m71989545 (RSACryptoServiceProvider_t742318033 * __this, bool ___includePrivateParameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSACryptoServiceProvider_ImportParameters_m3023964864 (RSACryptoServiceProvider_t742318033 * __this, RSAParameters_t3219890992  ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.RSACryptoServiceProvider::GetHashNameFromOID(System.String)
extern "C"  String_t* RSACryptoServiceProvider_GetHashNameFromOID_m61107276 (RSACryptoServiceProvider_t742318033 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::VerifyHash(System.Byte[],System.String,System.Byte[])
extern "C"  bool RSACryptoServiceProvider_VerifyHash_m3288347931 (RSACryptoServiceProvider_t742318033 * __this, ByteU5BU5D_t4260760469* ___rgbHash0, String_t* ___str1, ByteU5BU5D_t4260760469* ___rgbSignature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void RSACryptoServiceProvider_Dispose_m4161630864 (RSACryptoServiceProvider_t742318033 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C"  void RSACryptoServiceProvider_OnKeyGenerated_m4166429105 (RSACryptoServiceProvider_t742318033 * __this, Il2CppObject * ___sender0, EventArgs_t2540831021 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
