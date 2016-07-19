#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t1923005356;
struct TextGenerationSettings_t1923005356_marshaled_pinvoke;
struct TextGenerationSettings_t1923005356_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings1923005356.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern "C"  bool TextGenerationSettings_CompareColors_m2801108564 (TextGenerationSettings_t1923005356 * __this, Color_t4194546905  ___left0, Color_t4194546905  ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool TextGenerationSettings_CompareVector2_m332687775 (TextGenerationSettings_t1923005356 * __this, Vector2_t4282066565  ___left0, Vector2_t4282066565  ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern "C"  bool TextGenerationSettings_Equals_m3950599493 (TextGenerationSettings_t1923005356 * __this, TextGenerationSettings_t1923005356  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TextGenerationSettings_t1923005356;
struct TextGenerationSettings_t1923005356_marshaled_pinvoke;

extern "C" void TextGenerationSettings_t1923005356_marshal_pinvoke(const TextGenerationSettings_t1923005356& unmarshaled, TextGenerationSettings_t1923005356_marshaled_pinvoke& marshaled);
extern "C" void TextGenerationSettings_t1923005356_marshal_pinvoke_back(const TextGenerationSettings_t1923005356_marshaled_pinvoke& marshaled, TextGenerationSettings_t1923005356& unmarshaled);
extern "C" void TextGenerationSettings_t1923005356_marshal_pinvoke_cleanup(TextGenerationSettings_t1923005356_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TextGenerationSettings_t1923005356;
struct TextGenerationSettings_t1923005356_marshaled_com;

extern "C" void TextGenerationSettings_t1923005356_marshal_com(const TextGenerationSettings_t1923005356& unmarshaled, TextGenerationSettings_t1923005356_marshaled_com& marshaled);
extern "C" void TextGenerationSettings_t1923005356_marshal_com_back(const TextGenerationSettings_t1923005356_marshaled_com& marshaled, TextGenerationSettings_t1923005356& unmarshaled);
extern "C" void TextGenerationSettings_t1923005356_marshal_com_cleanup(TextGenerationSettings_t1923005356_marshaled_com& marshaled);
