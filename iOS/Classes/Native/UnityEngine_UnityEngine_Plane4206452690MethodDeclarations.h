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

// UnityEngine.Plane
struct Plane_t4206452690;
struct Plane_t4206452690_marshaled_pinvoke;
struct Plane_t4206452690_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Plane4206452690.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Ray3134616544.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Plane__ctor_m2201046863 (Plane_t4206452690 * __this, Vector3_t4282066566  ___inNormal0, Vector3_t4282066566  ___inPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C"  Vector3_t4282066566  Plane_get_normal_m3534129213 (Plane_t4206452690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
extern "C"  float Plane_get_distance_m2612484153 (Plane_t4206452690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C"  bool Plane_Raycast_m2829769106 (Plane_t4206452690 * __this, Ray_t3134616544  ___ray0, float* ___enter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Plane_t4206452690;
struct Plane_t4206452690_marshaled_pinvoke;

extern "C" void Plane_t4206452690_marshal_pinvoke(const Plane_t4206452690& unmarshaled, Plane_t4206452690_marshaled_pinvoke& marshaled);
extern "C" void Plane_t4206452690_marshal_pinvoke_back(const Plane_t4206452690_marshaled_pinvoke& marshaled, Plane_t4206452690& unmarshaled);
extern "C" void Plane_t4206452690_marshal_pinvoke_cleanup(Plane_t4206452690_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Plane_t4206452690;
struct Plane_t4206452690_marshaled_com;

extern "C" void Plane_t4206452690_marshal_com(const Plane_t4206452690& unmarshaled, Plane_t4206452690_marshaled_com& marshaled);
extern "C" void Plane_t4206452690_marshal_com_back(const Plane_t4206452690_marshaled_com& marshaled, Plane_t4206452690& unmarshaled);
extern "C" void Plane_t4206452690_marshal_com_cleanup(Plane_t4206452690_marshaled_com& marshaled);
