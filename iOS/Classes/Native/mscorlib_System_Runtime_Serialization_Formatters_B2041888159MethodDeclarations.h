#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct MemberTypeMetadata_t2041888159;
// System.Type
struct Type_t;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t3287044654;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3287044654.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  void MemberTypeMetadata__ctor_m2555872271 (MemberTypeMetadata_t2041888159 * __this, Type_t * ___type0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void MemberTypeMetadata_WriteAssemblies_m1974093883 (MemberTypeMetadata_t2041888159 * __this, ObjectWriter_t3287044654 * ___ow0, BinaryWriter_t4146364100 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void MemberTypeMetadata_WriteTypeData_m2502957154 (MemberTypeMetadata_t2041888159 * __this, ObjectWriter_t3287044654 * ___ow0, BinaryWriter_t4146364100 * ___writer1, bool ___writeTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void MemberTypeMetadata_WriteObjectData_m698591502 (MemberTypeMetadata_t2041888159 * __this, ObjectWriter_t3287044654 * ___ow0, BinaryWriter_t4146364100 * ___writer1, Il2CppObject * ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
