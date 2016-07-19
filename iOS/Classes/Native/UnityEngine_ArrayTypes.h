#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityEngine.Object
struct Object_t3071478659;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t655461400;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t2957812780;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t4279057999;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_t598900827;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t2116066607;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t2280656072;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t1820874799;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t344600729;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t3396031228;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Behaviour
struct Behaviour_t200106419;
// UnityEngine.Component
struct Component_t3501516275;
// UnityEngine.Display
struct Display_t1321072632;
// UnityEngine.Experimental.Director.Playable
struct Playable_t70832698;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t331591504;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t879908455;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t1336615025;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.DisallowMultipleComponent
struct DisallowMultipleComponent_t62111112;
// UnityEngine.ExecuteInEditMode
struct ExecuteInEditMode_t3132250205;
// UnityEngine.RequireComponent
struct RequireComponent_t1687166108;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t2972625667;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1559630662;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.Font
struct Font_t4241557075;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "mscorlib_System_Array1146569071.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achie2116066607.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserP2280656072.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter1820874799.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter3481375915.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achiev344600729.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter2181296590.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score3396031228.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "UnityEngine_UnityEngine_Keyframe4079056114.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Behaviour200106419.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_Display1321072632.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Playab70832698.h"
#include "UnityEngine_UnityEngine_ContactPoint243083348.h"
#include "UnityEngine_UnityEngine_RaycastHit4003175726.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_RaycastHit2D1374744384.h"
#include "UnityEngine_UnityEngine_ContactPoint2D4288432358.h"
#include "UnityEngine_UnityEngine_UIVertex4244065212.h"
#include "UnityEngine_UnityEngine_UICharInfo65807484.h"
#include "UnityEngine_UnityEngine_UILineInfo4113875482.h"
#include "UnityEngine_UnityEngine_GUILayoutOption331591504.h"
#include "UnityEngine_UnityEngine_GUILayoutUtility_LayoutCach879908455.h"
#include "UnityEngine_UnityEngine_GUILayoutEntry1336615025.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"
#include "UnityEngine_UnityEngine_DisallowMultipleComponent62111112.h"
#include "UnityEngine_UnityEngine_ExecuteInEditMode3132250205.h"
#include "UnityEngine_UnityEngine_RequireComponent1687166108.h"
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo3209134097.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall2972625667.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall1559630662.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"
#include "UnityEngine_UnityEngine_Canvas2727140764.h"
#include "UnityEngine_UnityEngine_Font4241557075.h"
#include "UnityEngine_UnityEngine_CanvasGroup3702418109.h"
#include "UnityEngine_UnityEngine_RectTransform972643934.h"

#pragma once
// UnityEngine.Object[]
struct ObjectU5BU5D_t1015136018  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Object_t3071478659 * m_Items[1];

public:
	inline Object_t3071478659 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Object_t3071478659 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Object_t3071478659 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t4128901257  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t1953253797  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t250104726  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t3419104218  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t759444790  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) AchievementDescription_t2116066607 * m_Items[1];

public:
	inline AchievementDescription_t2116066607 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AchievementDescription_t2116066607 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AchievementDescription_t2116066607 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t2378268441  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UserProfile_t2280656072 * m_Items[1];

public:
	inline UserProfile_t2280656072 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UserProfile_t2280656072 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UserProfile_t2280656072 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t1649880630  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GcLeaderboard_t1820874799 * m_Items[1];

public:
	inline GcLeaderboard_t1820874799 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GcLeaderboard_t1820874799 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GcLeaderboard_t1820874799 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t1726768202  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GcAchievementData_t3481375915  m_Items[1];

public:
	inline GcAchievementData_t3481375915  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GcAchievementData_t3481375915 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GcAchievementData_t3481375915  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_t912418020  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Achievement_t344600729 * m_Items[1];

public:
	inline Achievement_t344600729 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Achievement_t344600729 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Achievement_t344600729 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t1670395707  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GcScoreData_t2181296590  m_Items[1];

public:
	inline GcScoreData_t2181296590  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GcScoreData_t2181296590 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GcScoreData_t2181296590  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t2926278037  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Score_t3396031228 * m_Items[1];

public:
	inline Score_t3396031228 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Score_t3396031228 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Score_t3396031228 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Vector3_t4282066566  m_Items[1];

public:
	inline Vector3_t4282066566  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Vector3_t4282066566 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Vector3_t4282066566  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t701588350  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Vector4_t4282066567  m_Items[1];

public:
	inline Vector4_t4282066567  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Vector4_t4282066567 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Vector4_t4282066567  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Vector2_t4282066565  m_Items[1];

public:
	inline Vector2_t4282066565  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Vector2_t4282066565 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Vector2_t4282066565  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Color32_t598853688  m_Items[1];

public:
	inline Color32_t598853688  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Color32_t598853688 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Color32_t598853688  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t3589549831  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Keyframe_t4079056114  m_Items[1];

public:
	inline Keyframe_t4079056114  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Keyframe_t4079056114 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Keyframe_t4079056114  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t2716570836  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Camera_t2727095145 * m_Items[1];

public:
	inline Camera_t2727095145 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Camera_t2727095145 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Camera_t2727095145 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t1756617250  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Behaviour_t200106419 * m_Items[1];

public:
	inline Behaviour_t200106419 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Behaviour_t200106419 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Behaviour_t200106419 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Component[]
struct ComponentU5BU5D_t663911650  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Component_t3501516275 * m_Items[1];

public:
	inline Component_t3501516275 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Component_t3501516275 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Component_t3501516275 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Display[]
struct DisplayU5BU5D_t3684569385  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Display_t1321072632 * m_Items[1];

public:
	inline Display_t1321072632 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Display_t1321072632 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Display_t1321072632 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Experimental.Director.Playable[]
struct PlayableU5BU5D_t910723999  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Playable_t70832698 * m_Items[1];

public:
	inline Playable_t70832698 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Playable_t70832698 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Playable_t70832698 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t715040733  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ContactPoint_t243083348  m_Items[1];

public:
	inline ContactPoint_t243083348  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ContactPoint_t243083348 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t243083348  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t528650843  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RaycastHit_t4003175726  m_Items[1];

public:
	inline RaycastHit_t4003175726  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RaycastHit_t4003175726 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t4003175726  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t23929848  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Rigidbody2D_t1743771669 * m_Items[1];

public:
	inline Rigidbody2D_t1743771669 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Rigidbody2D_t1743771669 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Rigidbody2D_t1743771669 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t889400257  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RaycastHit2D_t1374744384  m_Items[1];

public:
	inline RaycastHit2D_t1374744384  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RaycastHit2D_t1374744384 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t1374744384  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t3916425411  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ContactPoint2D_t4288432358  m_Items[1];

public:
	inline ContactPoint2D_t4288432358  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ContactPoint2D_t4288432358 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t4288432358  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1796391381  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UIVertex_t4244065212  m_Items[1];

public:
	inline UIVertex_t4244065212  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UIVertex_t4244065212 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UIVertex_t4244065212  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t4214337045  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UICharInfo_t65807484  m_Items[1];

public:
	inline UICharInfo_t65807484  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UICharInfo_t65807484 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UICharInfo_t65807484  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2354741311  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) UILineInfo_t4113875482  m_Items[1];

public:
	inline UILineInfo_t4113875482  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline UILineInfo_t4113875482 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, UILineInfo_t4113875482  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2977405297  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GUILayoutOption_t331591504 * m_Items[1];

public:
	inline GUILayoutOption_t331591504 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GUILayoutOption_t331591504 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t331591504 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutUtility/LayoutCache[]
struct LayoutCacheU5BU5D_t3709016094  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) LayoutCache_t879908455 * m_Items[1];

public:
	inline LayoutCache_t879908455 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LayoutCache_t879908455 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LayoutCache_t879908455 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2084979372  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GUILayoutEntry_t1336615025 * m_Items[1];

public:
	inline GUILayoutEntry_t1336615025 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GUILayoutEntry_t1336615025 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GUILayoutEntry_t1336615025 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t565654559  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GUIStyle_t2990928826 * m_Items[1];

public:
	inline GUIStyle_t2990928826 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GUIStyle_t2990928826 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GUIStyle_t2990928826 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3749917529  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) DisallowMultipleComponent_t62111112 * m_Items[1];

public:
	inline DisallowMultipleComponent_t62111112 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline DisallowMultipleComponent_t62111112 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, DisallowMultipleComponent_t62111112 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t156135824  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ExecuteInEditMode_t3132250205 * m_Items[1];

public:
	inline ExecuteInEditMode_t3132250205 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ExecuteInEditMode_t3132250205 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ExecuteInEditMode_t3132250205 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t968569205  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RequireComponent_t1687166108 * m_Items[1];

public:
	inline RequireComponent_t1687166108 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RequireComponent_t1687166108 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RequireComponent_t1687166108 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t3452915852  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) HitInfo_t3209134097  m_Items[1];

public:
	inline HitInfo_t3209134097  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline HitInfo_t3209134097 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, HitInfo_t3209134097  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Events.PersistentCall[]
struct PersistentCallU5BU5D_t1880240530  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) PersistentCall_t2972625667 * m_Items[1];

public:
	inline PersistentCall_t2972625667 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline PersistentCall_t2972625667 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, PersistentCall_t2972625667 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t3104884963  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) BaseInvokableCall_t1559630662 * m_Items[1];

public:
	inline BaseInvokableCall_t1559630662 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BaseInvokableCall_t1559630662 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BaseInvokableCall_t1559630662 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Transform_t1659122786 * m_Items[1];

public:
	inline Transform_t1659122786 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Transform_t1659122786 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Transform_t1659122786 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) GameObject_t3674682005 * m_Items[1];

public:
	inline GameObject_t3674682005 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline GameObject_t3674682005 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, GameObject_t3674682005 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Sprite_t3199167241 * m_Items[1];

public:
	inline Sprite_t3199167241 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Sprite_t3199167241 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Sprite_t3199167241 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t2903919733  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Canvas_t2727140764 * m_Items[1];

public:
	inline Canvas_t2727140764 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Canvas_t2727140764 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2727140764 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Font[]
struct FontU5BU5D_t3453939458  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Font_t4241557075 * m_Items[1];

public:
	inline Font_t4241557075 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Font_t4241557075 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Font_t4241557075 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.CanvasGroup[]
struct CanvasGroupU5BU5D_t290646448  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) CanvasGroup_t3702418109 * m_Items[1];

public:
	inline CanvasGroup_t3702418109 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline CanvasGroup_t3702418109 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, CanvasGroup_t3702418109 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t3587651179  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) RectTransform_t972643934 * m_Items[1];

public:
	inline RectTransform_t972643934 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline RectTransform_t972643934 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, RectTransform_t972643934 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
