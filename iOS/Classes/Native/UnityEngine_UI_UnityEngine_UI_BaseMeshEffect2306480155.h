#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Graphic
struct Graphic_t836799438;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou2511441271.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t2306480155  : public UIBehaviour_t2511441271
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t836799438 * ___m_Graphic_2;

public:
	inline static int32_t get_offset_of_m_Graphic_2() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t2306480155, ___m_Graphic_2)); }
	inline Graphic_t836799438 * get_m_Graphic_2() const { return ___m_Graphic_2; }
	inline Graphic_t836799438 ** get_address_of_m_Graphic_2() { return &___m_Graphic_2; }
	inline void set_m_Graphic_2(Graphic_t836799438 * value)
	{
		___m_Graphic_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Graphic_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
