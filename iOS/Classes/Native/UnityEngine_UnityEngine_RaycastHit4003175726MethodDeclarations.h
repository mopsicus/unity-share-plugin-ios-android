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

// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.RaycastHit
struct RaycastHit_t4003175726;
struct RaycastHit_t4003175726_marshaled_pinvoke;
struct RaycastHit_t4003175726_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t4282066566  RaycastHit_get_point_m4165497838 (RaycastHit_t4003175726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C"  Vector3_t4282066566  RaycastHit_get_normal_m1346998891 (RaycastHit_t4003175726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C"  float RaycastHit_get_distance_m800944203 (RaycastHit_t4003175726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C"  Collider_t2939674232 * RaycastHit_get_collider_m3116882274 (RaycastHit_t4003175726 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RaycastHit_t4003175726;
struct RaycastHit_t4003175726_marshaled_pinvoke;

extern "C" void RaycastHit_t4003175726_marshal_pinvoke(const RaycastHit_t4003175726& unmarshaled, RaycastHit_t4003175726_marshaled_pinvoke& marshaled);
extern "C" void RaycastHit_t4003175726_marshal_pinvoke_back(const RaycastHit_t4003175726_marshaled_pinvoke& marshaled, RaycastHit_t4003175726& unmarshaled);
extern "C" void RaycastHit_t4003175726_marshal_pinvoke_cleanup(RaycastHit_t4003175726_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RaycastHit_t4003175726;
struct RaycastHit_t4003175726_marshaled_com;

extern "C" void RaycastHit_t4003175726_marshal_com(const RaycastHit_t4003175726& unmarshaled, RaycastHit_t4003175726_marshaled_com& marshaled);
extern "C" void RaycastHit_t4003175726_marshal_com_back(const RaycastHit_t4003175726_marshaled_com& marshaled, RaycastHit_t4003175726& unmarshaled);
extern "C" void RaycastHit_t4003175726_marshal_com_cleanup(RaycastHit_t4003175726_marshaled_com& marshaled);
