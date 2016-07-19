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

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t1223239515;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2861953768;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1182884468;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData2861953768.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Security_Cryptography_X509Certificat1182884468.h"
#include "System_System_Security_Cryptography_X509Certificat1277662109.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu1762590658.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m3478259430 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m804319328 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, AsnEncodedData_t2861953768 * ___encodedSubjectKeyIdentifier0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m2338585210 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, ByteU5BU5D_t4260760469* ___subjectKeyIdentifier0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m1613029921 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, String_t* ___subjectKeyIdentifier0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m1879279918 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, PublicKey_t1182884468 * ___key0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m891295656 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, PublicKey_t1182884468 * ___key0, int32_t ___algorithm1, bool ___critical2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern "C"  String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m2494939520 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509SubjectKeyIdentifierExtension_CopyFrom_m3398288358 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, AsnEncodedData_t2861953768 * ___encodedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m751746662 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m3730448342 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c10, Il2CppChar ___c21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern "C"  ByteU5BU5D_t4260760469* X509SubjectKeyIdentifierExtension_FromHex_m3994967203 (Il2CppObject * __this /* static, unused */, String_t* ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern "C"  int32_t X509SubjectKeyIdentifierExtension_Decode_m3290786035 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, ByteU5BU5D_t4260760469* ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern "C"  ByteU5BU5D_t4260760469* X509SubjectKeyIdentifierExtension_Encode_m852919050 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern "C"  String_t* X509SubjectKeyIdentifierExtension_ToString_m2596463486 (X509SubjectKeyIdentifierExtension_t1223239515 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
