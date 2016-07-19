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

// System.Reflection.AssemblyName
struct AssemblyName_t2915647011;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1065375142;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3001743425;
// System.Version
struct Version_t763695022;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags1632705024.h"
#include "mscorlib_System_Version763695022.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C"  void AssemblyName__ctor_m2021574845 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AssemblyName__ctor_m1431164030 (AssemblyName_t2915647011 * __this, SerializationInfo_t2185721892 * ___si0, StreamingContext_t2761351129  ___sc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C"  String_t* AssemblyName_get_Name_m1123490526 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Name(System.String)
extern "C"  void AssemblyName_set_Name_m3808734003 (AssemblyName_t2915647011 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Reflection.AssemblyName::get_CultureInfo()
extern "C"  CultureInfo_t1065375142 * AssemblyName_get_CultureInfo_m1466641171 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C"  int32_t AssemblyName_get_Flags_m841716984 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C"  String_t* AssemblyName_get_FullName_m2880072013 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::get_KeyPair()
extern "C"  StrongNameKeyPair_t3001743425 * AssemblyName_get_KeyPair_m1615351883 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C"  Version_t763695022 * AssemblyName_get_Version_m700434552 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C"  void AssemblyName_set_Version_m1560254941 (AssemblyName_t2915647011 * __this, Version_t763695022 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C"  String_t* AssemblyName_ToString_m485215606 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::GetPublicKey()
extern "C"  ByteU5BU5D_t4260760469* AssemblyName_GetPublicKey_m511710865 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C"  bool AssemblyName_get_IsPublicKeyValid_m65110050 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C"  ByteU5BU5D_t4260760469* AssemblyName_InternalGetPublicKeyToken_m1116912397 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C"  ByteU5BU5D_t4260760469* AssemblyName_ComputePublicKeyToken_m1248936939 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C"  void AssemblyName_SetPublicKey_m2883286222 (AssemblyName_t2915647011 * __this, ByteU5BU5D_t4260760469* ___publicKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C"  void AssemblyName_SetPublicKeyToken_m3550661833 (AssemblyName_t2915647011 * __this, ByteU5BU5D_t4260760469* ___publicKeyToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AssemblyName_GetObjectData_m3727277531 (AssemblyName_t2915647011 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.AssemblyName::Clone()
extern "C"  Il2CppObject * AssemblyName_Clone_m1423794147 (AssemblyName_t2915647011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C"  void AssemblyName_OnDeserialization_m866678633 (AssemblyName_t2915647011 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
