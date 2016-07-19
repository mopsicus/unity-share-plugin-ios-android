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

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t4088726908;
// UnityEngine.UI.CoroutineTween.ColorTween
struct ColorTween_t723277650;
struct ColorTween_t723277650_marshaled_pinvoke;
struct ColorTween_t723277650_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorT723277650.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UI_UnityEngine_UI_CoroutineTween_ColorT678919098.h"

// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::get_startColor()
extern "C"  Color_t4194546905  ColorTween_get_startColor_m2341745789 (ColorTween_t723277650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::set_startColor(UnityEngine.Color)
extern "C"  void ColorTween_set_startColor_m1548058556 (ColorTween_t723277650 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.CoroutineTween.ColorTween::get_targetColor()
extern "C"  Color_t4194546905  ColorTween_get_targetColor_m3334930584 (ColorTween_t723277650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::set_targetColor(UnityEngine.Color)
extern "C"  void ColorTween_set_targetColor_m1091345019 (ColorTween_t723277650 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode UnityEngine.UI.CoroutineTween.ColorTween::get_tweenMode()
extern "C"  int32_t ColorTween_get_tweenMode_m4011161954 (ColorTween_t723277650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::set_tweenMode(UnityEngine.UI.CoroutineTween.ColorTween/ColorTweenMode)
extern "C"  void ColorTween_set_tweenMode_m1316837809 (ColorTween_t723277650 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::get_duration()
extern "C"  float ColorTween_get_duration_m2603018997 (ColorTween_t723277650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::set_duration(System.Single)
extern "C"  void ColorTween_set_duration_m347866734 (ColorTween_t723277650 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::get_ignoreTimeScale()
extern "C"  bool ColorTween_get_ignoreTimeScale_m27222826 (ColorTween_t723277650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::set_ignoreTimeScale(System.Boolean)
extern "C"  void ColorTween_set_ignoreTimeScale_m4222585787 (ColorTween_t723277650 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::TweenValue(System.Single)
extern "C"  void ColorTween_TweenValue_m3209849337 (ColorTween_t723277650 * __this, float ___floatPercentage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CoroutineTween.ColorTween::AddOnChangedCallback(UnityEngine.Events.UnityAction`1<UnityEngine.Color>)
extern "C"  void ColorTween_AddOnChangedCallback_m1109647485 (ColorTween_t723277650 * __this, UnityAction_1_t4088726908 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::GetIgnoreTimescale()
extern "C"  bool ColorTween_GetIgnoreTimescale_m2054009071 (ColorTween_t723277650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.CoroutineTween.ColorTween::GetDuration()
extern "C"  float ColorTween_GetDuration_m1400665524 (ColorTween_t723277650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CoroutineTween.ColorTween::ValidTarget()
extern "C"  bool ColorTween_ValidTarget_m2504867349 (ColorTween_t723277650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ColorTween_t723277650;
struct ColorTween_t723277650_marshaled_pinvoke;

extern "C" void ColorTween_t723277650_marshal_pinvoke(const ColorTween_t723277650& unmarshaled, ColorTween_t723277650_marshaled_pinvoke& marshaled);
extern "C" void ColorTween_t723277650_marshal_pinvoke_back(const ColorTween_t723277650_marshaled_pinvoke& marshaled, ColorTween_t723277650& unmarshaled);
extern "C" void ColorTween_t723277650_marshal_pinvoke_cleanup(ColorTween_t723277650_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ColorTween_t723277650;
struct ColorTween_t723277650_marshaled_com;

extern "C" void ColorTween_t723277650_marshal_com(const ColorTween_t723277650& unmarshaled, ColorTween_t723277650_marshaled_com& marshaled);
extern "C" void ColorTween_t723277650_marshal_com_back(const ColorTween_t723277650_marshaled_com& marshaled, ColorTween_t723277650& unmarshaled);
extern "C" void ColorTween_t723277650_marshal_com_cleanup(ColorTween_t723277650_marshaled_com& marshaled);
