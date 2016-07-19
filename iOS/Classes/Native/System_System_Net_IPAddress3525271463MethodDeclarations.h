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

// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.UInt16[]
struct UInt16U5BU5D_t801649474;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_IPAddress3525271463.h"
#include "System_System_Net_Sockets_AddressFamily3770679850.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Net.IPAddress::.ctor(System.Int64)
extern "C"  void IPAddress__ctor_m927672017 (IPAddress_t3525271463 * __this, int64_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.Int64)
extern "C"  void IPAddress__ctor_m3937524101 (IPAddress_t3525271463 * __this, UInt16U5BU5D_t801649474* ___address0, int64_t ___scopeId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.cctor()
extern "C"  void IPAddress__cctor_m3356110606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::SwapShort(System.Int16)
extern "C"  int16_t IPAddress_SwapShort_m2091369575 (Il2CppObject * __this /* static, unused */, int16_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
extern "C"  int16_t IPAddress_HostToNetworkOrder_m3514593469 (Il2CppObject * __this /* static, unused */, int16_t ___host0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::NetworkToHostOrder(System.Int16)
extern "C"  int16_t IPAddress_NetworkToHostOrder_m3568389847 (Il2CppObject * __this /* static, unused */, int16_t ___network0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C"  IPAddress_t3525271463 * IPAddress_Parse_m1640477876 (Il2CppObject * __this /* static, unused */, String_t* ___ipString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern "C"  bool IPAddress_TryParse_m1385842418 (Il2CppObject * __this /* static, unused */, String_t* ___ipString0, IPAddress_t3525271463 ** ___address1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV4(System.String)
extern "C"  IPAddress_t3525271463 * IPAddress_ParseIPV4_m120660623 (Il2CppObject * __this /* static, unused */, String_t* ___ip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV6(System.String)
extern "C"  IPAddress_t3525271463 * IPAddress_ParseIPV6_m3394559565 (Il2CppObject * __this /* static, unused */, String_t* ___ip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_InternalIPv4Address()
extern "C"  int64_t IPAddress_get_InternalIPv4Address_m2101711253 (IPAddress_t3525271463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_ScopeId()
extern "C"  int64_t IPAddress_get_ScopeId_m2224014450 (IPAddress_t3525271463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern "C"  int32_t IPAddress_get_AddressFamily_m2364322247 (IPAddress_t3525271463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern "C"  bool IPAddress_IsLoopback_m3449051763 (Il2CppObject * __this /* static, unused */, IPAddress_t3525271463 * ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString()
extern "C"  String_t* IPAddress_ToString_m2947972276 (IPAddress_t3525271463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString(System.Int64)
extern "C"  String_t* IPAddress_ToString_m277532550 (Il2CppObject * __this /* static, unused */, int64_t ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::Equals(System.Object)
extern "C"  bool IPAddress_Equals_m1176433114 (IPAddress_t3525271463 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::GetHashCode()
extern "C"  int32_t IPAddress_GetHashCode_m1369616318 (IPAddress_t3525271463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t IPAddress_Hash_m3738146179 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___j1, int32_t ___k2, int32_t ___l3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
