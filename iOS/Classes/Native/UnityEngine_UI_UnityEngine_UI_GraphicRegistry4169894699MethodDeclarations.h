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

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t4169894699;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.UI.Graphic
struct Graphic_t836799438;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t3531446641;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Canvas2727140764.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic836799438.h"

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
extern "C"  void GraphicRegistry__ctor_m3010929046 (GraphicRegistry_t4169894699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
extern "C"  void GraphicRegistry__cctor_m2662390999 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
extern "C"  GraphicRegistry_t4169894699 * GraphicRegistry_get_instance_m2305942177 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C"  void GraphicRegistry_RegisterGraphicForCanvas_m977086278 (Il2CppObject * __this /* static, unused */, Canvas_t2727140764 * ___c0, Graphic_t836799438 * ___graphic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
extern "C"  void GraphicRegistry_UnregisterGraphicForCanvas_m707013965 (Il2CppObject * __this /* static, unused */, Canvas_t2727140764 * ___c0, Graphic_t836799438 * ___graphic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
extern "C"  Il2CppObject* GraphicRegistry_GetGraphicsForCanvas_m2740028912 (Il2CppObject * __this /* static, unused */, Canvas_t2727140764 * ___canvas0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
