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

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3762661364;
struct RaycastResult_t3762661364_marshaled_pinvoke;
struct RaycastResult_t3762661364_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastRes3762661364.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
extern "C"  GameObject_t3674682005 * RaycastResult_get_gameObject_m1138099278 (RaycastResult_t3762661364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
extern "C"  void RaycastResult_set_gameObject_m726369707 (RaycastResult_t3762661364 * __this, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
extern "C"  bool RaycastResult_get_isValid_m3098154392 (RaycastResult_t3762661364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycastResult::Clear()
extern "C"  void RaycastResult_Clear_m2117708874 (RaycastResult_t3762661364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.RaycastResult::ToString()
extern "C"  String_t* RaycastResult_ToString_m2924263764 (RaycastResult_t3762661364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RaycastResult_t3762661364;
struct RaycastResult_t3762661364_marshaled_pinvoke;

extern "C" void RaycastResult_t3762661364_marshal_pinvoke(const RaycastResult_t3762661364& unmarshaled, RaycastResult_t3762661364_marshaled_pinvoke& marshaled);
extern "C" void RaycastResult_t3762661364_marshal_pinvoke_back(const RaycastResult_t3762661364_marshaled_pinvoke& marshaled, RaycastResult_t3762661364& unmarshaled);
extern "C" void RaycastResult_t3762661364_marshal_pinvoke_cleanup(RaycastResult_t3762661364_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RaycastResult_t3762661364;
struct RaycastResult_t3762661364_marshaled_com;

extern "C" void RaycastResult_t3762661364_marshal_com(const RaycastResult_t3762661364& unmarshaled, RaycastResult_t3762661364_marshaled_com& marshaled);
extern "C" void RaycastResult_t3762661364_marshal_com_back(const RaycastResult_t3762661364_marshaled_com& marshaled, RaycastResult_t3762661364& unmarshaled);
extern "C" void RaycastResult_t3762661364_marshal_com_cleanup(RaycastResult_t3762661364_marshaled_com& marshaled);
