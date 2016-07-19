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

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t344600729;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_DateTime4283661327.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C"  void Achievement__ctor_m377036415 (Achievement_t344600729 * __this, String_t* ___id0, double ___percentCompleted1, bool ___completed2, bool ___hidden3, DateTime_t4283661327  ___lastReportedDate4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C"  void Achievement__ctor_m2960680429 (Achievement_t344600729 * __this, String_t* ___id0, double ___percent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C"  void Achievement__ctor_m3345265521 (Achievement_t344600729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern "C"  String_t* Achievement_ToString_m2974157186 (Achievement_t344600729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C"  String_t* Achievement_get_id_m1680539866 (Achievement_t344600729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C"  void Achievement_set_id_m3123429815 (Achievement_t344600729 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C"  double Achievement_get_percentCompleted_m2492759109 (Achievement_t344600729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C"  void Achievement_set_percentCompleted_m1005987436 (Achievement_t344600729 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C"  bool Achievement_get_completed_m3689853355 (Achievement_t344600729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C"  bool Achievement_get_hidden_m2954555244 (Achievement_t344600729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C"  DateTime_t4283661327  Achievement_get_lastReportedDate_m445111052 (Achievement_t344600729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
