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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t3186046376;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t2290505109;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic_Cull2290505109.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
extern "C"  void MaskableGraphic__ctor_m3514233785 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::get_onCullStateChanged()
extern "C"  CullStateChangedEvent_t2290505109 * MaskableGraphic_get_onCullStateChanged_m2293098922 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_onCullStateChanged(UnityEngine.UI.MaskableGraphic/CullStateChangedEvent)
extern "C"  void MaskableGraphic_set_onCullStateChanged_m1901835143 (MaskableGraphic_t3186046376 * __this, CullStateChangedEvent_t2290505109 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.MaskableGraphic::get_maskable()
extern "C"  bool MaskableGraphic_get_maskable_m2226181992 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::set_maskable(System.Boolean)
extern "C"  void MaskableGraphic_set_maskable_m3088187909 (MaskableGraphic_t3186046376 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.MaskableGraphic::GetModifiedMaterial(UnityEngine.Material)
extern "C"  Material_t3870600107 * MaskableGraphic_GetModifiedMaterial_m2422156902 (MaskableGraphic_t3186046376 * __this, Material_t3870600107 * ___baseMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::Cull(UnityEngine.Rect,System.Boolean)
extern "C"  void MaskableGraphic_Cull_m1710243867 (MaskableGraphic_t3186046376 * __this, Rect_t4241904616  ___clipRect0, bool ___validRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::UpdateCull(System.Boolean)
extern "C"  void MaskableGraphic_UpdateCull_m3192993021 (MaskableGraphic_t3186046376 * __this, bool ___cull0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::SetClipRect(UnityEngine.Rect,System.Boolean)
extern "C"  void MaskableGraphic_SetClipRect_m3970693835 (MaskableGraphic_t3186046376 * __this, Rect_t4241904616  ___clipRect0, bool ___validRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnEnable()
extern "C"  void MaskableGraphic_OnEnable_m487460141 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnDisable()
extern "C"  void MaskableGraphic_OnDisable_m2667299744 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnTransformParentChanged()
extern "C"  void MaskableGraphic_OnTransformParentChanged_m2836893064 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::ParentMaskStateChanged()
extern "C"  void MaskableGraphic_ParentMaskStateChanged_m3501359204 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::OnCanvasHierarchyChanged()
extern "C"  void MaskableGraphic_OnCanvasHierarchyChanged_m3030160609 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.MaskableGraphic::get_rootCanvasRect()
extern "C"  Rect_t4241904616  MaskableGraphic_get_rootCanvasRect_m40685262 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::UpdateClipParent()
extern "C"  void MaskableGraphic_UpdateClipParent_m2337272942 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateClipping()
extern "C"  void MaskableGraphic_RecalculateClipping_m400162188 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskableGraphic::RecalculateMasking()
extern "C"  void MaskableGraphic_RecalculateMasking_m2250524558 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.MaskableGraphic::UnityEngine.UI.IClippable.get_rectTransform()
extern "C"  RectTransform_t972643934 * MaskableGraphic_UnityEngine_UI_IClippable_get_rectTransform_m3856601786 (MaskableGraphic_t3186046376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
