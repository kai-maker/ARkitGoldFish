#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Transform
struct Transform_t325636278;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t880895524;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t4289364517;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t1021309460;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t298795849;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t1876146190;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t3564256152;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t3847022674;
// System.Char[]
struct CharU5BU5D_t3279474012;
// System.String
struct String_t;
// System.Void
struct Void_t1074769199;
// UnityEngine.Collider
struct Collider_t2002469490;
// UnityEngine.Collider2D
struct Collider2D_t2267301385;
// UnityEngine.Rigidbody
struct Rigidbody_t3990686922;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t489087115;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3960614522;
// UnityEngine.CharacterController
struct CharacterController_t3600312789;
// UnityEngine.Object
struct Object_t3842356996;
// UnityEngine.AnimationState
struct AnimationState_t3948705326;
// System.Type
struct Type_t;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3230536730;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1010283552;
// System.IAsyncResult
struct IAsyncResult_t1327312896;
// System.AsyncCallback
struct AsyncCallback_t2968092817;
// System.Single[]
struct SingleU5BU5D_t195315533;
// UnityEngine.RectTransform
struct RectTransform_t3803553984;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t670328164;

struct ContactPoint_t3273172670 ;
struct Object_t3842356996_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef PLAYERCONNECTIONINTERNAL_T3999621384_H
#define PLAYERCONNECTIONINTERNAL_T3999621384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerConnectionInternal
struct  PlayerConnectionInternal_t3999621384  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTIONINTERNAL_T3999621384_H
#ifndef ENUMERATOR_T1483583264_H
#define ENUMERATOR_T1483583264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t1483583264  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t325636278 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t1483583264, ___outer_0)); }
	inline Transform_t325636278 * get_outer_0() const { return ___outer_0; }
	inline Transform_t325636278 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t325636278 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t1483583264, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1483583264_H
#ifndef AUDIOSETTINGS_T2367537725_H
#define AUDIOSETTINGS_T2367537725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t2367537725  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t2367537725_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t880895524 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t2367537725_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t880895524 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t880895524 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t880895524 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T2367537725_H
#ifndef AUDIOPLAYABLEGRAPHEXTENSIONS_T3606549690_H
#define AUDIOPLAYABLEGRAPHEXTENSIONS_T3606549690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.AudioPlayableGraphExtensions
struct  AudioPlayableGraphExtensions_t3606549690  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEGRAPHEXTENSIONS_T3606549690_H
#ifndef SCENEMANAGER_T3898761371_H
#define SCENEMANAGER_T3898761371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t3898761371  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t3898761371_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t4289364517 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t1021309460 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t298795849 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t3898761371_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t4289364517 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t4289364517 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t4289364517 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t3898761371_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t1021309460 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t1021309460 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t1021309460 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t3898761371_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t298795849 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t298795849 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t298795849 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T3898761371_H
#ifndef ANIMATIONPLAYABLEGRAPHEXTENSIONS_T258044169_H
#define ANIMATIONPLAYABLEGRAPHEXTENSIONS_T258044169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct  AnimationPlayableGraphExtensions_t258044169  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEGRAPHEXTENSIONS_T258044169_H
#ifndef SPRITEATLASMANAGER_T3817870944_H
#define SPRITEATLASMANAGER_T3817870944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t3817870944  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t3817870944_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t1876146190 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t3564256152 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t3817870944_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t1876146190 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t1876146190 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t1876146190 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t3817870944_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t3564256152 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t3564256152 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t3564256152 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T3817870944_H
#ifndef PHYSICS_T3632679412_H
#define PHYSICS_T3632679412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t3632679412  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T3632679412_H
#ifndef PHYSICS2D_T3368006246_H
#define PHYSICS2D_T3368006246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics2D
struct  Physics2D_t3368006246  : public RuntimeObject
{
public:

public:
};

struct Physics2D_t3368006246_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> UnityEngine.Physics2D::m_LastDisabledRigidbody2D
	List_1_t3847022674 * ___m_LastDisabledRigidbody2D_0;

public:
	inline static int32_t get_offset_of_m_LastDisabledRigidbody2D_0() { return static_cast<int32_t>(offsetof(Physics2D_t3368006246_StaticFields, ___m_LastDisabledRigidbody2D_0)); }
	inline List_1_t3847022674 * get_m_LastDisabledRigidbody2D_0() const { return ___m_LastDisabledRigidbody2D_0; }
	inline List_1_t3847022674 ** get_address_of_m_LastDisabledRigidbody2D_0() { return &___m_LastDisabledRigidbody2D_0; }
	inline void set_m_LastDisabledRigidbody2D_0(List_1_t3847022674 * value)
	{
		___m_LastDisabledRigidbody2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDisabledRigidbody2D_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2D_T3368006246_H
#ifndef VALUETYPE_T2378928543_H
#define VALUETYPE_T2378928543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2378928543  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2378928543_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2378928543_marshaled_com
{
};
#endif // VALUETYPE_T2378928543_H
#ifndef TIME_T2282086213_H
#define TIME_T2282086213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t2282086213  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T2282086213_H
#ifndef TEXTWRITER_T2115169834_H
#define TEXTWRITER_T2115169834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t2115169834  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3279474012* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t2115169834, ___CoreNewLine_0)); }
	inline CharU5BU5D_t3279474012* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t3279474012** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t3279474012* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t2115169834_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t2115169834 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t2115169834_StaticFields, ___Null_1)); }
	inline TextWriter_t2115169834 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t2115169834 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t2115169834 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T2115169834_H
#ifndef YIELDINSTRUCTION_T2608085260_H
#define YIELDINSTRUCTION_T2608085260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t2608085260  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t2608085260_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t2608085260_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T2608085260_H
#ifndef RANDOM_T4276892536_H
#define RANDOM_T4276892536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t4276892536  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T4276892536_H
#ifndef DATAUTILITY_T2686804354_H
#define DATAUTILITY_T2686804354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprites.DataUtility
struct  DataUtility_t2686804354  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAUTILITY_T2686804354_H
#ifndef ATTRIBUTE_T2515458215_H
#define ATTRIBUTE_T2515458215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2515458215  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2515458215_H
#ifndef RESOURCES_T3202406956_H
#define RESOURCES_T3202406956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t3202406956  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T3202406956_H
#ifndef VECTOR3_T668039151_H
#define VECTOR3_T668039151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t668039151 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t668039151, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t668039151, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t668039151, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t668039151_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t668039151  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t668039151  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t668039151  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t668039151  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t668039151  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t668039151  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t668039151  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t668039151  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t668039151  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t668039151  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___zeroVector_4)); }
	inline Vector3_t668039151  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t668039151 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t668039151  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___oneVector_5)); }
	inline Vector3_t668039151  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t668039151 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t668039151  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___upVector_6)); }
	inline Vector3_t668039151  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t668039151 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t668039151  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___downVector_7)); }
	inline Vector3_t668039151  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t668039151 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t668039151  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___leftVector_8)); }
	inline Vector3_t668039151  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t668039151 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t668039151  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___rightVector_9)); }
	inline Vector3_t668039151  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t668039151 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t668039151  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___forwardVector_10)); }
	inline Vector3_t668039151  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t668039151 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t668039151  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___backVector_11)); }
	inline Vector3_t668039151  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t668039151 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t668039151  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t668039151  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t668039151 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t668039151  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t668039151_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t668039151  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t668039151 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t668039151  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T668039151_H
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_T3471214108_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_T3471214108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_t3471214108  : public Attribute_t2515458215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_T3471214108_H
#ifndef SCENE_T772793203_H
#define SCENE_T772793203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t772793203 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t772793203, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T772793203_H
#ifndef INT32_T739169257_H
#define INT32_T739169257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t739169257 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t739169257, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T739169257_H
#ifndef QUATERNION_T2163297104_H
#define QUATERNION_T2163297104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2163297104 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2163297104, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2163297104, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2163297104, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2163297104, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2163297104_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2163297104  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2163297104_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2163297104  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2163297104 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2163297104  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2163297104_H
#ifndef ANIMATORCLIPINFO_T3331068568_H
#define ANIMATORCLIPINFO_T3331068568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t3331068568 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3331068568, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3331068568, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T3331068568_H
#ifndef VOID_T1074769199_H
#define VOID_T1074769199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1074769199 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1074769199_H
#ifndef ANIMATORSTATEINFO_T580963778_H
#define ANIMATORSTATEINFO_T580963778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t580963778 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t580963778, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t580963778, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t580963778, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t580963778, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t580963778, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t580963778, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t580963778, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t580963778, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t580963778, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T580963778_H
#ifndef BOOLEAN_T430621159_H
#define BOOLEAN_T430621159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t430621159 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t430621159, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t430621159_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t430621159_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t430621159_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T430621159_H
#ifndef SORTINGLAYER_T640439881_H
#define SORTINGLAYER_T640439881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SortingLayer
struct  SortingLayer_t640439881 
{
public:
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SortingLayer_t640439881, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYER_T640439881_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR2_T2758376068_H
#define VECTOR2_T2758376068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2758376068 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2758376068, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2758376068, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2758376068_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2758376068  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2758376068  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2758376068  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2758376068  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2758376068  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2758376068  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2758376068  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2758376068  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2758376068_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2758376068  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2758376068 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2758376068  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2758376068_StaticFields, ___oneVector_3)); }
	inline Vector2_t2758376068  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2758376068 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2758376068  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2758376068_StaticFields, ___upVector_4)); }
	inline Vector2_t2758376068  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2758376068 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2758376068  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2758376068_StaticFields, ___downVector_5)); }
	inline Vector2_t2758376068  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2758376068 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2758376068  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2758376068_StaticFields, ___leftVector_6)); }
	inline Vector2_t2758376068  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2758376068 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2758376068  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2758376068_StaticFields, ___rightVector_7)); }
	inline Vector2_t2758376068  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2758376068 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2758376068  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2758376068_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2758376068  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2758376068 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2758376068  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2758376068_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2758376068  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2758376068 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2758376068  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2758376068_H
#ifndef COLOR32_T96566414_H
#define COLOR32_T96566414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t96566414 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t96566414, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t96566414, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t96566414, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t96566414, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T96566414_H
#ifndef UNITYLOGWRITER_T4272619125_H
#define UNITYLOGWRITER_T4272619125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_t4272619125  : public TextWriter_t2115169834
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_T4272619125_H
#ifndef ENUM_T308145661_H
#define ENUM_T308145661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t308145661  : public ValueType_t2378928543
{
public:

public:
};

struct Enum_t308145661_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3279474012* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t308145661_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3279474012* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3279474012** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3279474012* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t308145661_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t308145661_marshaled_com
{
};
#endif // ENUM_T308145661_H
#ifndef ANIMATORTRANSITIONINFO_T1811752579_H
#define ANIMATORTRANSITIONINFO_T1811752579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t1811752579 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_4;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_5;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1811752579, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1811752579, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1811752579, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1811752579, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1811752579, ___m_AnyState_4)); }
	inline bool get_m_AnyState_4() const { return ___m_AnyState_4; }
	inline bool* get_address_of_m_AnyState_4() { return &___m_AnyState_4; }
	inline void set_m_AnyState_4(bool value)
	{
		___m_AnyState_4 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1811752579, ___m_TransitionType_5)); }
	inline int32_t get_m_TransitionType_5() const { return ___m_TransitionType_5; }
	inline int32_t* get_address_of_m_TransitionType_5() { return &___m_TransitionType_5; }
	inline void set_m_TransitionType_5(int32_t value)
	{
		___m_TransitionType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t1811752579_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t1811752579_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
#endif // ANIMATORTRANSITIONINFO_T1811752579_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T1612842217_H
#define DRIVENRECTTRANSFORMTRACKER_T1612842217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t1612842217 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T1612842217_H
#ifndef CONTACTPOINT_T3273172670_H
#define CONTACTPOINT_T3273172670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t3273172670 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t668039151  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t668039151  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t3273172670, ___m_Point_0)); }
	inline Vector3_t668039151  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t668039151 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t668039151  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t3273172670, ___m_Normal_1)); }
	inline Vector3_t668039151  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t668039151 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t668039151  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t3273172670, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t3273172670, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t3273172670, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T3273172670_H
#ifndef RAYCASTHIT_T398222198_H
#define RAYCASTHIT_T398222198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t398222198 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t668039151  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t668039151  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2758376068  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t2002469490 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t398222198, ___m_Point_0)); }
	inline Vector3_t668039151  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t668039151 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t668039151  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t398222198, ___m_Normal_1)); }
	inline Vector3_t668039151  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t668039151 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t668039151  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t398222198, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t398222198, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t398222198, ___m_UV_4)); }
	inline Vector2_t2758376068  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2758376068 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2758376068  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t398222198, ___m_Collider_5)); }
	inline Collider_t2002469490 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t2002469490 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t2002469490 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t398222198_marshaled_pinvoke
{
	Vector3_t668039151  ___m_Point_0;
	Vector3_t668039151  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2758376068  ___m_UV_4;
	Collider_t2002469490 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t398222198_marshaled_com
{
	Vector3_t668039151  ___m_Point_0;
	Vector3_t668039151  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2758376068  ___m_UV_4;
	Collider_t2002469490 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T398222198_H
#ifndef QUERYTRIGGERINTERACTION_T3646720854_H
#define QUERYTRIGGERINTERACTION_T3646720854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t3646720854 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t3646720854, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERYTRIGGERINTERACTION_T3646720854_H
#ifndef SKELETONBONE_T682890485_H
#define SKELETONBONE_T682890485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_t682890485 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t668039151  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t2163297104  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t668039151  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t682890485, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t682890485, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t682890485, ___position_2)); }
	inline Vector3_t668039151  get_position_2() const { return ___position_2; }
	inline Vector3_t668039151 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t668039151  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t682890485, ___rotation_3)); }
	inline Quaternion_t2163297104  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t2163297104 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t2163297104  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t682890485, ___scale_4)); }
	inline Vector3_t668039151  get_scale_4() const { return ___scale_4; }
	inline Vector3_t668039151 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t668039151  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t682890485_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t668039151  ___position_2;
	Quaternion_t2163297104  ___rotation_3;
	Vector3_t668039151  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t682890485_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t668039151  ___position_2;
	Quaternion_t2163297104  ___rotation_3;
	Vector3_t668039151  ___scale_4;
};
#endif // SKELETONBONE_T682890485_H
#ifndef ANIMATIONEVENTSOURCE_T3199469545_H
#define ANIMATIONEVENTSOURCE_T3199469545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t3199469545 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationEventSource_t3199469545, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONEVENTSOURCE_T3199469545_H
#ifndef ANIMATORCONTROLLERPARAMETERTYPE_T209018528_H
#define ANIMATORCONTROLLERPARAMETERTYPE_T209018528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t209018528 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t209018528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETERTYPE_T209018528_H
#ifndef COLLISIONFLAGS_T1131393485_H
#define COLLISIONFLAGS_T1131393485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CollisionFlags
struct  CollisionFlags_t1131393485 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionFlags_t1131393485, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLISIONFLAGS_T1131393485_H
#ifndef HUMANLIMIT_T4024136502_H
#define HUMANLIMIT_T4024136502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t4024136502 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t668039151  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t668039151  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t668039151  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t4024136502, ___m_Min_0)); }
	inline Vector3_t668039151  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t668039151 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t668039151  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t4024136502, ___m_Max_1)); }
	inline Vector3_t668039151  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t668039151 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t668039151  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t4024136502, ___m_Center_2)); }
	inline Vector3_t668039151  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t668039151 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t668039151  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t4024136502, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t4024136502, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T4024136502_H
#ifndef ASYNCOPERATION_T1725218126_H
#define ASYNCOPERATION_T1725218126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1725218126  : public YieldInstruction_t2608085260
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1725218126, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1725218126_marshaled_pinvoke : public YieldInstruction_t2608085260_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1725218126_marshaled_com : public YieldInstruction_t2608085260_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T1725218126_H
#ifndef TRACKEDREFERENCE_T2650646305_H
#define TRACKEDREFERENCE_T2650646305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t2650646305  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t2650646305, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2650646305_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2650646305_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T2650646305_H
#ifndef RAYCASTHIT2D_T2932496961_H
#define RAYCASTHIT2D_T2932496961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2932496961 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2758376068  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2758376068  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2758376068  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t2267301385 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2932496961, ___m_Centroid_0)); }
	inline Vector2_t2758376068  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2758376068 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2758376068  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2932496961, ___m_Point_1)); }
	inline Vector2_t2758376068  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2758376068 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2758376068  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2932496961, ___m_Normal_2)); }
	inline Vector2_t2758376068  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2758376068 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2758376068  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2932496961, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2932496961, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2932496961, ___m_Collider_5)); }
	inline Collider2D_t2267301385 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t2267301385 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t2267301385 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2932496961_marshaled_pinvoke
{
	Vector2_t2758376068  ___m_Centroid_0;
	Vector2_t2758376068  ___m_Point_1;
	Vector2_t2758376068  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2267301385 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t2932496961_marshaled_com
{
	Vector2_t2758376068  ___m_Centroid_0;
	Vector2_t2758376068  ___m_Point_1;
	Vector2_t2758376068  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2267301385 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T2932496961_H
#ifndef COLLISION_T443744572_H
#define COLLISION_T443744572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t443744572  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t668039151  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t668039151  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3990686922 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t2002469490 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t489087115* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t443744572, ___m_Impulse_0)); }
	inline Vector3_t668039151  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t668039151 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t668039151  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t443744572, ___m_RelativeVelocity_1)); }
	inline Vector3_t668039151  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t668039151 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t668039151  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t443744572, ___m_Rigidbody_2)); }
	inline Rigidbody_t3990686922 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t3990686922 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t3990686922 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t443744572, ___m_Collider_3)); }
	inline Collider_t2002469490 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t2002469490 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t2002469490 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t443744572, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t489087115* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t489087115** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t489087115* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t443744572_marshaled_pinvoke
{
	Vector3_t668039151  ___m_Impulse_0;
	Vector3_t668039151  ___m_RelativeVelocity_1;
	Rigidbody_t3990686922 * ___m_Rigidbody_2;
	Collider_t2002469490 * ___m_Collider_3;
	ContactPoint_t3273172670 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t443744572_marshaled_com
{
	Vector3_t668039151  ___m_Impulse_0;
	Vector3_t668039151  ___m_RelativeVelocity_1;
	Rigidbody_t3990686922 * ___m_Rigidbody_2;
	Collider_t2002469490 * ___m_Collider_3;
	ContactPoint_t3273172670 * ___m_Contacts_4;
};
#endif // COLLISION_T443744572_H
#ifndef DELEGATE_T3567527985_H
#define DELEGATE_T3567527985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3567527985  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t3960614522 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3567527985, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3567527985, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3567527985, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3567527985, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3567527985, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3567527985, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3567527985, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3567527985, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3567527985, ___data_8)); }
	inline DelegateData_t3960614522 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3960614522 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3960614522 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3567527985_H
#ifndef PARTICLE_T290951370_H
#define PARTICLE_T290951370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/Particle
struct  Particle_t290951370 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t668039151  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t668039151  ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t668039151  ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t668039151  ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t668039151  ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t668039151  ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t668039151  ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t668039151  ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t96566414  ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_12;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_13;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_Position_0)); }
	inline Vector3_t668039151  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t668039151 * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t668039151  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_Velocity_1)); }
	inline Vector3_t668039151  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_t668039151 * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_t668039151  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimatedVelocity_2() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_AnimatedVelocity_2)); }
	inline Vector3_t668039151  get_m_AnimatedVelocity_2() const { return ___m_AnimatedVelocity_2; }
	inline Vector3_t668039151 * get_address_of_m_AnimatedVelocity_2() { return &___m_AnimatedVelocity_2; }
	inline void set_m_AnimatedVelocity_2(Vector3_t668039151  value)
	{
		___m_AnimatedVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_InitialVelocity_3() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_InitialVelocity_3)); }
	inline Vector3_t668039151  get_m_InitialVelocity_3() const { return ___m_InitialVelocity_3; }
	inline Vector3_t668039151 * get_address_of_m_InitialVelocity_3() { return &___m_InitialVelocity_3; }
	inline void set_m_InitialVelocity_3(Vector3_t668039151  value)
	{
		___m_InitialVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotation_4() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_AxisOfRotation_4)); }
	inline Vector3_t668039151  get_m_AxisOfRotation_4() const { return ___m_AxisOfRotation_4; }
	inline Vector3_t668039151 * get_address_of_m_AxisOfRotation_4() { return &___m_AxisOfRotation_4; }
	inline void set_m_AxisOfRotation_4(Vector3_t668039151  value)
	{
		___m_AxisOfRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_5() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_Rotation_5)); }
	inline Vector3_t668039151  get_m_Rotation_5() const { return ___m_Rotation_5; }
	inline Vector3_t668039151 * get_address_of_m_Rotation_5() { return &___m_Rotation_5; }
	inline void set_m_Rotation_5(Vector3_t668039151  value)
	{
		___m_Rotation_5 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_6() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_AngularVelocity_6)); }
	inline Vector3_t668039151  get_m_AngularVelocity_6() const { return ___m_AngularVelocity_6; }
	inline Vector3_t668039151 * get_address_of_m_AngularVelocity_6() { return &___m_AngularVelocity_6; }
	inline void set_m_AngularVelocity_6(Vector3_t668039151  value)
	{
		___m_AngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_StartSize_7() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_StartSize_7)); }
	inline Vector3_t668039151  get_m_StartSize_7() const { return ___m_StartSize_7; }
	inline Vector3_t668039151 * get_address_of_m_StartSize_7() { return &___m_StartSize_7; }
	inline void set_m_StartSize_7(Vector3_t668039151  value)
	{
		___m_StartSize_7 = value;
	}

	inline static int32_t get_offset_of_m_StartColor_8() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_StartColor_8)); }
	inline Color32_t96566414  get_m_StartColor_8() const { return ___m_StartColor_8; }
	inline Color32_t96566414 * get_address_of_m_StartColor_8() { return &___m_StartColor_8; }
	inline void set_m_StartColor_8(Color32_t96566414  value)
	{
		___m_StartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeed_9() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_RandomSeed_9)); }
	inline uint32_t get_m_RandomSeed_9() const { return ___m_RandomSeed_9; }
	inline uint32_t* get_address_of_m_RandomSeed_9() { return &___m_RandomSeed_9; }
	inline void set_m_RandomSeed_9(uint32_t value)
	{
		___m_RandomSeed_9 = value;
	}

	inline static int32_t get_offset_of_m_Lifetime_10() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_Lifetime_10)); }
	inline float get_m_Lifetime_10() const { return ___m_Lifetime_10; }
	inline float* get_address_of_m_Lifetime_10() { return &___m_Lifetime_10; }
	inline void set_m_Lifetime_10(float value)
	{
		___m_Lifetime_10 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetime_11() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_StartLifetime_11)); }
	inline float get_m_StartLifetime_11() const { return ___m_StartLifetime_11; }
	inline float* get_address_of_m_StartLifetime_11() { return &___m_StartLifetime_11; }
	inline void set_m_StartLifetime_11(float value)
	{
		___m_StartLifetime_11 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator0_12() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_EmitAccumulator0_12)); }
	inline float get_m_EmitAccumulator0_12() const { return ___m_EmitAccumulator0_12; }
	inline float* get_address_of_m_EmitAccumulator0_12() { return &___m_EmitAccumulator0_12; }
	inline void set_m_EmitAccumulator0_12(float value)
	{
		___m_EmitAccumulator0_12 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator1_13() { return static_cast<int32_t>(offsetof(Particle_t290951370, ___m_EmitAccumulator1_13)); }
	inline float get_m_EmitAccumulator1_13() const { return ___m_EmitAccumulator1_13; }
	inline float* get_address_of_m_EmitAccumulator1_13() { return &___m_EmitAccumulator1_13; }
	inline void set_m_EmitAccumulator1_13(float value)
	{
		___m_EmitAccumulator1_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLE_T290951370_H
#ifndef COMMANDBUFFER_T298957586_H
#define COMMANDBUFFER_T298957586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t298957586  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t298957586, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDBUFFER_T298957586_H
#ifndef HIDEFLAGS_T1043516033_H
#define HIDEFLAGS_T1043516033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t1043516033 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t1043516033, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T1043516033_H
#ifndef OBJECT_T3842356996_H
#define OBJECT_T3842356996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3842356996  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3842356996, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3842356996_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3842356996_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3842356996_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3842356996_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3842356996_H
#ifndef PLAYSTATE_T3171563901_H
#define PLAYSTATE_T3171563901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayState
struct  PlayState_t3171563901 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayState_t3171563901, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATE_T3171563901_H
#ifndef PLAYABLEHANDLE_T1096232101_H
#define PLAYABLEHANDLE_T1096232101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1096232101 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1096232101, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1096232101, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1096232101_H
#ifndef DATASTREAMTYPE_T3063966283_H
#define DATASTREAMTYPE_T3063966283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t3063966283 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t3063966283, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T3063966283_H
#ifndef PLAYABLEGRAPH_T3197004910_H
#define PLAYABLEGRAPH_T3197004910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t3197004910 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t3197004910, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t3197004910, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T3197004910_H
#ifndef PLAYABLEOUTPUTHANDLE_T3102041674_H
#define PLAYABLEOUTPUTHANDLE_T3102041674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t3102041674 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3102041674, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t3102041674, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T3102041674_H
#ifndef CALENDARIDENTIFIER_T3847733334_H
#define CALENDARIDENTIFIER_T3847733334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarIdentifier
struct  CalendarIdentifier_t3847733334 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarIdentifier::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarIdentifier_t3847733334, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARIDENTIFIER_T3847733334_H
#ifndef CALENDARUNIT_T1937588690_H
#define CALENDARUNIT_T1937588690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarUnit
struct  CalendarUnit_t1937588690 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarUnit_t1937588690, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARUNIT_T1937588690_H
#ifndef LOCALNOTIFICATION_T3699274119_H
#define LOCALNOTIFICATION_T3699274119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t3699274119  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(LocalNotification_t3699274119, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

struct LocalNotification_t3699274119_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t3699274119_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T3699274119_H
#ifndef CONTROLLERCOLLIDERHIT_T651377495_H
#define CONTROLLERCOLLIDERHIT_T651377495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t651377495  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t3600312789 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t2002469490 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t668039151  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t668039151  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t668039151  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t651377495, ___m_Controller_0)); }
	inline CharacterController_t3600312789 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t3600312789 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t3600312789 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t651377495, ___m_Collider_1)); }
	inline Collider_t2002469490 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t2002469490 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t2002469490 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t651377495, ___m_Point_2)); }
	inline Vector3_t668039151  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t668039151 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t668039151  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t651377495, ___m_Normal_3)); }
	inline Vector3_t668039151  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t668039151 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t668039151  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t651377495, ___m_MoveDirection_4)); }
	inline Vector3_t668039151  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t668039151 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t668039151  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t651377495, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t651377495, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t651377495_marshaled_pinvoke
{
	CharacterController_t3600312789 * ___m_Controller_0;
	Collider_t2002469490 * ___m_Collider_1;
	Vector3_t668039151  ___m_Point_2;
	Vector3_t668039151  ___m_Normal_3;
	Vector3_t668039151  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t651377495_marshaled_com
{
	CharacterController_t3600312789 * ___m_Controller_0;
	Collider_t2002469490 * ___m_Collider_1;
	Vector3_t668039151  ___m_Point_2;
	Vector3_t668039151  ___m_Normal_3;
	Vector3_t668039151  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T651377495_H
#ifndef LOADSCENEMODE_T468394575_H
#define LOADSCENEMODE_T468394575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t468394575 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t468394575, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T468394575_H
#ifndef SCRIPTABLERENDERCONTEXT_T431654961_H
#define SCRIPTABLERENDERCONTEXT_T431654961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t431654961 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t431654961, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T431654961_H
#ifndef REMOTENOTIFICATION_T2924454203_H
#define REMOTENOTIFICATION_T2924454203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t2924454203  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t2924454203, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T2924454203_H
#ifndef AXIS_T114840610_H
#define AXIS_T114840610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Axis
struct  Axis_t114840610 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axis_t114840610, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXIS_T114840610_H
#ifndef DRIVENTRANSFORMPROPERTIES_T3934457824_H
#define DRIVENTRANSFORMPROPERTIES_T3934457824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t3934457824 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t3934457824, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENTRANSFORMPROPERTIES_T3934457824_H
#ifndef EDGE_T647819050_H
#define EDGE_T647819050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Edge
struct  Edge_t647819050 
{
public:
	// System.Int32 UnityEngine.RectTransform/Edge::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Edge_t647819050, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGE_T647819050_H
#ifndef PHYSICMATERIAL_T542501729_H
#define PHYSICMATERIAL_T542501729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t542501729  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T542501729_H
#ifndef AVATARMASK_T1637803008_H
#define AVATARMASK_T1637803008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarMask
struct  AvatarMask_t1637803008  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARMASK_T1637803008_H
#ifndef HUMANBONE_T3534409221_H
#define HUMANBONE_T3534409221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t3534409221 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t4024136502  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t3534409221, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t3534409221, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t3534409221, ___limit_2)); }
	inline HumanLimit_t4024136502  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t4024136502 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t4024136502  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t3534409221_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t4024136502  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t3534409221_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t4024136502  ___limit_2;
};
#endif // HUMANBONE_T3534409221_H
#ifndef ANIMATORCONTROLLERPARAMETER_T4239035996_H
#define ANIMATORCONTROLLERPARAMETER_T4239035996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t4239035996  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t4239035996, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t4239035996, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t4239035996, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t4239035996, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t4239035996, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETER_T4239035996_H
#ifndef PLAYABLEOUTPUT_T1288249831_H
#define PLAYABLEOUTPUT_T1288249831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t1288249831 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t3102041674  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t1288249831, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3102041674  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3102041674 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3102041674  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t1288249831_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t1288249831  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t1288249831_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t1288249831  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t1288249831 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t1288249831  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T1288249831_H
#ifndef SPRITEATLAS_T2830703580_H
#define SPRITEATLAS_T2830703580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t2830703580  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T2830703580_H
#ifndef ANIMATIONSTATE_T3948705326_H
#define ANIMATIONSTATE_T3948705326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t3948705326  : public TrackedReference_t2650646305
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T3948705326_H
#ifndef COMPONENT_T2432355059_H
#define COMPONENT_T2432355059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2432355059  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2432355059_H
#ifndef ANIMATIONEVENT_T1439550694_H
#define ANIMATIONEVENT_T1439550694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_t1439550694  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t3842356996 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t3948705326 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t580963778  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t3331068568  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_ObjectReferenceParameter_3)); }
	inline Object_t3842356996 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_t3842356996 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_t3842356996 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_StateSender_8)); }
	inline AnimationState_t3948705326 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t3948705326 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t3948705326 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t580963778  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t580963778 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t580963778  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_t1439550694, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t3331068568  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t3331068568 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t3331068568  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1439550694_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_t3842356996_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t3948705326 * ___m_StateSender_8;
	AnimatorStateInfo_t580963778  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t3331068568  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t1439550694_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_t3842356996_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t3948705326 * ___m_StateSender_8;
	AnimatorStateInfo_t580963778  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t3331068568  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_T1439550694_H
#ifndef MULTICASTDELEGATE_T2132012776_H
#define MULTICASTDELEGATE_T2132012776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2132012776  : public Delegate_t3567527985
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2132012776 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2132012776 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2132012776, ___prev_9)); }
	inline MulticastDelegate_t2132012776 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2132012776 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2132012776 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2132012776, ___kpm_next_10)); }
	inline MulticastDelegate_t2132012776 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2132012776 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2132012776 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2132012776_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T3656139413_H
#define ANIMATORCONTROLLERPLAYABLE_T3656139413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t3656139413 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t1096232101  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t3656139413, ___m_Handle_0)); }
	inline PlayableHandle_t1096232101  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1096232101 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1096232101  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t3656139413_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t3656139413  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t3656139413_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t3656139413  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t3656139413 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t3656139413  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T3656139413_H
#ifndef MOTION_T3068978084_H
#define MOTION_T3068978084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t3068978084  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T3068978084_H
#ifndef ANIMATIONOFFSETPLAYABLE_T3577257109_H
#define ANIMATIONOFFSETPLAYABLE_T3577257109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t3577257109 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t1096232101  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t3577257109, ___m_Handle_0)); }
	inline PlayableHandle_t1096232101  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1096232101 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1096232101  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t3577257109_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t3577257109  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t3577257109_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t3577257109  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t3577257109 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t3577257109  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T3577257109_H
#ifndef ANIMATIONPLAYABLEOUTPUT_T3313010199_H
#define ANIMATIONPLAYABLEOUTPUT_T3313010199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t3313010199 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t3102041674  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t3313010199, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3102041674  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3102041674 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3102041674  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_T3313010199_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T3888512442_H
#define ANIMATIONLAYERMIXERPLAYABLE_T3888512442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t3888512442 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t1096232101  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3888512442, ___m_Handle_0)); }
	inline PlayableHandle_t1096232101  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1096232101 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1096232101  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t3888512442_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t3888512442  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t3888512442_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t3888512442  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t3888512442 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t3888512442  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T3888512442_H
#ifndef AUDIOPLAYABLEOUTPUT_T1436289891_H
#define AUDIOPLAYABLEOUTPUT_T1436289891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t1436289891 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t3102041674  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t1436289891, ___m_Handle_0)); }
	inline PlayableOutputHandle_t3102041674  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t3102041674 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t3102041674  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T1436289891_H
#ifndef AUDIOCLIPPLAYABLE_T374255664_H
#define AUDIOCLIPPLAYABLE_T374255664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t374255664 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t1096232101  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t374255664, ___m_Handle_0)); }
	inline PlayableHandle_t1096232101  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1096232101 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1096232101  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T374255664_H
#ifndef AUDIOMIXERPLAYABLE_T439295833_H
#define AUDIOMIXERPLAYABLE_T439295833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t439295833 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t1096232101  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t439295833, ___m_Handle_0)); }
	inline PlayableHandle_t1096232101  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1096232101 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1096232101  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T439295833_H
#ifndef SCRIPTABLEOBJECT_T1788452748_H
#define SCRIPTABLEOBJECT_T1788452748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1788452748  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1788452748_marshaled_pinvoke : public Object_t3842356996_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1788452748_marshaled_com : public Object_t3842356996_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1788452748_H
#ifndef RESOURCEREQUEST_T3489361215_H
#define RESOURCEREQUEST_T3489361215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t3489361215  : public AsyncOperation_t1725218126
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_1;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_2;

public:
	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(ResourceRequest_t3489361215, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}

	inline static int32_t get_offset_of_m_Type_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t3489361215, ___m_Type_2)); }
	inline Type_t * get_m_Type_2() const { return ___m_Type_2; }
	inline Type_t ** get_address_of_m_Type_2() { return &___m_Type_2; }
	inline void set_m_Type_2(Type_t * value)
	{
		___m_Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3489361215_marshaled_pinvoke : public AsyncOperation_t1725218126_marshaled_pinvoke
{
	char* ___m_Path_1;
	Type_t * ___m_Type_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3489361215_marshaled_com : public AsyncOperation_t1725218126_marshaled_com
{
	Il2CppChar* ___m_Path_1;
	Type_t * ___m_Type_2;
};
#endif // RESOURCEREQUEST_T3489361215_H
#ifndef ANIMATIONMIXERPLAYABLE_T1594359019_H
#define ANIMATIONMIXERPLAYABLE_T1594359019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t1594359019 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t1096232101  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t1594359019, ___m_Handle_0)); }
	inline PlayableHandle_t1096232101  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1096232101 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1096232101  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_T1594359019_H
#ifndef AUDIOCLIP_T3439746196_H
#define AUDIOCLIP_T3439746196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3439746196  : public Object_t3842356996
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3230536730 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1010283552 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3439746196, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t3230536730 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t3230536730 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t3230536730 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3439746196, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1010283552 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1010283552 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1010283552 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3439746196_H
#ifndef MATERIAL_T109867194_H
#define MATERIAL_T109867194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t109867194  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T109867194_H
#ifndef SPRITE_T2443900411_H
#define SPRITE_T2443900411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t2443900411  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T2443900411_H
#ifndef TEXTURE_T271729660_H
#define TEXTURE_T271729660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t271729660  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T271729660_H
#ifndef ANIMATIONCLIPPLAYABLE_T1085101619_H
#define ANIMATIONCLIPPLAYABLE_T1085101619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t1085101619 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t1096232101  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t1085101619, ___m_Handle_0)); }
	inline PlayableHandle_t1096232101  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1096232101 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1096232101  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T1085101619_H
#ifndef SHADER_T3961792707_H
#define SHADER_T3961792707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t3961792707  : public Object_t3842356996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T3961792707_H
#ifndef PLAYABLE_T473451062_H
#define PLAYABLE_T473451062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t473451062 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t1096232101  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t473451062, ___m_Handle_0)); }
	inline PlayableHandle_t1096232101  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1096232101 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1096232101  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t473451062_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t473451062  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t473451062_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t473451062  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t473451062 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t473451062  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T473451062_H
#ifndef RENDERTEXTURE_T3087767672_H
#define RENDERTEXTURE_T3087767672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t3087767672  : public Texture_t271729660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T3087767672_H
#ifndef BEHAVIOUR_T690813920_H
#define BEHAVIOUR_T690813920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t690813920  : public Component_t2432355059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T690813920_H
#ifndef RENDERER_T2177730975_H
#define RENDERER_T2177730975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2177730975  : public Component_t2432355059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2177730975_H
#ifndef REQUESTATLASCALLBACK_T1876146190_H
#define REQUESTATLASCALLBACK_T1876146190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t1876146190  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T1876146190_H
#ifndef TEXTURE2D_T295044112_H
#define TEXTURE2D_T295044112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t295044112  : public Texture_t271729660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T295044112_H
#ifndef PARTICLESYSTEM_T204201629_H
#define PARTICLESYSTEM_T204201629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t204201629  : public Component_t2432355059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T204201629_H
#ifndef RIGIDBODY2D_T1548733237_H
#define RIGIDBODY2D_T1548733237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t1548733237  : public Component_t2432355059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T1548733237_H
#ifndef COLLIDER_T2002469490_H
#define COLLIDER_T2002469490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t2002469490  : public Component_t2432355059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T2002469490_H
#ifndef TRANSFORM_T325636278_H
#define TRANSFORM_T325636278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t325636278  : public Component_t2432355059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T325636278_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T880895524_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T880895524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t880895524  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T880895524_H
#ifndef PCMREADERCALLBACK_T3230536730_H
#define PCMREADERCALLBACK_T3230536730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t3230536730  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T3230536730_H
#ifndef ANIMATIONCLIP_T718716459_H
#define ANIMATIONCLIP_T718716459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t718716459  : public Motion_t3068978084
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T718716459_H
#ifndef REAPPLYDRIVENPROPERTIES_T670328164_H
#define REAPPLYDRIVENPROPERTIES_T670328164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t670328164  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T670328164_H
#ifndef STATEMACHINEBEHAVIOUR_T1462502316_H
#define STATEMACHINEBEHAVIOUR_T1462502316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t1462502316  : public ScriptableObject_t1788452748
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T1462502316_H
#ifndef PCMSETPOSITIONCALLBACK_T1010283552_H
#define PCMSETPOSITIONCALLBACK_T1010283552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t1010283552  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T1010283552_H
#ifndef RIGIDBODY_T3990686922_H
#define RIGIDBODY_T3990686922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3990686922  : public Component_t2432355059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3990686922_H
#ifndef COLLIDER2D_T2267301385_H
#define COLLIDER2D_T2267301385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2267301385  : public Behaviour_t690813920
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2267301385_H
#ifndef AUDIOSOURCE_T1708739960_H
#define AUDIOSOURCE_T1708739960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t1708739960  : public Behaviour_t690813920
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T1708739960_H
#ifndef SPRITERENDERER_T462452114_H
#define SPRITERENDERER_T462452114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t462452114  : public Renderer_t2177730975
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T462452114_H
#ifndef CHARACTERCONTROLLER_T3600312789_H
#define CHARACTERCONTROLLER_T3600312789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t3600312789  : public Collider_t2002469490
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T3600312789_H
#ifndef CAPSULECOLLIDER_T3485085267_H
#define CAPSULECOLLIDER_T3485085267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t3485085267  : public Collider_t2002469490
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T3485085267_H
#ifndef MESHCOLLIDER_T2864772431_H
#define MESHCOLLIDER_T2864772431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t2864772431  : public Collider_t2002469490
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T2864772431_H
#ifndef ANIMATOR_T3962861531_H
#define ANIMATOR_T3962861531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t3962861531  : public Behaviour_t690813920
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T3962861531_H
#ifndef BOXCOLLIDER_T3541034801_H
#define BOXCOLLIDER_T3541034801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t3541034801  : public Collider_t2002469490
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T3541034801_H
#ifndef RECTTRANSFORM_T3803553984_H
#define RECTTRANSFORM_T3803553984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3803553984  : public Transform_t325636278
{
public:

public:
};

struct RectTransform_t3803553984_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t670328164 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3803553984_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t670328164 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t670328164 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t670328164 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3803553984_H
#ifndef SPHERECOLLIDER_T640931111_H
#define SPHERECOLLIDER_T640931111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t640931111  : public Collider_t2002469490
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T640931111_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (PlayerConnectionInternal_t3999621384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (Random_t4276892536), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (CommandBuffer_t298957586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1302[1] = 
{
	CommandBuffer_t298957586::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (ResourceRequest_t3489361215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1303[2] = 
{
	ResourceRequest_t3489361215::get_offset_of_m_Path_1(),
	ResourceRequest_t3489361215::get_offset_of_m_Type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (Resources_t3202406956), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { sizeof (Shader_t3961792707), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (Material_t109867194), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (SortingLayer_t640439881)+ sizeof (RuntimeObject), sizeof(SortingLayer_t640439881 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1307[1] = 
{
	SortingLayer_t640439881::get_offset_of_m_Id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (Sprite_t2443900411), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (SpriteRenderer_t462452114), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (DataUtility_t2686804354), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (Texture_t271729660), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (Texture2D_t295044112), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (RenderTexture_t3087767672), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (Time_t2282086213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (HideFlags_t1043516033)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1315[10] = 
{
	HideFlags_t1043516033::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (Object_t3842356996), sizeof(Object_t3842356996_marshaled_pinvoke), sizeof(Object_t3842356996_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1316[2] = 
{
	Object_t3842356996::get_offset_of_m_CachedPtr_0(),
	Object_t3842356996_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (UnityLogWriter_t4272619125), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (YieldInstruction_t2608085260), sizeof(YieldInstruction_t2608085260_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (PlayState_t3171563901)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1319[3] = 
{
	PlayState_t3171563901::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (PlayableHandle_t1096232101)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t1096232101 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1320[2] = 
{
	PlayableHandle_t1096232101::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t1096232101::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (Playable_t473451062)+ sizeof (RuntimeObject), sizeof(Playable_t473451062 ), sizeof(Playable_t473451062_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1321[2] = 
{
	Playable_t473451062::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t473451062_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (DataStreamType_t3063966283)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1322[5] = 
{
	DataStreamType_t3063966283::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (PlayableGraph_t3197004910)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t3197004910 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1323[2] = 
{
	PlayableGraph_t3197004910::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t3197004910::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (PlayableOutputHandle_t3102041674)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t3102041674 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1324[2] = 
{
	PlayableOutputHandle_t3102041674::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t3102041674::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (PlayableOutput_t1288249831)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t1288249831 ), sizeof(PlayableOutput_t1288249831_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1325[2] = 
{
	PlayableOutput_t1288249831::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t1288249831_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (CalendarIdentifier_t3847733334)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1326[12] = 
{
	CalendarIdentifier_t3847733334::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (CalendarUnit_t1937588690)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1327[12] = 
{
	CalendarUnit_t1937588690::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (LocalNotification_t3699274119), -1, sizeof(LocalNotification_t3699274119_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1328[2] = 
{
	LocalNotification_t3699274119::get_offset_of_notificationWrapper_0(),
	LocalNotification_t3699274119_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (RemoteNotification_t2924454203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1329[1] = 
{
	RemoteNotification_t2924454203::get_offset_of_notificationWrapper_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (Scene_t772793203)+ sizeof (RuntimeObject), sizeof(Scene_t772793203 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1330[1] = 
{
	Scene_t772793203::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (LoadSceneMode_t468394575)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1331[3] = 
{
	LoadSceneMode_t468394575::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (SceneManager_t3898761371), -1, sizeof(SceneManager_t3898761371_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1332[3] = 
{
	SceneManager_t3898761371_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t3898761371_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t3898761371_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (ScriptableRenderContext_t431654961)+ sizeof (RuntimeObject), sizeof(ScriptableRenderContext_t431654961 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1333[1] = 
{
	ScriptableRenderContext_t431654961::get_offset_of_m_Ptr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (Transform_t325636278), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (Enumerator_t1483583264), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1335[2] = 
{
	Enumerator_t1483583264::get_offset_of_outer_0(),
	Enumerator_t1483583264::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (DrivenTransformProperties_t3934457824)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1336[26] = 
{
	DrivenTransformProperties_t3934457824::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (DrivenRectTransformTracker_t1612842217)+ sizeof (RuntimeObject), sizeof(DrivenRectTransformTracker_t1612842217 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (RectTransform_t3803553984), -1, sizeof(RectTransform_t3803553984_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1338[1] = 
{
	RectTransform_t3803553984_StaticFields::get_offset_of_reapplyDrivenProperties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (ReapplyDrivenProperties_t670328164), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (Edge_t647819050)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1340[5] = 
{
	Edge_t647819050::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (Axis_t114840610)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1341[3] = 
{
	Axis_t114840610::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (SpriteAtlasManager_t3817870944), -1, sizeof(SpriteAtlasManager_t3817870944_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1342[2] = 
{
	SpriteAtlasManager_t3817870944_StaticFields::get_offset_of_atlasRequested_0(),
	SpriteAtlasManager_t3817870944_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (RequestAtlasCallback_t1876146190), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (SpriteAtlas_t2830703580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (ParticleSystem_t204201629), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (Particle_t290951370)+ sizeof (RuntimeObject), sizeof(Particle_t290951370 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1346[14] = 
{
	Particle_t290951370::get_offset_of_m_Position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_Velocity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_AnimatedVelocity_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_InitialVelocity_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_AxisOfRotation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_Rotation_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_AngularVelocity_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_StartSize_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_StartColor_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_RandomSeed_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_Lifetime_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_StartLifetime_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_EmitAccumulator0_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t290951370::get_offset_of_m_EmitAccumulator1_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (ControllerColliderHit_t651377495), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1347[7] = 
{
	ControllerColliderHit_t651377495::get_offset_of_m_Controller_0(),
	ControllerColliderHit_t651377495::get_offset_of_m_Collider_1(),
	ControllerColliderHit_t651377495::get_offset_of_m_Point_2(),
	ControllerColliderHit_t651377495::get_offset_of_m_Normal_3(),
	ControllerColliderHit_t651377495::get_offset_of_m_MoveDirection_4(),
	ControllerColliderHit_t651377495::get_offset_of_m_MoveLength_5(),
	ControllerColliderHit_t651377495::get_offset_of_m_Push_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (Collision_t443744572), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1348[5] = 
{
	Collision_t443744572::get_offset_of_m_Impulse_0(),
	Collision_t443744572::get_offset_of_m_RelativeVelocity_1(),
	Collision_t443744572::get_offset_of_m_Rigidbody_2(),
	Collision_t443744572::get_offset_of_m_Collider_3(),
	Collision_t443744572::get_offset_of_m_Contacts_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (CollisionFlags_t1131393485)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1349[8] = 
{
	CollisionFlags_t1131393485::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (QueryTriggerInteraction_t3646720854)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1350[4] = 
{
	QueryTriggerInteraction_t3646720854::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (Physics_t3632679412), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (ContactPoint_t3273172670)+ sizeof (RuntimeObject), sizeof(ContactPoint_t3273172670 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1352[5] = 
{
	ContactPoint_t3273172670::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t3273172670::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t3273172670::get_offset_of_m_ThisColliderInstanceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t3273172670::get_offset_of_m_OtherColliderInstanceID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t3273172670::get_offset_of_m_Separation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (Rigidbody_t3990686922), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (Collider_t2002469490), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (BoxCollider_t3541034801), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (SphereCollider_t640931111), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (MeshCollider_t2864772431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (CapsuleCollider_t3485085267), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (RaycastHit_t398222198)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1359[6] = 
{
	RaycastHit_t398222198::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t398222198::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t398222198::get_offset_of_m_FaceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t398222198::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t398222198::get_offset_of_m_UV_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t398222198::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (PhysicMaterial_t542501729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (CharacterController_t3600312789), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (RaycastHit2D_t2932496961)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1362[6] = 
{
	RaycastHit2D_t2932496961::get_offset_of_m_Centroid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2932496961::get_offset_of_m_Point_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2932496961::get_offset_of_m_Normal_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2932496961::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2932496961::get_offset_of_m_Fraction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t2932496961::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (Physics2D_t3368006246), -1, sizeof(Physics2D_t3368006246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1363[1] = 
{
	Physics2D_t3368006246_StaticFields::get_offset_of_m_LastDisabledRigidbody2D_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (Rigidbody2D_t1548733237), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (Collider2D_t2267301385), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (AudioPlayableOutput_t1436289891)+ sizeof (RuntimeObject), sizeof(AudioPlayableOutput_t1436289891 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1366[1] = 
{
	AudioPlayableOutput_t1436289891::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (AudioClipPlayable_t374255664)+ sizeof (RuntimeObject), sizeof(AudioClipPlayable_t374255664 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1367[1] = 
{
	AudioClipPlayable_t374255664::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (AudioMixerPlayable_t439295833)+ sizeof (RuntimeObject), sizeof(AudioMixerPlayable_t439295833 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1368[1] = 
{
	AudioMixerPlayable_t439295833::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { sizeof (AudioSettings_t2367537725), -1, sizeof(AudioSettings_t2367537725_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1369[1] = 
{
	AudioSettings_t2367537725_StaticFields::get_offset_of_OnAudioConfigurationChanged_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (AudioConfigurationChangeHandler_t880895524), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (AudioClip_t3439746196), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1371[2] = 
{
	AudioClip_t3439746196::get_offset_of_m_PCMReaderCallback_2(),
	AudioClip_t3439746196::get_offset_of_m_PCMSetPositionCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (PCMReaderCallback_t3230536730), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (PCMSetPositionCallback_t1010283552), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (AudioSource_t1708739960), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (AudioPlayableGraphExtensions_t3606549690), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (SharedBetweenAnimatorsAttribute_t3471214108), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (StateMachineBehaviour_t1462502316), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (AnimationClipPlayable_t1085101619)+ sizeof (RuntimeObject), sizeof(AnimationClipPlayable_t1085101619 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1378[1] = 
{
	AnimationClipPlayable_t1085101619::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (AnimationLayerMixerPlayable_t3888512442)+ sizeof (RuntimeObject), sizeof(AnimationLayerMixerPlayable_t3888512442 ), sizeof(AnimationLayerMixerPlayable_t3888512442_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1379[2] = 
{
	AnimationLayerMixerPlayable_t3888512442::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationLayerMixerPlayable_t3888512442_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (AnimationMixerPlayable_t1594359019)+ sizeof (RuntimeObject), sizeof(AnimationMixerPlayable_t1594359019 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1380[1] = 
{
	AnimationMixerPlayable_t1594359019::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (AnimationOffsetPlayable_t3577257109)+ sizeof (RuntimeObject), sizeof(AnimationOffsetPlayable_t3577257109 ), sizeof(AnimationOffsetPlayable_t3577257109_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1381[2] = 
{
	AnimationOffsetPlayable_t3577257109::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationOffsetPlayable_t3577257109_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (AnimationPlayableOutput_t3313010199)+ sizeof (RuntimeObject), sizeof(AnimationPlayableOutput_t3313010199 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1382[1] = 
{
	AnimationPlayableOutput_t3313010199::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (AnimatorControllerPlayable_t3656139413)+ sizeof (RuntimeObject), sizeof(AnimatorControllerPlayable_t3656139413 ), sizeof(AnimatorControllerPlayable_t3656139413_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1383[2] = 
{
	AnimatorControllerPlayable_t3656139413::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorControllerPlayable_t3656139413_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (AnimationPlayableGraphExtensions_t258044169), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (AnimationEventSource_t3199469545)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1385[4] = 
{
	AnimationEventSource_t3199469545::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (AnimationEvent_t1439550694), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1386[11] = 
{
	AnimationEvent_t1439550694::get_offset_of_m_Time_0(),
	AnimationEvent_t1439550694::get_offset_of_m_FunctionName_1(),
	AnimationEvent_t1439550694::get_offset_of_m_StringParameter_2(),
	AnimationEvent_t1439550694::get_offset_of_m_ObjectReferenceParameter_3(),
	AnimationEvent_t1439550694::get_offset_of_m_FloatParameter_4(),
	AnimationEvent_t1439550694::get_offset_of_m_IntParameter_5(),
	AnimationEvent_t1439550694::get_offset_of_m_MessageOptions_6(),
	AnimationEvent_t1439550694::get_offset_of_m_Source_7(),
	AnimationEvent_t1439550694::get_offset_of_m_StateSender_8(),
	AnimationEvent_t1439550694::get_offset_of_m_AnimatorStateInfo_9(),
	AnimationEvent_t1439550694::get_offset_of_m_AnimatorClipInfo_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (AnimationClip_t718716459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (AnimationState_t3948705326), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (AnimatorControllerParameterType_t209018528)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1389[5] = 
{
	AnimatorControllerParameterType_t209018528::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (AnimatorClipInfo_t3331068568)+ sizeof (RuntimeObject), sizeof(AnimatorClipInfo_t3331068568 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1390[2] = 
{
	AnimatorClipInfo_t3331068568::get_offset_of_m_ClipInstanceID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorClipInfo_t3331068568::get_offset_of_m_Weight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (AnimatorStateInfo_t580963778)+ sizeof (RuntimeObject), sizeof(AnimatorStateInfo_t580963778 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1391[9] = 
{
	AnimatorStateInfo_t580963778::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t580963778::get_offset_of_m_Path_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t580963778::get_offset_of_m_FullPath_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t580963778::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t580963778::get_offset_of_m_Length_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t580963778::get_offset_of_m_Speed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t580963778::get_offset_of_m_SpeedMultiplier_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t580963778::get_offset_of_m_Tag_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t580963778::get_offset_of_m_Loop_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (AnimatorTransitionInfo_t1811752579)+ sizeof (RuntimeObject), sizeof(AnimatorTransitionInfo_t1811752579_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1392[6] = 
{
	AnimatorTransitionInfo_t1811752579::get_offset_of_m_FullPath_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1811752579::get_offset_of_m_UserName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1811752579::get_offset_of_m_Name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1811752579::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1811752579::get_offset_of_m_AnyState_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1811752579::get_offset_of_m_TransitionType_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (Animator_t3962861531), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (AnimatorControllerParameter_t4239035996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1394[5] = 
{
	AnimatorControllerParameter_t4239035996::get_offset_of_m_Name_0(),
	AnimatorControllerParameter_t4239035996::get_offset_of_m_Type_1(),
	AnimatorControllerParameter_t4239035996::get_offset_of_m_DefaultFloat_2(),
	AnimatorControllerParameter_t4239035996::get_offset_of_m_DefaultInt_3(),
	AnimatorControllerParameter_t4239035996::get_offset_of_m_DefaultBool_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (SkeletonBone_t682890485)+ sizeof (RuntimeObject), sizeof(SkeletonBone_t682890485_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1395[5] = 
{
	SkeletonBone_t682890485::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t682890485::get_offset_of_parentName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t682890485::get_offset_of_position_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t682890485::get_offset_of_rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_t682890485::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (HumanLimit_t4024136502)+ sizeof (RuntimeObject), sizeof(HumanLimit_t4024136502 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1396[5] = 
{
	HumanLimit_t4024136502::get_offset_of_m_Min_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t4024136502::get_offset_of_m_Max_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t4024136502::get_offset_of_m_Center_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t4024136502::get_offset_of_m_AxisLength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t4024136502::get_offset_of_m_UseDefaultValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (HumanBone_t3534409221)+ sizeof (RuntimeObject), sizeof(HumanBone_t3534409221_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1397[3] = 
{
	HumanBone_t3534409221::get_offset_of_m_BoneName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t3534409221::get_offset_of_m_HumanName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t3534409221::get_offset_of_limit_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (AvatarMask_t1637803008), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (Motion_t3068978084), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
