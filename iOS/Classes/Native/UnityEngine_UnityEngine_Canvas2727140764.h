#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t4247149838;

#include "UnityEngine_UnityEngine_Behaviour200106419.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t2727140764  : public Behaviour_t200106419
{
public:

public:
};

struct Canvas_t2727140764_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t4247149838 * ___willRenderCanvases_2;

public:
	inline static int32_t get_offset_of_willRenderCanvases_2() { return static_cast<int32_t>(offsetof(Canvas_t2727140764_StaticFields, ___willRenderCanvases_2)); }
	inline WillRenderCanvases_t4247149838 * get_willRenderCanvases_2() const { return ___willRenderCanvases_2; }
	inline WillRenderCanvases_t4247149838 ** get_address_of_willRenderCanvases_2() { return &___willRenderCanvases_2; }
	inline void set_willRenderCanvases_2(WillRenderCanvases_t4247149838 * value)
	{
		___willRenderCanvases_2 = value;
		Il2CppCodeGenWriteBarrier(&___willRenderCanvases_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
