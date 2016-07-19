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

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2257382795;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Runtime.Remoting.Channels.IChannelSender
struct IChannelSender_t2971765209;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Runtime.Remoting.Channels.IChannel
struct IChannel_t3198739716;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t140186591;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t816409465;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Runtime_Remoting_ChannelData140186591.h"
#include "mscorlib_System_Runtime_Remoting_ProviderData816409465.h"

// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern "C"  void ChannelServices__cctor_m1558856244 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C"  Il2CppObject * ChannelServices_CreateClientChannelSinkChain_m2763926231 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Il2CppObject * ___remoteChannelData1, String_t** ___objectUri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Channels.ChannelServices::CreateClientChannelSinkChain(System.Runtime.Remoting.Channels.IChannelSender,System.String,System.Object[],System.String&)
extern "C"  Il2CppObject * ChannelServices_CreateClientChannelSinkChain_m3318618436 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, String_t* ___url1, ObjectU5BU5D_t1108656482* ___channelDataArray2, String_t** ___objectUri3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern "C"  void ChannelServices_RegisterChannel_m1343018521 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___chnl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern "C"  void ChannelServices_RegisterChannel_m409692228 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___chnl0, bool ___ensureSecurity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannelConfig(System.Runtime.Remoting.ChannelData)
extern "C"  void ChannelServices_RegisterChannelConfig_m2055899810 (Il2CppObject * __this /* static, unused */, ChannelData_t140186591 * ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Channels.ChannelServices::CreateProvider(System.Runtime.Remoting.ProviderData)
extern "C"  Il2CppObject * ChannelServices_CreateProvider_m463156604 (Il2CppObject * __this /* static, unused */, ProviderData_t816409465 * ___prov0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern "C"  ObjectU5BU5D_t1108656482* ChannelServices_GetCurrentChannelInfo_m4083928274 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
