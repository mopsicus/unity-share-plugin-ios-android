#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t1858258760;
// System.Char[]
struct CharU5BU5D_t3324145743;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Graphic
struct Graphic_t836799438;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3081690246;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2697516943;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t3952708057;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1796391381;
// UnityEngine.TextGenerator
struct TextGenerator_t538854556;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t3950887807;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Coroutine
struct Coroutine_t3621161934;
// UnityEngine.Event
struct Event_t4196595728;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UI_UnityEngine_UI_Selectable1885181538.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentTy2662964855.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType1602890312.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType2604324130.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType2016592042.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterV737650598.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t609046876  : public Selectable_t1885181538
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t1858258760 * ___m_Keyboard_19;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t9039225 * ___m_TextComponent_21;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t836799438 * ___m_Placeholder_22;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_23;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_24;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_25;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_26;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_27;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_28;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_29;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_30;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3081690246 * ___m_OnEndEdit_31;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2697516943 * ___m_OnValueChanged_32;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t3952708057 * ___m_OnValidateInput_33;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t4194546905  ___m_CaretColor_34;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t4194546905  ___m_SelectionColor_36;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_37;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_39;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_42;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t972643934 * ___caretRectTrans_43;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1796391381* ___m_CursorVerts_44;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t538854556 * ___m_InputTextCache_45;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t3950887807 * ___m_CachedInputRenderer_46;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_47;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t4241756145 * ___m_Mesh_48;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_49;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_50;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_51;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_52;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_53;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3621161934 * ___m_BlinkCoroutine_54;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_56;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3621161934 * ___m_DragCoroutine_58;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_59;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_60;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_61;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t4196595728 * ___m_ProcessingEvent_62;

public:
	inline static int32_t get_offset_of_m_Keyboard_19() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_Keyboard_19)); }
	inline TouchScreenKeyboard_t1858258760 * get_m_Keyboard_19() const { return ___m_Keyboard_19; }
	inline TouchScreenKeyboard_t1858258760 ** get_address_of_m_Keyboard_19() { return &___m_Keyboard_19; }
	inline void set_m_Keyboard_19(TouchScreenKeyboard_t1858258760 * value)
	{
		___m_Keyboard_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_Keyboard_19, value);
	}

	inline static int32_t get_offset_of_m_TextComponent_21() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_TextComponent_21)); }
	inline Text_t9039225 * get_m_TextComponent_21() const { return ___m_TextComponent_21; }
	inline Text_t9039225 ** get_address_of_m_TextComponent_21() { return &___m_TextComponent_21; }
	inline void set_m_TextComponent_21(Text_t9039225 * value)
	{
		___m_TextComponent_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_21, value);
	}

	inline static int32_t get_offset_of_m_Placeholder_22() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_Placeholder_22)); }
	inline Graphic_t836799438 * get_m_Placeholder_22() const { return ___m_Placeholder_22; }
	inline Graphic_t836799438 ** get_address_of_m_Placeholder_22() { return &___m_Placeholder_22; }
	inline void set_m_Placeholder_22(Graphic_t836799438 * value)
	{
		___m_Placeholder_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_Placeholder_22, value);
	}

	inline static int32_t get_offset_of_m_ContentType_23() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_ContentType_23)); }
	inline int32_t get_m_ContentType_23() const { return ___m_ContentType_23; }
	inline int32_t* get_address_of_m_ContentType_23() { return &___m_ContentType_23; }
	inline void set_m_ContentType_23(int32_t value)
	{
		___m_ContentType_23 = value;
	}

	inline static int32_t get_offset_of_m_InputType_24() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_InputType_24)); }
	inline int32_t get_m_InputType_24() const { return ___m_InputType_24; }
	inline int32_t* get_address_of_m_InputType_24() { return &___m_InputType_24; }
	inline void set_m_InputType_24(int32_t value)
	{
		___m_InputType_24 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_25() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_AsteriskChar_25)); }
	inline Il2CppChar get_m_AsteriskChar_25() const { return ___m_AsteriskChar_25; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_25() { return &___m_AsteriskChar_25; }
	inline void set_m_AsteriskChar_25(Il2CppChar value)
	{
		___m_AsteriskChar_25 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_26() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_KeyboardType_26)); }
	inline int32_t get_m_KeyboardType_26() const { return ___m_KeyboardType_26; }
	inline int32_t* get_address_of_m_KeyboardType_26() { return &___m_KeyboardType_26; }
	inline void set_m_KeyboardType_26(int32_t value)
	{
		___m_KeyboardType_26 = value;
	}

	inline static int32_t get_offset_of_m_LineType_27() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_LineType_27)); }
	inline int32_t get_m_LineType_27() const { return ___m_LineType_27; }
	inline int32_t* get_address_of_m_LineType_27() { return &___m_LineType_27; }
	inline void set_m_LineType_27(int32_t value)
	{
		___m_LineType_27 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_28() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_HideMobileInput_28)); }
	inline bool get_m_HideMobileInput_28() const { return ___m_HideMobileInput_28; }
	inline bool* get_address_of_m_HideMobileInput_28() { return &___m_HideMobileInput_28; }
	inline void set_m_HideMobileInput_28(bool value)
	{
		___m_HideMobileInput_28 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_29() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CharacterValidation_29)); }
	inline int32_t get_m_CharacterValidation_29() const { return ___m_CharacterValidation_29; }
	inline int32_t* get_address_of_m_CharacterValidation_29() { return &___m_CharacterValidation_29; }
	inline void set_m_CharacterValidation_29(int32_t value)
	{
		___m_CharacterValidation_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_30() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CharacterLimit_30)); }
	inline int32_t get_m_CharacterLimit_30() const { return ___m_CharacterLimit_30; }
	inline int32_t* get_address_of_m_CharacterLimit_30() { return &___m_CharacterLimit_30; }
	inline void set_m_CharacterLimit_30(int32_t value)
	{
		___m_CharacterLimit_30 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_31() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_OnEndEdit_31)); }
	inline SubmitEvent_t3081690246 * get_m_OnEndEdit_31() const { return ___m_OnEndEdit_31; }
	inline SubmitEvent_t3081690246 ** get_address_of_m_OnEndEdit_31() { return &___m_OnEndEdit_31; }
	inline void set_m_OnEndEdit_31(SubmitEvent_t3081690246 * value)
	{
		___m_OnEndEdit_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnEndEdit_31, value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_32() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_OnValueChanged_32)); }
	inline OnChangeEvent_t2697516943 * get_m_OnValueChanged_32() const { return ___m_OnValueChanged_32; }
	inline OnChangeEvent_t2697516943 ** get_address_of_m_OnValueChanged_32() { return &___m_OnValueChanged_32; }
	inline void set_m_OnValueChanged_32(OnChangeEvent_t2697516943 * value)
	{
		___m_OnValueChanged_32 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValueChanged_32, value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_33() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_OnValidateInput_33)); }
	inline OnValidateInput_t3952708057 * get_m_OnValidateInput_33() const { return ___m_OnValidateInput_33; }
	inline OnValidateInput_t3952708057 ** get_address_of_m_OnValidateInput_33() { return &___m_OnValidateInput_33; }
	inline void set_m_OnValidateInput_33(OnValidateInput_t3952708057 * value)
	{
		___m_OnValidateInput_33 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValidateInput_33, value);
	}

	inline static int32_t get_offset_of_m_CaretColor_34() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CaretColor_34)); }
	inline Color_t4194546905  get_m_CaretColor_34() const { return ___m_CaretColor_34; }
	inline Color_t4194546905 * get_address_of_m_CaretColor_34() { return &___m_CaretColor_34; }
	inline void set_m_CaretColor_34(Color_t4194546905  value)
	{
		___m_CaretColor_34 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_35() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CustomCaretColor_35)); }
	inline bool get_m_CustomCaretColor_35() const { return ___m_CustomCaretColor_35; }
	inline bool* get_address_of_m_CustomCaretColor_35() { return &___m_CustomCaretColor_35; }
	inline void set_m_CustomCaretColor_35(bool value)
	{
		___m_CustomCaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_36() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_SelectionColor_36)); }
	inline Color_t4194546905  get_m_SelectionColor_36() const { return ___m_SelectionColor_36; }
	inline Color_t4194546905 * get_address_of_m_SelectionColor_36() { return &___m_SelectionColor_36; }
	inline void set_m_SelectionColor_36(Color_t4194546905  value)
	{
		___m_SelectionColor_36 = value;
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_37, value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_38() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CaretBlinkRate_38)); }
	inline float get_m_CaretBlinkRate_38() const { return ___m_CaretBlinkRate_38; }
	inline float* get_address_of_m_CaretBlinkRate_38() { return &___m_CaretBlinkRate_38; }
	inline void set_m_CaretBlinkRate_38(float value)
	{
		___m_CaretBlinkRate_38 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_39() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CaretWidth_39)); }
	inline int32_t get_m_CaretWidth_39() const { return ___m_CaretWidth_39; }
	inline int32_t* get_address_of_m_CaretWidth_39() { return &___m_CaretWidth_39; }
	inline void set_m_CaretWidth_39(int32_t value)
	{
		___m_CaretWidth_39 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_40() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_ReadOnly_40)); }
	inline bool get_m_ReadOnly_40() const { return ___m_ReadOnly_40; }
	inline bool* get_address_of_m_ReadOnly_40() { return &___m_ReadOnly_40; }
	inline void set_m_ReadOnly_40(bool value)
	{
		___m_ReadOnly_40 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_41() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CaretPosition_41)); }
	inline int32_t get_m_CaretPosition_41() const { return ___m_CaretPosition_41; }
	inline int32_t* get_address_of_m_CaretPosition_41() { return &___m_CaretPosition_41; }
	inline void set_m_CaretPosition_41(int32_t value)
	{
		___m_CaretPosition_41 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_42() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CaretSelectPosition_42)); }
	inline int32_t get_m_CaretSelectPosition_42() const { return ___m_CaretSelectPosition_42; }
	inline int32_t* get_address_of_m_CaretSelectPosition_42() { return &___m_CaretSelectPosition_42; }
	inline void set_m_CaretSelectPosition_42(int32_t value)
	{
		___m_CaretSelectPosition_42 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_43() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___caretRectTrans_43)); }
	inline RectTransform_t972643934 * get_caretRectTrans_43() const { return ___caretRectTrans_43; }
	inline RectTransform_t972643934 ** get_address_of_caretRectTrans_43() { return &___caretRectTrans_43; }
	inline void set_caretRectTrans_43(RectTransform_t972643934 * value)
	{
		___caretRectTrans_43 = value;
		Il2CppCodeGenWriteBarrier(&___caretRectTrans_43, value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_44() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CursorVerts_44)); }
	inline UIVertexU5BU5D_t1796391381* get_m_CursorVerts_44() const { return ___m_CursorVerts_44; }
	inline UIVertexU5BU5D_t1796391381** get_address_of_m_CursorVerts_44() { return &___m_CursorVerts_44; }
	inline void set_m_CursorVerts_44(UIVertexU5BU5D_t1796391381* value)
	{
		___m_CursorVerts_44 = value;
		Il2CppCodeGenWriteBarrier(&___m_CursorVerts_44, value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_45() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_InputTextCache_45)); }
	inline TextGenerator_t538854556 * get_m_InputTextCache_45() const { return ___m_InputTextCache_45; }
	inline TextGenerator_t538854556 ** get_address_of_m_InputTextCache_45() { return &___m_InputTextCache_45; }
	inline void set_m_InputTextCache_45(TextGenerator_t538854556 * value)
	{
		___m_InputTextCache_45 = value;
		Il2CppCodeGenWriteBarrier(&___m_InputTextCache_45, value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_46() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CachedInputRenderer_46)); }
	inline CanvasRenderer_t3950887807 * get_m_CachedInputRenderer_46() const { return ___m_CachedInputRenderer_46; }
	inline CanvasRenderer_t3950887807 ** get_address_of_m_CachedInputRenderer_46() { return &___m_CachedInputRenderer_46; }
	inline void set_m_CachedInputRenderer_46(CanvasRenderer_t3950887807 * value)
	{
		___m_CachedInputRenderer_46 = value;
		Il2CppCodeGenWriteBarrier(&___m_CachedInputRenderer_46, value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_47() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_PreventFontCallback_47)); }
	inline bool get_m_PreventFontCallback_47() const { return ___m_PreventFontCallback_47; }
	inline bool* get_address_of_m_PreventFontCallback_47() { return &___m_PreventFontCallback_47; }
	inline void set_m_PreventFontCallback_47(bool value)
	{
		___m_PreventFontCallback_47 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_48() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_Mesh_48)); }
	inline Mesh_t4241756145 * get_m_Mesh_48() const { return ___m_Mesh_48; }
	inline Mesh_t4241756145 ** get_address_of_m_Mesh_48() { return &___m_Mesh_48; }
	inline void set_m_Mesh_48(Mesh_t4241756145 * value)
	{
		___m_Mesh_48 = value;
		Il2CppCodeGenWriteBarrier(&___m_Mesh_48, value);
	}

	inline static int32_t get_offset_of_m_AllowInput_49() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_AllowInput_49)); }
	inline bool get_m_AllowInput_49() const { return ___m_AllowInput_49; }
	inline bool* get_address_of_m_AllowInput_49() { return &___m_AllowInput_49; }
	inline void set_m_AllowInput_49(bool value)
	{
		___m_AllowInput_49 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_50() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_ShouldActivateNextUpdate_50)); }
	inline bool get_m_ShouldActivateNextUpdate_50() const { return ___m_ShouldActivateNextUpdate_50; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_50() { return &___m_ShouldActivateNextUpdate_50; }
	inline void set_m_ShouldActivateNextUpdate_50(bool value)
	{
		___m_ShouldActivateNextUpdate_50 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_51() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_UpdateDrag_51)); }
	inline bool get_m_UpdateDrag_51() const { return ___m_UpdateDrag_51; }
	inline bool* get_address_of_m_UpdateDrag_51() { return &___m_UpdateDrag_51; }
	inline void set_m_UpdateDrag_51(bool value)
	{
		___m_UpdateDrag_51 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_52() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_DragPositionOutOfBounds_52)); }
	inline bool get_m_DragPositionOutOfBounds_52() const { return ___m_DragPositionOutOfBounds_52; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_52() { return &___m_DragPositionOutOfBounds_52; }
	inline void set_m_DragPositionOutOfBounds_52(bool value)
	{
		___m_DragPositionOutOfBounds_52 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_53() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_CaretVisible_53)); }
	inline bool get_m_CaretVisible_53() const { return ___m_CaretVisible_53; }
	inline bool* get_address_of_m_CaretVisible_53() { return &___m_CaretVisible_53; }
	inline void set_m_CaretVisible_53(bool value)
	{
		___m_CaretVisible_53 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_54() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_BlinkCoroutine_54)); }
	inline Coroutine_t3621161934 * get_m_BlinkCoroutine_54() const { return ___m_BlinkCoroutine_54; }
	inline Coroutine_t3621161934 ** get_address_of_m_BlinkCoroutine_54() { return &___m_BlinkCoroutine_54; }
	inline void set_m_BlinkCoroutine_54(Coroutine_t3621161934 * value)
	{
		___m_BlinkCoroutine_54 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlinkCoroutine_54, value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_55() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_BlinkStartTime_55)); }
	inline float get_m_BlinkStartTime_55() const { return ___m_BlinkStartTime_55; }
	inline float* get_address_of_m_BlinkStartTime_55() { return &___m_BlinkStartTime_55; }
	inline void set_m_BlinkStartTime_55(float value)
	{
		___m_BlinkStartTime_55 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_56() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_DrawStart_56)); }
	inline int32_t get_m_DrawStart_56() const { return ___m_DrawStart_56; }
	inline int32_t* get_address_of_m_DrawStart_56() { return &___m_DrawStart_56; }
	inline void set_m_DrawStart_56(int32_t value)
	{
		___m_DrawStart_56 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_57() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_DrawEnd_57)); }
	inline int32_t get_m_DrawEnd_57() const { return ___m_DrawEnd_57; }
	inline int32_t* get_address_of_m_DrawEnd_57() { return &___m_DrawEnd_57; }
	inline void set_m_DrawEnd_57(int32_t value)
	{
		___m_DrawEnd_57 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_DragCoroutine_58)); }
	inline Coroutine_t3621161934 * get_m_DragCoroutine_58() const { return ___m_DragCoroutine_58; }
	inline Coroutine_t3621161934 ** get_address_of_m_DragCoroutine_58() { return &___m_DragCoroutine_58; }
	inline void set_m_DragCoroutine_58(Coroutine_t3621161934 * value)
	{
		___m_DragCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier(&___m_DragCoroutine_58, value);
	}

	inline static int32_t get_offset_of_m_OriginalText_59() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_OriginalText_59)); }
	inline String_t* get_m_OriginalText_59() const { return ___m_OriginalText_59; }
	inline String_t** get_address_of_m_OriginalText_59() { return &___m_OriginalText_59; }
	inline void set_m_OriginalText_59(String_t* value)
	{
		___m_OriginalText_59 = value;
		Il2CppCodeGenWriteBarrier(&___m_OriginalText_59, value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_60() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_WasCanceled_60)); }
	inline bool get_m_WasCanceled_60() const { return ___m_WasCanceled_60; }
	inline bool* get_address_of_m_WasCanceled_60() { return &___m_WasCanceled_60; }
	inline void set_m_WasCanceled_60(bool value)
	{
		___m_WasCanceled_60 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_61() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_HasDoneFocusTransition_61)); }
	inline bool get_m_HasDoneFocusTransition_61() const { return ___m_HasDoneFocusTransition_61; }
	inline bool* get_address_of_m_HasDoneFocusTransition_61() { return &___m_HasDoneFocusTransition_61; }
	inline void set_m_HasDoneFocusTransition_61(bool value)
	{
		___m_HasDoneFocusTransition_61 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_62() { return static_cast<int32_t>(offsetof(InputField_t609046876, ___m_ProcessingEvent_62)); }
	inline Event_t4196595728 * get_m_ProcessingEvent_62() const { return ___m_ProcessingEvent_62; }
	inline Event_t4196595728 ** get_address_of_m_ProcessingEvent_62() { return &___m_ProcessingEvent_62; }
	inline void set_m_ProcessingEvent_62(Event_t4196595728 * value)
	{
		___m_ProcessingEvent_62 = value;
		Il2CppCodeGenWriteBarrier(&___m_ProcessingEvent_62, value);
	}
};

struct InputField_t609046876_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3324145743* ___kSeparators_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.UI.InputField::<>f__switch$map0
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map0_63;

public:
	inline static int32_t get_offset_of_kSeparators_20() { return static_cast<int32_t>(offsetof(InputField_t609046876_StaticFields, ___kSeparators_20)); }
	inline CharU5BU5D_t3324145743* get_kSeparators_20() const { return ___kSeparators_20; }
	inline CharU5BU5D_t3324145743** get_address_of_kSeparators_20() { return &___kSeparators_20; }
	inline void set_kSeparators_20(CharU5BU5D_t3324145743* value)
	{
		___kSeparators_20 = value;
		Il2CppCodeGenWriteBarrier(&___kSeparators_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_63() { return static_cast<int32_t>(offsetof(InputField_t609046876_StaticFields, ___U3CU3Ef__switchU24map0_63)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map0_63() const { return ___U3CU3Ef__switchU24map0_63; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map0_63() { return &___U3CU3Ef__switchU24map0_63; }
	inline void set_U3CU3Ef__switchU24map0_63(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map0_63 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_63, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
