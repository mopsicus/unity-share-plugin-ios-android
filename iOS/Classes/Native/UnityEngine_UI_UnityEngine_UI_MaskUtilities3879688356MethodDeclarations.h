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

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t3879688356;
// UnityEngine.Component
struct Component_t3501516275;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3357079374;
// UnityEngine.UI.IClippable
struct IClippable_t502791197;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t430297630;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UI_UnityEngine_UI_RectMask2D3357079374.h"

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C"  void MaskUtilities__ctor_m1166009725 (MaskUtilities_t3879688356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_Notify2DMaskStateChanged_m2199550555 (Il2CppObject * __this /* static, unused */, Component_t3501516275 * ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C"  void MaskUtilities_NotifyStencilStateChanged_m2159873435 (Il2CppObject * __this /* static, unused */, Component_t3501516275 * ___mask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C"  Transform_t1659122786 * MaskUtilities_FindRootSortOverrideCanvas_m4219954651 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  int32_t MaskUtilities_GetStencilDepth_m2786493988 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, Transform_t1659122786 * ___stopAfter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C"  RectMask2D_t3357079374 * MaskUtilities_GetRectMaskForClippable_m396614586 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___transform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C"  void MaskUtilities_GetRectMasksForClip_m447525417 (Il2CppObject * __this /* static, unused */, RectMask2D_t3357079374 * ___clipper0, List_1_t430297630 * ___masks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
