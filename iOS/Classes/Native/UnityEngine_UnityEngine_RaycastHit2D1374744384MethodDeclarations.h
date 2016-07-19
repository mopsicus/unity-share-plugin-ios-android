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

// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.RaycastHit2D
struct RaycastHit2D_t1374744384;
struct RaycastHit2D_t1374744384_marshaled_pinvoke;
struct RaycastHit2D_t1374744384_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit2D1374744384.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C"  Vector2_t4282066565  RaycastHit2D_get_point_m2072691227 (RaycastHit2D_t1374744384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C"  Vector2_t4282066565  RaycastHit2D_get_normal_m894503390 (RaycastHit2D_t1374744384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C"  float RaycastHit2D_get_fraction_m2313516650 (RaycastHit2D_t1374744384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C"  Collider2D_t1552025098 * RaycastHit2D_get_collider_m789902306 (RaycastHit2D_t1374744384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C"  Rigidbody2D_t1743771669 * RaycastHit2D_get_rigidbody_m1059160360 (RaycastHit2D_t1374744384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C"  Transform_t1659122786 * RaycastHit2D_get_transform_m1318597140 (RaycastHit2D_t1374744384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RaycastHit2D_t1374744384;
struct RaycastHit2D_t1374744384_marshaled_pinvoke;

extern "C" void RaycastHit2D_t1374744384_marshal_pinvoke(const RaycastHit2D_t1374744384& unmarshaled, RaycastHit2D_t1374744384_marshaled_pinvoke& marshaled);
extern "C" void RaycastHit2D_t1374744384_marshal_pinvoke_back(const RaycastHit2D_t1374744384_marshaled_pinvoke& marshaled, RaycastHit2D_t1374744384& unmarshaled);
extern "C" void RaycastHit2D_t1374744384_marshal_pinvoke_cleanup(RaycastHit2D_t1374744384_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RaycastHit2D_t1374744384;
struct RaycastHit2D_t1374744384_marshaled_com;

extern "C" void RaycastHit2D_t1374744384_marshal_com(const RaycastHit2D_t1374744384& unmarshaled, RaycastHit2D_t1374744384_marshaled_com& marshaled);
extern "C" void RaycastHit2D_t1374744384_marshal_com_back(const RaycastHit2D_t1374744384_marshaled_com& marshaled, RaycastHit2D_t1374744384& unmarshaled);
extern "C" void RaycastHit2D_t1374744384_marshal_com_cleanup(RaycastHit2D_t1374744384_marshaled_com& marshaled);
