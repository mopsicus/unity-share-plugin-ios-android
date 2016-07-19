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

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct SerializableTypeMetadata_t2491933764;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t777805349;
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct ObjectWriter_t3287044654;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Bi777805349.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3287044654.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::.ctor(System.Type,System.Runtime.Serialization.SerializationInfo)
extern "C"  void SerializableTypeMetadata__ctor_m4014682835 (SerializableTypeMetadata_t2491933764 * __this, Type_t * ___itype0, SerializationInfo_t2185721892 * ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::IsCompatible(System.Runtime.Serialization.Formatters.Binary.TypeMetadata)
extern "C"  bool SerializableTypeMetadata_IsCompatible_m828851263 (SerializableTypeMetadata_t2491933764 * __this, TypeMetadata_t777805349 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteAssemblies(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter)
extern "C"  void SerializableTypeMetadata_WriteAssemblies_m355185654 (SerializableTypeMetadata_t2491933764 * __this, ObjectWriter_t3287044654 * ___ow0, BinaryWriter_t4146364100 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteTypeData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Boolean)
extern "C"  void SerializableTypeMetadata_WriteTypeData_m2677462151 (SerializableTypeMetadata_t2491933764 * __this, ObjectWriter_t3287044654 * ___ow0, BinaryWriter_t4146364100 * ___writer1, bool ___writeTypes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::WriteObjectData(System.Runtime.Serialization.Formatters.Binary.ObjectWriter,System.IO.BinaryWriter,System.Object)
extern "C"  void SerializableTypeMetadata_WriteObjectData_m1813279113 (SerializableTypeMetadata_t2491933764 * __this, ObjectWriter_t3287044654 * ___ow0, BinaryWriter_t4146364100 * ___writer1, Il2CppObject * ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::get_RequiresTypes()
extern "C"  bool SerializableTypeMetadata_get_RequiresTypes_m2353291923 (SerializableTypeMetadata_t2491933764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
