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

// UnityEngine.Collision
struct Collision_t2494107688;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.Collider
struct Collider_t2939674232;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t715040733;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Component
struct Component_t3501516275;
struct Collision_t2494107688_marshaled_pinvoke;
struct Collision_t2494107688_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void UnityEngine.Collision::.ctor()
extern "C"  void Collision__ctor_m183727591 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
extern "C"  Vector3_t4282066566  Collision_get_relativeVelocity_m1067992885 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collision::get_rigidbody()
extern "C"  Rigidbody_t3346577219 * Collision_get_rigidbody_m1973745126 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
extern "C"  Collider_t2939674232 * Collision_get_collider_m1325344374 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Collision::get_transform()
extern "C"  Transform_t1659122786 * Collision_get_transform_m3247945030 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern "C"  GameObject_t3674682005 * Collision_get_gameObject_m4245316464 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
extern "C"  ContactPointU5BU5D_t715040733* Collision_get_contacts_m658316947 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Collision::GetEnumerator()
extern "C"  Il2CppObject * Collision_GetEnumerator_m218695993 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_impulse()
extern "C"  Vector3_t4282066566  Collision_get_impulse_m2182857643 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_impactForceSum()
extern "C"  Vector3_t4282066566  Collision_get_impactForceSum_m3741050290 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_frictionForceSum()
extern "C"  Vector3_t4282066566  Collision_get_frictionForceSum_m3009900454 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Collision::get_other()
extern "C"  Component_t3501516275 * Collision_get_other_m541712697 (Collision_t2494107688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Collision_t2494107688;
struct Collision_t2494107688_marshaled_pinvoke;

extern "C" void Collision_t2494107688_marshal_pinvoke(const Collision_t2494107688& unmarshaled, Collision_t2494107688_marshaled_pinvoke& marshaled);
extern "C" void Collision_t2494107688_marshal_pinvoke_back(const Collision_t2494107688_marshaled_pinvoke& marshaled, Collision_t2494107688& unmarshaled);
extern "C" void Collision_t2494107688_marshal_pinvoke_cleanup(Collision_t2494107688_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Collision_t2494107688;
struct Collision_t2494107688_marshaled_com;

extern "C" void Collision_t2494107688_marshal_com(const Collision_t2494107688& unmarshaled, Collision_t2494107688_marshaled_com& marshaled);
extern "C" void Collision_t2494107688_marshal_com_back(const Collision_t2494107688_marshaled_com& marshaled, Collision_t2494107688& unmarshaled);
extern "C" void Collision_t2494107688_marshal_com_cleanup(Collision_t2494107688_marshaled_com& marshaled);
