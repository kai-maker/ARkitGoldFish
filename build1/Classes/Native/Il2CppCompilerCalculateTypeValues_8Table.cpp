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

// System.Boolean[]
struct BooleanU5BU5D_t2740850334;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1454116816;
// System.OperatingSystem
struct OperatingSystem_t3018122028;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3043673;
// System.String
struct String_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t959799002;
// System.Type
struct Type_t;
// System.IO.TextWriter
struct TextWriter_t2115169834;
// System.IO.TextReader
struct TextReader_t3272478025;
// System.Text.Encoding
struct Encoding_t1971725167;
// System.Delegate
struct Delegate_t3567527985;
// System.Type[]
struct TypeU5BU5D_t1483683526;
// System.Reflection.Assembly
struct Assembly_t1811617490;
// System.Threading.Thread
struct Thread_t1397719728;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t890390128;
// System.Char[]
struct CharU5BU5D_t3279474012;
// System.UInt64
struct UInt64_t1695576794;
// System.Int32
struct Int32_t739169257;
// System.Char
struct Char_t3836102529;
// System.Int64
struct Int64_t2295539367;
// System.IntPtr[]
struct IntPtrU5BU5D_t3171262190;
// System.Collections.IDictionary
struct IDictionary_t3874471239;
// System.Globalization.CompareInfo
struct CompareInfo_t3009338055;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3997509659;
// System.String[]
struct StringU5BU5D_t3667000786;
// System.Collections.Hashtable
struct Hashtable_t1510283420;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t4144598922;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t2607166258;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t92683270;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t4230587244;
// System.Void
struct Void_t1074769199;
// System.Globalization.DaylightTime
struct DaylightTime_t2017435857;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3960614522;
// System.Int32[]
struct Int32U5BU5D_t2152905300;
// System.Reflection.MemberFilter
struct MemberFilter_t1686765310;
// System.Version
struct Version_t1495340265;
// System.Byte[]
struct ByteU5BU5D_t806882901;
// System.IAsyncResult
struct IAsyncResult_t1327312896;
// System.AsyncCallback
struct AsyncCallback_t2968092817;
// System.MonoTypeInfo
struct MonoTypeInfo_t1620750628;
// Mono.Math.BigInteger
struct BigInteger_t3898687917;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3605687970;
// System.Reflection.MemberInfo
struct MemberInfo_t;




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
#ifndef MATH_T2516688376_H
#define MATH_T2516688376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t2516688376  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T2516688376_H
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
#ifndef LOCALDATASTORESLOT_T1990137907_H
#define LOCALDATASTORESLOT_T1990137907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreSlot
struct  LocalDataStoreSlot_t1990137907  : public RuntimeObject
{
public:
	// System.Int32 System.LocalDataStoreSlot::slot
	int32_t ___slot_0;
	// System.Boolean System.LocalDataStoreSlot::thread_local
	bool ___thread_local_1;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1990137907, ___slot_0)); }
	inline int32_t get_slot_0() const { return ___slot_0; }
	inline int32_t* get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(int32_t value)
	{
		___slot_0 = value;
	}

	inline static int32_t get_offset_of_thread_local_1() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1990137907, ___thread_local_1)); }
	inline bool get_thread_local_1() const { return ___thread_local_1; }
	inline bool* get_address_of_thread_local_1() { return &___thread_local_1; }
	inline void set_thread_local_1(bool value)
	{
		___thread_local_1 = value;
	}
};

struct LocalDataStoreSlot_t1990137907_StaticFields
{
public:
	// System.Object System.LocalDataStoreSlot::lock_obj
	RuntimeObject * ___lock_obj_2;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_thread
	BooleanU5BU5D_t2740850334* ___slot_bitmap_thread_3;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_context
	BooleanU5BU5D_t2740850334* ___slot_bitmap_context_4;

public:
	inline static int32_t get_offset_of_lock_obj_2() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1990137907_StaticFields, ___lock_obj_2)); }
	inline RuntimeObject * get_lock_obj_2() const { return ___lock_obj_2; }
	inline RuntimeObject ** get_address_of_lock_obj_2() { return &___lock_obj_2; }
	inline void set_lock_obj_2(RuntimeObject * value)
	{
		___lock_obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___lock_obj_2), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_thread_3() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1990137907_StaticFields, ___slot_bitmap_thread_3)); }
	inline BooleanU5BU5D_t2740850334* get_slot_bitmap_thread_3() const { return ___slot_bitmap_thread_3; }
	inline BooleanU5BU5D_t2740850334** get_address_of_slot_bitmap_thread_3() { return &___slot_bitmap_thread_3; }
	inline void set_slot_bitmap_thread_3(BooleanU5BU5D_t2740850334* value)
	{
		___slot_bitmap_thread_3 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_thread_3), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_context_4() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t1990137907_StaticFields, ___slot_bitmap_context_4)); }
	inline BooleanU5BU5D_t2740850334* get_slot_bitmap_context_4() const { return ___slot_bitmap_context_4; }
	inline BooleanU5BU5D_t2740850334** get_address_of_slot_bitmap_context_4() { return &___slot_bitmap_context_4; }
	inline void set_slot_bitmap_context_4(BooleanU5BU5D_t2740850334* value)
	{
		___slot_bitmap_context_4 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_context_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORESLOT_T1990137907_H
#ifndef ATTRIBUTEINFO_T772211394_H
#define ATTRIBUTEINFO_T772211394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs/AttributeInfo
struct  AttributeInfo_t772211394  : public RuntimeObject
{
public:
	// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::_usage
	AttributeUsageAttribute_t1454116816 * ____usage_0;
	// System.Int32 System.MonoCustomAttrs/AttributeInfo::_inheritanceLevel
	int32_t ____inheritanceLevel_1;

public:
	inline static int32_t get_offset_of__usage_0() { return static_cast<int32_t>(offsetof(AttributeInfo_t772211394, ____usage_0)); }
	inline AttributeUsageAttribute_t1454116816 * get__usage_0() const { return ____usage_0; }
	inline AttributeUsageAttribute_t1454116816 ** get_address_of__usage_0() { return &____usage_0; }
	inline void set__usage_0(AttributeUsageAttribute_t1454116816 * value)
	{
		____usage_0 = value;
		Il2CppCodeGenWriteBarrier((&____usage_0), value);
	}

	inline static int32_t get_offset_of__inheritanceLevel_1() { return static_cast<int32_t>(offsetof(AttributeInfo_t772211394, ____inheritanceLevel_1)); }
	inline int32_t get__inheritanceLevel_1() const { return ____inheritanceLevel_1; }
	inline int32_t* get_address_of__inheritanceLevel_1() { return &____inheritanceLevel_1; }
	inline void set__inheritanceLevel_1(int32_t value)
	{
		____inheritanceLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEINFO_T772211394_H
#ifndef SBYTECOMPARER_T4144598922_H
#define SBYTECOMPARER_T4144598922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/SByteComparer
struct  SByteComparer_t4144598922  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECOMPARER_T4144598922_H
#ifndef SHORTCOMPARER_T2607166258_H
#define SHORTCOMPARER_T2607166258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/ShortComparer
struct  ShortComparer_t2607166258  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCOMPARER_T2607166258_H
#ifndef INTCOMPARER_T92683270_H
#define INTCOMPARER_T92683270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/IntComparer
struct  IntComparer_t92683270  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTCOMPARER_T92683270_H
#ifndef LONGCOMPARER_T4230587244_H
#define LONGCOMPARER_T4230587244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/LongComparer
struct  LongComparer_t4230587244  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONGCOMPARER_T4230587244_H
#ifndef ENVIRONMENT_T1626531108_H
#define ENVIRONMENT_T1626531108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t1626531108  : public RuntimeObject
{
public:

public:
};

struct Environment_t1626531108_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t3018122028 * ___os_1;

public:
	inline static int32_t get_offset_of_os_1() { return static_cast<int32_t>(offsetof(Environment_t1626531108_StaticFields, ___os_1)); }
	inline OperatingSystem_t3018122028 * get_os_1() const { return ___os_1; }
	inline OperatingSystem_t3018122028 ** get_address_of_os_1() { return &___os_1; }
	inline void set_os_1(OperatingSystem_t3018122028 * value)
	{
		___os_1 = value;
		Il2CppCodeGenWriteBarrier((&___os_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T1626531108_H
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
#ifndef EVENTARGS_T1983841700_H
#define EVENTARGS_T1983841700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1983841700  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1983841700_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1983841700 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1983841700_StaticFields, ___Empty_0)); }
	inline EventArgs_t1983841700 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1983841700 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1983841700 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1983841700_H
#ifndef MARSHALBYREFOBJECT_T2263205487_H
#define MARSHALBYREFOBJECT_T2263205487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2263205487  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3043673 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2263205487, ____identity_0)); }
	inline ServerIdentity_t3043673 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3043673 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3043673 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2263205487_H
#ifndef GUIDPARSER_T1694006155_H
#define GUIDPARSER_T1694006155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidParser
struct  GuidParser_t1694006155  : public RuntimeObject
{
public:
	// System.String System.Guid/GuidParser::_src
	String_t* ____src_0;
	// System.Int32 System.Guid/GuidParser::_length
	int32_t ____length_1;
	// System.Int32 System.Guid/GuidParser::_cur
	int32_t ____cur_2;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(GuidParser_t1694006155, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(GuidParser_t1694006155, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__cur_2() { return static_cast<int32_t>(offsetof(GuidParser_t1694006155, ____cur_2)); }
	inline int32_t get__cur_2() const { return ____cur_2; }
	inline int32_t* get_address_of__cur_2() { return &____cur_2; }
	inline void set__cur_2(int32_t value)
	{
		____cur_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDPARSER_T1694006155_H
#ifndef MONOTYPEINFO_T1620750628_H
#define MONOTYPEINFO_T1620750628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTypeInfo
struct  MonoTypeInfo_t1620750628  : public RuntimeObject
{
public:
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.ConstructorInfo System.MonoTypeInfo::default_ctor
	ConstructorInfo_t959799002 * ___default_ctor_1;

public:
	inline static int32_t get_offset_of_full_name_0() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t1620750628, ___full_name_0)); }
	inline String_t* get_full_name_0() const { return ___full_name_0; }
	inline String_t** get_address_of_full_name_0() { return &___full_name_0; }
	inline void set_full_name_0(String_t* value)
	{
		___full_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___full_name_0), value);
	}

	inline static int32_t get_offset_of_default_ctor_1() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t1620750628, ___default_ctor_1)); }
	inline ConstructorInfo_t959799002 * get_default_ctor_1() const { return ___default_ctor_1; }
	inline ConstructorInfo_t959799002 ** get_address_of_default_ctor_1() { return &___default_ctor_1; }
	inline void set_default_ctor_1(ConstructorInfo_t959799002 * value)
	{
		___default_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&___default_ctor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPEINFO_T1620750628_H
#ifndef VERSION_T1495340265_H
#define VERSION_T1495340265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t1495340265  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t1495340265, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t1495340265, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t1495340265, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t1495340265, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T1495340265_H
#ifndef GC_T4227989842_H
#define GC_T4227989842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t4227989842  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T4227989842_H
#ifndef DELEGATEENTRY_T2220230370_H
#define DELEGATEENTRY_T2220230370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder/DelegateEntry
struct  DelegateEntry_t2220230370  : public RuntimeObject
{
public:
	// System.String System.DelegateSerializationHolder/DelegateEntry::type
	String_t* ___type_0;
	// System.String System.DelegateSerializationHolder/DelegateEntry::assembly
	String_t* ___assembly_1;
	// System.Object System.DelegateSerializationHolder/DelegateEntry::target
	RuntimeObject * ___target_2;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeAssembly
	String_t* ___targetTypeAssembly_3;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeName
	String_t* ___targetTypeName_4;
	// System.String System.DelegateSerializationHolder/DelegateEntry::methodName
	String_t* ___methodName_5;
	// System.DelegateSerializationHolder/DelegateEntry System.DelegateSerializationHolder/DelegateEntry::delegateEntry
	DelegateEntry_t2220230370 * ___delegateEntry_6;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(DelegateEntry_t2220230370, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_assembly_1() { return static_cast<int32_t>(offsetof(DelegateEntry_t2220230370, ___assembly_1)); }
	inline String_t* get_assembly_1() const { return ___assembly_1; }
	inline String_t** get_address_of_assembly_1() { return &___assembly_1; }
	inline void set_assembly_1(String_t* value)
	{
		___assembly_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(DelegateEntry_t2220230370, ___target_2)); }
	inline RuntimeObject * get_target_2() const { return ___target_2; }
	inline RuntimeObject ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(RuntimeObject * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_targetTypeAssembly_3() { return static_cast<int32_t>(offsetof(DelegateEntry_t2220230370, ___targetTypeAssembly_3)); }
	inline String_t* get_targetTypeAssembly_3() const { return ___targetTypeAssembly_3; }
	inline String_t** get_address_of_targetTypeAssembly_3() { return &___targetTypeAssembly_3; }
	inline void set_targetTypeAssembly_3(String_t* value)
	{
		___targetTypeAssembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeAssembly_3), value);
	}

	inline static int32_t get_offset_of_targetTypeName_4() { return static_cast<int32_t>(offsetof(DelegateEntry_t2220230370, ___targetTypeName_4)); }
	inline String_t* get_targetTypeName_4() const { return ___targetTypeName_4; }
	inline String_t** get_address_of_targetTypeName_4() { return &___targetTypeName_4; }
	inline void set_targetTypeName_4(String_t* value)
	{
		___targetTypeName_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeName_4), value);
	}

	inline static int32_t get_offset_of_methodName_5() { return static_cast<int32_t>(offsetof(DelegateEntry_t2220230370, ___methodName_5)); }
	inline String_t* get_methodName_5() const { return ___methodName_5; }
	inline String_t** get_address_of_methodName_5() { return &___methodName_5; }
	inline void set_methodName_5(String_t* value)
	{
		___methodName_5 = value;
		Il2CppCodeGenWriteBarrier((&___methodName_5), value);
	}

	inline static int32_t get_offset_of_delegateEntry_6() { return static_cast<int32_t>(offsetof(DelegateEntry_t2220230370, ___delegateEntry_6)); }
	inline DelegateEntry_t2220230370 * get_delegateEntry_6() const { return ___delegateEntry_6; }
	inline DelegateEntry_t2220230370 ** get_address_of_delegateEntry_6() { return &___delegateEntry_6; }
	inline void set_delegateEntry_6(DelegateEntry_t2220230370 * value)
	{
		___delegateEntry_6 = value;
		Il2CppCodeGenWriteBarrier((&___delegateEntry_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEENTRY_T2220230370_H
#ifndef DELEGATEDATA_T3960614522_H
#define DELEGATEDATA_T3960614522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateData
struct  DelegateData_t3960614522  : public RuntimeObject
{
public:
	// System.Type System.DelegateData::target_type
	Type_t * ___target_type_0;
	// System.String System.DelegateData::method_name
	String_t* ___method_name_1;

public:
	inline static int32_t get_offset_of_target_type_0() { return static_cast<int32_t>(offsetof(DelegateData_t3960614522, ___target_type_0)); }
	inline Type_t * get_target_type_0() const { return ___target_type_0; }
	inline Type_t ** get_address_of_target_type_0() { return &___target_type_0; }
	inline void set_target_type_0(Type_t * value)
	{
		___target_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_0), value);
	}

	inline static int32_t get_offset_of_method_name_1() { return static_cast<int32_t>(offsetof(DelegateData_t3960614522, ___method_name_1)); }
	inline String_t* get_method_name_1() const { return ___method_name_1; }
	inline String_t** get_address_of_method_name_1() { return &___method_name_1; }
	inline void set_method_name_1(String_t* value)
	{
		___method_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEDATA_T3960614522_H
#ifndef STRINGCOMPARER_T2484247601_H
#define STRINGCOMPARER_T2484247601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t2484247601  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t2484247601_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t2484247601 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t2484247601 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t2484247601 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t2484247601 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t2484247601_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t2484247601 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t2484247601 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t2484247601 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t2484247601_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t2484247601 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t2484247601 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t2484247601 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t2484247601_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t2484247601 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t2484247601 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t2484247601 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t2484247601_StaticFields, ___ordinal_3)); }
	inline StringComparer_t2484247601 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t2484247601 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t2484247601 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T2484247601_H
#ifndef BITCONVERTER_T3248655161_H
#define BITCONVERTER_T3248655161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3248655161  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3248655161_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t3248655161_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t3248655161_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3248655161_H
#ifndef BUFFER_T1557384969_H
#define BUFFER_T1557384969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Buffer
struct  Buffer_t1557384969  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T1557384969_H
#ifndef CHARENUMERATOR_T4229738798_H
#define CHARENUMERATOR_T4229738798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CharEnumerator
struct  CharEnumerator_t4229738798  : public RuntimeObject
{
public:
	// System.String System.CharEnumerator::str
	String_t* ___str_0;
	// System.Int32 System.CharEnumerator::index
	int32_t ___index_1;
	// System.Int32 System.CharEnumerator::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(CharEnumerator_t4229738798, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(CharEnumerator_t4229738798, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(CharEnumerator_t4229738798, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARENUMERATOR_T4229738798_H
#ifndef CONSOLE_T1572631250_H
#define CONSOLE_T1572631250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Console
struct  Console_t1572631250  : public RuntimeObject
{
public:

public:
};

struct Console_t1572631250_StaticFields
{
public:
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t2115169834 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t2115169834 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t3272478025 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t1971725167 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t1971725167 * ___outputEncoding_4;

public:
	inline static int32_t get_offset_of_stdout_0() { return static_cast<int32_t>(offsetof(Console_t1572631250_StaticFields, ___stdout_0)); }
	inline TextWriter_t2115169834 * get_stdout_0() const { return ___stdout_0; }
	inline TextWriter_t2115169834 ** get_address_of_stdout_0() { return &___stdout_0; }
	inline void set_stdout_0(TextWriter_t2115169834 * value)
	{
		___stdout_0 = value;
		Il2CppCodeGenWriteBarrier((&___stdout_0), value);
	}

	inline static int32_t get_offset_of_stderr_1() { return static_cast<int32_t>(offsetof(Console_t1572631250_StaticFields, ___stderr_1)); }
	inline TextWriter_t2115169834 * get_stderr_1() const { return ___stderr_1; }
	inline TextWriter_t2115169834 ** get_address_of_stderr_1() { return &___stderr_1; }
	inline void set_stderr_1(TextWriter_t2115169834 * value)
	{
		___stderr_1 = value;
		Il2CppCodeGenWriteBarrier((&___stderr_1), value);
	}

	inline static int32_t get_offset_of_stdin_2() { return static_cast<int32_t>(offsetof(Console_t1572631250_StaticFields, ___stdin_2)); }
	inline TextReader_t3272478025 * get_stdin_2() const { return ___stdin_2; }
	inline TextReader_t3272478025 ** get_address_of_stdin_2() { return &___stdin_2; }
	inline void set_stdin_2(TextReader_t3272478025 * value)
	{
		___stdin_2 = value;
		Il2CppCodeGenWriteBarrier((&___stdin_2), value);
	}

	inline static int32_t get_offset_of_inputEncoding_3() { return static_cast<int32_t>(offsetof(Console_t1572631250_StaticFields, ___inputEncoding_3)); }
	inline Encoding_t1971725167 * get_inputEncoding_3() const { return ___inputEncoding_3; }
	inline Encoding_t1971725167 ** get_address_of_inputEncoding_3() { return &___inputEncoding_3; }
	inline void set_inputEncoding_3(Encoding_t1971725167 * value)
	{
		___inputEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___inputEncoding_3), value);
	}

	inline static int32_t get_offset_of_outputEncoding_4() { return static_cast<int32_t>(offsetof(Console_t1572631250_StaticFields, ___outputEncoding_4)); }
	inline Encoding_t1971725167 * get_outputEncoding_4() const { return ___outputEncoding_4; }
	inline Encoding_t1971725167 ** get_address_of_outputEncoding_4() { return &___outputEncoding_4; }
	inline void set_outputEncoding_4(Encoding_t1971725167 * value)
	{
		___outputEncoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___outputEncoding_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLE_T1572631250_H
#ifndef TIMEZONE_T4016811254_H
#define TIMEZONE_T4016811254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t4016811254  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t4016811254_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t4016811254 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t4016811254_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t4016811254 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t4016811254 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t4016811254 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t4016811254_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t4016811254_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T4016811254_H
#ifndef DELEGATESERIALIZATIONHOLDER_T4003450923_H
#define DELEGATESERIALIZATIONHOLDER_T4003450923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t4003450923  : public RuntimeObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t3567527985 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t4003450923, ____delegate_0)); }
	inline Delegate_t3567527985 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t3567527985 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t3567527985 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&____delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATESERIALIZATIONHOLDER_T4003450923_H
#ifndef CONVERT_T3216824935_H
#define CONVERT_T3216824935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Convert
struct  Convert_t3216824935  : public RuntimeObject
{
public:

public:
};

struct Convert_t3216824935_StaticFields
{
public:
	// System.Object System.Convert::DBNull
	RuntimeObject * ___DBNull_0;
	// System.Type[] System.Convert::conversionTable
	TypeU5BU5D_t1483683526* ___conversionTable_1;

public:
	inline static int32_t get_offset_of_DBNull_0() { return static_cast<int32_t>(offsetof(Convert_t3216824935_StaticFields, ___DBNull_0)); }
	inline RuntimeObject * get_DBNull_0() const { return ___DBNull_0; }
	inline RuntimeObject ** get_address_of_DBNull_0() { return &___DBNull_0; }
	inline void set_DBNull_0(RuntimeObject * value)
	{
		___DBNull_0 = value;
		Il2CppCodeGenWriteBarrier((&___DBNull_0), value);
	}

	inline static int32_t get_offset_of_conversionTable_1() { return static_cast<int32_t>(offsetof(Convert_t3216824935_StaticFields, ___conversionTable_1)); }
	inline TypeU5BU5D_t1483683526* get_conversionTable_1() const { return ___conversionTable_1; }
	inline TypeU5BU5D_t1483683526** get_address_of_conversionTable_1() { return &___conversionTable_1; }
	inline void set_conversionTable_1(TypeU5BU5D_t1483683526* value)
	{
		___conversionTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___conversionTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERT_T3216824935_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef MONOCUSTOMATTRS_T696144820_H
#define MONOCUSTOMATTRS_T696144820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs
struct  MonoCustomAttrs_t696144820  : public RuntimeObject
{
public:

public:
};

struct MonoCustomAttrs_t696144820_StaticFields
{
public:
	// System.Reflection.Assembly System.MonoCustomAttrs::corlib
	Assembly_t1811617490 * ___corlib_0;
	// System.Type System.MonoCustomAttrs::AttributeUsageType
	Type_t * ___AttributeUsageType_1;
	// System.AttributeUsageAttribute System.MonoCustomAttrs::DefaultAttributeUsage
	AttributeUsageAttribute_t1454116816 * ___DefaultAttributeUsage_2;

public:
	inline static int32_t get_offset_of_corlib_0() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t696144820_StaticFields, ___corlib_0)); }
	inline Assembly_t1811617490 * get_corlib_0() const { return ___corlib_0; }
	inline Assembly_t1811617490 ** get_address_of_corlib_0() { return &___corlib_0; }
	inline void set_corlib_0(Assembly_t1811617490 * value)
	{
		___corlib_0 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_0), value);
	}

	inline static int32_t get_offset_of_AttributeUsageType_1() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t696144820_StaticFields, ___AttributeUsageType_1)); }
	inline Type_t * get_AttributeUsageType_1() const { return ___AttributeUsageType_1; }
	inline Type_t ** get_address_of_AttributeUsageType_1() { return &___AttributeUsageType_1; }
	inline void set_AttributeUsageType_1(Type_t * value)
	{
		___AttributeUsageType_1 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeUsageType_1), value);
	}

	inline static int32_t get_offset_of_DefaultAttributeUsage_2() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t696144820_StaticFields, ___DefaultAttributeUsage_2)); }
	inline AttributeUsageAttribute_t1454116816 * get_DefaultAttributeUsage_2() const { return ___DefaultAttributeUsage_2; }
	inline AttributeUsageAttribute_t1454116816 ** get_address_of_DefaultAttributeUsage_2() { return &___DefaultAttributeUsage_2; }
	inline void set_DefaultAttributeUsage_2(AttributeUsageAttribute_t1454116816 * value)
	{
		___DefaultAttributeUsage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultAttributeUsage_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCUSTOMATTRS_T696144820_H
#ifndef CUSTOMINFO_T2102402629_H
#define CUSTOMINFO_T2102402629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter/CustomInfo
struct  CustomInfo_t2102402629  : public RuntimeObject
{
public:
	// System.Boolean System.NumberFormatter/CustomInfo::UseGroup
	bool ___UseGroup_0;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalDigits
	int32_t ___DecimalDigits_1;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalPointPos
	int32_t ___DecimalPointPos_2;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalTailSharpDigits
	int32_t ___DecimalTailSharpDigits_3;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerDigits
	int32_t ___IntegerDigits_4;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadSharpDigits
	int32_t ___IntegerHeadSharpDigits_5;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadPos
	int32_t ___IntegerHeadPos_6;
	// System.Boolean System.NumberFormatter/CustomInfo::UseExponent
	bool ___UseExponent_7;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentDigits
	int32_t ___ExponentDigits_8;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentTailSharpDigits
	int32_t ___ExponentTailSharpDigits_9;
	// System.Boolean System.NumberFormatter/CustomInfo::ExponentNegativeSignOnly
	bool ___ExponentNegativeSignOnly_10;
	// System.Int32 System.NumberFormatter/CustomInfo::DividePlaces
	int32_t ___DividePlaces_11;
	// System.Int32 System.NumberFormatter/CustomInfo::Percents
	int32_t ___Percents_12;
	// System.Int32 System.NumberFormatter/CustomInfo::Permilles
	int32_t ___Permilles_13;

public:
	inline static int32_t get_offset_of_UseGroup_0() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___UseGroup_0)); }
	inline bool get_UseGroup_0() const { return ___UseGroup_0; }
	inline bool* get_address_of_UseGroup_0() { return &___UseGroup_0; }
	inline void set_UseGroup_0(bool value)
	{
		___UseGroup_0 = value;
	}

	inline static int32_t get_offset_of_DecimalDigits_1() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___DecimalDigits_1)); }
	inline int32_t get_DecimalDigits_1() const { return ___DecimalDigits_1; }
	inline int32_t* get_address_of_DecimalDigits_1() { return &___DecimalDigits_1; }
	inline void set_DecimalDigits_1(int32_t value)
	{
		___DecimalDigits_1 = value;
	}

	inline static int32_t get_offset_of_DecimalPointPos_2() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___DecimalPointPos_2)); }
	inline int32_t get_DecimalPointPos_2() const { return ___DecimalPointPos_2; }
	inline int32_t* get_address_of_DecimalPointPos_2() { return &___DecimalPointPos_2; }
	inline void set_DecimalPointPos_2(int32_t value)
	{
		___DecimalPointPos_2 = value;
	}

	inline static int32_t get_offset_of_DecimalTailSharpDigits_3() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___DecimalTailSharpDigits_3)); }
	inline int32_t get_DecimalTailSharpDigits_3() const { return ___DecimalTailSharpDigits_3; }
	inline int32_t* get_address_of_DecimalTailSharpDigits_3() { return &___DecimalTailSharpDigits_3; }
	inline void set_DecimalTailSharpDigits_3(int32_t value)
	{
		___DecimalTailSharpDigits_3 = value;
	}

	inline static int32_t get_offset_of_IntegerDigits_4() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___IntegerDigits_4)); }
	inline int32_t get_IntegerDigits_4() const { return ___IntegerDigits_4; }
	inline int32_t* get_address_of_IntegerDigits_4() { return &___IntegerDigits_4; }
	inline void set_IntegerDigits_4(int32_t value)
	{
		___IntegerDigits_4 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadSharpDigits_5() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___IntegerHeadSharpDigits_5)); }
	inline int32_t get_IntegerHeadSharpDigits_5() const { return ___IntegerHeadSharpDigits_5; }
	inline int32_t* get_address_of_IntegerHeadSharpDigits_5() { return &___IntegerHeadSharpDigits_5; }
	inline void set_IntegerHeadSharpDigits_5(int32_t value)
	{
		___IntegerHeadSharpDigits_5 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadPos_6() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___IntegerHeadPos_6)); }
	inline int32_t get_IntegerHeadPos_6() const { return ___IntegerHeadPos_6; }
	inline int32_t* get_address_of_IntegerHeadPos_6() { return &___IntegerHeadPos_6; }
	inline void set_IntegerHeadPos_6(int32_t value)
	{
		___IntegerHeadPos_6 = value;
	}

	inline static int32_t get_offset_of_UseExponent_7() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___UseExponent_7)); }
	inline bool get_UseExponent_7() const { return ___UseExponent_7; }
	inline bool* get_address_of_UseExponent_7() { return &___UseExponent_7; }
	inline void set_UseExponent_7(bool value)
	{
		___UseExponent_7 = value;
	}

	inline static int32_t get_offset_of_ExponentDigits_8() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___ExponentDigits_8)); }
	inline int32_t get_ExponentDigits_8() const { return ___ExponentDigits_8; }
	inline int32_t* get_address_of_ExponentDigits_8() { return &___ExponentDigits_8; }
	inline void set_ExponentDigits_8(int32_t value)
	{
		___ExponentDigits_8 = value;
	}

	inline static int32_t get_offset_of_ExponentTailSharpDigits_9() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___ExponentTailSharpDigits_9)); }
	inline int32_t get_ExponentTailSharpDigits_9() const { return ___ExponentTailSharpDigits_9; }
	inline int32_t* get_address_of_ExponentTailSharpDigits_9() { return &___ExponentTailSharpDigits_9; }
	inline void set_ExponentTailSharpDigits_9(int32_t value)
	{
		___ExponentTailSharpDigits_9 = value;
	}

	inline static int32_t get_offset_of_ExponentNegativeSignOnly_10() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___ExponentNegativeSignOnly_10)); }
	inline bool get_ExponentNegativeSignOnly_10() const { return ___ExponentNegativeSignOnly_10; }
	inline bool* get_address_of_ExponentNegativeSignOnly_10() { return &___ExponentNegativeSignOnly_10; }
	inline void set_ExponentNegativeSignOnly_10(bool value)
	{
		___ExponentNegativeSignOnly_10 = value;
	}

	inline static int32_t get_offset_of_DividePlaces_11() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___DividePlaces_11)); }
	inline int32_t get_DividePlaces_11() const { return ___DividePlaces_11; }
	inline int32_t* get_address_of_DividePlaces_11() { return &___DividePlaces_11; }
	inline void set_DividePlaces_11(int32_t value)
	{
		___DividePlaces_11 = value;
	}

	inline static int32_t get_offset_of_Percents_12() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___Percents_12)); }
	inline int32_t get_Percents_12() const { return ___Percents_12; }
	inline int32_t* get_address_of_Percents_12() { return &___Percents_12; }
	inline void set_Percents_12(int32_t value)
	{
		___Percents_12 = value;
	}

	inline static int32_t get_offset_of_Permilles_13() { return static_cast<int32_t>(offsetof(CustomInfo_t2102402629, ___Permilles_13)); }
	inline int32_t get_Permilles_13() const { return ___Permilles_13; }
	inline int32_t* get_address_of_Permilles_13() { return &___Permilles_13; }
	inline void set_Permilles_13(int32_t value)
	{
		___Permilles_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINFO_T2102402629_H
#ifndef NUMBERFORMATTER_T2214860721_H
#define NUMBERFORMATTER_T2214860721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter
struct  NumberFormatter_t2214860721  : public RuntimeObject
{
public:
	// System.Threading.Thread System.NumberFormatter::_thread
	Thread_t1397719728 * ____thread_6;
	// System.Globalization.NumberFormatInfo System.NumberFormatter::_nfi
	NumberFormatInfo_t890390128 * ____nfi_7;
	// System.Boolean System.NumberFormatter::_NaN
	bool ____NaN_8;
	// System.Boolean System.NumberFormatter::_infinity
	bool ____infinity_9;
	// System.Boolean System.NumberFormatter::_isCustomFormat
	bool ____isCustomFormat_10;
	// System.Boolean System.NumberFormatter::_specifierIsUpper
	bool ____specifierIsUpper_11;
	// System.Boolean System.NumberFormatter::_positive
	bool ____positive_12;
	// System.Char System.NumberFormatter::_specifier
	Il2CppChar ____specifier_13;
	// System.Int32 System.NumberFormatter::_precision
	int32_t ____precision_14;
	// System.Int32 System.NumberFormatter::_defPrecision
	int32_t ____defPrecision_15;
	// System.Int32 System.NumberFormatter::_digitsLen
	int32_t ____digitsLen_16;
	// System.Int32 System.NumberFormatter::_offset
	int32_t ____offset_17;
	// System.Int32 System.NumberFormatter::_decPointPos
	int32_t ____decPointPos_18;
	// System.UInt32 System.NumberFormatter::_val1
	uint32_t ____val1_19;
	// System.UInt32 System.NumberFormatter::_val2
	uint32_t ____val2_20;
	// System.UInt32 System.NumberFormatter::_val3
	uint32_t ____val3_21;
	// System.UInt32 System.NumberFormatter::_val4
	uint32_t ____val4_22;
	// System.Char[] System.NumberFormatter::_cbuf
	CharU5BU5D_t3279474012* ____cbuf_23;
	// System.Int32 System.NumberFormatter::_ind
	int32_t ____ind_24;

public:
	inline static int32_t get_offset_of__thread_6() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____thread_6)); }
	inline Thread_t1397719728 * get__thread_6() const { return ____thread_6; }
	inline Thread_t1397719728 ** get_address_of__thread_6() { return &____thread_6; }
	inline void set__thread_6(Thread_t1397719728 * value)
	{
		____thread_6 = value;
		Il2CppCodeGenWriteBarrier((&____thread_6), value);
	}

	inline static int32_t get_offset_of__nfi_7() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____nfi_7)); }
	inline NumberFormatInfo_t890390128 * get__nfi_7() const { return ____nfi_7; }
	inline NumberFormatInfo_t890390128 ** get_address_of__nfi_7() { return &____nfi_7; }
	inline void set__nfi_7(NumberFormatInfo_t890390128 * value)
	{
		____nfi_7 = value;
		Il2CppCodeGenWriteBarrier((&____nfi_7), value);
	}

	inline static int32_t get_offset_of__NaN_8() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____NaN_8)); }
	inline bool get__NaN_8() const { return ____NaN_8; }
	inline bool* get_address_of__NaN_8() { return &____NaN_8; }
	inline void set__NaN_8(bool value)
	{
		____NaN_8 = value;
	}

	inline static int32_t get_offset_of__infinity_9() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____infinity_9)); }
	inline bool get__infinity_9() const { return ____infinity_9; }
	inline bool* get_address_of__infinity_9() { return &____infinity_9; }
	inline void set__infinity_9(bool value)
	{
		____infinity_9 = value;
	}

	inline static int32_t get_offset_of__isCustomFormat_10() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____isCustomFormat_10)); }
	inline bool get__isCustomFormat_10() const { return ____isCustomFormat_10; }
	inline bool* get_address_of__isCustomFormat_10() { return &____isCustomFormat_10; }
	inline void set__isCustomFormat_10(bool value)
	{
		____isCustomFormat_10 = value;
	}

	inline static int32_t get_offset_of__specifierIsUpper_11() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____specifierIsUpper_11)); }
	inline bool get__specifierIsUpper_11() const { return ____specifierIsUpper_11; }
	inline bool* get_address_of__specifierIsUpper_11() { return &____specifierIsUpper_11; }
	inline void set__specifierIsUpper_11(bool value)
	{
		____specifierIsUpper_11 = value;
	}

	inline static int32_t get_offset_of__positive_12() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____positive_12)); }
	inline bool get__positive_12() const { return ____positive_12; }
	inline bool* get_address_of__positive_12() { return &____positive_12; }
	inline void set__positive_12(bool value)
	{
		____positive_12 = value;
	}

	inline static int32_t get_offset_of__specifier_13() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____specifier_13)); }
	inline Il2CppChar get__specifier_13() const { return ____specifier_13; }
	inline Il2CppChar* get_address_of__specifier_13() { return &____specifier_13; }
	inline void set__specifier_13(Il2CppChar value)
	{
		____specifier_13 = value;
	}

	inline static int32_t get_offset_of__precision_14() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____precision_14)); }
	inline int32_t get__precision_14() const { return ____precision_14; }
	inline int32_t* get_address_of__precision_14() { return &____precision_14; }
	inline void set__precision_14(int32_t value)
	{
		____precision_14 = value;
	}

	inline static int32_t get_offset_of__defPrecision_15() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____defPrecision_15)); }
	inline int32_t get__defPrecision_15() const { return ____defPrecision_15; }
	inline int32_t* get_address_of__defPrecision_15() { return &____defPrecision_15; }
	inline void set__defPrecision_15(int32_t value)
	{
		____defPrecision_15 = value;
	}

	inline static int32_t get_offset_of__digitsLen_16() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____digitsLen_16)); }
	inline int32_t get__digitsLen_16() const { return ____digitsLen_16; }
	inline int32_t* get_address_of__digitsLen_16() { return &____digitsLen_16; }
	inline void set__digitsLen_16(int32_t value)
	{
		____digitsLen_16 = value;
	}

	inline static int32_t get_offset_of__offset_17() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____offset_17)); }
	inline int32_t get__offset_17() const { return ____offset_17; }
	inline int32_t* get_address_of__offset_17() { return &____offset_17; }
	inline void set__offset_17(int32_t value)
	{
		____offset_17 = value;
	}

	inline static int32_t get_offset_of__decPointPos_18() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____decPointPos_18)); }
	inline int32_t get__decPointPos_18() const { return ____decPointPos_18; }
	inline int32_t* get_address_of__decPointPos_18() { return &____decPointPos_18; }
	inline void set__decPointPos_18(int32_t value)
	{
		____decPointPos_18 = value;
	}

	inline static int32_t get_offset_of__val1_19() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____val1_19)); }
	inline uint32_t get__val1_19() const { return ____val1_19; }
	inline uint32_t* get_address_of__val1_19() { return &____val1_19; }
	inline void set__val1_19(uint32_t value)
	{
		____val1_19 = value;
	}

	inline static int32_t get_offset_of__val2_20() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____val2_20)); }
	inline uint32_t get__val2_20() const { return ____val2_20; }
	inline uint32_t* get_address_of__val2_20() { return &____val2_20; }
	inline void set__val2_20(uint32_t value)
	{
		____val2_20 = value;
	}

	inline static int32_t get_offset_of__val3_21() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____val3_21)); }
	inline uint32_t get__val3_21() const { return ____val3_21; }
	inline uint32_t* get_address_of__val3_21() { return &____val3_21; }
	inline void set__val3_21(uint32_t value)
	{
		____val3_21 = value;
	}

	inline static int32_t get_offset_of__val4_22() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____val4_22)); }
	inline uint32_t get__val4_22() const { return ____val4_22; }
	inline uint32_t* get_address_of__val4_22() { return &____val4_22; }
	inline void set__val4_22(uint32_t value)
	{
		____val4_22 = value;
	}

	inline static int32_t get_offset_of__cbuf_23() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____cbuf_23)); }
	inline CharU5BU5D_t3279474012* get__cbuf_23() const { return ____cbuf_23; }
	inline CharU5BU5D_t3279474012** get_address_of__cbuf_23() { return &____cbuf_23; }
	inline void set__cbuf_23(CharU5BU5D_t3279474012* value)
	{
		____cbuf_23 = value;
		Il2CppCodeGenWriteBarrier((&____cbuf_23), value);
	}

	inline static int32_t get_offset_of__ind_24() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721, ____ind_24)); }
	inline int32_t get__ind_24() const { return ____ind_24; }
	inline int32_t* get_address_of__ind_24() { return &____ind_24; }
	inline void set__ind_24(int32_t value)
	{
		____ind_24 = value;
	}
};

struct NumberFormatter_t2214860721_StaticFields
{
public:
	// System.UInt64* System.NumberFormatter::MantissaBitsTable
	uint64_t* ___MantissaBitsTable_0;
	// System.Int32* System.NumberFormatter::TensExponentTable
	int32_t* ___TensExponentTable_1;
	// System.Char* System.NumberFormatter::DigitLowerTable
	Il2CppChar* ___DigitLowerTable_2;
	// System.Char* System.NumberFormatter::DigitUpperTable
	Il2CppChar* ___DigitUpperTable_3;
	// System.Int64* System.NumberFormatter::TenPowersList
	int64_t* ___TenPowersList_4;
	// System.Int32* System.NumberFormatter::DecHexDigits
	int32_t* ___DecHexDigits_5;

public:
	inline static int32_t get_offset_of_MantissaBitsTable_0() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721_StaticFields, ___MantissaBitsTable_0)); }
	inline uint64_t* get_MantissaBitsTable_0() const { return ___MantissaBitsTable_0; }
	inline uint64_t** get_address_of_MantissaBitsTable_0() { return &___MantissaBitsTable_0; }
	inline void set_MantissaBitsTable_0(uint64_t* value)
	{
		___MantissaBitsTable_0 = value;
	}

	inline static int32_t get_offset_of_TensExponentTable_1() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721_StaticFields, ___TensExponentTable_1)); }
	inline int32_t* get_TensExponentTable_1() const { return ___TensExponentTable_1; }
	inline int32_t** get_address_of_TensExponentTable_1() { return &___TensExponentTable_1; }
	inline void set_TensExponentTable_1(int32_t* value)
	{
		___TensExponentTable_1 = value;
	}

	inline static int32_t get_offset_of_DigitLowerTable_2() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721_StaticFields, ___DigitLowerTable_2)); }
	inline Il2CppChar* get_DigitLowerTable_2() const { return ___DigitLowerTable_2; }
	inline Il2CppChar** get_address_of_DigitLowerTable_2() { return &___DigitLowerTable_2; }
	inline void set_DigitLowerTable_2(Il2CppChar* value)
	{
		___DigitLowerTable_2 = value;
	}

	inline static int32_t get_offset_of_DigitUpperTable_3() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721_StaticFields, ___DigitUpperTable_3)); }
	inline Il2CppChar* get_DigitUpperTable_3() const { return ___DigitUpperTable_3; }
	inline Il2CppChar** get_address_of_DigitUpperTable_3() { return &___DigitUpperTable_3; }
	inline void set_DigitUpperTable_3(Il2CppChar* value)
	{
		___DigitUpperTable_3 = value;
	}

	inline static int32_t get_offset_of_TenPowersList_4() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721_StaticFields, ___TenPowersList_4)); }
	inline int64_t* get_TenPowersList_4() const { return ___TenPowersList_4; }
	inline int64_t** get_address_of_TenPowersList_4() { return &___TenPowersList_4; }
	inline void set_TenPowersList_4(int64_t* value)
	{
		___TenPowersList_4 = value;
	}

	inline static int32_t get_offset_of_DecHexDigits_5() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721_StaticFields, ___DecHexDigits_5)); }
	inline int32_t* get_DecHexDigits_5() const { return ___DecHexDigits_5; }
	inline int32_t** get_address_of_DecHexDigits_5() { return &___DecHexDigits_5; }
	inline void set_DecHexDigits_5(int32_t* value)
	{
		___DecHexDigits_5 = value;
	}
};

struct NumberFormatter_t2214860721_ThreadStaticFields
{
public:
	// System.NumberFormatter System.NumberFormatter::threadNumberFormatter
	NumberFormatter_t2214860721 * ___threadNumberFormatter_25;

public:
	inline static int32_t get_offset_of_threadNumberFormatter_25() { return static_cast<int32_t>(offsetof(NumberFormatter_t2214860721_ThreadStaticFields, ___threadNumberFormatter_25)); }
	inline NumberFormatter_t2214860721 * get_threadNumberFormatter_25() const { return ___threadNumberFormatter_25; }
	inline NumberFormatter_t2214860721 ** get_address_of_threadNumberFormatter_25() { return &___threadNumberFormatter_25; }
	inline void set_threadNumberFormatter_25(NumberFormatter_t2214860721 * value)
	{
		___threadNumberFormatter_25 = value;
		Il2CppCodeGenWriteBarrier((&___threadNumberFormatter_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATTER_T2214860721_H
#ifndef DATETIMEUTILS_T1950680833_H
#define DATETIMEUTILS_T1950680833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeUtils
struct  DateTimeUtils_t1950680833  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILS_T1950680833_H
#ifndef EXCEPTION_T2007625827_H
#define EXCEPTION_T2007625827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2007625827  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3171262190* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2007625827 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3171262190* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3171262190** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3171262190* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ___inner_exception_1)); }
	inline Exception_t2007625827 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2007625827 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2007625827 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2007625827, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2007625827_H
#ifndef DBNULL_T2897493329_H
#define DBNULL_T2897493329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t2897493329  : public RuntimeObject
{
public:

public:
};

struct DBNull_t2897493329_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t2897493329 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t2897493329_StaticFields, ___Value_0)); }
	inline DBNull_t2897493329 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t2897493329 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t2897493329 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T2897493329_H
#ifndef MONOTOUCHAOTHELPER_T1183669108_H
#define MONOTOUCHAOTHELPER_T1183669108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTouchAOTHelper
struct  MonoTouchAOTHelper_t1183669108  : public RuntimeObject
{
public:

public:
};

struct MonoTouchAOTHelper_t1183669108_StaticFields
{
public:
	// System.Boolean System.MonoTouchAOTHelper::FalseFlag
	bool ___FalseFlag_0;

public:
	inline static int32_t get_offset_of_FalseFlag_0() { return static_cast<int32_t>(offsetof(MonoTouchAOTHelper_t1183669108_StaticFields, ___FalseFlag_0)); }
	inline bool get_FalseFlag_0() const { return ___FalseFlag_0; }
	inline bool* get_address_of_FalseFlag_0() { return &___FalseFlag_0; }
	inline void set_FalseFlag_0(bool value)
	{
		___FalseFlag_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTOUCHAOTHELPER_T1183669108_H
#ifndef NONSERIALIZEDATTRIBUTE_T881493483_H
#define NONSERIALIZEDATTRIBUTE_T881493483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t881493483  : public Attribute_t2515458215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T881493483_H
#ifndef THREADSTATICATTRIBUTE_T1383397580_H
#define THREADSTATICATTRIBUTE_T1383397580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t1383397580  : public Attribute_t2515458215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T1383397580_H
#ifndef SYSTEMEXCEPTION_T2200738604_H
#define SYSTEMEXCEPTION_T2200738604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2200738604  : public Exception_t2007625827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2200738604_H
#ifndef ORDINALCOMPARER_T3090755250_H
#define ORDINALCOMPARER_T3090755250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t3090755250  : public StringComparer_t2484247601
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t3090755250, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T3090755250_H
#ifndef CULTUREAWARECOMPARER_T1552025934_H
#define CULTUREAWARECOMPARER_T1552025934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t1552025934  : public StringComparer_t2484247601
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t3009338055 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1552025934, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1552025934, ____compareInfo_5)); }
	inline CompareInfo_t3009338055 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t3009338055 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t3009338055 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T1552025934_H
#ifndef TIMESPAN_T214716022_H
#define TIMESPAN_T214716022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t214716022 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t214716022, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t214716022_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t214716022  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t214716022  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t214716022  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t214716022_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t214716022  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t214716022 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t214716022  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t214716022_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t214716022  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t214716022 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t214716022  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t214716022_StaticFields, ___Zero_2)); }
	inline TimeSpan_t214716022  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t214716022 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t214716022  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T214716022_H
#ifndef ASSEMBLYLOADEVENTARGS_T2145870336_H
#define ASSEMBLYLOADEVENTARGS_T2145870336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventArgs
struct  AssemblyLoadEventArgs_t2145870336  : public EventArgs_t1983841700
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTARGS_T2145870336_H
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
#ifndef RESOLVEEVENTARGS_T3431378991_H
#define RESOLVEEVENTARGS_T3431378991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t3431378991  : public EventArgs_t1983841700
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t3431378991, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T3431378991_H
#ifndef CONTEXTBOUNDOBJECT_T3968563789_H
#define CONTEXTBOUNDOBJECT_T3968563789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t3968563789  : public MarshalByRefObject_t2263205487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T3968563789_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2031347980_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2031347980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2031347980  : public EventArgs_t1983841700
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2031347980, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2031347980, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2031347980_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t3997509659 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t3997509659 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t3997509659 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t3997509659 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t3997509659 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t3997509659 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t3997509659 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t3997509659 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef GCHANDLE_T561085996_H
#define GCHANDLE_T561085996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t561085996 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t561085996, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T561085996_H
#ifndef FLAGSATTRIBUTE_T3005521662_H
#define FLAGSATTRIBUTE_T3005521662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t3005521662  : public Attribute_t2515458215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T3005521662_H
#ifndef MONOENUMINFO_T4191924582_H
#define MONOENUMINFO_T4191924582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo
struct  MonoEnumInfo_t4191924582 
{
public:
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	RuntimeArray * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t3667000786* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t1510283420 * ___name_hash_3;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582, ___utype_0)); }
	inline Type_t * get_utype_0() const { return ___utype_0; }
	inline Type_t ** get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(Type_t * value)
	{
		___utype_0 = value;
		Il2CppCodeGenWriteBarrier((&___utype_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582, ___values_1)); }
	inline RuntimeArray * get_values_1() const { return ___values_1; }
	inline RuntimeArray ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(RuntimeArray * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582, ___names_2)); }
	inline StringU5BU5D_t3667000786* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t3667000786** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t3667000786* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_name_hash_3() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582, ___name_hash_3)); }
	inline Hashtable_t1510283420 * get_name_hash_3() const { return ___name_hash_3; }
	inline Hashtable_t1510283420 ** get_address_of_name_hash_3() { return &___name_hash_3; }
	inline void set_name_hash_3(Hashtable_t1510283420 * value)
	{
		___name_hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_hash_3), value);
	}
};

struct MonoEnumInfo_t4191924582_StaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t1510283420 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	RuntimeObject * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t4144598922 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t2607166258 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t92683270 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t4230587244 * ___long_comparer_10;

public:
	inline static int32_t get_offset_of_global_cache_5() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582_StaticFields, ___global_cache_5)); }
	inline Hashtable_t1510283420 * get_global_cache_5() const { return ___global_cache_5; }
	inline Hashtable_t1510283420 ** get_address_of_global_cache_5() { return &___global_cache_5; }
	inline void set_global_cache_5(Hashtable_t1510283420 * value)
	{
		___global_cache_5 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_5), value);
	}

	inline static int32_t get_offset_of_global_cache_monitor_6() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582_StaticFields, ___global_cache_monitor_6)); }
	inline RuntimeObject * get_global_cache_monitor_6() const { return ___global_cache_monitor_6; }
	inline RuntimeObject ** get_address_of_global_cache_monitor_6() { return &___global_cache_monitor_6; }
	inline void set_global_cache_monitor_6(RuntimeObject * value)
	{
		___global_cache_monitor_6 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_monitor_6), value);
	}

	inline static int32_t get_offset_of_sbyte_comparer_7() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582_StaticFields, ___sbyte_comparer_7)); }
	inline SByteComparer_t4144598922 * get_sbyte_comparer_7() const { return ___sbyte_comparer_7; }
	inline SByteComparer_t4144598922 ** get_address_of_sbyte_comparer_7() { return &___sbyte_comparer_7; }
	inline void set_sbyte_comparer_7(SByteComparer_t4144598922 * value)
	{
		___sbyte_comparer_7 = value;
		Il2CppCodeGenWriteBarrier((&___sbyte_comparer_7), value);
	}

	inline static int32_t get_offset_of_short_comparer_8() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582_StaticFields, ___short_comparer_8)); }
	inline ShortComparer_t2607166258 * get_short_comparer_8() const { return ___short_comparer_8; }
	inline ShortComparer_t2607166258 ** get_address_of_short_comparer_8() { return &___short_comparer_8; }
	inline void set_short_comparer_8(ShortComparer_t2607166258 * value)
	{
		___short_comparer_8 = value;
		Il2CppCodeGenWriteBarrier((&___short_comparer_8), value);
	}

	inline static int32_t get_offset_of_int_comparer_9() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582_StaticFields, ___int_comparer_9)); }
	inline IntComparer_t92683270 * get_int_comparer_9() const { return ___int_comparer_9; }
	inline IntComparer_t92683270 ** get_address_of_int_comparer_9() { return &___int_comparer_9; }
	inline void set_int_comparer_9(IntComparer_t92683270 * value)
	{
		___int_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___int_comparer_9), value);
	}

	inline static int32_t get_offset_of_long_comparer_10() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582_StaticFields, ___long_comparer_10)); }
	inline LongComparer_t4230587244 * get_long_comparer_10() const { return ___long_comparer_10; }
	inline LongComparer_t4230587244 ** get_address_of_long_comparer_10() { return &___long_comparer_10; }
	inline void set_long_comparer_10(LongComparer_t4230587244 * value)
	{
		___long_comparer_10 = value;
		Il2CppCodeGenWriteBarrier((&___long_comparer_10), value);
	}
};

struct MonoEnumInfo_t4191924582_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t1510283420 * ___cache_4;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t4191924582_ThreadStaticFields, ___cache_4)); }
	inline Hashtable_t1510283420 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t1510283420 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t1510283420 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t4191924582_marshaled_pinvoke
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	char** ___names_2;
	Hashtable_t1510283420 * ___name_hash_3;
};
// Native definition for COM marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t4191924582_marshaled_com
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	Il2CppChar** ___names_2;
	Hashtable_t1510283420 * ___name_hash_3;
};
#endif // MONOENUMINFO_T4191924582_H
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
#ifndef STACKOVERFLOWEXCEPTION_T3374052744_H
#define STACKOVERFLOWEXCEPTION_T3374052744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t3374052744  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T3374052744_H
#ifndef BINDINGFLAGS_T372431968_H
#define BINDINGFLAGS_T372431968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t372431968 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t372431968, ___value___1)); }
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
#endif // BINDINGFLAGS_T372431968_H
#ifndef CONFIDENCEFACTOR_T3452046926_H
#define CONFIDENCEFACTOR_T3452046926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t3452046926 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t3452046926, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T3452046926_H
#ifndef STRINGCOMPARISON_T825323195_H
#define STRINGCOMPARISON_T825323195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t825323195 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t825323195, ___value___1)); }
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
#endif // STRINGCOMPARISON_T825323195_H
#ifndef ARITHMETICEXCEPTION_T2128359257_H
#define ARITHMETICEXCEPTION_T2128359257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t2128359257  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T2128359257_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T530508173_H
#define UNAUTHORIZEDACCESSEXCEPTION_T530508173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t530508173  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T530508173_H
#ifndef RUNTIMEMETHODHANDLE_T3791937902_H
#define RUNTIMEMETHODHANDLE_T3791937902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t3791937902 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t3791937902, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T3791937902_H
#ifndef WEAKREFERENCE_T871189347_H
#define WEAKREFERENCE_T871189347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t871189347  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t561085996  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t871189347, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t871189347, ___gcHandle_1)); }
	inline GCHandle_t561085996  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t561085996 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t561085996  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T871189347_H
#ifndef UNITYTYPE_T2272239220_H
#define UNITYTYPE_T2272239220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t2272239220 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t2272239220, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T2272239220_H
#ifndef CURRENTSYSTEMTIMEZONE_T2043210674_H
#define CURRENTSYSTEMTIMEZONE_T2043210674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t2043210674  : public TimeZone_t4016811254
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t1510283420 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t214716022  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t214716022  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2043210674, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2043210674, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2043210674, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t1510283420 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t1510283420 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t1510283420 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2043210674, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2043210674, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t214716022  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t214716022 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t214716022  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2043210674, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t214716022  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t214716022 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t214716022  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t2043210674_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t2017435857 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2043210674_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t2043210674_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t2017435857 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t2017435857 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t2017435857 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T2043210674_H
#ifndef TYPECODE_T3628533986_H
#define TYPECODE_T3628533986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t3628533986 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t3628533986, ___value___1)); }
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
#endif // TYPECODE_T3628533986_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T1815472016_H
#define TYPEINITIALIZATIONEXCEPTION_T1815472016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t1815472016  : public SystemException_t2200738604
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t1815472016, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T1815472016_H
#ifndef STRINGSPLITOPTIONS_T4235407888_H
#define STRINGSPLITOPTIONS_T4235407888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t4235407888 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t4235407888, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T4235407888_H
#ifndef TYPELOADEXCEPTION_T1951818506_H
#define TYPELOADEXCEPTION_T1951818506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t1951818506  : public SystemException_t2200738604
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t1951818506, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t1951818506, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T1951818506_H
#ifndef NULLREFERENCEEXCEPTION_T311972_H
#define NULLREFERENCEEXCEPTION_T311972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t311972  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T311972_H
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
#ifndef EXECUTIONENGINEEXCEPTION_T3944215181_H
#define EXECUTIONENGINEEXCEPTION_T3944215181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t3944215181  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T3944215181_H
#ifndef SPECIALFOLDER_T1764198119_H
#define SPECIALFOLDER_T1764198119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t1764198119 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t1764198119, ___value___1)); }
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
#endif // SPECIALFOLDER_T1764198119_H
#ifndef RANKEXCEPTION_T3637306254_H
#define RANKEXCEPTION_T3637306254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t3637306254  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T3637306254_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T620475779_H
#define INDEXOUTOFRANGEEXCEPTION_T620475779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t620475779  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T620475779_H
#ifndef INVALIDCASTEXCEPTION_T2037773643_H
#define INVALIDCASTEXCEPTION_T2037773643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t2037773643  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T2037773643_H
#ifndef INVALIDOPERATIONEXCEPTION_T542751995_H
#define INVALIDOPERATIONEXCEPTION_T542751995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t542751995  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T542751995_H
#ifndef LOADEROPTIMIZATION_T117393891_H
#define LOADEROPTIMIZATION_T117393891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t117393891 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoaderOptimization_t117393891, ___value___1)); }
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
#endif // LOADEROPTIMIZATION_T117393891_H
#ifndef MEMBERACCESSEXCEPTION_T81126879_H
#define MEMBERACCESSEXCEPTION_T81126879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t81126879  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T81126879_H
#ifndef MONOASYNCCALL_T2791671252_H
#define MONOASYNCCALL_T2791671252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoAsyncCall
struct  MonoAsyncCall_t2791671252  : public RuntimeObject
{
public:
	// System.Object System.MonoAsyncCall::msg
	RuntimeObject * ___msg_0;
	// System.IntPtr System.MonoAsyncCall::cb_method
	IntPtr_t ___cb_method_1;
	// System.Object System.MonoAsyncCall::cb_target
	RuntimeObject * ___cb_target_2;
	// System.Object System.MonoAsyncCall::state
	RuntimeObject * ___state_3;
	// System.Object System.MonoAsyncCall::res
	RuntimeObject * ___res_4;
	// System.Object System.MonoAsyncCall::out_args
	RuntimeObject * ___out_args_5;
	// System.Int64 System.MonoAsyncCall::wait_event
	int64_t ___wait_event_6;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2791671252, ___msg_0)); }
	inline RuntimeObject * get_msg_0() const { return ___msg_0; }
	inline RuntimeObject ** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(RuntimeObject * value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}

	inline static int32_t get_offset_of_cb_method_1() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2791671252, ___cb_method_1)); }
	inline IntPtr_t get_cb_method_1() const { return ___cb_method_1; }
	inline IntPtr_t* get_address_of_cb_method_1() { return &___cb_method_1; }
	inline void set_cb_method_1(IntPtr_t value)
	{
		___cb_method_1 = value;
	}

	inline static int32_t get_offset_of_cb_target_2() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2791671252, ___cb_target_2)); }
	inline RuntimeObject * get_cb_target_2() const { return ___cb_target_2; }
	inline RuntimeObject ** get_address_of_cb_target_2() { return &___cb_target_2; }
	inline void set_cb_target_2(RuntimeObject * value)
	{
		___cb_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___cb_target_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2791671252, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_res_4() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2791671252, ___res_4)); }
	inline RuntimeObject * get_res_4() const { return ___res_4; }
	inline RuntimeObject ** get_address_of_res_4() { return &___res_4; }
	inline void set_res_4(RuntimeObject * value)
	{
		___res_4 = value;
		Il2CppCodeGenWriteBarrier((&___res_4), value);
	}

	inline static int32_t get_offset_of_out_args_5() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2791671252, ___out_args_5)); }
	inline RuntimeObject * get_out_args_5() const { return ___out_args_5; }
	inline RuntimeObject ** get_address_of_out_args_5() { return &___out_args_5; }
	inline void set_out_args_5(RuntimeObject * value)
	{
		___out_args_5 = value;
		Il2CppCodeGenWriteBarrier((&___out_args_5), value);
	}

	inline static int32_t get_offset_of_wait_event_6() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t2791671252, ___wait_event_6)); }
	inline int64_t get_wait_event_6() const { return ___wait_event_6; }
	inline int64_t* get_address_of_wait_event_6() { return &___wait_event_6; }
	inline void set_wait_event_6(int64_t value)
	{
		___wait_event_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASYNCCALL_T2791671252_H
#ifndef DAYOFWEEK_T2472437296_H
#define DAYOFWEEK_T2472437296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t2472437296 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t2472437296, ___value___1)); }
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
#endif // DAYOFWEEK_T2472437296_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T2503025322_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T2503025322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t2503025322  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T2503025322_H
#ifndef PLATFORMID_T81992221_H
#define PLATFORMID_T81992221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t81992221 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t81992221, ___value___1)); }
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
#endif // PLATFORMID_T81992221_H
#ifndef ATTRIBUTETARGETS_T3192277934_H
#define ATTRIBUTETARGETS_T3192277934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t3192277934 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AttributeTargets_t3192277934, ___value___1)); }
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
#endif // ATTRIBUTETARGETS_T3192277934_H
#ifndef OUTOFMEMORYEXCEPTION_T1330574072_H
#define OUTOFMEMORYEXCEPTION_T1330574072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t1330574072  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T1330574072_H
#ifndef WHICH_T901155649_H
#define WHICH_T901155649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime/Which
struct  Which_t901155649 
{
public:
	// System.Int32 System.DateTime/Which::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Which_t901155649, ___value___1)); }
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
#endif // WHICH_T901155649_H
#ifndef DATETIMEKIND_T2655436964_H
#define DATETIMEKIND_T2655436964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2655436964 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2655436964, ___value___1)); }
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
#endif // DATETIMEKIND_T2655436964_H
#ifndef RUNTIMETYPEHANDLE_T1661466124_H
#define RUNTIMETYPEHANDLE_T1661466124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t1661466124 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1661466124, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T1661466124_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3543020125_H
#define NOTIMPLEMENTEDEXCEPTION_T3543020125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3543020125  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3543020125_H
#ifndef NOTSUPPORTEDEXCEPTION_T889840954_H
#define NOTSUPPORTEDEXCEPTION_T889840954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t889840954  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T889840954_H
#ifndef FORMATEXCEPTION_T681632938_H
#define FORMATEXCEPTION_T681632938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t681632938  : public SystemException_t2200738604
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T681632938_H
#ifndef DLLNOTFOUNDEXCEPTION_T3046242047_H
#define DLLNOTFOUNDEXCEPTION_T3046242047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t3046242047  : public TypeLoadException_t1951818506
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T3046242047_H
#ifndef DIVIDEBYZEROEXCEPTION_T400916659_H
#define DIVIDEBYZEROEXCEPTION_T400916659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t400916659  : public ArithmeticException_t2128359257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T400916659_H
#ifndef DATETIME_T3489648084_H
#define DATETIME_T3489648084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3489648084 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t214716022  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3489648084, ___ticks_0)); }
	inline TimeSpan_t214716022  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t214716022 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t214716022  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3489648084, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3489648084_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3489648084  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3489648084  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t3667000786* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t3667000786* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t3667000786* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t3667000786* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t3667000786* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t3667000786* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t3667000786* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t2152905300* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t2152905300* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3489648084  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3489648084 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3489648084  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___MinValue_3)); }
	inline DateTime_t3489648084  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3489648084 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3489648084  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t3667000786* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t3667000786** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t3667000786* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t3667000786* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t3667000786** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t3667000786* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t3667000786* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t3667000786** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t3667000786* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t3667000786* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t3667000786** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t3667000786* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t3667000786* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t3667000786** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t3667000786* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t3667000786* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t3667000786** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t3667000786* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t3667000786* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t3667000786** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t3667000786* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t2152905300* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t2152905300** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t2152905300* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t2152905300* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t2152905300** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t2152905300* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3489648084_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3489648084_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T3179748659_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T3179748659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t3179748659  : public TypeLoadException_t1951818506
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T3179748659_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t1661466124  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1661466124  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1661466124 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1661466124  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t1483683526* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1686765310 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1686765310 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1686765310 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t1483683526* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t1483683526** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t1483683526* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t1686765310 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1686765310 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1686765310 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t1686765310 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1686765310 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1686765310 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t1686765310 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1686765310 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1686765310 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef FIELDACCESSEXCEPTION_T937527649_H
#define FIELDACCESSEXCEPTION_T937527649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t937527649  : public MemberAccessException_t81126879
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T937527649_H
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
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T151324565_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T151324565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t151324565  : public NotSupportedException_t889840954
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T151324565_H
#ifndef OVERFLOWEXCEPTION_T1536719814_H
#define OVERFLOWEXCEPTION_T1536719814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t1536719814  : public ArithmeticException_t2128359257
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T1536719814_H
#ifndef OPERATINGSYSTEM_T3018122028_H
#define OPERATINGSYSTEM_T3018122028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t3018122028  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t1495340265 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t3018122028, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t3018122028, ____version_1)); }
	inline Version_t1495340265 * get__version_1() const { return ____version_1; }
	inline Version_t1495340265 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t1495340265 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t3018122028, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((&____servicePack_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEM_T3018122028_H
#ifndef OBJECTDISPOSEDEXCEPTION_T2146258287_H
#define OBJECTDISPOSEDEXCEPTION_T2146258287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t2146258287  : public InvalidOperationException_t542751995
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t2146258287, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t2146258287, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T2146258287_H
#ifndef UNITYSERIALIZATIONHOLDER_T3532595455_H
#define UNITYSERIALIZATIONHOLDER_T3532595455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t3532595455  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3532595455, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3532595455, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t3532595455, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T3532595455_H
#ifndef METHODACCESSEXCEPTION_T3052102505_H
#define METHODACCESSEXCEPTION_T3052102505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t3052102505  : public MemberAccessException_t81126879
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T3052102505_H
#ifndef MISSINGMEMBEREXCEPTION_T3064366795_H
#define MISSINGMEMBEREXCEPTION_T3064366795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t3064366795  : public MemberAccessException_t81126879
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_11;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_12;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t806882901* ___Signature_13;

public:
	inline static int32_t get_offset_of_ClassName_11() { return static_cast<int32_t>(offsetof(MissingMemberException_t3064366795, ___ClassName_11)); }
	inline String_t* get_ClassName_11() const { return ___ClassName_11; }
	inline String_t** get_address_of_ClassName_11() { return &___ClassName_11; }
	inline void set_ClassName_11(String_t* value)
	{
		___ClassName_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_11), value);
	}

	inline static int32_t get_offset_of_MemberName_12() { return static_cast<int32_t>(offsetof(MissingMemberException_t3064366795, ___MemberName_12)); }
	inline String_t* get_MemberName_12() const { return ___MemberName_12; }
	inline String_t** get_address_of_MemberName_12() { return &___MemberName_12; }
	inline void set_MemberName_12(String_t* value)
	{
		___MemberName_12 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_12), value);
	}

	inline static int32_t get_offset_of_Signature_13() { return static_cast<int32_t>(offsetof(MissingMemberException_t3064366795, ___Signature_13)); }
	inline ByteU5BU5D_t806882901* get_Signature_13() const { return ___Signature_13; }
	inline ByteU5BU5D_t806882901** get_address_of_Signature_13() { return &___Signature_13; }
	inline void set_Signature_13(ByteU5BU5D_t806882901* value)
	{
		___Signature_13 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T3064366795_H
#ifndef TIMERCALLBACK_T184074229_H
#define TIMERCALLBACK_T184074229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t184074229  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T184074229_H
#ifndef MONOTYPE_T_H
#define MONOTYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t1620750628 * ___type_info_8;

public:
	inline static int32_t get_offset_of_type_info_8() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_8)); }
	inline MonoTypeInfo_t1620750628 * get_type_info_8() const { return ___type_info_8; }
	inline MonoTypeInfo_t1620750628 ** get_address_of_type_info_8() { return &___type_info_8; }
	inline void set_type_info_8(MonoTypeInfo_t1620750628 * value)
	{
		___type_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPE_T_H
#ifndef MISSINGMETHODEXCEPTION_T1289281043_H
#define MISSINGMETHODEXCEPTION_T1289281043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t1289281043  : public MissingMemberException_t3064366795
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T1289281043_H
#ifndef DATETIMEOFFSET_T1371426925_H
#define DATETIMEOFFSET_T1371426925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t1371426925 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t3489648084  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t214716022  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1371426925, ___dt_2)); }
	inline DateTime_t3489648084  get_dt_2() const { return ___dt_2; }
	inline DateTime_t3489648084 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t3489648084  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1371426925, ___utc_offset_3)); }
	inline TimeSpan_t214716022  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t214716022 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t214716022  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t1371426925_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t1371426925  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t1371426925  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1371426925_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t1371426925  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t1371426925 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t1371426925  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1371426925_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t1371426925  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t1371426925 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t1371426925  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T1371426925_H
#ifndef MISSINGFIELDEXCEPTION_T2490392932_H
#define MISSINGFIELDEXCEPTION_T2490392932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t2490392932  : public MissingMemberException_t3064366795
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T2490392932_H
#ifndef PRIMALITYTEST_T1077498742_H
#define PRIMALITYTEST_T1077498742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t1077498742  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T1077498742_H
#ifndef TYPEFILTER_T1656858486_H
#define TYPEFILTER_T1656858486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t1656858486  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T1656858486_H
#ifndef CROSSCONTEXTDELEGATE_T2111978225_H
#define CROSSCONTEXTDELEGATE_T2111978225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t2111978225  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T2111978225_H
#ifndef HEADERHANDLER_T1123737108_H
#define HEADERHANDLER_T1123737108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t1123737108  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T1123737108_H
#ifndef SENDORPOSTCALLBACK_T1044255190_H
#define SENDORPOSTCALLBACK_T1044255190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t1044255190  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T1044255190_H
#ifndef WAITCALLBACK_T2630610562_H
#define WAITCALLBACK_T2630610562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t2630610562  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T2630610562_H
#ifndef THREADSTART_T1207629356_H
#define THREADSTART_T1207629356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t1207629356  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T1207629356_H
#ifndef MEMBERFILTER_T1686765310_H
#define MEMBERFILTER_T1686765310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t1686765310  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T1686765310_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize800 = { sizeof (AssemblyLoadEventArgs_t2145870336), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize801 = { sizeof (AttributeTargets_t3192277934)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable801[17] = 
{
	AttributeTargets_t3192277934::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize802 = { sizeof (BitConverter_t3248655161), -1, sizeof(BitConverter_t3248655161_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable802[2] = 
{
	BitConverter_t3248655161_StaticFields::get_offset_of_SwappedWordsInDouble_0(),
	BitConverter_t3248655161_StaticFields::get_offset_of_IsLittleEndian_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize803 = { sizeof (Buffer_t1557384969), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize804 = { sizeof (CharEnumerator_t4229738798), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable804[3] = 
{
	CharEnumerator_t4229738798::get_offset_of_str_0(),
	CharEnumerator_t4229738798::get_offset_of_index_1(),
	CharEnumerator_t4229738798::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize805 = { sizeof (Console_t1572631250), -1, sizeof(Console_t1572631250_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable805[5] = 
{
	Console_t1572631250_StaticFields::get_offset_of_stdout_0(),
	Console_t1572631250_StaticFields::get_offset_of_stderr_1(),
	Console_t1572631250_StaticFields::get_offset_of_stdin_2(),
	Console_t1572631250_StaticFields::get_offset_of_inputEncoding_3(),
	Console_t1572631250_StaticFields::get_offset_of_outputEncoding_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize806 = { sizeof (ContextBoundObject_t3968563789), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize807 = { sizeof (Convert_t3216824935), -1, sizeof(Convert_t3216824935_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable807[2] = 
{
	Convert_t3216824935_StaticFields::get_offset_of_DBNull_0(),
	Convert_t3216824935_StaticFields::get_offset_of_conversionTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize808 = { sizeof (DBNull_t2897493329), -1, sizeof(DBNull_t2897493329_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable808[1] = 
{
	DBNull_t2897493329_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize809 = { sizeof (DateTime_t3489648084)+ sizeof (RuntimeObject), -1, sizeof(DateTime_t3489648084_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable809[15] = 
{
	DateTime_t3489648084::get_offset_of_ticks_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t3489648084::get_offset_of_kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTime_t3489648084_StaticFields::get_offset_of_MaxValue_2(),
	DateTime_t3489648084_StaticFields::get_offset_of_MinValue_3(),
	DateTime_t3489648084_StaticFields::get_offset_of_ParseTimeFormats_4(),
	DateTime_t3489648084_StaticFields::get_offset_of_ParseYearDayMonthFormats_5(),
	DateTime_t3489648084_StaticFields::get_offset_of_ParseYearMonthDayFormats_6(),
	DateTime_t3489648084_StaticFields::get_offset_of_ParseDayMonthYearFormats_7(),
	DateTime_t3489648084_StaticFields::get_offset_of_ParseMonthDayYearFormats_8(),
	DateTime_t3489648084_StaticFields::get_offset_of_MonthDayShortFormats_9(),
	DateTime_t3489648084_StaticFields::get_offset_of_DayMonthShortFormats_10(),
	DateTime_t3489648084_StaticFields::get_offset_of_daysmonth_11(),
	DateTime_t3489648084_StaticFields::get_offset_of_daysmonthleap_12(),
	DateTime_t3489648084_StaticFields::get_offset_of_to_local_time_span_object_13(),
	DateTime_t3489648084_StaticFields::get_offset_of_last_now_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize810 = { sizeof (Which_t901155649)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable810[5] = 
{
	Which_t901155649::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize811 = { sizeof (DateTimeKind_t2655436964)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable811[4] = 
{
	DateTimeKind_t2655436964::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize812 = { sizeof (DateTimeOffset_t1371426925)+ sizeof (RuntimeObject), -1, sizeof(DateTimeOffset_t1371426925_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable812[4] = 
{
	DateTimeOffset_t1371426925_StaticFields::get_offset_of_MaxValue_0(),
	DateTimeOffset_t1371426925_StaticFields::get_offset_of_MinValue_1(),
	DateTimeOffset_t1371426925::get_offset_of_dt_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeOffset_t1371426925::get_offset_of_utc_offset_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize813 = { sizeof (DateTimeUtils_t1950680833), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize814 = { sizeof (DayOfWeek_t2472437296)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable814[8] = 
{
	DayOfWeek_t2472437296::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize815 = { sizeof (DelegateData_t3960614522), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable815[2] = 
{
	DelegateData_t3960614522::get_offset_of_target_type_0(),
	DelegateData_t3960614522::get_offset_of_method_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize816 = { sizeof (DelegateSerializationHolder_t4003450923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable816[1] = 
{
	DelegateSerializationHolder_t4003450923::get_offset_of__delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize817 = { sizeof (DelegateEntry_t2220230370), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable817[7] = 
{
	DelegateEntry_t2220230370::get_offset_of_type_0(),
	DelegateEntry_t2220230370::get_offset_of_assembly_1(),
	DelegateEntry_t2220230370::get_offset_of_target_2(),
	DelegateEntry_t2220230370::get_offset_of_targetTypeAssembly_3(),
	DelegateEntry_t2220230370::get_offset_of_targetTypeName_4(),
	DelegateEntry_t2220230370::get_offset_of_methodName_5(),
	DelegateEntry_t2220230370::get_offset_of_delegateEntry_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize818 = { sizeof (DivideByZeroException_t400916659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable818[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize819 = { sizeof (DllNotFoundException_t3046242047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable819[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize820 = { sizeof (EntryPointNotFoundException_t3179748659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable820[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize821 = { sizeof (MonoEnumInfo_t4191924582)+ sizeof (RuntimeObject), -1, sizeof(MonoEnumInfo_t4191924582_StaticFields), sizeof(MonoEnumInfo_t4191924582_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable821[11] = 
{
	MonoEnumInfo_t4191924582::get_offset_of_utype_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t4191924582::get_offset_of_values_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t4191924582::get_offset_of_names_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t4191924582::get_offset_of_name_hash_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	THREAD_STATIC_FIELD_OFFSET,
	MonoEnumInfo_t4191924582_StaticFields::get_offset_of_global_cache_5(),
	MonoEnumInfo_t4191924582_StaticFields::get_offset_of_global_cache_monitor_6(),
	MonoEnumInfo_t4191924582_StaticFields::get_offset_of_sbyte_comparer_7(),
	MonoEnumInfo_t4191924582_StaticFields::get_offset_of_short_comparer_8(),
	MonoEnumInfo_t4191924582_StaticFields::get_offset_of_int_comparer_9(),
	MonoEnumInfo_t4191924582_StaticFields::get_offset_of_long_comparer_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize822 = { sizeof (SByteComparer_t4144598922), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize823 = { sizeof (ShortComparer_t2607166258), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize824 = { sizeof (IntComparer_t92683270), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize825 = { sizeof (LongComparer_t4230587244), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize826 = { sizeof (Environment_t1626531108), -1, sizeof(Environment_t1626531108_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable826[2] = 
{
	0,
	Environment_t1626531108_StaticFields::get_offset_of_os_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize827 = { sizeof (SpecialFolder_t1764198119)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable827[24] = 
{
	SpecialFolder_t1764198119::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize828 = { sizeof (EventArgs_t1983841700), -1, sizeof(EventArgs_t1983841700_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable828[1] = 
{
	EventArgs_t1983841700_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize829 = { sizeof (ExecutionEngineException_t3944215181), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize830 = { sizeof (FieldAccessException_t937527649), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize831 = { sizeof (FlagsAttribute_t3005521662), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize832 = { sizeof (FormatException_t681632938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable832[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize833 = { sizeof (GC_t4227989842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize834 = { sizeof (Guid_t)+ sizeof (RuntimeObject), sizeof(Guid_t ), sizeof(Guid_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable834[15] = 
{
	Guid_t::get_offset_of__a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__d_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__e_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__f_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__g_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__h_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__i_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__j_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__k_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t_StaticFields::get_offset_of_Empty_11(),
	Guid_t_StaticFields::get_offset_of__rngAccess_12(),
	Guid_t_StaticFields::get_offset_of__rng_13(),
	Guid_t_StaticFields::get_offset_of__fastRng_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize835 = { sizeof (GuidParser_t1694006155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable835[3] = 
{
	GuidParser_t1694006155::get_offset_of__src_0(),
	GuidParser_t1694006155::get_offset_of__length_1(),
	GuidParser_t1694006155::get_offset_of__cur_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize836 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize837 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize838 = { sizeof (IndexOutOfRangeException_t620475779), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize839 = { sizeof (InvalidCastException_t2037773643), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable839[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize840 = { sizeof (InvalidOperationException_t542751995), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable840[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize841 = { sizeof (LoaderOptimization_t117393891)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable841[7] = 
{
	LoaderOptimization_t117393891::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize842 = { sizeof (LocalDataStoreSlot_t1990137907), -1, sizeof(LocalDataStoreSlot_t1990137907_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable842[5] = 
{
	LocalDataStoreSlot_t1990137907::get_offset_of_slot_0(),
	LocalDataStoreSlot_t1990137907::get_offset_of_thread_local_1(),
	LocalDataStoreSlot_t1990137907_StaticFields::get_offset_of_lock_obj_2(),
	LocalDataStoreSlot_t1990137907_StaticFields::get_offset_of_slot_bitmap_thread_3(),
	LocalDataStoreSlot_t1990137907_StaticFields::get_offset_of_slot_bitmap_context_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize843 = { sizeof (Math_t2516688376), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize844 = { sizeof (MemberAccessException_t81126879), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize845 = { sizeof (MethodAccessException_t3052102505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable845[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize846 = { sizeof (MissingFieldException_t2490392932), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize847 = { sizeof (MissingMemberException_t3064366795), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable847[3] = 
{
	MissingMemberException_t3064366795::get_offset_of_ClassName_11(),
	MissingMemberException_t3064366795::get_offset_of_MemberName_12(),
	MissingMemberException_t3064366795::get_offset_of_Signature_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize848 = { sizeof (MissingMethodException_t1289281043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable848[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize849 = { sizeof (MonoAsyncCall_t2791671252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable849[7] = 
{
	MonoAsyncCall_t2791671252::get_offset_of_msg_0(),
	MonoAsyncCall_t2791671252::get_offset_of_cb_method_1(),
	MonoAsyncCall_t2791671252::get_offset_of_cb_target_2(),
	MonoAsyncCall_t2791671252::get_offset_of_state_3(),
	MonoAsyncCall_t2791671252::get_offset_of_res_4(),
	MonoAsyncCall_t2791671252::get_offset_of_out_args_5(),
	MonoAsyncCall_t2791671252::get_offset_of_wait_event_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize850 = { sizeof (MonoCustomAttrs_t696144820), -1, sizeof(MonoCustomAttrs_t696144820_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable850[3] = 
{
	MonoCustomAttrs_t696144820_StaticFields::get_offset_of_corlib_0(),
	MonoCustomAttrs_t696144820_StaticFields::get_offset_of_AttributeUsageType_1(),
	MonoCustomAttrs_t696144820_StaticFields::get_offset_of_DefaultAttributeUsage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize851 = { sizeof (AttributeInfo_t772211394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable851[2] = 
{
	AttributeInfo_t772211394::get_offset_of__usage_0(),
	AttributeInfo_t772211394::get_offset_of__inheritanceLevel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize852 = { sizeof (MonoTouchAOTHelper_t1183669108), -1, sizeof(MonoTouchAOTHelper_t1183669108_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable852[1] = 
{
	MonoTouchAOTHelper_t1183669108_StaticFields::get_offset_of_FalseFlag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize853 = { sizeof (MonoTypeInfo_t1620750628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable853[2] = 
{
	MonoTypeInfo_t1620750628::get_offset_of_full_name_0(),
	MonoTypeInfo_t1620750628::get_offset_of_default_ctor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize854 = { sizeof (MonoType_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable854[1] = 
{
	MonoType_t::get_offset_of_type_info_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize855 = { sizeof (MulticastNotSupportedException_t2503025322), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize856 = { sizeof (NonSerializedAttribute_t881493483), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize857 = { sizeof (NotImplementedException_t3543020125), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize858 = { sizeof (NotSupportedException_t889840954), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable858[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize859 = { sizeof (NullReferenceException_t311972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable859[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize860 = { sizeof (NumberFormatter_t2214860721), -1, sizeof(NumberFormatter_t2214860721_StaticFields), sizeof(NumberFormatter_t2214860721_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable860[26] = 
{
	NumberFormatter_t2214860721_StaticFields::get_offset_of_MantissaBitsTable_0(),
	NumberFormatter_t2214860721_StaticFields::get_offset_of_TensExponentTable_1(),
	NumberFormatter_t2214860721_StaticFields::get_offset_of_DigitLowerTable_2(),
	NumberFormatter_t2214860721_StaticFields::get_offset_of_DigitUpperTable_3(),
	NumberFormatter_t2214860721_StaticFields::get_offset_of_TenPowersList_4(),
	NumberFormatter_t2214860721_StaticFields::get_offset_of_DecHexDigits_5(),
	NumberFormatter_t2214860721::get_offset_of__thread_6(),
	NumberFormatter_t2214860721::get_offset_of__nfi_7(),
	NumberFormatter_t2214860721::get_offset_of__NaN_8(),
	NumberFormatter_t2214860721::get_offset_of__infinity_9(),
	NumberFormatter_t2214860721::get_offset_of__isCustomFormat_10(),
	NumberFormatter_t2214860721::get_offset_of__specifierIsUpper_11(),
	NumberFormatter_t2214860721::get_offset_of__positive_12(),
	NumberFormatter_t2214860721::get_offset_of__specifier_13(),
	NumberFormatter_t2214860721::get_offset_of__precision_14(),
	NumberFormatter_t2214860721::get_offset_of__defPrecision_15(),
	NumberFormatter_t2214860721::get_offset_of__digitsLen_16(),
	NumberFormatter_t2214860721::get_offset_of__offset_17(),
	NumberFormatter_t2214860721::get_offset_of__decPointPos_18(),
	NumberFormatter_t2214860721::get_offset_of__val1_19(),
	NumberFormatter_t2214860721::get_offset_of__val2_20(),
	NumberFormatter_t2214860721::get_offset_of__val3_21(),
	NumberFormatter_t2214860721::get_offset_of__val4_22(),
	NumberFormatter_t2214860721::get_offset_of__cbuf_23(),
	NumberFormatter_t2214860721::get_offset_of__ind_24(),
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize861 = { sizeof (CustomInfo_t2102402629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable861[14] = 
{
	CustomInfo_t2102402629::get_offset_of_UseGroup_0(),
	CustomInfo_t2102402629::get_offset_of_DecimalDigits_1(),
	CustomInfo_t2102402629::get_offset_of_DecimalPointPos_2(),
	CustomInfo_t2102402629::get_offset_of_DecimalTailSharpDigits_3(),
	CustomInfo_t2102402629::get_offset_of_IntegerDigits_4(),
	CustomInfo_t2102402629::get_offset_of_IntegerHeadSharpDigits_5(),
	CustomInfo_t2102402629::get_offset_of_IntegerHeadPos_6(),
	CustomInfo_t2102402629::get_offset_of_UseExponent_7(),
	CustomInfo_t2102402629::get_offset_of_ExponentDigits_8(),
	CustomInfo_t2102402629::get_offset_of_ExponentTailSharpDigits_9(),
	CustomInfo_t2102402629::get_offset_of_ExponentNegativeSignOnly_10(),
	CustomInfo_t2102402629::get_offset_of_DividePlaces_11(),
	CustomInfo_t2102402629::get_offset_of_Percents_12(),
	CustomInfo_t2102402629::get_offset_of_Permilles_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize862 = { sizeof (ObjectDisposedException_t2146258287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable862[2] = 
{
	ObjectDisposedException_t2146258287::get_offset_of_obj_name_12(),
	ObjectDisposedException_t2146258287::get_offset_of_msg_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize863 = { sizeof (OperatingSystem_t3018122028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable863[3] = 
{
	OperatingSystem_t3018122028::get_offset_of__platform_0(),
	OperatingSystem_t3018122028::get_offset_of__version_1(),
	OperatingSystem_t3018122028::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize864 = { sizeof (OutOfMemoryException_t1330574072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable864[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize865 = { sizeof (OverflowException_t1536719814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable865[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize866 = { sizeof (PlatformID_t81992221)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable866[8] = 
{
	PlatformID_t81992221::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize867 = { sizeof (PlatformNotSupportedException_t151324565), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable867[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize868 = { sizeof (RankException_t3637306254), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize869 = { sizeof (ResolveEventArgs_t3431378991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable869[1] = 
{
	ResolveEventArgs_t3431378991::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize870 = { sizeof (RuntimeMethodHandle_t3791937902)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t3791937902 ), 0, 0 };
extern const int32_t g_FieldOffsetTable870[1] = 
{
	RuntimeMethodHandle_t3791937902::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize871 = { sizeof (StackOverflowException_t3374052744), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize872 = { sizeof (StringComparer_t2484247601), -1, sizeof(StringComparer_t2484247601_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable872[4] = 
{
	StringComparer_t2484247601_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t2484247601_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t2484247601_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t2484247601_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize873 = { sizeof (CultureAwareComparer_t1552025934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable873[2] = 
{
	CultureAwareComparer_t1552025934::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t1552025934::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize874 = { sizeof (OrdinalComparer_t3090755250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable874[1] = 
{
	OrdinalComparer_t3090755250::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize875 = { sizeof (StringComparison_t825323195)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable875[7] = 
{
	StringComparison_t825323195::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize876 = { sizeof (StringSplitOptions_t4235407888)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable876[3] = 
{
	StringSplitOptions_t4235407888::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize877 = { sizeof (SystemException_t2200738604), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize878 = { sizeof (ThreadStaticAttribute_t1383397580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize879 = { sizeof (TimeSpan_t214716022)+ sizeof (RuntimeObject), sizeof(TimeSpan_t214716022 ), sizeof(TimeSpan_t214716022_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable879[4] = 
{
	TimeSpan_t214716022_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t214716022_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t214716022_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t214716022::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize880 = { sizeof (TimeZone_t4016811254), -1, sizeof(TimeZone_t4016811254_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable880[3] = 
{
	TimeZone_t4016811254_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t4016811254_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t4016811254_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize881 = { sizeof (CurrentSystemTimeZone_t2043210674), -1, sizeof(CurrentSystemTimeZone_t2043210674_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable881[8] = 
{
	CurrentSystemTimeZone_t2043210674::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t2043210674::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t2043210674::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t2043210674::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t2043210674::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t2043210674::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t2043210674_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t2043210674_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize882 = { sizeof (TypeCode_t3628533986)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable882[19] = 
{
	TypeCode_t3628533986::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize883 = { sizeof (TypeInitializationException_t1815472016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable883[1] = 
{
	TypeInitializationException_t1815472016::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize884 = { sizeof (TypeLoadException_t1951818506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable884[3] = 
{
	0,
	TypeLoadException_t1951818506::get_offset_of_className_12(),
	TypeLoadException_t1951818506::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize885 = { sizeof (UnauthorizedAccessException_t530508173), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize886 = { sizeof (UnhandledExceptionEventArgs_t2031347980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable886[2] = 
{
	UnhandledExceptionEventArgs_t2031347980::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t2031347980::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize887 = { sizeof (UnitySerializationHolder_t3532595455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable887[3] = 
{
	UnitySerializationHolder_t3532595455::get_offset_of__data_0(),
	UnitySerializationHolder_t3532595455::get_offset_of__unityType_1(),
	UnitySerializationHolder_t3532595455::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize888 = { sizeof (UnityType_t2272239220)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable888[5] = 
{
	UnityType_t2272239220::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize889 = { sizeof (Version_t1495340265), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable889[5] = 
{
	0,
	Version_t1495340265::get_offset_of__Major_1(),
	Version_t1495340265::get_offset_of__Minor_2(),
	Version_t1495340265::get_offset_of__Build_3(),
	Version_t1495340265::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize890 = { sizeof (WeakReference_t871189347), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable890[2] = 
{
	WeakReference_t871189347::get_offset_of_isLongReference_0(),
	WeakReference_t871189347::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize891 = { sizeof (PrimalityTest_t1077498742), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize892 = { sizeof (MemberFilter_t1686765310), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize893 = { sizeof (TypeFilter_t1656858486), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize894 = { sizeof (CrossContextDelegate_t2111978225), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize895 = { sizeof (HeaderHandler_t1123737108), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize896 = { sizeof (SendOrPostCallback_t1044255190), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize897 = { sizeof (ThreadStart_t1207629356), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize898 = { sizeof (TimerCallback_t184074229), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize899 = { sizeof (WaitCallback_t2630610562), sizeof(Il2CppMethodPointer), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
