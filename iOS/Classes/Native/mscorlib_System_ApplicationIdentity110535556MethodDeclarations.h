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

// System.ApplicationIdentity
struct ApplicationIdentity_t110535556;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.ApplicationIdentity::.ctor(System.String)
extern "C"  void ApplicationIdentity__ctor_m548502143 (ApplicationIdentity_t110535556 * __this, String_t* ___applicationIdentityFullName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationIdentity::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ApplicationIdentity_System_Runtime_Serialization_ISerializable_GetObjectData_m769720520 (ApplicationIdentity_t110535556 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::get_FullName()
extern "C"  String_t* ApplicationIdentity_get_FullName_m3786168167 (ApplicationIdentity_t110535556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ApplicationIdentity::ToString()
extern "C"  String_t* ApplicationIdentity_ToString_m654104720 (ApplicationIdentity_t110535556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
