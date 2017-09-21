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

// System.Char[]
struct CharU5BU5D_t3916113839;
// System.Void
struct Void_t1894941745;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1511556234;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3516622016;
// System.IAsyncResult
struct IAsyncResult_t2247299005;
// System.AsyncCallback
struct AsyncCallback_t454955647;

struct Vector3_t3995721965 ;



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
#ifndef VALUETYPE_T4199890522_H
#define VALUETYPE_T4199890522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4199890522  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4199890522_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4199890522_marshaled_com
{
};
#endif // VALUETYPE_T4199890522_H
#ifndef ENUM_T3592772552_H
#define ENUM_T3592772552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3592772552  : public ValueType_t4199890522
{
public:

public:
};

struct Enum_t3592772552_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3916113839* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3592772552_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3916113839* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3916113839** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3916113839* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3592772552_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3592772552_marshaled_com
{
};
#endif // ENUM_T3592772552_H
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
#ifndef UNITYARLIGHTESTIMATE_T793166333_H
#define UNITYARLIGHTESTIMATE_T793166333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t793166333 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t793166333, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t793166333, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T793166333_H
#ifndef U24ARRAYTYPEU3D24_T678097297_H
#define U24ARRAYTYPEU3D24_T678097297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t678097297 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t678097297__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T678097297_H
#ifndef VOID_T1894941745_H
#define VOID_T1894941745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1894941745 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1894941745_H
#ifndef VECTOR4_T3697928961_H
#define VECTOR4_T3697928961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3697928961 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3697928961, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3697928961, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3697928961, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3697928961, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3697928961_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3697928961  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3697928961  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3697928961  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3697928961  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3697928961_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3697928961  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3697928961 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3697928961  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3697928961_StaticFields, ___oneVector_6)); }
	inline Vector4_t3697928961  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3697928961 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3697928961  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3697928961_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3697928961  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3697928961 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3697928961  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3697928961_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3697928961  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3697928961 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3697928961  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3697928961_H
#ifndef ARPLANEANCHORALIGNMENT_T11464095_H
#define ARPLANEANCHORALIGNMENT_T11464095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t11464095 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t11464095, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T11464095_H
#ifndef UNITYVIDEOPARAMS_T1138521989_H
#define UNITYVIDEOPARAMS_T1138521989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t1138521989 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	IntPtr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1138521989, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1138521989, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1138521989, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1138521989, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1138521989, ___cvPixelBufferPtr_4)); }
	inline IntPtr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline IntPtr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(IntPtr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T1138521989_H
#ifndef ARTRACKINGSTATEREASON_T1406487302_H
#define ARTRACKINGSTATEREASON_T1406487302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t1406487302 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t1406487302, ___value___1)); }
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
#endif // ARTRACKINGSTATEREASON_T1406487302_H
#ifndef ARTRACKINGSTATE_T622951799_H
#define ARTRACKINGSTATE_T622951799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t622951799 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t622951799, ___value___1)); }
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
#endif // ARTRACKINGSTATE_T622951799_H
#ifndef UNITYARMATRIX4X4_T2254545107_H
#define UNITYARMATRIX4X4_T2254545107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t2254545107 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t3697928961  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t3697928961  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t3697928961  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t3697928961  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2254545107, ___column0_0)); }
	inline Vector4_t3697928961  get_column0_0() const { return ___column0_0; }
	inline Vector4_t3697928961 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t3697928961  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2254545107, ___column1_1)); }
	inline Vector4_t3697928961  get_column1_1() const { return ___column1_1; }
	inline Vector4_t3697928961 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t3697928961  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2254545107, ___column2_2)); }
	inline Vector4_t3697928961  get_column2_2() const { return ___column2_2; }
	inline Vector4_t3697928961 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t3697928961  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2254545107, ___column3_3)); }
	inline Vector4_t3697928961  get_column3_3() const { return ___column3_3; }
	inline Vector4_t3697928961 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t3697928961  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T2254545107_H
#ifndef DELEGATE_T442234462_H
#define DELEGATE_T442234462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t442234462  : public RuntimeObject
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
	DelegateData_t1511556234 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t442234462, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t442234462, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t442234462, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t442234462, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t442234462, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t442234462, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t442234462, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t442234462, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t442234462, ___data_8)); }
	inline DelegateData_t1511556234 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1511556234 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1511556234 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T442234462_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T551574654_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T551574654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t551574654  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t551574654_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8E7629AD5AF686202B8CB7C014505C432FFE31E6
	U24ArrayTypeU3D24_t678097297  ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t551574654_StaticFields, ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0)); }
	inline U24ArrayTypeU3D24_t678097297  get_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() const { return ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline U24ArrayTypeU3D24_t678097297 * get_address_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return &___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline void set_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(U24ArrayTypeU3D24_t678097297  value)
	{
		___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T551574654_H
#ifndef UNITYARUSERANCHORDATA_T1931325209_H
#define UNITYARUSERANCHORDATA_T1931325209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t1931325209 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t2254545107  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1931325209, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1931325209, ___transform_1)); }
	inline UnityARMatrix4x4_t2254545107  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t2254545107 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t2254545107  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T1931325209_H
#ifndef INTERNAL_UNITYARCAMERA_T2393618199_H
#define INTERNAL_UNITYARCAMERA_T2393618199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t2393618199 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t2254545107  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t2254545107  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t1138521989  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.internal_UnityARCamera::lightEstimation
	UnityARLightEstimate_t793166333  ___lightEstimation_5;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2393618199, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t2254545107  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t2254545107 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t2254545107  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2393618199, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t2254545107  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t2254545107 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t2254545107  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2393618199, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2393618199, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2393618199, ___videoParams_4)); }
	inline UnityVideoParams_t1138521989  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t1138521989 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t1138521989  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2393618199, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t793166333  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t793166333 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t793166333  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2393618199, ___getPointCloudData_6)); }
	inline uint32_t get_getPointCloudData_6() const { return ___getPointCloudData_6; }
	inline uint32_t* get_address_of_getPointCloudData_6() { return &___getPointCloudData_6; }
	inline void set_getPointCloudData_6(uint32_t value)
	{
		___getPointCloudData_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T2393618199_H
#ifndef UNITYARCAMERA_T3815577981_H
#define UNITYARCAMERA_T3815577981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t3815577981 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t2254545107  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t2254545107  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t1138521989  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARCamera::lightEstimation
	UnityARLightEstimate_t793166333  ___lightEstimation_5;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t3516622016* ___pointCloudData_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t3815577981, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t2254545107  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t2254545107 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t2254545107  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t3815577981, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t2254545107  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t2254545107 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t2254545107  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t3815577981, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t3815577981, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t3815577981, ___videoParams_4)); }
	inline UnityVideoParams_t1138521989  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t1138521989 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t1138521989  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t3815577981, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t793166333  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t793166333 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t793166333  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t3815577981, ___pointCloudData_6)); }
	inline Vector3U5BU5D_t3516622016* get_pointCloudData_6() const { return ___pointCloudData_6; }
	inline Vector3U5BU5D_t3516622016** get_address_of_pointCloudData_6() { return &___pointCloudData_6; }
	inline void set_pointCloudData_6(Vector3U5BU5D_t3516622016* value)
	{
		___pointCloudData_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t3815577981_marshaled_pinvoke
{
	UnityARMatrix4x4_t2254545107  ___worldTransform_0;
	UnityARMatrix4x4_t2254545107  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t1138521989  ___videoParams_4;
	UnityARLightEstimate_t793166333  ___lightEstimation_5;
	Vector3_t3995721965 * ___pointCloudData_6;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t3815577981_marshaled_com
{
	UnityARMatrix4x4_t2254545107  ___worldTransform_0;
	UnityARMatrix4x4_t2254545107  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t1138521989  ___videoParams_4;
	UnityARLightEstimate_t793166333  ___lightEstimation_5;
	Vector3_t3995721965 * ___pointCloudData_6;
};
#endif // UNITYARCAMERA_T3815577981_H
#ifndef MULTICASTDELEGATE_T1723919548_H
#define MULTICASTDELEGATE_T1723919548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1723919548  : public Delegate_t442234462
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1723919548 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1723919548 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1723919548, ___prev_9)); }
	inline MulticastDelegate_t1723919548 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1723919548 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1723919548 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1723919548, ___kpm_next_10)); }
	inline MulticastDelegate_t1723919548 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1723919548 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1723919548 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1723919548_H
#ifndef UNITYARANCHORDATA_T2081227367_H
#define UNITYARANCHORDATA_T2081227367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t2081227367 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t2254545107  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t3697928961  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t3697928961  ___extent_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2081227367, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2081227367, ___transform_1)); }
	inline UnityARMatrix4x4_t2254545107  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t2254545107 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t2254545107  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2081227367, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2081227367, ___center_3)); }
	inline Vector4_t3697928961  get_center_3() const { return ___center_3; }
	inline Vector4_t3697928961 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t3697928961  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2081227367, ___extent_4)); }
	inline Vector4_t3697928961  get_extent_4() const { return ___extent_4; }
	inline Vector4_t3697928961 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t3697928961  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T2081227367_H
#ifndef INTERNAL_ARSESSIONTRACKINGCHANGED_T2221068990_H
#define INTERNAL_ARSESSIONTRACKINGCHANGED_T2221068990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct  internal_ARSessionTrackingChanged_t2221068990  : public MulticastDelegate_t1723919548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARSESSIONTRACKINGCHANGED_T2221068990_H
#ifndef INTERNAL_ARUSERANCHORREMOVED_T741997004_H
#define INTERNAL_ARUSERANCHORREMOVED_T741997004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t741997004  : public MulticastDelegate_t1723919548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORREMOVED_T741997004_H
#ifndef INTERNAL_ARUSERANCHORUPDATED_T1550104743_H
#define INTERNAL_ARUSERANCHORUPDATED_T1550104743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t1550104743  : public MulticastDelegate_t1723919548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORUPDATED_T1550104743_H
#ifndef INTERNAL_ARUSERANCHORADDED_T2550794050_H
#define INTERNAL_ARUSERANCHORADDED_T2550794050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct  internal_ARUserAnchorAdded_t2550794050  : public MulticastDelegate_t1723919548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORADDED_T2550794050_H
#ifndef INTERNAL_ARANCHORREMOVED_T2583502762_H
#define INTERNAL_ARANCHORREMOVED_T2583502762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct  internal_ARAnchorRemoved_t2583502762  : public MulticastDelegate_t1723919548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORREMOVED_T2583502762_H
#ifndef INTERNAL_ARANCHORUPDATED_T499806254_H
#define INTERNAL_ARANCHORUPDATED_T499806254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct  internal_ARAnchorUpdated_t499806254  : public MulticastDelegate_t1723919548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORUPDATED_T499806254_H
#ifndef INTERNAL_ARANCHORADDED_T3142445169_H
#define INTERNAL_ARANCHORADDED_T3142445169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct  internal_ARAnchorAdded_t3142445169  : public MulticastDelegate_t1723919548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORADDED_T3142445169_H
#ifndef INTERNAL_ARFRAMEUPDATE_T3986156193_H
#define INTERNAL_ARFRAMEUPDATE_T3986156193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct  internal_ARFrameUpdate_t3986156193  : public MulticastDelegate_t1723919548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFRAMEUPDATE_T3986156193_H
#ifndef ARSESSIONTRACKINGCHANGED_T2435189880_H
#define ARSESSIONTRACKINGCHANGED_T2435189880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct  ARSessionTrackingChanged_t2435189880  : public MulticastDelegate_t1723919548
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONTRACKINGCHANGED_T2435189880_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (ARSessionTrackingChanged_t2435189880), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (internal_ARFrameUpdate_t3986156193), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (internal_ARAnchorAdded_t3142445169), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (internal_ARAnchorUpdated_t499806254), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (internal_ARAnchorRemoved_t2583502762), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (internal_ARUserAnchorAdded_t2550794050), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (internal_ARUserAnchorUpdated_t1550104743), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (internal_ARUserAnchorRemoved_t741997004), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (internal_ARSessionTrackingChanged_t2221068990), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (U3CPrivateImplementationDetailsU3E_t551574654), -1, sizeof(U3CPrivateImplementationDetailsU3E_t551574654_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1909[1] = 
{
	U3CPrivateImplementationDetailsU3E_t551574654_StaticFields::get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (U24ArrayTypeU3D24_t678097297)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D24_t678097297 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
