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

// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t856208126;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t2300150170;
// System.IO.BinaryReader
struct BinaryReader_t3990958868;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t53887223;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1638665103;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t932376889;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_F3005881063.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_For38666771.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B3504091841.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHan53887223.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_B1638665103.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodCall(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodCall_m422932223 (Il2CppObject * __this /* static, unused */, BinaryWriter_t4146364100 * ___writer0, Il2CppObject * ___obj1, HeaderU5BU5D_t856208126* ___headers2, Il2CppObject * ___surrogateSelector3, StreamingContext_t2761351129  ___context4, int32_t ___assemblyFormat5, int32_t ___typeFormat6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.MessageFormatter::WriteMethodResponse(System.IO.BinaryWriter,System.Object,System.Runtime.Remoting.Messaging.Header[],System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.Formatters.FormatterTypeStyle)
extern "C"  void MessageFormatter_WriteMethodResponse_m3855499772 (Il2CppObject * __this /* static, unused */, BinaryWriter_t4146364100 * ___writer0, Il2CppObject * ___obj1, HeaderU5BU5D_t856208126* ___headers2, Il2CppObject * ___surrogateSelector3, StreamingContext_t2761351129  ___context4, int32_t ___assemblyFormat5, int32_t ___typeFormat6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodCall_m3773075223 (Il2CppObject * __this /* static, unused */, uint8_t ___elem0, BinaryReader_t3990958868 * ___reader1, bool ___hasHeaders2, HeaderHandler_t53887223 * ___headerHandler3, BinaryFormatter_t1638665103 * ___formatter4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C"  Il2CppObject * MessageFormatter_ReadMethodResponse_m1841037205 (Il2CppObject * __this /* static, unused */, uint8_t ___elem0, BinaryReader_t3990958868 * ___reader1, bool ___hasHeaders2, HeaderHandler_t53887223 * ___headerHandler3, Il2CppObject * ___methodCallMessage4, BinaryFormatter_t1638665103 * ___formatter5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::AllTypesArePrimitive(System.Object[])
extern "C"  bool MessageFormatter_AllTypesArePrimitive_m3926975387 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t1108656482* ___objects0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsMethodPrimitive(System.Type)
extern "C"  bool MessageFormatter_IsMethodPrimitive_m3463040103 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Serialization.Formatters.Binary.MessageFormatter::GetExtraProperties(System.Collections.IDictionary,System.String[])
extern "C"  ObjectU5BU5D_t1108656482* MessageFormatter_GetExtraProperties_m1259624667 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___properties0, StringU5BU5D_t4054002952* ___internalKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.MessageFormatter::IsInternalKey(System.String,System.String[])
extern "C"  bool MessageFormatter_IsInternalKey_m2159509102 (Il2CppObject * __this /* static, unused */, String_t* ___key0, StringU5BU5D_t4054002952* ___internalKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
