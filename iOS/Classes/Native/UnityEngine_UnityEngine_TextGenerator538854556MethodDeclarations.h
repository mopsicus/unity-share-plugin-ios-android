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

// UnityEngine.TextGenerator
struct TextGenerator_t538854556;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t1433993036;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t1187093738;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1317283468;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t2643745119;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
struct IList_1_t2760454687;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
struct IList_1_t2513555389;
// UnityEngine.Font
struct Font_t4241557075;
// System.Object
struct Il2CppObject;
struct TextGenerator_t538854556_marshaled_pinvoke;
struct TextGenerator_t538854556_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextGenerationSettings1923005356.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Font4241557075.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_FontStyle3350479768.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode1147493927.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode2918974229.h"
#include "UnityEngine_UnityEngine_TextAnchor213922566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_TextGenerator538854556.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void UnityEngine.TextGenerator::.ctor()
extern "C"  void TextGenerator__ctor_m3994909811 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern "C"  void TextGenerator__ctor_m1563237700 (TextGenerator_t538854556 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C"  void TextGenerator_System_IDisposable_Dispose_m3586435340 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Finalize()
extern "C"  void TextGenerator_Finalize_m3211881231 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C"  TextGenerationSettings_t1923005356  TextGenerator_ValidatedSettings_m1098807955 (TextGenerator_t538854556 * __this, TextGenerationSettings_t1923005356  ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C"  void TextGenerator_Invalidate_m620450028 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C"  void TextGenerator_GetCharacters_m2483060112 (TextGenerator_t538854556 * __this, List_1_t1433993036 * ___characters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C"  void TextGenerator_GetLines_m2441503301 (TextGenerator_t538854556 * __this, List_1_t1187093738 * ___lines0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C"  void TextGenerator_GetVertices_m1097518625 (TextGenerator_t538854556 * __this, List_1_t1317283468 * ___vertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C"  float TextGenerator_GetPreferredWidth_m1618543389 (TextGenerator_t538854556 * __this, String_t* ___str0, TextGenerationSettings_t1923005356  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C"  float TextGenerator_GetPreferredHeight_m1770778044 (TextGenerator_t538854556 * __this, String_t* ___str0, TextGenerationSettings_t1923005356  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C"  bool TextGenerator_Populate_m953583418 (TextGenerator_t538854556 * __this, String_t* ___str0, TextGenerationSettings_t1923005356  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C"  bool TextGenerator_PopulateAlways_m4138837161 (TextGenerator_t538854556 * __this, String_t* ___str0, TextGenerationSettings_t1923005356  ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C"  Il2CppObject* TextGenerator_get_verts_m1179011229 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C"  Il2CppObject* TextGenerator_get_characters_m3420670449 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C"  Il2CppObject* TextGenerator_get_lines_m3197542168 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Init()
extern "C"  void TextGenerator_Init_m1881520001 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C"  void TextGenerator_Dispose_cpp_m959647828 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean,System.Boolean)
extern "C"  bool TextGenerator_Populate_Internal_m1773862789 (TextGenerator_t538854556 * __this, String_t* ___str0, Font_t4241557075 * ___font1, Color_t4194546905  ___color2, int32_t ___fontSize3, float ___scaleFactor4, float ___lineSpacing5, int32_t ___style6, bool ___richText7, bool ___resizeTextForBestFit8, int32_t ___resizeTextMinSize9, int32_t ___resizeTextMaxSize10, int32_t ___verticalOverFlow11, int32_t ___horizontalOverflow12, bool ___updateBounds13, int32_t ___anchor14, Vector2_t4282066565  ___extents15, Vector2_t4282066565  ___pivot16, bool ___generateOutOfBounds17, bool ___alignByGeometry18, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  bool TextGenerator_Populate_Internal_cpp_m3249805403 (TextGenerator_t538854556 * __this, String_t* ___str0, Font_t4241557075 * ___font1, Color_t4194546905  ___color2, int32_t ___fontSize3, float ___scaleFactor4, float ___lineSpacing5, int32_t ___style6, bool ___richText7, bool ___resizeTextForBestFit8, int32_t ___resizeTextMinSize9, int32_t ___resizeTextMaxSize10, int32_t ___verticalOverFlow11, int32_t ___horizontalOverflow12, bool ___updateBounds13, int32_t ___anchor14, float ___extentsX15, float ___extentsY16, float ___pivotX17, float ___pivotY18, bool ___generateOutOfBounds19, bool ___alignByGeometry20, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean)
extern "C"  bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2939372809 (Il2CppObject * __this /* static, unused */, TextGenerator_t538854556 * ___self0, String_t* ___str1, Font_t4241557075 * ___font2, Color_t4194546905 * ___color3, int32_t ___fontSize4, float ___scaleFactor5, float ___lineSpacing6, int32_t ___style7, bool ___richText8, bool ___resizeTextForBestFit9, int32_t ___resizeTextMinSize10, int32_t ___resizeTextMaxSize11, int32_t ___verticalOverFlow12, int32_t ___horizontalOverflow13, bool ___updateBounds14, int32_t ___anchor15, float ___extentsX16, float ___extentsY17, float ___pivotX18, float ___pivotY19, bool ___generateOutOfBounds20, bool ___alignByGeometry21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C"  Rect_t4241904616  TextGenerator_get_rectExtents_m2200526529 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
extern "C"  void TextGenerator_INTERNAL_get_rectExtents_m4152002332 (TextGenerator_t538854556 * __this, Rect_t4241904616 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C"  int32_t TextGenerator_get_vertexCount_m818659347 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C"  void TextGenerator_GetVerticesInternal_m2005679319 (TextGenerator_t538854556 * __this, Il2CppObject * ___vertices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C"  int32_t TextGenerator_get_characterCount_m1694678400 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern "C"  int32_t TextGenerator_get_characterCountVisible_m2621262708 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C"  void TextGenerator_GetCharactersInternal_m3189630150 (TextGenerator_t538854556 * __this, Il2CppObject * ___characters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C"  int32_t TextGenerator_get_lineCount_m3121044867 (TextGenerator_t538854556 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C"  void TextGenerator_GetLinesInternal_m702225117 (TextGenerator_t538854556 * __this, Il2CppObject * ___lines0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TextGenerator_t538854556;
struct TextGenerator_t538854556_marshaled_pinvoke;

extern "C" void TextGenerator_t538854556_marshal_pinvoke(const TextGenerator_t538854556& unmarshaled, TextGenerator_t538854556_marshaled_pinvoke& marshaled);
extern "C" void TextGenerator_t538854556_marshal_pinvoke_back(const TextGenerator_t538854556_marshaled_pinvoke& marshaled, TextGenerator_t538854556& unmarshaled);
extern "C" void TextGenerator_t538854556_marshal_pinvoke_cleanup(TextGenerator_t538854556_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TextGenerator_t538854556;
struct TextGenerator_t538854556_marshaled_com;

extern "C" void TextGenerator_t538854556_marshal_com(const TextGenerator_t538854556& unmarshaled, TextGenerator_t538854556_marshaled_com& marshaled);
extern "C" void TextGenerator_t538854556_marshal_com_back(const TextGenerator_t538854556_marshaled_com& marshaled, TextGenerator_t538854556& unmarshaled);
extern "C" void TextGenerator_t538854556_marshal_com_cleanup(TextGenerator_t538854556_marshaled_com& marshaled);
