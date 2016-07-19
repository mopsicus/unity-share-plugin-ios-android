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

// UnityEngine.UI.Mask
struct Mask_t8826680;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.Graphic
struct Graphic_t836799438;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Material
struct Material_t3870600107;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"

// System.Void UnityEngine.UI.Mask::.ctor()
extern "C"  void Mask__ctor_m3917673311 (Mask_t8826680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
extern "C"  RectTransform_t972643934 * Mask_get_rectTransform_m950047934 (Mask_t8826680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
extern "C"  bool Mask_get_showMaskGraphic_m2608629537 (Mask_t8826680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
extern "C"  void Mask_set_showMaskGraphic_m218433430 (Mask_t8826680 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
extern "C"  Graphic_t836799438 * Mask_get_graphic_m2101144526 (Mask_t8826680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
extern "C"  bool Mask_MaskEnabled_m1398570944 (Mask_t8826680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
extern "C"  void Mask_OnSiblingGraphicEnabledDisabled_m1780324373 (Mask_t8826680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
extern "C"  void Mask_OnEnable_m2035884999 (Mask_t8826680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
extern "C"  void Mask_OnDisable_m3423830086 (Mask_t8826680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool Mask_IsRaycastLocationValid_m4053137295 (Mask_t8826680 * __this, Vector2_t4282066565  ___sp0, Camera_t2727095145 * ___eventCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
extern "C"  Material_t3870600107 * Mask_GetModifiedMaterial_m3826173342 (Mask_t8826680 * __this, Material_t3870600107 * ___baseMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
