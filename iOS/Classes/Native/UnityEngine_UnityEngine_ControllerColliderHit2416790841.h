﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t1618060635;
// UnityEngine.Collider
struct Collider_t2939674232;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t2416790841  : public Il2CppObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t1618060635 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t2939674232 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t4282066566  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t4282066566  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t4282066566  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2416790841, ___m_Controller_0)); }
	inline CharacterController_t1618060635 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t1618060635 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t1618060635 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Controller_0, value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2416790841, ___m_Collider_1)); }
	inline Collider_t2939674232 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t2939674232 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t2939674232 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_1, value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2416790841, ___m_Point_2)); }
	inline Vector3_t4282066566  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t4282066566 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t4282066566  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2416790841, ___m_Normal_3)); }
	inline Vector3_t4282066566  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t4282066566 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t4282066566  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2416790841, ___m_MoveDirection_4)); }
	inline Vector3_t4282066566  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t4282066566 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t4282066566  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2416790841, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t2416790841, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t2416790841_marshaled_pinvoke
{
	CharacterController_t1618060635 * ___m_Controller_0;
	Collider_t2939674232 * ___m_Collider_1;
	Vector3_t4282066566_marshaled_pinvoke ___m_Point_2;
	Vector3_t4282066566_marshaled_pinvoke ___m_Normal_3;
	Vector3_t4282066566_marshaled_pinvoke ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for marshalling of: UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t2416790841_marshaled_com
{
	CharacterController_t1618060635 * ___m_Controller_0;
	Collider_t2939674232 * ___m_Collider_1;
	Vector3_t4282066566_marshaled_com ___m_Point_2;
	Vector3_t4282066566_marshaled_com ___m_Normal_3;
	Vector3_t4282066566_marshaled_com ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
