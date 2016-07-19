#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t228858559;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Collections.Queue
struct Queue_t1759945451;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.String
struct String_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2300150170;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t2198782602;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3005881063.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_For38666771.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct  ObjectWriter_t3287044654  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_idGenerator
	ObjectIDGenerator_t228858559 * ____idGenerator_0;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedMetadata
	Hashtable_t1407064410 * ____cachedMetadata_1;
	// System.Collections.Queue System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_pendingObjects
	Queue_t1759945451 * ____pendingObjects_2;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyCache
	Hashtable_t1407064410 * ____assemblyCache_3;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_surrogateSelector
	Il2CppObject * ____surrogateSelector_7;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_context
	StreamingContext_t2761351129  ____context_8;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyFormat
	int32_t ____assemblyFormat_9;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_typeFormat
	int32_t ____typeFormat_10;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectWriter::arrayBuffer
	ByteU5BU5D_t4260760469* ___arrayBuffer_11;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::ArrayBufferLength
	int32_t ___ArrayBufferLength_12;
	// System.Runtime.Serialization.SerializationObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_manager
	SerializationObjectManager_t2198782602 * ____manager_13;

public:
	inline static int32_t get_offset_of__idGenerator_0() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ____idGenerator_0)); }
	inline ObjectIDGenerator_t228858559 * get__idGenerator_0() const { return ____idGenerator_0; }
	inline ObjectIDGenerator_t228858559 ** get_address_of__idGenerator_0() { return &____idGenerator_0; }
	inline void set__idGenerator_0(ObjectIDGenerator_t228858559 * value)
	{
		____idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier(&____idGenerator_0, value);
	}

	inline static int32_t get_offset_of__cachedMetadata_1() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ____cachedMetadata_1)); }
	inline Hashtable_t1407064410 * get__cachedMetadata_1() const { return ____cachedMetadata_1; }
	inline Hashtable_t1407064410 ** get_address_of__cachedMetadata_1() { return &____cachedMetadata_1; }
	inline void set__cachedMetadata_1(Hashtable_t1407064410 * value)
	{
		____cachedMetadata_1 = value;
		Il2CppCodeGenWriteBarrier(&____cachedMetadata_1, value);
	}

	inline static int32_t get_offset_of__pendingObjects_2() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ____pendingObjects_2)); }
	inline Queue_t1759945451 * get__pendingObjects_2() const { return ____pendingObjects_2; }
	inline Queue_t1759945451 ** get_address_of__pendingObjects_2() { return &____pendingObjects_2; }
	inline void set__pendingObjects_2(Queue_t1759945451 * value)
	{
		____pendingObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&____pendingObjects_2, value);
	}

	inline static int32_t get_offset_of__assemblyCache_3() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ____assemblyCache_3)); }
	inline Hashtable_t1407064410 * get__assemblyCache_3() const { return ____assemblyCache_3; }
	inline Hashtable_t1407064410 ** get_address_of__assemblyCache_3() { return &____assemblyCache_3; }
	inline void set__assemblyCache_3(Hashtable_t1407064410 * value)
	{
		____assemblyCache_3 = value;
		Il2CppCodeGenWriteBarrier(&____assemblyCache_3, value);
	}

	inline static int32_t get_offset_of__surrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ____surrogateSelector_7)); }
	inline Il2CppObject * get__surrogateSelector_7() const { return ____surrogateSelector_7; }
	inline Il2CppObject ** get_address_of__surrogateSelector_7() { return &____surrogateSelector_7; }
	inline void set__surrogateSelector_7(Il2CppObject * value)
	{
		____surrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier(&____surrogateSelector_7, value);
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ____context_8)); }
	inline StreamingContext_t2761351129  get__context_8() const { return ____context_8; }
	inline StreamingContext_t2761351129 * get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(StreamingContext_t2761351129  value)
	{
		____context_8 = value;
	}

	inline static int32_t get_offset_of__assemblyFormat_9() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ____assemblyFormat_9)); }
	inline int32_t get__assemblyFormat_9() const { return ____assemblyFormat_9; }
	inline int32_t* get_address_of__assemblyFormat_9() { return &____assemblyFormat_9; }
	inline void set__assemblyFormat_9(int32_t value)
	{
		____assemblyFormat_9 = value;
	}

	inline static int32_t get_offset_of__typeFormat_10() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ____typeFormat_10)); }
	inline int32_t get__typeFormat_10() const { return ____typeFormat_10; }
	inline int32_t* get_address_of__typeFormat_10() { return &____typeFormat_10; }
	inline void set__typeFormat_10(int32_t value)
	{
		____typeFormat_10 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_11() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ___arrayBuffer_11)); }
	inline ByteU5BU5D_t4260760469* get_arrayBuffer_11() const { return ___arrayBuffer_11; }
	inline ByteU5BU5D_t4260760469** get_address_of_arrayBuffer_11() { return &___arrayBuffer_11; }
	inline void set_arrayBuffer_11(ByteU5BU5D_t4260760469* value)
	{
		___arrayBuffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___arrayBuffer_11, value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_12() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ___ArrayBufferLength_12)); }
	inline int32_t get_ArrayBufferLength_12() const { return ___ArrayBufferLength_12; }
	inline int32_t* get_address_of_ArrayBufferLength_12() { return &___ArrayBufferLength_12; }
	inline void set_ArrayBufferLength_12(int32_t value)
	{
		___ArrayBufferLength_12 = value;
	}

	inline static int32_t get_offset_of__manager_13() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654, ____manager_13)); }
	inline SerializationObjectManager_t2198782602 * get__manager_13() const { return ____manager_13; }
	inline SerializationObjectManager_t2198782602 ** get_address_of__manager_13() { return &____manager_13; }
	inline void set__manager_13(SerializationObjectManager_t2198782602 * value)
	{
		____manager_13 = value;
		Il2CppCodeGenWriteBarrier(&____manager_13, value);
	}
};

struct ObjectWriter_t3287044654_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedTypes
	Hashtable_t1407064410 * ____cachedTypes_4;
	// System.Reflection.Assembly System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssembly
	Assembly_t1418687608 * ___CorlibAssembly_5;
	// System.String System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssemblyName
	String_t* ___CorlibAssemblyName_6;

public:
	inline static int32_t get_offset_of__cachedTypes_4() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654_StaticFields, ____cachedTypes_4)); }
	inline Hashtable_t1407064410 * get__cachedTypes_4() const { return ____cachedTypes_4; }
	inline Hashtable_t1407064410 ** get_address_of__cachedTypes_4() { return &____cachedTypes_4; }
	inline void set__cachedTypes_4(Hashtable_t1407064410 * value)
	{
		____cachedTypes_4 = value;
		Il2CppCodeGenWriteBarrier(&____cachedTypes_4, value);
	}

	inline static int32_t get_offset_of_CorlibAssembly_5() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654_StaticFields, ___CorlibAssembly_5)); }
	inline Assembly_t1418687608 * get_CorlibAssembly_5() const { return ___CorlibAssembly_5; }
	inline Assembly_t1418687608 ** get_address_of_CorlibAssembly_5() { return &___CorlibAssembly_5; }
	inline void set_CorlibAssembly_5(Assembly_t1418687608 * value)
	{
		___CorlibAssembly_5 = value;
		Il2CppCodeGenWriteBarrier(&___CorlibAssembly_5, value);
	}

	inline static int32_t get_offset_of_CorlibAssemblyName_6() { return static_cast<int32_t>(offsetof(ObjectWriter_t3287044654_StaticFields, ___CorlibAssemblyName_6)); }
	inline String_t* get_CorlibAssemblyName_6() const { return ___CorlibAssemblyName_6; }
	inline String_t** get_address_of_CorlibAssemblyName_6() { return &___CorlibAssemblyName_6; }
	inline void set_CorlibAssemblyName_6(String_t* value)
	{
		___CorlibAssemblyName_6 = value;
		Il2CppCodeGenWriteBarrier(&___CorlibAssemblyName_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
