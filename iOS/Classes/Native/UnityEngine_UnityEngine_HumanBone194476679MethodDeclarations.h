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

// System.String
struct String_t;
// UnityEngine.HumanBone
struct HumanBone_t194476679;
struct HumanBone_t194476679_marshaled_pinvoke;
struct HumanBone_t194476679_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_HumanBone194476679.h"
#include "mscorlib_System_String7231557.h"

// System.String UnityEngine.HumanBone::get_boneName()
extern "C"  String_t* HumanBone_get_boneName_m4281149553 (HumanBone_t194476679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C"  void HumanBone_set_boneName_m2758161818 (HumanBone_t194476679 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C"  String_t* HumanBone_get_humanName_m1702517944 (HumanBone_t194476679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C"  void HumanBone_set_humanName_m1186126593 (HumanBone_t194476679 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct HumanBone_t194476679;
struct HumanBone_t194476679_marshaled_pinvoke;

extern "C" void HumanBone_t194476679_marshal_pinvoke(const HumanBone_t194476679& unmarshaled, HumanBone_t194476679_marshaled_pinvoke& marshaled);
extern "C" void HumanBone_t194476679_marshal_pinvoke_back(const HumanBone_t194476679_marshaled_pinvoke& marshaled, HumanBone_t194476679& unmarshaled);
extern "C" void HumanBone_t194476679_marshal_pinvoke_cleanup(HumanBone_t194476679_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct HumanBone_t194476679;
struct HumanBone_t194476679_marshaled_com;

extern "C" void HumanBone_t194476679_marshal_com(const HumanBone_t194476679& unmarshaled, HumanBone_t194476679_marshaled_com& marshaled);
extern "C" void HumanBone_t194476679_marshal_com_back(const HumanBone_t194476679_marshaled_com& marshaled, HumanBone_t194476679& unmarshaled);
extern "C" void HumanBone_t194476679_marshal_com_cleanup(HumanBone_t194476679_marshaled_com& marshaled);
