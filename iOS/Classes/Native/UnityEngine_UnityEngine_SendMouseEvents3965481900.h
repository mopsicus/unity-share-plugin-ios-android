﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t3452915852;
// UnityEngine.Camera[]
struct CameraU5BU5D_t2716570836;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3965481900  : public Il2CppObject
{
public:

public:
};

struct SendMouseEvents_t3965481900_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t3452915852* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t3452915852* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t3452915852* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t2716570836* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3965481900_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3965481900_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t3452915852* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t3452915852** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t3452915852* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_LastHit_1, value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3965481900_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t3452915852* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t3452915852** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t3452915852* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_MouseDownHit_2, value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3965481900_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t3452915852* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t3452915852** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t3452915852* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentHit_3, value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3965481900_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t2716570836* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t2716570836** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t2716570836* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Cameras_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
