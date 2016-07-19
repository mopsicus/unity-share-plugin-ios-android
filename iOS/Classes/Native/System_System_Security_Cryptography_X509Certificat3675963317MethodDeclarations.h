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

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t3675963317;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2861953768;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnEncodedData2861953768.h"
#include "System_System_Security_Cryptography_X509Certificat1237379453.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu1762590658.h"

// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
extern "C"  void X509KeyUsageExtension__ctor_m3787253324 (X509KeyUsageExtension_t3675963317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509KeyUsageExtension__ctor_m2410062918 (X509KeyUsageExtension_t3675963317 * __this, AsnEncodedData_t2861953768 * ___encodedKeyUsage0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
extern "C"  void X509KeyUsageExtension__ctor_m3332265501 (X509KeyUsageExtension_t3675963317 * __this, int32_t ___keyUsages0, bool ___critical1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
extern "C"  int32_t X509KeyUsageExtension_get_KeyUsages_m3177031359 (X509KeyUsageExtension_t3675963317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509KeyUsageExtension_CopyFrom_m1769316556 (X509KeyUsageExtension_t3675963317 * __this, AsnEncodedData_t2861953768 * ___encodedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
extern "C"  int32_t X509KeyUsageExtension_GetValidFlags_m1081049684 (X509KeyUsageExtension_t3675963317 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
extern "C"  int32_t X509KeyUsageExtension_Decode_m811458265 (X509KeyUsageExtension_t3675963317 * __this, ByteU5BU5D_t4260760469* ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
extern "C"  ByteU5BU5D_t4260760469* X509KeyUsageExtension_Encode_m1941209444 (X509KeyUsageExtension_t3675963317 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
extern "C"  String_t* X509KeyUsageExtension_ToString_m1884016728 (X509KeyUsageExtension_t3675963317 * __this, bool ___multiLine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
