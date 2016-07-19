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

// UnityEngine.UI.Graphic
struct Graphic_t836799438;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t3950887807;
// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1317283468;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t3377436606;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Events.UnityAction
struct UnityAction_t594794173;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate2847075725.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper3377436606.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Events_UnityAction594794173.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
extern "C"  void Graphic__ctor_m4066569555 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
extern "C"  void Graphic__cctor_m1027508410 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
extern "C"  Material_t3870600107 * Graphic_get_defaultGraphicMaterial_m456140641 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
extern "C"  Color_t4194546905  Graphic_get_color_m2048831972 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
extern "C"  void Graphic_set_color_m1311501487 (Graphic_t836799438 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::get_raycastTarget()
extern "C"  bool Graphic_get_raycastTarget_m3436649332 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean)
extern "C"  void Graphic_set_raycastTarget_m639541381 (Graphic_t836799438 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::get_useLegacyMeshGeneration()
extern "C"  bool Graphic_get_useLegacyMeshGeneration_m1330224975 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_useLegacyMeshGeneration(System.Boolean)
extern "C"  void Graphic_set_useLegacyMeshGeneration_m693817504 (Graphic_t836799438 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
extern "C"  void Graphic_SetAllDirty_m2074784484 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
extern "C"  void Graphic_SetLayoutDirty_m2165278999 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
extern "C"  void Graphic_SetVerticesDirty_m2313177576 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
extern "C"  void Graphic_SetMaterialDirty_m282639610 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
extern "C"  void Graphic_OnRectTransformDimensionsChange_m1660020535 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
extern "C"  void Graphic_OnBeforeTransformParentChanged_m2612648205 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
extern "C"  void Graphic_OnTransformParentChanged_m321513902 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
extern "C"  int32_t Graphic_get_depth_m1908843203 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t972643934 * Graphic_get_rectTransform_m4017371950 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
extern "C"  Canvas_t2727140764 * Graphic_get_canvas_m4291384250 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
extern "C"  void Graphic_CacheCanvas_m512847723 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
extern "C"  CanvasRenderer_t3950887807 * Graphic_get_canvasRenderer_m184553434 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
extern "C"  Material_t3870600107 * Graphic_get_defaultMaterial_m3094002583 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
extern "C"  Material_t3870600107 * Graphic_get_material_m3381093914 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
extern "C"  void Graphic_set_material_m2202379063 (Graphic_t836799438 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
extern "C"  Material_t3870600107 * Graphic_get_materialForRendering_m1154169789 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
extern "C"  Texture_t2526458961 * Graphic_get_mainTexture_m2936700123 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
extern "C"  void Graphic_OnEnable_m1102673235 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
extern "C"  void Graphic_OnDisable_m264069178 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnCanvasHierarchyChanged()
extern "C"  void Graphic_OnCanvasHierarchyChanged_m514781447 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Graphic_Rebuild_m444579746 (Graphic_t836799438 * __this, int32_t ___update0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::LayoutComplete()
extern "C"  void Graphic_LayoutComplete_m1944323924 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::GraphicUpdateComplete()
extern "C"  void Graphic_GraphicUpdateComplete_m4174302747 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
extern "C"  void Graphic_UpdateMaterial_m1564277409 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
extern "C"  void Graphic_UpdateGeometry_m2127951660 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::DoMeshGeneration()
extern "C"  void Graphic_DoMeshGeneration_m2507046369 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::DoLegacyMeshGeneration()
extern "C"  void Graphic_DoLegacyMeshGeneration_m3761597322 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.UI.Graphic::get_workerMesh()
extern "C"  Mesh_t4241756145 * Graphic_get_workerMesh_m1691010424 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void Graphic_OnFillVBO_m316398351 (Graphic_t836799438 * __this, List_1_t1317283468 * ___vbo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnPopulateMesh(UnityEngine.Mesh)
extern "C"  void Graphic_OnPopulateMesh_m192648803 (Graphic_t836799438 * __this, Mesh_t4241756145 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C"  void Graphic_OnPopulateMesh_m3177058550 (Graphic_t836799438 * __this, VertexHelper_t3377436606 * ___vh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
extern "C"  void Graphic_OnDidApplyAnimationProperties_m3600197626 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
extern "C"  void Graphic_SetNativeSize_m2816336555 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool Graphic_Raycast_m822891196 (Graphic_t836799438 * __this, Vector2_t4282066565  ___sp0, Camera_t2727095145 * ___eventCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  Graphic_PixelAdjustPoint_m440199187 (Graphic_t836799438 * __this, Vector2_t4282066565  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
extern "C"  Rect_t4241904616  Graphic_GetPixelAdjustedRect_m517144655 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
extern "C"  void Graphic_CrossFadeColor_m3194947827 (Graphic_t836799438 * __this, Color_t4194546905  ___targetColor0, float ___duration1, bool ___ignoreTimeScale2, bool ___useAlpha3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void Graphic_CrossFadeColor_m1834346026 (Graphic_t836799438 * __this, Color_t4194546905  ___targetColor0, float ___duration1, bool ___ignoreTimeScale2, bool ___useAlpha3, bool ___useRGB4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
extern "C"  Color_t4194546905  Graphic_CreateColorFromAlpha_m3334630 (Il2CppObject * __this /* static, unused */, float ___alpha0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
extern "C"  void Graphic_CrossFadeAlpha_m157692256 (Graphic_t836799438 * __this, float ___alpha0, float ___duration1, bool ___ignoreTimeScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_RegisterDirtyLayoutCallback_m4189019746 (Graphic_t836799438 * __this, UnityAction_t594794173 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_UnregisterDirtyLayoutCallback_m856391721 (Graphic_t836799438 * __this, UnityAction_t594794173 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_RegisterDirtyVerticesCallback_m1901460593 (Graphic_t836799438 * __this, UnityAction_t594794173 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_UnregisterDirtyVerticesCallback_m3291531384 (Graphic_t836799438 * __this, UnityAction_t594794173 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_RegisterDirtyMaterialCallback_m984855455 (Graphic_t836799438 * __this, UnityAction_t594794173 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
extern "C"  void Graphic_UnregisterDirtyMaterialCallback_m2374926246 (Graphic_t836799438 * __this, UnityAction_t594794173 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m2164415202 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t1659122786 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m1663879910 (Graphic_t836799438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
