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

// UnityEngine.AnimationEvent
struct AnimationEvent_t3669457594;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t3071478659;
// UnityEngine.AnimationState
struct AnimationState_t3682323633;
struct AnimationEvent_t3669457594_marshaled_pinvoke;
struct AnimationEvent_t3669457594_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_SendMessageOptions3856946179.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo323110318.h"
#include "UnityEngine_UnityEngine_AnimatorClipInfo2746035113.h"

// System.Void UnityEngine.AnimationEvent::.ctor()
extern "C"  void AnimationEvent__ctor_m3893222711 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_data()
extern "C"  String_t* AnimationEvent_get_data_m2818928483 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C"  void AnimationEvent_set_data_m1709280462 (AnimationEvent_t3669457594 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C"  String_t* AnimationEvent_get_stringParameter_m774178145 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C"  void AnimationEvent_set_stringParameter_m4027163538 (AnimationEvent_t3669457594 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C"  float AnimationEvent_get_floatParameter_m585550415 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C"  void AnimationEvent_set_floatParameter_m3972419412 (AnimationEvent_t3669457594 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C"  int32_t AnimationEvent_get_intParameter_m1837369744 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C"  void AnimationEvent_set_intParameter_m1983832533 (AnimationEvent_t3669457594 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C"  Object_t3071478659 * AnimationEvent_get_objectReferenceParameter_m1449907980 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C"  void AnimationEvent_set_objectReferenceParameter_m2952903185 (AnimationEvent_t3669457594 * __this, Object_t3071478659 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C"  String_t* AnimationEvent_get_functionName_m508701692 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C"  void AnimationEvent_set_functionName_m3347976661 (AnimationEvent_t3669457594 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C"  float AnimationEvent_get_time_m4165710255 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C"  void AnimationEvent_set_time_m2746909172 (AnimationEvent_t3669457594 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C"  int32_t AnimationEvent_get_messageOptions_m501221094 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C"  void AnimationEvent_set_messageOptions_m927737387 (AnimationEvent_t3669457594 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C"  bool AnimationEvent_get_isFiredByLegacy_m1265747114 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C"  bool AnimationEvent_get_isFiredByAnimator_m877765704 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C"  AnimationState_t3682323633 * AnimationEvent_get_animationState_m2712753230 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern "C"  AnimatorStateInfo_t323110318  AnimationEvent_get_animatorStateInfo_m194903218 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern "C"  AnimatorClipInfo_t2746035113  AnimationEvent_get_animatorClipInfo_m493861262 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C"  int32_t AnimationEvent_GetHash_m2586883417 (AnimationEvent_t3669457594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimationEvent_t3669457594;
struct AnimationEvent_t3669457594_marshaled_pinvoke;

extern "C" void AnimationEvent_t3669457594_marshal_pinvoke(const AnimationEvent_t3669457594& unmarshaled, AnimationEvent_t3669457594_marshaled_pinvoke& marshaled);
extern "C" void AnimationEvent_t3669457594_marshal_pinvoke_back(const AnimationEvent_t3669457594_marshaled_pinvoke& marshaled, AnimationEvent_t3669457594& unmarshaled);
extern "C" void AnimationEvent_t3669457594_marshal_pinvoke_cleanup(AnimationEvent_t3669457594_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimationEvent_t3669457594;
struct AnimationEvent_t3669457594_marshaled_com;

extern "C" void AnimationEvent_t3669457594_marshal_com(const AnimationEvent_t3669457594& unmarshaled, AnimationEvent_t3669457594_marshaled_com& marshaled);
extern "C" void AnimationEvent_t3669457594_marshal_com_back(const AnimationEvent_t3669457594_marshaled_com& marshaled, AnimationEvent_t3669457594& unmarshaled);
extern "C" void AnimationEvent_t3669457594_marshal_com_cleanup(AnimationEvent_t3669457594_marshaled_com& marshaled);
