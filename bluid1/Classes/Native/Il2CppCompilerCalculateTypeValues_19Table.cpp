﻿#include "il2cpp-config.h"

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

// System.Void
struct Void_t2380062433;
// System.Char[]
struct CharU5BU5D_t2716540070;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3667499344;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3756310061;
// System.IAsyncResult
struct IAsyncResult_t365190093;
// System.AsyncCallback
struct AsyncCallback_t319249098;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t613206808;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t2015019665;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t1505529068;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t2618235973;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t2867397427;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t2096045671;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t407918255;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t4170662403;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t3162219596;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t3990761094;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t4179995370;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t4070042842;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t1369710540;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t4170983826;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t3837293321;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t2522967763;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t405473284;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t581306195;

struct Vector3_t3301389380 ;



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
#ifndef VALUETYPE_T2239133543_H
#define VALUETYPE_T2239133543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2239133543  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2239133543_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2239133543_marshaled_com
{
};
#endif // VALUETYPE_T2239133543_H
#ifndef VECTOR3_T3301389380_H
#define VECTOR3_T3301389380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3301389380 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3301389380, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3301389380, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3301389380, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3301389380_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3301389380  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3301389380  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3301389380  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3301389380  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3301389380  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3301389380  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3301389380  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3301389380  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3301389380  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3301389380  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3301389380  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3301389380 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3301389380  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___oneVector_5)); }
	inline Vector3_t3301389380  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3301389380 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3301389380  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___upVector_6)); }
	inline Vector3_t3301389380  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3301389380 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3301389380  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___downVector_7)); }
	inline Vector3_t3301389380  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3301389380 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3301389380  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___leftVector_8)); }
	inline Vector3_t3301389380  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3301389380 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3301389380  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___rightVector_9)); }
	inline Vector3_t3301389380  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3301389380 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3301389380  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3301389380  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3301389380 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3301389380  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___backVector_11)); }
	inline Vector3_t3301389380  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3301389380 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3301389380  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3301389380  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3301389380 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3301389380  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3301389380_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3301389380  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3301389380 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3301389380  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3301389380_H
#ifndef MATRIX4X4_T502713540_H
#define MATRIX4X4_T502713540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t502713540 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t502713540_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t502713540  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t502713540  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t502713540  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t502713540 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t502713540  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t502713540_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t502713540  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t502713540 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t502713540  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T502713540_H
#ifndef UNITYARLIGHTESTIMATE_T4136212576_H
#define UNITYARLIGHTESTIMATE_T4136212576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t4136212576 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t4136212576, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t4136212576, ___ambientColorTemperature_1)); }
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
#endif // UNITYARLIGHTESTIMATE_T4136212576_H
#ifndef VOID_T2380062433_H
#define VOID_T2380062433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2380062433 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2380062433_H
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
#ifndef VECTOR4_T3938431079_H
#define VECTOR4_T3938431079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3938431079 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3938431079, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3938431079, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3938431079, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3938431079, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3938431079_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3938431079  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3938431079  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3938431079  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3938431079  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3938431079_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3938431079  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3938431079 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3938431079  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3938431079_StaticFields, ___oneVector_6)); }
	inline Vector4_t3938431079  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3938431079 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3938431079  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3938431079_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3938431079  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3938431079 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3938431079  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3938431079_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3938431079  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3938431079 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3938431079  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3938431079_H
#ifndef U24ARRAYTYPEU3D24_T224884561_H
#define U24ARRAYTYPEU3D24_T224884561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t224884561 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t224884561__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T224884561_H
#ifndef ENUM_T3261666997_H
#define ENUM_T3261666997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3261666997  : public ValueType_t2239133543
{
public:

public:
};

struct Enum_t3261666997_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2716540070* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3261666997_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2716540070* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2716540070** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2716540070* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3261666997_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3261666997_marshaled_com
{
};
#endif // ENUM_T3261666997_H
#ifndef ARTRACKINGSTATE_T2312412442_H
#define ARTRACKINGSTATE_T2312412442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t2312412442 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t2312412442, ___value___1)); }
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
#endif // ARTRACKINGSTATE_T2312412442_H
#ifndef UNITYARMATRIX4X4_T2943781733_H
#define UNITYARMATRIX4X4_T2943781733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t2943781733 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t3938431079  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t3938431079  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t3938431079  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t3938431079  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2943781733, ___column0_0)); }
	inline Vector4_t3938431079  get_column0_0() const { return ___column0_0; }
	inline Vector4_t3938431079 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t3938431079  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2943781733, ___column1_1)); }
	inline Vector4_t3938431079  get_column1_1() const { return ___column1_1; }
	inline Vector4_t3938431079 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t3938431079  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2943781733, ___column2_2)); }
	inline Vector4_t3938431079  get_column2_2() const { return ___column2_2; }
	inline Vector4_t3938431079 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t3938431079  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2943781733, ___column3_3)); }
	inline Vector4_t3938431079  get_column3_3() const { return ___column3_3; }
	inline Vector4_t3938431079 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t3938431079  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T2943781733_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3809861994_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3809861994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3809861994  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3809861994_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8E7629AD5AF686202B8CB7C014505C432FFE31E6
	U24ArrayTypeU3D24_t224884561  ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3809861994_StaticFields, ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0)); }
	inline U24ArrayTypeU3D24_t224884561  get_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() const { return ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline U24ArrayTypeU3D24_t224884561 * get_address_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return &___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline void set_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(U24ArrayTypeU3D24_t224884561  value)
	{
		___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3809861994_H
#ifndef ARTRACKINGSTATEREASON_T2216932256_H
#define ARTRACKINGSTATEREASON_T2216932256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t2216932256 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t2216932256, ___value___1)); }
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
#endif // ARTRACKINGSTATEREASON_T2216932256_H
#ifndef UNITYVIDEOPARAMS_T3714083287_H
#define UNITYVIDEOPARAMS_T3714083287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t3714083287 
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
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3714083287, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3714083287, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3714083287, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3714083287, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3714083287, ___cvPixelBufferPtr_4)); }
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
#endif // UNITYVIDEOPARAMS_T3714083287_H
#ifndef ARUSERANCHOR_T177620069_H
#define ARUSERANCHOR_T177620069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARUserAnchor
struct  ARUserAnchor_t177620069 
{
public:
	// System.String UnityEngine.XR.iOS.ARUserAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARUserAnchor::transform
	Matrix4x4_t502713540  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARUserAnchor_t177620069, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARUserAnchor_t177620069, ___transform_1)); }
	inline Matrix4x4_t502713540  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t502713540 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t502713540  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t177620069_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t502713540  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t177620069_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t502713540  ___transform_1;
};
#endif // ARUSERANCHOR_T177620069_H
#ifndef DELEGATE_T1970689087_H
#define DELEGATE_T1970689087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1970689087  : public RuntimeObject
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
	DelegateData_t3667499344 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1970689087, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1970689087, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1970689087, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1970689087, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1970689087, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1970689087, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1970689087, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1970689087, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1970689087, ___data_8)); }
	inline DelegateData_t3667499344 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3667499344 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3667499344 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1970689087_H
#ifndef ARPLANEANCHORALIGNMENT_T2310832674_H
#define ARPLANEANCHORALIGNMENT_T2310832674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t2310832674 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t2310832674, ___value___1)); }
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
#endif // ARPLANEANCHORALIGNMENT_T2310832674_H
#ifndef INTERNAL_UNITYARCAMERA_T2216876931_H
#define INTERNAL_UNITYARCAMERA_T2216876931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t2216876931 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t2943781733  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t2943781733  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t3714083287  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.internal_UnityARCamera::lightEstimation
	UnityARLightEstimate_t4136212576  ___lightEstimation_5;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2216876931, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t2943781733  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t2943781733 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t2943781733  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2216876931, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t2943781733  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t2943781733 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t2943781733  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2216876931, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2216876931, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2216876931, ___videoParams_4)); }
	inline UnityVideoParams_t3714083287  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t3714083287 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t3714083287  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2216876931, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t4136212576  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t4136212576 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t4136212576  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2216876931, ___getPointCloudData_6)); }
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
#endif // INTERNAL_UNITYARCAMERA_T2216876931_H
#ifndef UNITYARUSERANCHORDATA_T1762166213_H
#define UNITYARUSERANCHORDATA_T1762166213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t1762166213 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t2943781733  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1762166213, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1762166213, ___transform_1)); }
	inline UnityARMatrix4x4_t2943781733  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t2943781733 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t2943781733  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T1762166213_H
#ifndef UNITYARCAMERA_T2819698259_H
#define UNITYARCAMERA_T2819698259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t2819698259 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t2943781733  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t2943781733  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t3714083287  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARCamera::lightEstimation
	UnityARLightEstimate_t4136212576  ___lightEstimation_5;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t3756310061* ___pointCloudData_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t2819698259, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t2943781733  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t2943781733 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t2943781733  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t2819698259, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t2943781733  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t2943781733 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t2943781733  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t2819698259, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t2819698259, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t2819698259, ___videoParams_4)); }
	inline UnityVideoParams_t3714083287  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t3714083287 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t3714083287  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t2819698259, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t4136212576  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t4136212576 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t4136212576  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t2819698259, ___pointCloudData_6)); }
	inline Vector3U5BU5D_t3756310061* get_pointCloudData_6() const { return ___pointCloudData_6; }
	inline Vector3U5BU5D_t3756310061** get_address_of_pointCloudData_6() { return &___pointCloudData_6; }
	inline void set_pointCloudData_6(Vector3U5BU5D_t3756310061* value)
	{
		___pointCloudData_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2819698259_marshaled_pinvoke
{
	UnityARMatrix4x4_t2943781733  ___worldTransform_0;
	UnityARMatrix4x4_t2943781733  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t3714083287  ___videoParams_4;
	UnityARLightEstimate_t4136212576  ___lightEstimation_5;
	Vector3_t3301389380 * ___pointCloudData_6;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t2819698259_marshaled_com
{
	UnityARMatrix4x4_t2943781733  ___worldTransform_0;
	UnityARMatrix4x4_t2943781733  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t3714083287  ___videoParams_4;
	UnityARLightEstimate_t4136212576  ___lightEstimation_5;
	Vector3_t3301389380 * ___pointCloudData_6;
};
#endif // UNITYARCAMERA_T2819698259_H
#ifndef MULTICASTDELEGATE_T2760760441_H
#define MULTICASTDELEGATE_T2760760441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2760760441  : public Delegate_t1970689087
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2760760441 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2760760441 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2760760441, ___prev_9)); }
	inline MulticastDelegate_t2760760441 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2760760441 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2760760441 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2760760441, ___kpm_next_10)); }
	inline MulticastDelegate_t2760760441 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2760760441 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2760760441 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2760760441_H
#ifndef UNITYARANCHORDATA_T3742232219_H
#define UNITYARANCHORDATA_T3742232219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t3742232219 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t2943781733  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t3938431079  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t3938431079  ___extent_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t3742232219, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t3742232219, ___transform_1)); }
	inline UnityARMatrix4x4_t2943781733  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t2943781733 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t2943781733  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t3742232219, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t3742232219, ___center_3)); }
	inline Vector4_t3938431079  get_center_3() const { return ___center_3; }
	inline Vector4_t3938431079 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t3938431079  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t3742232219, ___extent_4)); }
	inline Vector4_t3938431079  get_extent_4() const { return ___extent_4; }
	inline Vector4_t3938431079 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t3938431079  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T3742232219_H
#ifndef ARPLANEANCHOR_T3450752459_H
#define ARPLANEANCHOR_T3450752459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t3450752459 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t502713540  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_t3301389380  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_t3301389380  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t3450752459, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t3450752459, ___transform_1)); }
	inline Matrix4x4_t502713540  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t502713540 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t502713540  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t3450752459, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t3450752459, ___center_3)); }
	inline Vector3_t3301389380  get_center_3() const { return ___center_3; }
	inline Vector3_t3301389380 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t3301389380  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t3450752459, ___extent_4)); }
	inline Vector3_t3301389380  get_extent_4() const { return ___extent_4; }
	inline Vector3_t3301389380 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_t3301389380  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t3450752459_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t502713540  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3301389380  ___center_3;
	Vector3_t3301389380  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t3450752459_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t502713540  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3301389380  ___center_3;
	Vector3_t3301389380  ___extent_4;
};
#endif // ARPLANEANCHOR_T3450752459_H
#ifndef ARANCHORADDED_T2015019665_H
#define ARANCHORADDED_T2015019665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct  ARAnchorAdded_t2015019665  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORADDED_T2015019665_H
#ifndef ARFRAMEUPDATE_T613206808_H
#define ARFRAMEUPDATE_T613206808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct  ARFrameUpdate_t613206808  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAMEUPDATE_T613206808_H
#ifndef ARANCHORREMOVED_T2618235973_H
#define ARANCHORREMOVED_T2618235973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct  ARAnchorRemoved_t2618235973  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORREMOVED_T2618235973_H
#ifndef ARANCHORUPDATED_T1505529068_H
#define ARANCHORUPDATED_T1505529068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct  ARAnchorUpdated_t1505529068  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORUPDATED_T1505529068_H
#ifndef ARSESSIONTRACKINGCHANGED_T3990761094_H
#define ARSESSIONTRACKINGCHANGED_T3990761094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct  ARSessionTrackingChanged_t3990761094  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONTRACKINGCHANGED_T3990761094_H
#ifndef ARUSERANCHORADDED_T2867397427_H
#define ARUSERANCHORADDED_T2867397427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct  ARUserAnchorAdded_t2867397427  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORADDED_T2867397427_H
#ifndef ARUSERANCHORUPDATED_T2096045671_H
#define ARUSERANCHORUPDATED_T2096045671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct  ARUserAnchorUpdated_t2096045671  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORUPDATED_T2096045671_H
#ifndef ARUSERANCHORREMOVED_T407918255_H
#define ARUSERANCHORREMOVED_T407918255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct  ARUserAnchorRemoved_t407918255  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORREMOVED_T407918255_H
#ifndef ARSESSIONFAILED_T4170662403_H
#define ARSESSIONFAILED_T4170662403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct  ARSessionFailed_t4170662403  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONFAILED_T4170662403_H
#ifndef INTERNAL_ARSESSIONTRACKINGCHANGED_T4070042842_H
#define INTERNAL_ARSESSIONTRACKINGCHANGED_T4070042842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct  internal_ARSessionTrackingChanged_t4070042842  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARSESSIONTRACKINGCHANGED_T4070042842_H
#ifndef INTERNAL_ARUSERANCHORREMOVED_T581306195_H
#define INTERNAL_ARUSERANCHORREMOVED_T581306195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t581306195  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORREMOVED_T581306195_H
#ifndef INTERNAL_ARUSERANCHORUPDATED_T405473284_H
#define INTERNAL_ARUSERANCHORUPDATED_T405473284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t405473284  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORUPDATED_T405473284_H
#ifndef INTERNAL_ARUSERANCHORADDED_T2522967763_H
#define INTERNAL_ARUSERANCHORADDED_T2522967763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct  internal_ARUserAnchorAdded_t2522967763  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORADDED_T2522967763_H
#ifndef INTERNAL_ARANCHORREMOVED_T3837293321_H
#define INTERNAL_ARANCHORREMOVED_T3837293321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct  internal_ARAnchorRemoved_t3837293321  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORREMOVED_T3837293321_H
#ifndef INTERNAL_ARANCHORUPDATED_T4170983826_H
#define INTERNAL_ARANCHORUPDATED_T4170983826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct  internal_ARAnchorUpdated_t4170983826  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORUPDATED_T4170983826_H
#ifndef INTERNAL_ARANCHORADDED_T1369710540_H
#define INTERNAL_ARANCHORADDED_T1369710540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct  internal_ARAnchorAdded_t1369710540  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORADDED_T1369710540_H
#ifndef INTERNAL_ARFRAMEUPDATE_T4179995370_H
#define INTERNAL_ARFRAMEUPDATE_T4179995370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct  internal_ARFrameUpdate_t4179995370  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFRAMEUPDATE_T4179995370_H
#ifndef ARSESSIONCALLBACK_T3162219596_H
#define ARSESSIONCALLBACK_T3162219596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct  ARSessionCallback_t3162219596  : public MulticastDelegate_t2760760441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONCALLBACK_T3162219596_H
#ifndef UNITYARSESSIONNATIVEINTERFACE_T2342417007_H
#define UNITYARSESSIONNATIVEINTERFACE_T2342417007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t2342417007  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	IntPtr_t ___m_NativeARSession_11;

public:
	inline static int32_t get_offset_of_m_NativeARSession_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007, ___m_NativeARSession_11)); }
	inline IntPtr_t get_m_NativeARSession_11() const { return ___m_NativeARSession_11; }
	inline IntPtr_t* get_address_of_m_NativeARSession_11() { return &___m_NativeARSession_11; }
	inline void set_m_NativeARSession_11(IntPtr_t value)
	{
		___m_NativeARSession_11 = value;
	}
};

struct UnityARSessionNativeInterface_t2342417007_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t613206808 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t2015019665 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t1505529068 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t2618235973 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t2867397427 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t2096045671 * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t407918255 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t4170662403 * ___ARSessionFailedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t3162219596 * ___ARSessionInterruptedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t3162219596 * ___ARSessioninterruptionEndedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t3990761094 * ___ARSessionTrackingChangedEvent_10;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t2819698259  ___s_Camera_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t2342417007 * ___s_UnityARSessionNativeInterface_13;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t4179995370 * ___U3CU3Ef__mgU24cache0_14;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t4170662403 * ___U3CU3Ef__mgU24cache1_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t3162219596 * ___U3CU3Ef__mgU24cache2_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t3162219596 * ___U3CU3Ef__mgU24cache3_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	internal_ARSessionTrackingChanged_t4070042842 * ___U3CU3Ef__mgU24cache4_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARAnchorAdded_t1369710540 * ___U3CU3Ef__mgU24cache5_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	internal_ARAnchorUpdated_t4170983826 * ___U3CU3Ef__mgU24cache6_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	internal_ARAnchorRemoved_t3837293321 * ___U3CU3Ef__mgU24cache7_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARUserAnchorAdded_t2522967763 * ___U3CU3Ef__mgU24cache8_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARUserAnchorUpdated_t405473284 * ___U3CU3Ef__mgU24cache9_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARUserAnchorRemoved_t581306195 * ___U3CU3Ef__mgU24cacheA_24;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t613206808 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t613206808 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t613206808 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_0), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t2015019665 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t2015019665 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t2015019665 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_1), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t1505529068 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t1505529068 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t1505529068 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t2618235973 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t2618235973 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t2618235973 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_t2867397427 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_t2867397427 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_t2867397427 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_t2096045671 * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_t2096045671 ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_t2096045671 * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_t407918255 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_t407918255 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_t407918255 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARSessionFailedEvent_7)); }
	inline ARSessionFailed_t4170662403 * get_ARSessionFailedEvent_7() const { return ___ARSessionFailedEvent_7; }
	inline ARSessionFailed_t4170662403 ** get_address_of_ARSessionFailedEvent_7() { return &___ARSessionFailedEvent_7; }
	inline void set_ARSessionFailedEvent_7(ARSessionFailed_t4170662403 * value)
	{
		___ARSessionFailedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARSessionInterruptedEvent_8)); }
	inline ARSessionCallback_t3162219596 * get_ARSessionInterruptedEvent_8() const { return ___ARSessionInterruptedEvent_8; }
	inline ARSessionCallback_t3162219596 ** get_address_of_ARSessionInterruptedEvent_8() { return &___ARSessionInterruptedEvent_8; }
	inline void set_ARSessionInterruptedEvent_8(ARSessionCallback_t3162219596 * value)
	{
		___ARSessionInterruptedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARSessioninterruptionEndedEvent_9)); }
	inline ARSessionCallback_t3162219596 * get_ARSessioninterruptionEndedEvent_9() const { return ___ARSessioninterruptionEndedEvent_9; }
	inline ARSessionCallback_t3162219596 ** get_address_of_ARSessioninterruptionEndedEvent_9() { return &___ARSessioninterruptionEndedEvent_9; }
	inline void set_ARSessioninterruptionEndedEvent_9(ARSessionCallback_t3162219596 * value)
	{
		___ARSessioninterruptionEndedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___ARSessionTrackingChangedEvent_10)); }
	inline ARSessionTrackingChanged_t3990761094 * get_ARSessionTrackingChangedEvent_10() const { return ___ARSessionTrackingChangedEvent_10; }
	inline ARSessionTrackingChanged_t3990761094 ** get_address_of_ARSessionTrackingChangedEvent_10() { return &___ARSessionTrackingChangedEvent_10; }
	inline void set_ARSessionTrackingChangedEvent_10(ARSessionTrackingChanged_t3990761094 * value)
	{
		___ARSessionTrackingChangedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_10), value);
	}

	inline static int32_t get_offset_of_s_Camera_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___s_Camera_12)); }
	inline UnityARCamera_t2819698259  get_s_Camera_12() const { return ___s_Camera_12; }
	inline UnityARCamera_t2819698259 * get_address_of_s_Camera_12() { return &___s_Camera_12; }
	inline void set_s_Camera_12(UnityARCamera_t2819698259  value)
	{
		___s_Camera_12 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___s_UnityARSessionNativeInterface_13)); }
	inline UnityARSessionNativeInterface_t2342417007 * get_s_UnityARSessionNativeInterface_13() const { return ___s_UnityARSessionNativeInterface_13; }
	inline UnityARSessionNativeInterface_t2342417007 ** get_address_of_s_UnityARSessionNativeInterface_13() { return &___s_UnityARSessionNativeInterface_13; }
	inline void set_s_UnityARSessionNativeInterface_13(UnityARSessionNativeInterface_t2342417007 * value)
	{
		___s_UnityARSessionNativeInterface_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline internal_ARFrameUpdate_t4179995370 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline internal_ARFrameUpdate_t4179995370 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(internal_ARFrameUpdate_t4179995370 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache1_15)); }
	inline ARSessionFailed_t4170662403 * get_U3CU3Ef__mgU24cache1_15() const { return ___U3CU3Ef__mgU24cache1_15; }
	inline ARSessionFailed_t4170662403 ** get_address_of_U3CU3Ef__mgU24cache1_15() { return &___U3CU3Ef__mgU24cache1_15; }
	inline void set_U3CU3Ef__mgU24cache1_15(ARSessionFailed_t4170662403 * value)
	{
		___U3CU3Ef__mgU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache2_16)); }
	inline ARSessionCallback_t3162219596 * get_U3CU3Ef__mgU24cache2_16() const { return ___U3CU3Ef__mgU24cache2_16; }
	inline ARSessionCallback_t3162219596 ** get_address_of_U3CU3Ef__mgU24cache2_16() { return &___U3CU3Ef__mgU24cache2_16; }
	inline void set_U3CU3Ef__mgU24cache2_16(ARSessionCallback_t3162219596 * value)
	{
		___U3CU3Ef__mgU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache3_17)); }
	inline ARSessionCallback_t3162219596 * get_U3CU3Ef__mgU24cache3_17() const { return ___U3CU3Ef__mgU24cache3_17; }
	inline ARSessionCallback_t3162219596 ** get_address_of_U3CU3Ef__mgU24cache3_17() { return &___U3CU3Ef__mgU24cache3_17; }
	inline void set_U3CU3Ef__mgU24cache3_17(ARSessionCallback_t3162219596 * value)
	{
		___U3CU3Ef__mgU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache4_18)); }
	inline internal_ARSessionTrackingChanged_t4070042842 * get_U3CU3Ef__mgU24cache4_18() const { return ___U3CU3Ef__mgU24cache4_18; }
	inline internal_ARSessionTrackingChanged_t4070042842 ** get_address_of_U3CU3Ef__mgU24cache4_18() { return &___U3CU3Ef__mgU24cache4_18; }
	inline void set_U3CU3Ef__mgU24cache4_18(internal_ARSessionTrackingChanged_t4070042842 * value)
	{
		___U3CU3Ef__mgU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache5_19)); }
	inline internal_ARAnchorAdded_t1369710540 * get_U3CU3Ef__mgU24cache5_19() const { return ___U3CU3Ef__mgU24cache5_19; }
	inline internal_ARAnchorAdded_t1369710540 ** get_address_of_U3CU3Ef__mgU24cache5_19() { return &___U3CU3Ef__mgU24cache5_19; }
	inline void set_U3CU3Ef__mgU24cache5_19(internal_ARAnchorAdded_t1369710540 * value)
	{
		___U3CU3Ef__mgU24cache5_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache6_20)); }
	inline internal_ARAnchorUpdated_t4170983826 * get_U3CU3Ef__mgU24cache6_20() const { return ___U3CU3Ef__mgU24cache6_20; }
	inline internal_ARAnchorUpdated_t4170983826 ** get_address_of_U3CU3Ef__mgU24cache6_20() { return &___U3CU3Ef__mgU24cache6_20; }
	inline void set_U3CU3Ef__mgU24cache6_20(internal_ARAnchorUpdated_t4170983826 * value)
	{
		___U3CU3Ef__mgU24cache6_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache7_21)); }
	inline internal_ARAnchorRemoved_t3837293321 * get_U3CU3Ef__mgU24cache7_21() const { return ___U3CU3Ef__mgU24cache7_21; }
	inline internal_ARAnchorRemoved_t3837293321 ** get_address_of_U3CU3Ef__mgU24cache7_21() { return &___U3CU3Ef__mgU24cache7_21; }
	inline void set_U3CU3Ef__mgU24cache7_21(internal_ARAnchorRemoved_t3837293321 * value)
	{
		___U3CU3Ef__mgU24cache7_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache8_22)); }
	inline internal_ARUserAnchorAdded_t2522967763 * get_U3CU3Ef__mgU24cache8_22() const { return ___U3CU3Ef__mgU24cache8_22; }
	inline internal_ARUserAnchorAdded_t2522967763 ** get_address_of_U3CU3Ef__mgU24cache8_22() { return &___U3CU3Ef__mgU24cache8_22; }
	inline void set_U3CU3Ef__mgU24cache8_22(internal_ARUserAnchorAdded_t2522967763 * value)
	{
		___U3CU3Ef__mgU24cache8_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cache9_23)); }
	inline internal_ARUserAnchorUpdated_t405473284 * get_U3CU3Ef__mgU24cache9_23() const { return ___U3CU3Ef__mgU24cache9_23; }
	inline internal_ARUserAnchorUpdated_t405473284 ** get_address_of_U3CU3Ef__mgU24cache9_23() { return &___U3CU3Ef__mgU24cache9_23; }
	inline void set_U3CU3Ef__mgU24cache9_23(internal_ARUserAnchorUpdated_t405473284 * value)
	{
		___U3CU3Ef__mgU24cache9_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2342417007_StaticFields, ___U3CU3Ef__mgU24cacheA_24)); }
	inline internal_ARUserAnchorRemoved_t581306195 * get_U3CU3Ef__mgU24cacheA_24() const { return ___U3CU3Ef__mgU24cacheA_24; }
	inline internal_ARUserAnchorRemoved_t581306195 ** get_address_of_U3CU3Ef__mgU24cacheA_24() { return &___U3CU3Ef__mgU24cacheA_24; }
	inline void set_U3CU3Ef__mgU24cacheA_24(internal_ARUserAnchorRemoved_t581306195 * value)
	{
		___U3CU3Ef__mgU24cacheA_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T2342417007_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (UnityARSessionNativeInterface_t2342417007), -1, sizeof(UnityARSessionNativeInterface_t2342417007_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1900[25] = 
{
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARFrameUpdatedEvent_0(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARAnchorAddedEvent_1(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARAnchorUpdatedEvent_2(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARAnchorRemovedEvent_3(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARUserAnchorAddedEvent_4(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARUserAnchorUpdatedEvent_5(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARUserAnchorRemovedEvent_6(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARSessionFailedEvent_7(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARSessionInterruptedEvent_8(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARSessioninterruptionEndedEvent_9(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_ARSessionTrackingChangedEvent_10(),
	UnityARSessionNativeInterface_t2342417007::get_offset_of_m_NativeARSession_11(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_s_Camera_12(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_s_UnityARSessionNativeInterface_13(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_14(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_15(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_16(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_17(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_18(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_19(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6_20(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7_21(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8_22(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9_23(),
	UnityARSessionNativeInterface_t2342417007_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (ARFrameUpdate_t613206808), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (ARAnchorAdded_t2015019665), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (ARAnchorUpdated_t1505529068), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (ARAnchorRemoved_t2618235973), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (ARUserAnchorAdded_t2867397427), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (ARUserAnchorUpdated_t2096045671), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (ARUserAnchorRemoved_t407918255), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (ARSessionFailed_t4170662403), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (ARSessionCallback_t3162219596), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (ARSessionTrackingChanged_t3990761094), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (internal_ARFrameUpdate_t4179995370), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (internal_ARAnchorAdded_t1369710540), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (internal_ARAnchorUpdated_t4170983826), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (internal_ARAnchorRemoved_t3837293321), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (internal_ARUserAnchorAdded_t2522967763), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (internal_ARUserAnchorUpdated_t405473284), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (internal_ARUserAnchorRemoved_t581306195), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (internal_ARSessionTrackingChanged_t4070042842), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (U3CPrivateImplementationDetailsU3E_t3809861994), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3809861994_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1919[1] = 
{
	U3CPrivateImplementationDetailsU3E_t3809861994_StaticFields::get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (U24ArrayTypeU3D24_t224884561)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D24_t224884561 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
