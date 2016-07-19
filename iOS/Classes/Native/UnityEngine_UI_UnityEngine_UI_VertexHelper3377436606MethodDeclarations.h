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

// UnityEngine.UI.VertexHelper
struct VertexHelper_t3377436606;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1796391381;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1317283468;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UnityEngine_UIVertex4244065212.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

// System.Void UnityEngine.UI.VertexHelper::.ctor()
extern "C"  void VertexHelper__ctor_m3006260889 (VertexHelper_t3377436606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
extern "C"  void VertexHelper__ctor_m4240166773 (VertexHelper_t3377436606 * __this, Mesh_t4241756145 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.cctor()
extern "C"  void VertexHelper__cctor_m2517678132 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C"  void VertexHelper_Clear_m412394180 (VertexHelper_t3377436606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C"  int32_t VertexHelper_get_currentVertCount_m3425330353 (VertexHelper_t3377436606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentIndexCount()
extern "C"  int32_t VertexHelper_get_currentIndexCount_m3847254668 (VertexHelper_t3377436606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
extern "C"  void VertexHelper_PopulateUIVertex_m910319817 (VertexHelper_t3377436606 * __this, UIVertex_t4244065212 * ___vertex0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
extern "C"  void VertexHelper_SetUIVertex_m3429482805 (VertexHelper_t3377436606 * __this, UIVertex_t4244065212  ___vertex0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
extern "C"  void VertexHelper_FillMesh_m2371101047 (VertexHelper_t3377436606 * __this, Mesh_t4241756145 * ___mesh0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Dispose()
extern "C"  void VertexHelper_Dispose_m2696974486 (VertexHelper_t3377436606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C"  void VertexHelper_AddVert_m1784639198 (VertexHelper_t3377436606 * __this, Vector3_t4282066566  ___position0, Color32_t598853688  ___color1, Vector2_t4282066565  ___uv02, Vector2_t4282066565  ___uv13, Vector3_t4282066566  ___normal4, Vector4_t4282066567  ___tangent5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2)
extern "C"  void VertexHelper_AddVert_m1490065189 (VertexHelper_t3377436606 * __this, Vector3_t4282066566  ___position0, Color32_t598853688  ___color1, Vector2_t4282066565  ___uv02, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
extern "C"  void VertexHelper_AddVert_m1127238042 (VertexHelper_t3377436606 * __this, UIVertex_t4244065212  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C"  void VertexHelper_AddTriangle_m514578993 (VertexHelper_t3377436606 * __this, int32_t ___idx00, int32_t ___idx11, int32_t ___idx22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C"  void VertexHelper_AddUIVertexQuad_m765809318 (VertexHelper_t3377436606 * __this, UIVertexU5BU5D_t1796391381* ___verts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void VertexHelper_AddUIVertexStream_m1704624332 (VertexHelper_t3377436606 * __this, List_1_t1317283468 * ___verts0, List_1_t2522024052 * ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_AddUIVertexTriangleStream_m1263262953 (VertexHelper_t3377436606 * __this, List_1_t1317283468 * ___verts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void VertexHelper_GetUIVertexStream_m1078623420 (VertexHelper_t3377436606 * __this, List_1_t1317283468 * ___stream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
