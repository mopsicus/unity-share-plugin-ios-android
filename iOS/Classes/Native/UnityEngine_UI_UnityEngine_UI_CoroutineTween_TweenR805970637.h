#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t667441552;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct  TweenRunner_1_t805970637  : public Il2CppObject
{
public:
	// UnityEngine.MonoBehaviour UnityEngine.UI.CoroutineTween.TweenRunner`1::m_CoroutineContainer
	MonoBehaviour_t667441552 * ___m_CoroutineContainer_0;
	// System.Collections.IEnumerator UnityEngine.UI.CoroutineTween.TweenRunner`1::m_Tween
	Il2CppObject * ___m_Tween_1;

public:
	inline static int32_t get_offset_of_m_CoroutineContainer_0() { return static_cast<int32_t>(offsetof(TweenRunner_1_t805970637, ___m_CoroutineContainer_0)); }
	inline MonoBehaviour_t667441552 * get_m_CoroutineContainer_0() const { return ___m_CoroutineContainer_0; }
	inline MonoBehaviour_t667441552 ** get_address_of_m_CoroutineContainer_0() { return &___m_CoroutineContainer_0; }
	inline void set_m_CoroutineContainer_0(MonoBehaviour_t667441552 * value)
	{
		___m_CoroutineContainer_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_CoroutineContainer_0, value);
	}

	inline static int32_t get_offset_of_m_Tween_1() { return static_cast<int32_t>(offsetof(TweenRunner_1_t805970637, ___m_Tween_1)); }
	inline Il2CppObject * get_m_Tween_1() const { return ___m_Tween_1; }
	inline Il2CppObject ** get_address_of_m_Tween_1() { return &___m_Tween_1; }
	inline void set_m_Tween_1(Il2CppObject * value)
	{
		___m_Tween_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Tween_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
