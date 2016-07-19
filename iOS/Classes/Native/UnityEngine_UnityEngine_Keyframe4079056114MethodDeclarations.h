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

// UnityEngine.Keyframe
struct Keyframe_t4079056114;
struct Keyframe_t4079056114_marshaled_pinvoke;
struct Keyframe_t4079056114_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe4079056114.h"

// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
extern "C"  void Keyframe__ctor_m2655645489 (Keyframe_t4079056114 * __this, float ___time0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Keyframe__ctor_m3412708539 (Keyframe_t4079056114 * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Keyframe::get_time()
extern "C"  float Keyframe_get_time_m1367974951 (Keyframe_t4079056114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_time(System.Single)
extern "C"  void Keyframe_set_time_m2674731900 (Keyframe_t4079056114 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Keyframe::get_value()
extern "C"  float Keyframe_get_value_m1003136441 (Keyframe_t4079056114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_value(System.Single)
extern "C"  void Keyframe_set_value_m2735107322 (Keyframe_t4079056114 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Keyframe::get_inTangent()
extern "C"  float Keyframe_get_inTangent_m2236973672 (Keyframe_t4079056114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
extern "C"  void Keyframe_set_inTangent_m1264152747 (Keyframe_t4079056114 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Keyframe::get_outTangent()
extern "C"  float Keyframe_get_outTangent_m2520753969 (Keyframe_t4079056114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
extern "C"  void Keyframe_set_outTangent_m4071134898 (Keyframe_t4079056114 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Keyframe::get_tangentMode()
extern "C"  int32_t Keyframe_get_tangentMode_m1245220572 (Keyframe_t4079056114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_tangentMode(System.Int32)
extern "C"  void Keyframe_set_tangentMode_m2444824761 (Keyframe_t4079056114 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Keyframe_t4079056114;
struct Keyframe_t4079056114_marshaled_pinvoke;

extern "C" void Keyframe_t4079056114_marshal_pinvoke(const Keyframe_t4079056114& unmarshaled, Keyframe_t4079056114_marshaled_pinvoke& marshaled);
extern "C" void Keyframe_t4079056114_marshal_pinvoke_back(const Keyframe_t4079056114_marshaled_pinvoke& marshaled, Keyframe_t4079056114& unmarshaled);
extern "C" void Keyframe_t4079056114_marshal_pinvoke_cleanup(Keyframe_t4079056114_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Keyframe_t4079056114;
struct Keyframe_t4079056114_marshaled_com;

extern "C" void Keyframe_t4079056114_marshal_com(const Keyframe_t4079056114& unmarshaled, Keyframe_t4079056114_marshaled_com& marshaled);
extern "C" void Keyframe_t4079056114_marshal_com_back(const Keyframe_t4079056114_marshaled_com& marshaled, Keyframe_t4079056114& unmarshaled);
extern "C" void Keyframe_t4079056114_marshal_com_cleanup(Keyframe_t4079056114_marshaled_com& marshaled);
