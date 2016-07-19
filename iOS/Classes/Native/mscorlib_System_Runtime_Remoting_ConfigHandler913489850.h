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
// System.Runtime.Remoting.ChannelData
struct ChannelData_t140186591;
// System.Collections.Stack
struct Stack_t1761758306;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ConfigHandler
struct  ConfigHandler_t913489850  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::typeEntries
	ArrayList_t3948406897 * ___typeEntries_0;
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::channelInstances
	ArrayList_t3948406897 * ___channelInstances_1;
	// System.Runtime.Remoting.ChannelData System.Runtime.Remoting.ConfigHandler::currentChannel
	ChannelData_t140186591 * ___currentChannel_2;
	// System.Collections.Stack System.Runtime.Remoting.ConfigHandler::currentProviderData
	Stack_t1761758306 * ___currentProviderData_3;
	// System.String System.Runtime.Remoting.ConfigHandler::currentClientUrl
	String_t* ___currentClientUrl_4;
	// System.String System.Runtime.Remoting.ConfigHandler::appName
	String_t* ___appName_5;
	// System.String System.Runtime.Remoting.ConfigHandler::currentXmlPath
	String_t* ___currentXmlPath_6;
	// System.Boolean System.Runtime.Remoting.ConfigHandler::onlyDelayedChannels
	bool ___onlyDelayedChannels_7;

public:
	inline static int32_t get_offset_of_typeEntries_0() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850, ___typeEntries_0)); }
	inline ArrayList_t3948406897 * get_typeEntries_0() const { return ___typeEntries_0; }
	inline ArrayList_t3948406897 ** get_address_of_typeEntries_0() { return &___typeEntries_0; }
	inline void set_typeEntries_0(ArrayList_t3948406897 * value)
	{
		___typeEntries_0 = value;
		Il2CppCodeGenWriteBarrier(&___typeEntries_0, value);
	}

	inline static int32_t get_offset_of_channelInstances_1() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850, ___channelInstances_1)); }
	inline ArrayList_t3948406897 * get_channelInstances_1() const { return ___channelInstances_1; }
	inline ArrayList_t3948406897 ** get_address_of_channelInstances_1() { return &___channelInstances_1; }
	inline void set_channelInstances_1(ArrayList_t3948406897 * value)
	{
		___channelInstances_1 = value;
		Il2CppCodeGenWriteBarrier(&___channelInstances_1, value);
	}

	inline static int32_t get_offset_of_currentChannel_2() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850, ___currentChannel_2)); }
	inline ChannelData_t140186591 * get_currentChannel_2() const { return ___currentChannel_2; }
	inline ChannelData_t140186591 ** get_address_of_currentChannel_2() { return &___currentChannel_2; }
	inline void set_currentChannel_2(ChannelData_t140186591 * value)
	{
		___currentChannel_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentChannel_2, value);
	}

	inline static int32_t get_offset_of_currentProviderData_3() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850, ___currentProviderData_3)); }
	inline Stack_t1761758306 * get_currentProviderData_3() const { return ___currentProviderData_3; }
	inline Stack_t1761758306 ** get_address_of_currentProviderData_3() { return &___currentProviderData_3; }
	inline void set_currentProviderData_3(Stack_t1761758306 * value)
	{
		___currentProviderData_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentProviderData_3, value);
	}

	inline static int32_t get_offset_of_currentClientUrl_4() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850, ___currentClientUrl_4)); }
	inline String_t* get_currentClientUrl_4() const { return ___currentClientUrl_4; }
	inline String_t** get_address_of_currentClientUrl_4() { return &___currentClientUrl_4; }
	inline void set_currentClientUrl_4(String_t* value)
	{
		___currentClientUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentClientUrl_4, value);
	}

	inline static int32_t get_offset_of_appName_5() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850, ___appName_5)); }
	inline String_t* get_appName_5() const { return ___appName_5; }
	inline String_t** get_address_of_appName_5() { return &___appName_5; }
	inline void set_appName_5(String_t* value)
	{
		___appName_5 = value;
		Il2CppCodeGenWriteBarrier(&___appName_5, value);
	}

	inline static int32_t get_offset_of_currentXmlPath_6() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850, ___currentXmlPath_6)); }
	inline String_t* get_currentXmlPath_6() const { return ___currentXmlPath_6; }
	inline String_t** get_address_of_currentXmlPath_6() { return &___currentXmlPath_6; }
	inline void set_currentXmlPath_6(String_t* value)
	{
		___currentXmlPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentXmlPath_6, value);
	}

	inline static int32_t get_offset_of_onlyDelayedChannels_7() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850, ___onlyDelayedChannels_7)); }
	inline bool get_onlyDelayedChannels_7() const { return ___onlyDelayedChannels_7; }
	inline bool* get_address_of_onlyDelayedChannels_7() { return &___onlyDelayedChannels_7; }
	inline void set_onlyDelayedChannels_7(bool value)
	{
		___onlyDelayedChannels_7 = value;
	}
};

struct ConfigHandler_t913489850_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map22
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map22_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map23
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map23_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_8() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850_StaticFields, ___U3CU3Ef__switchU24map22_8)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map22_8() const { return ___U3CU3Ef__switchU24map22_8; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map22_8() { return &___U3CU3Ef__switchU24map22_8; }
	inline void set_U3CU3Ef__switchU24map22_8(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map22_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map22_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map23_9() { return static_cast<int32_t>(offsetof(ConfigHandler_t913489850_StaticFields, ___U3CU3Ef__switchU24map23_9)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map23_9() const { return ___U3CU3Ef__switchU24map23_9; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map23_9() { return &___U3CU3Ef__switchU24map23_9; }
	inline void set_U3CU3Ef__switchU24map23_9(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map23_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map23_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
