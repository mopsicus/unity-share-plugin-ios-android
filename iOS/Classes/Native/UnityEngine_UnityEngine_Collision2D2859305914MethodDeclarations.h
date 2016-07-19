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

// UnityEngine.Collision2D
struct Collision2D_t2859305914;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t3916425411;
struct Collision2D_t2859305914_marshaled_pinvoke;
struct Collision2D_t2859305914_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void UnityEngine.Collision2D::.ctor()
extern "C"  void Collision2D__ctor_m3298468565 (Collision2D_t2859305914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collision2D::get_enabled()
extern "C"  bool Collision2D_get_enabled_m3761113681 (Collision2D_t2859305914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.Collision2D::get_rigidbody()
extern "C"  Rigidbody2D_t1743771669 * Collision2D_get_rigidbody_m4259461250 (Collision2D_t2859305914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
extern "C"  Collider2D_t1552025098 * Collision2D_get_collider_m4116040666 (Collision2D_t2859305914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
extern "C"  Transform_t1659122786 * Collision2D_get_transform_m2182628532 (Collision2D_t2859305914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C"  GameObject_t3674682005 * Collision2D_get_gameObject_m718845954 (Collision2D_t2859305914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
extern "C"  ContactPoint2DU5BU5D_t3916425411* Collision2D_get_contacts_m4248754423 (Collision2D_t2859305914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Collision2D::get_relativeVelocity()
extern "C"  Vector2_t4282066565  Collision2D_get_relativeVelocity_m2960747782 (Collision2D_t2859305914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Collision2D_t2859305914;
struct Collision2D_t2859305914_marshaled_pinvoke;

extern "C" void Collision2D_t2859305914_marshal_pinvoke(const Collision2D_t2859305914& unmarshaled, Collision2D_t2859305914_marshaled_pinvoke& marshaled);
extern "C" void Collision2D_t2859305914_marshal_pinvoke_back(const Collision2D_t2859305914_marshaled_pinvoke& marshaled, Collision2D_t2859305914& unmarshaled);
extern "C" void Collision2D_t2859305914_marshal_pinvoke_cleanup(Collision2D_t2859305914_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Collision2D_t2859305914;
struct Collision2D_t2859305914_marshaled_com;

extern "C" void Collision2D_t2859305914_marshal_com(const Collision2D_t2859305914& unmarshaled, Collision2D_t2859305914_marshaled_com& marshaled);
extern "C" void Collision2D_t2859305914_marshal_com_back(const Collision2D_t2859305914_marshaled_com& marshaled, Collision2D_t2859305914& unmarshaled);
extern "C" void Collision2D_t2859305914_marshal_com_cleanup(Collision2D_t2859305914_marshaled_com& marshaled);
