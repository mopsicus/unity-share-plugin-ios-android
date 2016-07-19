﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t2792143614;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t1751339649;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t3172382875  : public Il2CppObject
{
public:

public:
};

struct ChannelServices_t3172382875_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t3948406897 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t3948406897 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t2792143614 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	Il2CppObject * ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t3172382875_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t3948406897 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t3948406897 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t3948406897 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier(&___registeredChannels_0, value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t3172382875_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t3948406897 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t3948406897 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t3948406897 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier(&___delayedClientChannels_1, value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t3172382875_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t2792143614 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t2792143614 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t2792143614 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier(&____crossContextSink_2, value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t3172382875_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier(&___CrossContextUrl_3, value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t3172382875_StaticFields, ___oldStartModeTypes_4)); }
	inline Il2CppObject * get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline Il2CppObject ** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(Il2CppObject * value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier(&___oldStartModeTypes_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
