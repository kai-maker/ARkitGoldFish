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

// System.Collections.ArrayList
struct ArrayList_t1094572978;
// System.Collections.IDictionary
struct IDictionary_t3874471239;
// System.UInt16[]
struct UInt16U5BU5D_t2204977147;
// System.String[]
struct StringU5BU5D_t3667000786;
// System.Collections.IList
struct IList_t3531563431;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1510283420;
// System.Byte[]
struct ByteU5BU5D_t806882901;
// System.Text.RegularExpressions.Regex
struct Regex_t1647239264;
// System.Text.RegularExpressions.MRUList/Node
struct Node_t3952123855;
// System.UInt32[]
struct UInt32U5BU5D_t2371586566;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3997509659;
// Mono.Math.BigInteger
struct BigInteger_t3898687918;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t3656148157;
// System.UriParser
struct UriParser_t2794153166;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1284524661;
// System.Text.RegularExpressions.MRUList
struct MRUList_t1646723449;
// System.IntPtr[]
struct IntPtrU5BU5D_t3171262190;
// System.Security.Cryptography.Oid
struct Oid_t3251093799;
// System.Security.Cryptography.OidCollection
struct OidCollection_t2986385545;
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_t1663793817;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t3078962668;
// System.Text.RegularExpressions.Match
struct Match_t1291154093;
// System.Collections.IEnumerator
struct IEnumerator_t4079398944;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t3960266899;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t2155871962;
// System.Void
struct Void_t1074769199;
// System.Collections.Stack
struct Stack_t593878580;
// System.Char[]
struct CharU5BU5D_t3279474012;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t3070857164;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t3484960845;
// System.Int32[]
struct Int32U5BU5D_t2152905300;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3960614522;
// System.Collections.BitArray
struct BitArray_t84217222;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t1300391255;
// System.Text.RegularExpressions.IMachine
struct IMachine_t694851057;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t3674972464;
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t50949825;
// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t251824079;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t1703016266;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1748784529;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t1274120282;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t3527869162;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t120072283;
// Mono.Security.X509.X509Store
struct X509Store_t1566667678;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t3217283804;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t3516984091;
// System.IAsyncResult
struct IAsyncResult_t1327312896;
// System.AsyncCallback
struct AsyncCallback_t2968092817;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t4104402153;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1469920434;




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
#ifndef U3CMODULEU3E_T385520836_H
#define U3CMODULEU3E_T385520836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t385520836 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T385520836_H
#ifndef X509EXTENSIONCOLLECTION_T2979578687_H
#define X509EXTENSIONCOLLECTION_T2979578687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct  X509ExtensionCollection_t2979578687  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ExtensionCollection::_list
	ArrayList_t1094572978 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t2979578687, ____list_0)); }
	inline ArrayList_t1094572978 * get__list_0() const { return ____list_0; }
	inline ArrayList_t1094572978 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t1094572978 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T2979578687_H
#ifndef NODE_T3952123855_H
#define NODE_T3952123855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList/Node
struct  Node_t3952123855  : public RuntimeObject
{
public:
	// System.Object System.Text.RegularExpressions.MRUList/Node::value
	RuntimeObject * ___value_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::previous
	Node_t3952123855 * ___previous_1;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::next
	Node_t3952123855 * ___next_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Node_t3952123855, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(Node_t3952123855, ___previous_1)); }
	inline Node_t3952123855 * get_previous_1() const { return ___previous_1; }
	inline Node_t3952123855 ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(Node_t3952123855 * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier((&___previous_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(Node_t3952123855, ___next_2)); }
	inline Node_t3952123855 * get_next_2() const { return ___next_2; }
	inline Node_t3952123855 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(Node_t3952123855 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODE_T3952123855_H
#ifndef CATEGORYUTILS_T2238458714_H
#define CATEGORYUTILS_T2238458714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CategoryUtils
struct  CategoryUtils_t2238458714  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYUTILS_T2238458714_H
#ifndef LINKREF_T2968480225_H
#define LINKREF_T2968480225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkRef
struct  LinkRef_t2968480225  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKREF_T2968480225_H
#ifndef INTERPRETERFACTORY_T1026382607_H
#define INTERPRETERFACTORY_T1026382607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.InterpreterFactory
struct  InterpreterFactory_t1026382607  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::mapping
	RuntimeObject* ___mapping_0;
	// System.UInt16[] System.Text.RegularExpressions.InterpreterFactory::pattern
	UInt16U5BU5D_t2204977147* ___pattern_1;
	// System.String[] System.Text.RegularExpressions.InterpreterFactory::namesMapping
	StringU5BU5D_t3667000786* ___namesMapping_2;
	// System.Int32 System.Text.RegularExpressions.InterpreterFactory::gap
	int32_t ___gap_3;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(InterpreterFactory_t1026382607, ___mapping_0)); }
	inline RuntimeObject* get_mapping_0() const { return ___mapping_0; }
	inline RuntimeObject** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(RuntimeObject* value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_0), value);
	}

	inline static int32_t get_offset_of_pattern_1() { return static_cast<int32_t>(offsetof(InterpreterFactory_t1026382607, ___pattern_1)); }
	inline UInt16U5BU5D_t2204977147* get_pattern_1() const { return ___pattern_1; }
	inline UInt16U5BU5D_t2204977147** get_address_of_pattern_1() { return &___pattern_1; }
	inline void set_pattern_1(UInt16U5BU5D_t2204977147* value)
	{
		___pattern_1 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_1), value);
	}

	inline static int32_t get_offset_of_namesMapping_2() { return static_cast<int32_t>(offsetof(InterpreterFactory_t1026382607, ___namesMapping_2)); }
	inline StringU5BU5D_t3667000786* get_namesMapping_2() const { return ___namesMapping_2; }
	inline StringU5BU5D_t3667000786** get_address_of_namesMapping_2() { return &___namesMapping_2; }
	inline void set_namesMapping_2(StringU5BU5D_t3667000786* value)
	{
		___namesMapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___namesMapping_2), value);
	}

	inline static int32_t get_offset_of_gap_3() { return static_cast<int32_t>(offsetof(InterpreterFactory_t1026382607, ___gap_3)); }
	inline int32_t get_gap_3() const { return ___gap_3; }
	inline int32_t* get_address_of_gap_3() { return &___gap_3; }
	inline void set_gap_3(int32_t value)
	{
		___gap_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETERFACTORY_T1026382607_H
#ifndef PATTERNCOMPILER_T1873117280_H
#define PATTERNCOMPILER_T1873117280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler
struct  PatternCompiler_t1873117280  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.PatternCompiler::pgm
	ArrayList_t1094572978 * ___pgm_0;

public:
	inline static int32_t get_offset_of_pgm_0() { return static_cast<int32_t>(offsetof(PatternCompiler_t1873117280, ___pgm_0)); }
	inline ArrayList_t1094572978 * get_pgm_0() const { return ___pgm_0; }
	inline ArrayList_t1094572978 ** get_address_of_pgm_0() { return &___pgm_0; }
	inline void set_pgm_0(ArrayList_t1094572978 * value)
	{
		___pgm_0 = value;
		Il2CppCodeGenWriteBarrier((&___pgm_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNCOMPILER_T1873117280_H
#ifndef REPEATCONTEXT_T251824079_H
#define REPEATCONTEXT_T251824079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/RepeatContext
struct  RepeatContext_t251824079  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::start
	int32_t ___start_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::lazy
	bool ___lazy_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::expr_pc
	int32_t ___expr_pc_4;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::previous
	RepeatContext_t251824079 * ___previous_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RepeatContext_t251824079, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(RepeatContext_t251824079, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(RepeatContext_t251824079, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(RepeatContext_t251824079, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}

	inline static int32_t get_offset_of_expr_pc_4() { return static_cast<int32_t>(offsetof(RepeatContext_t251824079, ___expr_pc_4)); }
	inline int32_t get_expr_pc_4() const { return ___expr_pc_4; }
	inline int32_t* get_address_of_expr_pc_4() { return &___expr_pc_4; }
	inline void set_expr_pc_4(int32_t value)
	{
		___expr_pc_4 = value;
	}

	inline static int32_t get_offset_of_previous_5() { return static_cast<int32_t>(offsetof(RepeatContext_t251824079, ___previous_5)); }
	inline RepeatContext_t251824079 * get_previous_5() const { return ___previous_5; }
	inline RepeatContext_t251824079 ** get_address_of_previous_5() { return &___previous_5; }
	inline void set_previous_5(RepeatContext_t251824079 * value)
	{
		___previous_5 = value;
		Il2CppCodeGenWriteBarrier((&___previous_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(RepeatContext_t251824079, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPEATCONTEXT_T251824079_H
#ifndef INTERVALCOLLECTION_T1300391255_H
#define INTERVALCOLLECTION_T1300391255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection
struct  IntervalCollection_t1300391255  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.IntervalCollection::intervals
	ArrayList_t1094572978 * ___intervals_0;

public:
	inline static int32_t get_offset_of_intervals_0() { return static_cast<int32_t>(offsetof(IntervalCollection_t1300391255, ___intervals_0)); }
	inline ArrayList_t1094572978 * get_intervals_0() const { return ___intervals_0; }
	inline ArrayList_t1094572978 ** get_address_of_intervals_0() { return &___intervals_0; }
	inline void set_intervals_0(ArrayList_t1094572978 * value)
	{
		___intervals_0 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALCOLLECTION_T1300391255_H
#ifndef ENUMERATOR_T3666134196_H
#define ENUMERATOR_T3666134196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/Enumerator
struct  Enumerator_t3666134196  : public RuntimeObject
{
public:
	// System.Collections.IList System.Text.RegularExpressions.IntervalCollection/Enumerator::list
	RuntimeObject* ___list_0;
	// System.Int32 System.Text.RegularExpressions.IntervalCollection/Enumerator::ptr
	int32_t ___ptr_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3666134196, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Enumerator_t3666134196, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3666134196_H
#ifndef PARSER_T4118969576_H
#define PARSER_T4118969576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Parser
struct  Parser_t4118969576  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Parser::pattern
	String_t* ___pattern_0;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ptr
	int32_t ___ptr_1;
	// System.Collections.ArrayList System.Text.RegularExpressions.Syntax.Parser::caps
	ArrayList_t1094572978 * ___caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.Syntax.Parser::refs
	Hashtable_t1510283420 * ___refs_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::num_groups
	int32_t ___num_groups_4;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::gap
	int32_t ___gap_5;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Parser_t4118969576, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Parser_t4118969576, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}

	inline static int32_t get_offset_of_caps_2() { return static_cast<int32_t>(offsetof(Parser_t4118969576, ___caps_2)); }
	inline ArrayList_t1094572978 * get_caps_2() const { return ___caps_2; }
	inline ArrayList_t1094572978 ** get_address_of_caps_2() { return &___caps_2; }
	inline void set_caps_2(ArrayList_t1094572978 * value)
	{
		___caps_2 = value;
		Il2CppCodeGenWriteBarrier((&___caps_2), value);
	}

	inline static int32_t get_offset_of_refs_3() { return static_cast<int32_t>(offsetof(Parser_t4118969576, ___refs_3)); }
	inline Hashtable_t1510283420 * get_refs_3() const { return ___refs_3; }
	inline Hashtable_t1510283420 ** get_address_of_refs_3() { return &___refs_3; }
	inline void set_refs_3(Hashtable_t1510283420 * value)
	{
		___refs_3 = value;
		Il2CppCodeGenWriteBarrier((&___refs_3), value);
	}

	inline static int32_t get_offset_of_num_groups_4() { return static_cast<int32_t>(offsetof(Parser_t4118969576, ___num_groups_4)); }
	inline int32_t get_num_groups_4() const { return ___num_groups_4; }
	inline int32_t* get_address_of_num_groups_4() { return &___num_groups_4; }
	inline void set_num_groups_4(int32_t value)
	{
		___num_groups_4 = value;
	}

	inline static int32_t get_offset_of_gap_5() { return static_cast<int32_t>(offsetof(Parser_t4118969576, ___gap_5)); }
	inline int32_t get_gap_5() const { return ___gap_5; }
	inline int32_t* get_address_of_gap_5() { return &___gap_5; }
	inline void set_gap_5(int32_t value)
	{
		___gap_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T4118969576_H
#ifndef QUICKSEARCH_T50949825_H
#define QUICKSEARCH_T50949825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.QuickSearch
struct  QuickSearch_t50949825  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.QuickSearch::str
	String_t* ___str_0;
	// System.Int32 System.Text.RegularExpressions.QuickSearch::len
	int32_t ___len_1;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::ignore
	bool ___ignore_2;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::reverse
	bool ___reverse_3;
	// System.Byte[] System.Text.RegularExpressions.QuickSearch::shift
	ByteU5BU5D_t806882901* ___shift_4;
	// System.Collections.Hashtable System.Text.RegularExpressions.QuickSearch::shiftExtended
	Hashtable_t1510283420 * ___shiftExtended_5;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(QuickSearch_t50949825, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(QuickSearch_t50949825, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(QuickSearch_t50949825, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_reverse_3() { return static_cast<int32_t>(offsetof(QuickSearch_t50949825, ___reverse_3)); }
	inline bool get_reverse_3() const { return ___reverse_3; }
	inline bool* get_address_of_reverse_3() { return &___reverse_3; }
	inline void set_reverse_3(bool value)
	{
		___reverse_3 = value;
	}

	inline static int32_t get_offset_of_shift_4() { return static_cast<int32_t>(offsetof(QuickSearch_t50949825, ___shift_4)); }
	inline ByteU5BU5D_t806882901* get_shift_4() const { return ___shift_4; }
	inline ByteU5BU5D_t806882901** get_address_of_shift_4() { return &___shift_4; }
	inline void set_shift_4(ByteU5BU5D_t806882901* value)
	{
		___shift_4 = value;
		Il2CppCodeGenWriteBarrier((&___shift_4), value);
	}

	inline static int32_t get_offset_of_shiftExtended_5() { return static_cast<int32_t>(offsetof(QuickSearch_t50949825, ___shiftExtended_5)); }
	inline Hashtable_t1510283420 * get_shiftExtended_5() const { return ___shiftExtended_5; }
	inline Hashtable_t1510283420 ** get_address_of_shiftExtended_5() { return &___shiftExtended_5; }
	inline void set_shiftExtended_5(Hashtable_t1510283420 * value)
	{
		___shiftExtended_5 = value;
		Il2CppCodeGenWriteBarrier((&___shiftExtended_5), value);
	}
};

struct QuickSearch_t50949825_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.QuickSearch::THRESHOLD
	int32_t ___THRESHOLD_6;

public:
	inline static int32_t get_offset_of_THRESHOLD_6() { return static_cast<int32_t>(offsetof(QuickSearch_t50949825_StaticFields, ___THRESHOLD_6)); }
	inline int32_t get_THRESHOLD_6() const { return ___THRESHOLD_6; }
	inline int32_t* get_address_of_THRESHOLD_6() { return &___THRESHOLD_6; }
	inline void set_THRESHOLD_6(int32_t value)
	{
		___THRESHOLD_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUICKSEARCH_T50949825_H
#ifndef EXPRESSION_T1748784529_H
#define EXPRESSION_T1748784529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Expression
struct  Expression_t1748784529  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1748784529_H
#ifndef URIPARSER_T2794153166_H
#define URIPARSER_T2794153166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_t2794153166  : public RuntimeObject
{
public:
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;

public:
	inline static int32_t get_offset_of_scheme_name_2() { return static_cast<int32_t>(offsetof(UriParser_t2794153166, ___scheme_name_2)); }
	inline String_t* get_scheme_name_2() const { return ___scheme_name_2; }
	inline String_t** get_address_of_scheme_name_2() { return &___scheme_name_2; }
	inline void set_scheme_name_2(String_t* value)
	{
		___scheme_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_name_2), value);
	}

	inline static int32_t get_offset_of_default_port_3() { return static_cast<int32_t>(offsetof(UriParser_t2794153166, ___default_port_3)); }
	inline int32_t get_default_port_3() const { return ___default_port_3; }
	inline int32_t* get_address_of_default_port_3() { return &___default_port_3; }
	inline void set_default_port_3(int32_t value)
	{
		___default_port_3 = value;
	}
};

struct UriParser_t2794153166_StaticFields
{
public:
	// System.Object System.UriParser::lock_object
	RuntimeObject * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t1510283420 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t1647239264 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t1647239264 * ___auth_regex_5;

public:
	inline static int32_t get_offset_of_lock_object_0() { return static_cast<int32_t>(offsetof(UriParser_t2794153166_StaticFields, ___lock_object_0)); }
	inline RuntimeObject * get_lock_object_0() const { return ___lock_object_0; }
	inline RuntimeObject ** get_address_of_lock_object_0() { return &___lock_object_0; }
	inline void set_lock_object_0(RuntimeObject * value)
	{
		___lock_object_0 = value;
		Il2CppCodeGenWriteBarrier((&___lock_object_0), value);
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(UriParser_t2794153166_StaticFields, ___table_1)); }
	inline Hashtable_t1510283420 * get_table_1() const { return ___table_1; }
	inline Hashtable_t1510283420 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t1510283420 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}

	inline static int32_t get_offset_of_uri_regex_4() { return static_cast<int32_t>(offsetof(UriParser_t2794153166_StaticFields, ___uri_regex_4)); }
	inline Regex_t1647239264 * get_uri_regex_4() const { return ___uri_regex_4; }
	inline Regex_t1647239264 ** get_address_of_uri_regex_4() { return &___uri_regex_4; }
	inline void set_uri_regex_4(Regex_t1647239264 * value)
	{
		___uri_regex_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_regex_4), value);
	}

	inline static int32_t get_offset_of_auth_regex_5() { return static_cast<int32_t>(offsetof(UriParser_t2794153166_StaticFields, ___auth_regex_5)); }
	inline Regex_t1647239264 * get_auth_regex_5() const { return ___auth_regex_5; }
	inline Regex_t1647239264 ** get_address_of_auth_regex_5() { return &___auth_regex_5; }
	inline void set_auth_regex_5(Regex_t1647239264 * value)
	{
		___auth_regex_5 = value;
		Il2CppCodeGenWriteBarrier((&___auth_regex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARSER_T2794153166_H
#ifndef MRULIST_T1646723449_H
#define MRULIST_T1646723449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList
struct  MRUList_t1646723449  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::head
	Node_t3952123855 * ___head_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::tail
	Node_t3952123855 * ___tail_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(MRUList_t1646723449, ___head_0)); }
	inline Node_t3952123855 * get_head_0() const { return ___head_0; }
	inline Node_t3952123855 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t3952123855 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(MRUList_t1646723449, ___tail_1)); }
	inline Node_t3952123855 * get_tail_1() const { return ___tail_1; }
	inline Node_t3952123855 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Node_t3952123855 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier((&___tail_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MRULIST_T1646723449_H
#ifndef LOCALE_T3006319314_H
#define LOCALE_T3006319314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t3006319314  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T3006319314_H
#ifndef BIGINTEGER_T3898687918_H
#define BIGINTEGER_T3898687918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t3898687918  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t2371586566* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t3898687918, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t3898687918, ___data_1)); }
	inline UInt32U5BU5D_t2371586566* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t2371586566** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t2371586566* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t3898687918_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t2371586566* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t3997509659 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t3898687918_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t2371586566* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t2371586566** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t2371586566* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t3898687918_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t3997509659 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t3997509659 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t3997509659 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T3898687918_H
#ifndef MODULUSRING_T4105162583_H
#define MODULUSRING_T4105162583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t4105162583  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t3898687918 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t3898687918 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t4105162583, ___mod_0)); }
	inline BigInteger_t3898687918 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t3898687918 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t3898687918 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t4105162583, ___constant_1)); }
	inline BigInteger_t3898687918 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t3898687918 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t3898687918 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T4105162583_H
#ifndef KERNEL_T1110812790_H
#define KERNEL_T1110812790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t1110812790  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T1110812790_H
#ifndef PRIMALITYTESTS_T215990170_H
#define PRIMALITYTESTS_T215990170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t215990170  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T215990170_H
#ifndef PRIMEGENERATORBASE_T20813722_H
#define PRIMEGENERATORBASE_T20813722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t20813722  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T20813722_H
#ifndef ASN1_T776684963_H
#define ASN1_T776684963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t776684963  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t806882901* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t1094572978 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t776684963, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t776684963, ___m_aValue_1)); }
	inline ByteU5BU5D_t806882901* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t806882901** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t806882901* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t776684963, ___elist_2)); }
	inline ArrayList_t1094572978 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t1094572978 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t1094572978 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T776684963_H
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
#ifndef COLLECTIONBASE_T1728710936_H
#define COLLECTIONBASE_T1728710936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t1728710936  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t1094572978 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t1728710936, ___list_0)); }
	inline ArrayList_t1094572978 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1094572978 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1094572978 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T1728710936_H
#ifndef TYPECONVERTER_T3986781783_H
#define TYPECONVERTER_T3986781783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t3986781783  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T3986781783_H
#ifndef URI_T375695819_H
#define URI_T375695819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t375695819  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_15;
	// System.UriParser System.Uri::parser
	UriParser_t2794153166 * ___parser_29;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_15() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___cachedHashCode_15)); }
	inline int32_t get_cachedHashCode_15() const { return ___cachedHashCode_15; }
	inline int32_t* get_address_of_cachedHashCode_15() { return &___cachedHashCode_15; }
	inline void set_cachedHashCode_15(int32_t value)
	{
		___cachedHashCode_15 = value;
	}

	inline static int32_t get_offset_of_parser_29() { return static_cast<int32_t>(offsetof(Uri_t375695819, ___parser_29)); }
	inline UriParser_t2794153166 * get_parser_29() const { return ___parser_29; }
	inline UriParser_t2794153166 ** get_address_of_parser_29() { return &___parser_29; }
	inline void set_parser_29(UriParser_t2794153166 * value)
	{
		___parser_29 = value;
		Il2CppCodeGenWriteBarrier((&___parser_29), value);
	}
};

struct Uri_t375695819_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_16;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_17;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_18;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_19;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_20;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_21;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_22;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_23;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_24;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_25;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_26;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_27;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t3656148157* ___schemes_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t1284524661 * ___U3CU3Ef__switchU24map14_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t1284524661 * ___U3CU3Ef__switchU24map15_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t1284524661 * ___U3CU3Ef__switchU24map16_32;

public:
	inline static int32_t get_offset_of_hexUpperChars_16() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___hexUpperChars_16)); }
	inline String_t* get_hexUpperChars_16() const { return ___hexUpperChars_16; }
	inline String_t** get_address_of_hexUpperChars_16() { return &___hexUpperChars_16; }
	inline void set_hexUpperChars_16(String_t* value)
	{
		___hexUpperChars_16 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_16), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_17() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___SchemeDelimiter_17)); }
	inline String_t* get_SchemeDelimiter_17() const { return ___SchemeDelimiter_17; }
	inline String_t** get_address_of_SchemeDelimiter_17() { return &___SchemeDelimiter_17; }
	inline void set_SchemeDelimiter_17(String_t* value)
	{
		___SchemeDelimiter_17 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_17), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_18() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeFile_18)); }
	inline String_t* get_UriSchemeFile_18() const { return ___UriSchemeFile_18; }
	inline String_t** get_address_of_UriSchemeFile_18() { return &___UriSchemeFile_18; }
	inline void set_UriSchemeFile_18(String_t* value)
	{
		___UriSchemeFile_18 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_19() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeFtp_19)); }
	inline String_t* get_UriSchemeFtp_19() const { return ___UriSchemeFtp_19; }
	inline String_t** get_address_of_UriSchemeFtp_19() { return &___UriSchemeFtp_19; }
	inline void set_UriSchemeFtp_19(String_t* value)
	{
		___UriSchemeFtp_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_20() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeGopher_20)); }
	inline String_t* get_UriSchemeGopher_20() const { return ___UriSchemeGopher_20; }
	inline String_t** get_address_of_UriSchemeGopher_20() { return &___UriSchemeGopher_20; }
	inline void set_UriSchemeGopher_20(String_t* value)
	{
		___UriSchemeGopher_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_21() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeHttp_21)); }
	inline String_t* get_UriSchemeHttp_21() const { return ___UriSchemeHttp_21; }
	inline String_t** get_address_of_UriSchemeHttp_21() { return &___UriSchemeHttp_21; }
	inline void set_UriSchemeHttp_21(String_t* value)
	{
		___UriSchemeHttp_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_22() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeHttps_22)); }
	inline String_t* get_UriSchemeHttps_22() const { return ___UriSchemeHttps_22; }
	inline String_t** get_address_of_UriSchemeHttps_22() { return &___UriSchemeHttps_22; }
	inline void set_UriSchemeHttps_22(String_t* value)
	{
		___UriSchemeHttps_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_23() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeMailto_23)); }
	inline String_t* get_UriSchemeMailto_23() const { return ___UriSchemeMailto_23; }
	inline String_t** get_address_of_UriSchemeMailto_23() { return &___UriSchemeMailto_23; }
	inline void set_UriSchemeMailto_23(String_t* value)
	{
		___UriSchemeMailto_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_24() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeNews_24)); }
	inline String_t* get_UriSchemeNews_24() const { return ___UriSchemeNews_24; }
	inline String_t** get_address_of_UriSchemeNews_24() { return &___UriSchemeNews_24; }
	inline void set_UriSchemeNews_24(String_t* value)
	{
		___UriSchemeNews_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_25() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeNntp_25)); }
	inline String_t* get_UriSchemeNntp_25() const { return ___UriSchemeNntp_25; }
	inline String_t** get_address_of_UriSchemeNntp_25() { return &___UriSchemeNntp_25; }
	inline void set_UriSchemeNntp_25(String_t* value)
	{
		___UriSchemeNntp_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_26() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeNetPipe_26)); }
	inline String_t* get_UriSchemeNetPipe_26() const { return ___UriSchemeNetPipe_26; }
	inline String_t** get_address_of_UriSchemeNetPipe_26() { return &___UriSchemeNetPipe_26; }
	inline void set_UriSchemeNetPipe_26(String_t* value)
	{
		___UriSchemeNetPipe_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_27() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___UriSchemeNetTcp_27)); }
	inline String_t* get_UriSchemeNetTcp_27() const { return ___UriSchemeNetTcp_27; }
	inline String_t** get_address_of_UriSchemeNetTcp_27() { return &___UriSchemeNetTcp_27; }
	inline void set_UriSchemeNetTcp_27(String_t* value)
	{
		___UriSchemeNetTcp_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_27), value);
	}

	inline static int32_t get_offset_of_schemes_28() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___schemes_28)); }
	inline UriSchemeU5BU5D_t3656148157* get_schemes_28() const { return ___schemes_28; }
	inline UriSchemeU5BU5D_t3656148157** get_address_of_schemes_28() { return &___schemes_28; }
	inline void set_schemes_28(UriSchemeU5BU5D_t3656148157* value)
	{
		___schemes_28 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_30() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___U3CU3Ef__switchU24map14_30)); }
	inline Dictionary_2_t1284524661 * get_U3CU3Ef__switchU24map14_30() const { return ___U3CU3Ef__switchU24map14_30; }
	inline Dictionary_2_t1284524661 ** get_address_of_U3CU3Ef__switchU24map14_30() { return &___U3CU3Ef__switchU24map14_30; }
	inline void set_U3CU3Ef__switchU24map14_30(Dictionary_2_t1284524661 * value)
	{
		___U3CU3Ef__switchU24map14_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_31() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___U3CU3Ef__switchU24map15_31)); }
	inline Dictionary_2_t1284524661 * get_U3CU3Ef__switchU24map15_31() const { return ___U3CU3Ef__switchU24map15_31; }
	inline Dictionary_2_t1284524661 ** get_address_of_U3CU3Ef__switchU24map15_31() { return &___U3CU3Ef__switchU24map15_31; }
	inline void set_U3CU3Ef__switchU24map15_31(Dictionary_2_t1284524661 * value)
	{
		___U3CU3Ef__switchU24map15_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_32() { return static_cast<int32_t>(offsetof(Uri_t375695819_StaticFields, ___U3CU3Ef__switchU24map16_32)); }
	inline Dictionary_2_t1284524661 * get_U3CU3Ef__switchU24map16_32() const { return ___U3CU3Ef__switchU24map16_32; }
	inline Dictionary_2_t1284524661 ** get_address_of_U3CU3Ef__switchU24map16_32() { return &___U3CU3Ef__switchU24map16_32; }
	inline void set_U3CU3Ef__switchU24map16_32(Dictionary_2_t1284524661 * value)
	{
		___U3CU3Ef__switchU24map16_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T375695819_H
#ifndef FACTORYCACHE_T1274120282_H
#define FACTORYCACHE_T1274120282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache
struct  FactoryCache_t1274120282  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t1510283420 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t1646723449 * ___mru_list_2;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(FactoryCache_t1274120282, ___capacity_0)); }
	inline int32_t get_capacity_0() const { return ___capacity_0; }
	inline int32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(int32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_factories_1() { return static_cast<int32_t>(offsetof(FactoryCache_t1274120282, ___factories_1)); }
	inline Hashtable_t1510283420 * get_factories_1() const { return ___factories_1; }
	inline Hashtable_t1510283420 ** get_address_of_factories_1() { return &___factories_1; }
	inline void set_factories_1(Hashtable_t1510283420 * value)
	{
		___factories_1 = value;
		Il2CppCodeGenWriteBarrier((&___factories_1), value);
	}

	inline static int32_t get_offset_of_mru_list_2() { return static_cast<int32_t>(offsetof(FactoryCache_t1274120282, ___mru_list_2)); }
	inline MRUList_t1646723449 * get_mru_list_2() const { return ___mru_list_2; }
	inline MRUList_t1646723449 ** get_address_of_mru_list_2() { return &___mru_list_2; }
	inline void set_mru_list_2(MRUList_t1646723449 * value)
	{
		___mru_list_2 = value;
		Il2CppCodeGenWriteBarrier((&___mru_list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTORYCACHE_T1274120282_H
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
#ifndef ASNENCODEDDATA_T489724395_H
#define ASNENCODEDDATA_T489724395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnEncodedData
struct  AsnEncodedData_t489724395  : public RuntimeObject
{
public:
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t3251093799 * ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_t806882901* ____raw_1;

public:
	inline static int32_t get_offset_of__oid_0() { return static_cast<int32_t>(offsetof(AsnEncodedData_t489724395, ____oid_0)); }
	inline Oid_t3251093799 * get__oid_0() const { return ____oid_0; }
	inline Oid_t3251093799 ** get_address_of__oid_0() { return &____oid_0; }
	inline void set__oid_0(Oid_t3251093799 * value)
	{
		____oid_0 = value;
		Il2CppCodeGenWriteBarrier((&____oid_0), value);
	}

	inline static int32_t get_offset_of__raw_1() { return static_cast<int32_t>(offsetof(AsnEncodedData_t489724395, ____raw_1)); }
	inline ByteU5BU5D_t806882901* get__raw_1() const { return ____raw_1; }
	inline ByteU5BU5D_t806882901** get_address_of__raw_1() { return &____raw_1; }
	inline void set__raw_1(ByteU5BU5D_t806882901* value)
	{
		____raw_1 = value;
		Il2CppCodeGenWriteBarrier((&____raw_1), value);
	}
};

struct AsnEncodedData_t489724395_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.AsnEncodedData::<>f__switch$mapA
	Dictionary_2_t1284524661 * ___U3CU3Ef__switchU24mapA_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_2() { return static_cast<int32_t>(offsetof(AsnEncodedData_t489724395_StaticFields, ___U3CU3Ef__switchU24mapA_2)); }
	inline Dictionary_2_t1284524661 * get_U3CU3Ef__switchU24mapA_2() const { return ___U3CU3Ef__switchU24mapA_2; }
	inline Dictionary_2_t1284524661 ** get_address_of_U3CU3Ef__switchU24mapA_2() { return &___U3CU3Ef__switchU24mapA_2; }
	inline void set_U3CU3Ef__switchU24mapA_2(Dictionary_2_t1284524661 * value)
	{
		___U3CU3Ef__switchU24mapA_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASNENCODEDDATA_T489724395_H
#ifndef BASEMACHINE_T3135197807_H
#define BASEMACHINE_T3135197807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.BaseMachine
struct  BaseMachine_t3135197807  : public RuntimeObject
{
public:
	// System.Boolean System.Text.RegularExpressions.BaseMachine::needs_groups_or_captures
	bool ___needs_groups_or_captures_0;

public:
	inline static int32_t get_offset_of_needs_groups_or_captures_0() { return static_cast<int32_t>(offsetof(BaseMachine_t3135197807, ___needs_groups_or_captures_0)); }
	inline bool get_needs_groups_or_captures_0() const { return ___needs_groups_or_captures_0; }
	inline bool* get_address_of_needs_groups_or_captures_0() { return &___needs_groups_or_captures_0; }
	inline void set_needs_groups_or_captures_0(bool value)
	{
		___needs_groups_or_captures_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMACHINE_T3135197807_H
#ifndef OIDENUMERATOR_T1095225807_H
#define OIDENUMERATOR_T1095225807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidEnumerator
struct  OidEnumerator_t1095225807  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidEnumerator::_collection
	OidCollection_t2986385545 * ____collection_0;
	// System.Int32 System.Security.Cryptography.OidEnumerator::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__collection_0() { return static_cast<int32_t>(offsetof(OidEnumerator_t1095225807, ____collection_0)); }
	inline OidCollection_t2986385545 * get__collection_0() const { return ____collection_0; }
	inline OidCollection_t2986385545 ** get_address_of__collection_0() { return &____collection_0; }
	inline void set__collection_0(OidCollection_t2986385545 * value)
	{
		____collection_0 = value;
		Il2CppCodeGenWriteBarrier((&____collection_0), value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(OidEnumerator_t1095225807, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDENUMERATOR_T1095225807_H
#ifndef OIDCOLLECTION_T2986385545_H
#define OIDCOLLECTION_T2986385545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidCollection
struct  OidCollection_t2986385545  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.OidCollection::_list
	ArrayList_t1094572978 * ____list_0;
	// System.Boolean System.Security.Cryptography.OidCollection::_readOnly
	bool ____readOnly_1;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(OidCollection_t2986385545, ____list_0)); }
	inline ArrayList_t1094572978 * get__list_0() const { return ____list_0; }
	inline ArrayList_t1094572978 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t1094572978 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}

	inline static int32_t get_offset_of__readOnly_1() { return static_cast<int32_t>(offsetof(OidCollection_t2986385545, ____readOnly_1)); }
	inline bool get__readOnly_1() const { return ____readOnly_1; }
	inline bool* get_address_of__readOnly_1() { return &____readOnly_1; }
	inline void set__readOnly_1(bool value)
	{
		____readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDCOLLECTION_T2986385545_H
#ifndef CAPTURECOLLECTION_T3484960845_H
#define CAPTURECOLLECTION_T3484960845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CaptureCollection
struct  CaptureCollection_t3484960845  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Capture[] System.Text.RegularExpressions.CaptureCollection::list
	CaptureU5BU5D_t1663793817* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CaptureCollection_t3484960845, ___list_0)); }
	inline CaptureU5BU5D_t1663793817* get_list_0() const { return ___list_0; }
	inline CaptureU5BU5D_t1663793817** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(CaptureU5BU5D_t1663793817* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURECOLLECTION_T3484960845_H
#ifndef GROUPCOLLECTION_T3674972464_H
#define GROUPCOLLECTION_T3674972464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.GroupCollection
struct  GroupCollection_t3674972464  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::list
	GroupU5BU5D_t3078962668* ___list_0;
	// System.Int32 System.Text.RegularExpressions.GroupCollection::gap
	int32_t ___gap_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(GroupCollection_t3674972464, ___list_0)); }
	inline GroupU5BU5D_t3078962668* get_list_0() const { return ___list_0; }
	inline GroupU5BU5D_t3078962668** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(GroupU5BU5D_t3078962668* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_gap_1() { return static_cast<int32_t>(offsetof(GroupCollection_t3674972464, ___gap_1)); }
	inline int32_t get_gap_1() const { return ___gap_1; }
	inline int32_t* get_address_of_gap_1() { return &___gap_1; }
	inline void set_gap_1(int32_t value)
	{
		___gap_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUPCOLLECTION_T3674972464_H
#ifndef MATCHCOLLECTION_T3960266899_H
#define MATCHCOLLECTION_T3960266899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection
struct  MatchCollection_t3960266899  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::current
	Match_t1291154093 * ___current_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::list
	ArrayList_t1094572978 * ___list_1;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(MatchCollection_t3960266899, ___current_0)); }
	inline Match_t1291154093 * get_current_0() const { return ___current_0; }
	inline Match_t1291154093 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(Match_t1291154093 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier((&___current_0), value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(MatchCollection_t3960266899, ___list_1)); }
	inline ArrayList_t1094572978 * get_list_1() const { return ___list_1; }
	inline ArrayList_t1094572978 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t1094572978 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHCOLLECTION_T3960266899_H
#ifndef CAPTURE_T400824136_H
#define CAPTURE_T400824136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct  Capture_t400824136  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Capture::index
	int32_t ___index_0;
	// System.Int32 System.Text.RegularExpressions.Capture::length
	int32_t ___length_1;
	// System.String System.Text.RegularExpressions.Capture::text
	String_t* ___text_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Capture_t400824136, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(Capture_t400824136, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Capture_t400824136, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((&___text_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURE_T400824136_H
#ifndef X509EXTENSIONENUMERATOR_T2428179183_H
#define X509EXTENSIONENUMERATOR_T2428179183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct  X509ExtensionEnumerator_t2428179183  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509ExtensionEnumerator_t2428179183, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONENUMERATOR_T2428179183_H
#ifndef OID_T3251093799_H
#define OID_T3251093799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Oid
struct  Oid_t3251093799  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Oid::_value
	String_t* ____value_0;
	// System.String System.Security.Cryptography.Oid::_name
	String_t* ____name_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(Oid_t3251093799, ____value_0)); }
	inline String_t* get__value_0() const { return ____value_0; }
	inline String_t** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(String_t* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}

	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(Oid_t3251093799, ____name_1)); }
	inline String_t* get__name_1() const { return ____name_1; }
	inline String_t** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(String_t* value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier((&____name_1), value);
	}
};

struct Oid_t3251093799_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Oid::<>f__switch$map10
	Dictionary_2_t1284524661 * ___U3CU3Ef__switchU24map10_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_2() { return static_cast<int32_t>(offsetof(Oid_t3251093799_StaticFields, ___U3CU3Ef__switchU24map10_2)); }
	inline Dictionary_2_t1284524661 * get_U3CU3Ef__switchU24map10_2() const { return ___U3CU3Ef__switchU24map10_2; }
	inline Dictionary_2_t1284524661 ** get_address_of_U3CU3Ef__switchU24map10_2() { return &___U3CU3Ef__switchU24map10_2; }
	inline void set_U3CU3Ef__switchU24map10_2(Dictionary_2_t1284524661 * value)
	{
		___U3CU3Ef__switchU24map10_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T3251093799_H
#ifndef ENUMERATOR_T3203345625_H
#define ENUMERATOR_T3203345625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection/Enumerator
struct  Enumerator_t3203345625  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection/Enumerator::index
	int32_t ___index_0;
	// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.MatchCollection/Enumerator::coll
	MatchCollection_t3960266899 * ___coll_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Enumerator_t3203345625, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_coll_1() { return static_cast<int32_t>(offsetof(Enumerator_t3203345625, ___coll_1)); }
	inline MatchCollection_t3960266899 * get_coll_1() const { return ___coll_1; }
	inline MatchCollection_t3960266899 ** get_address_of_coll_1() { return &___coll_1; }
	inline void set_coll_1(MatchCollection_t3960266899 * value)
	{
		___coll_1 = value;
		Il2CppCodeGenWriteBarrier((&___coll_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3203345625_H
#ifndef URITYPECONVERTER_T3414225847_H
#define URITYPECONVERTER_T3414225847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriTypeConverter
struct  UriTypeConverter_t3414225847  : public TypeConverter_t3986781783
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URITYPECONVERTER_T3414225847_H
#ifndef DEFAULTURIPARSER_T2318079743_H
#define DEFAULTURIPARSER_T2318079743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultUriParser
struct  DefaultUriParser_t2318079743  : public UriParser_t2794153166
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTURIPARSER_T2318079743_H
#ifndef REFERENCE_T3154439687_H
#define REFERENCE_T3154439687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Reference
struct  Reference_t3154439687  : public Expression_t1748784529
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_t2155871962 * ___group_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(Reference_t3154439687, ___group_0)); }
	inline CapturingGroup_t2155871962 * get_group_0() const { return ___group_0; }
	inline CapturingGroup_t2155871962 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(CapturingGroup_t2155871962 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Reference_t3154439687, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCE_T3154439687_H
#ifndef U24ARRAYTYPEU2412_T3923520614_H
#define U24ARRAYTYPEU2412_T3923520614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t3923520614 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t3923520614__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T3923520614_H
#ifndef LITERAL_T3516984091_H
#define LITERAL_T3516984091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Literal
struct  Literal_t3516984091  : public Expression_t1748784529
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Literal::str
	String_t* ___str_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Literal::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(Literal_t3516984091, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Literal_t3516984091, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LITERAL_T3516984091_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T2321262059_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T2321262059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t2321262059  : public PrimeGeneratorBase_t20813722
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T2321262059_H
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
#ifndef GENERICURIPARSER_T472507197_H
#define GENERICURIPARSER_T472507197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GenericUriParser
struct  GenericUriParser_t472507197  : public UriParser_t2794153166
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICURIPARSER_T472507197_H
#ifndef URISCHEME_T3833939188_H
#define URISCHEME_T3833939188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriScheme
struct  UriScheme_t3833939188 
{
public:
	// System.String System.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t3833939188, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t3833939188, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t3833939188, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_t3833939188_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_t3833939188_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T3833939188_H
#ifndef U24ARRAYTYPEU24128_T1281744251_H
#define U24ARRAYTYPEU24128_T1281744251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t1281744251 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t1281744251__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T1281744251_H
#ifndef EXPRESSIONCOLLECTION_T3070857164_H
#define EXPRESSIONCOLLECTION_T3070857164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct  ExpressionCollection_t3070857164  : public CollectionBase_t1728710936
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONCOLLECTION_T3070857164_H
#ifndef INTERVAL_T1671137851_H
#define INTERVAL_T1671137851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interval
struct  Interval_t1671137851 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interval::low
	int32_t ___low_0;
	// System.Int32 System.Text.RegularExpressions.Interval::high
	int32_t ___high_1;
	// System.Boolean System.Text.RegularExpressions.Interval::contiguous
	bool ___contiguous_2;

public:
	inline static int32_t get_offset_of_low_0() { return static_cast<int32_t>(offsetof(Interval_t1671137851, ___low_0)); }
	inline int32_t get_low_0() const { return ___low_0; }
	inline int32_t* get_address_of_low_0() { return &___low_0; }
	inline void set_low_0(int32_t value)
	{
		___low_0 = value;
	}

	inline static int32_t get_offset_of_high_1() { return static_cast<int32_t>(offsetof(Interval_t1671137851, ___high_1)); }
	inline int32_t get_high_1() const { return ___high_1; }
	inline int32_t* get_address_of_high_1() { return &___high_1; }
	inline void set_high_1(int32_t value)
	{
		___high_1 = value;
	}

	inline static int32_t get_offset_of_contiguous_2() { return static_cast<int32_t>(offsetof(Interval_t1671137851, ___contiguous_2)); }
	inline bool get_contiguous_2() const { return ___contiguous_2; }
	inline bool* get_address_of_contiguous_2() { return &___contiguous_2; }
	inline void set_contiguous_2(bool value)
	{
		___contiguous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interval
struct Interval_t1671137851_marshaled_pinvoke
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interval
struct Interval_t1671137851_marshaled_com
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
#endif // INTERVAL_T1671137851_H
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
#ifndef LINK_T2639220742_H
#define LINK_T2639220742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
struct  Link_t2639220742 
{
public:
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::base_addr
	int32_t ___base_addr_0;
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::offset_addr
	int32_t ___offset_addr_1;

public:
	inline static int32_t get_offset_of_base_addr_0() { return static_cast<int32_t>(offsetof(Link_t2639220742, ___base_addr_0)); }
	inline int32_t get_base_addr_0() const { return ___base_addr_0; }
	inline int32_t* get_address_of_base_addr_0() { return &___base_addr_0; }
	inline void set_base_addr_0(int32_t value)
	{
		___base_addr_0 = value;
	}

	inline static int32_t get_offset_of_offset_addr_1() { return static_cast<int32_t>(offsetof(Link_t2639220742, ___offset_addr_1)); }
	inline int32_t get_offset_addr_1() const { return ___offset_addr_1; }
	inline int32_t* get_address_of_offset_addr_1() { return &___offset_addr_1; }
	inline void set_offset_addr_1(int32_t value)
	{
		___offset_addr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T2639220742_H
#ifndef LINKSTACK_T3836566106_H
#define LINKSTACK_T3836566106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkStack
struct  LinkStack_t3836566106  : public LinkRef_t2968480225
{
public:
	// System.Collections.Stack System.Text.RegularExpressions.LinkStack::stack
	Stack_t593878580 * ___stack_0;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(LinkStack_t3836566106, ___stack_0)); }
	inline Stack_t593878580 * get_stack_0() const { return ___stack_0; }
	inline Stack_t593878580 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_t593878580 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___stack_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKSTACK_T3836566106_H
#ifndef MARK_T1806384555_H
#define MARK_T1806384555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Mark
struct  Mark_t1806384555 
{
public:
	// System.Int32 System.Text.RegularExpressions.Mark::Start
	int32_t ___Start_0;
	// System.Int32 System.Text.RegularExpressions.Mark::End
	int32_t ___End_1;
	// System.Int32 System.Text.RegularExpressions.Mark::Previous
	int32_t ___Previous_2;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(Mark_t1806384555, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(Mark_t1806384555, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Previous_2() { return static_cast<int32_t>(offsetof(Mark_t1806384555, ___Previous_2)); }
	inline int32_t get_Previous_2() const { return ___Previous_2; }
	inline int32_t* get_address_of_Previous_2() { return &___Previous_2; }
	inline void set_Previous_2(int32_t value)
	{
		___Previous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARK_T1806384555_H
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
#ifndef COMPOSITEEXPRESSION_T3319034383_H
#define COMPOSITEEXPRESSION_T3319034383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct  CompositeExpression_t3319034383  : public Expression_t1748784529
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::expressions
	ExpressionCollection_t3070857164 * ___expressions_0;

public:
	inline static int32_t get_offset_of_expressions_0() { return static_cast<int32_t>(offsetof(CompositeExpression_t3319034383, ___expressions_0)); }
	inline ExpressionCollection_t3070857164 * get_expressions_0() const { return ___expressions_0; }
	inline ExpressionCollection_t3070857164 ** get_address_of_expressions_0() { return &___expressions_0; }
	inline void set_expressions_0(ExpressionCollection_t3070857164 * value)
	{
		___expressions_0 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITEEXPRESSION_T3319034383_H
#ifndef GROUP_T2014041649_H
#define GROUP_T2014041649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_t2014041649  : public Capture_t400824136
{
public:
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t3484960845 * ___captures_5;

public:
	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(Group_t2014041649, ___success_4)); }
	inline bool get_success_4() const { return ___success_4; }
	inline bool* get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(bool value)
	{
		___success_4 = value;
	}

	inline static int32_t get_offset_of_captures_5() { return static_cast<int32_t>(offsetof(Group_t2014041649, ___captures_5)); }
	inline CaptureCollection_t3484960845 * get_captures_5() const { return ___captures_5; }
	inline CaptureCollection_t3484960845 ** get_address_of_captures_5() { return &___captures_5; }
	inline void set_captures_5(CaptureCollection_t3484960845 * value)
	{
		___captures_5 = value;
		Il2CppCodeGenWriteBarrier((&___captures_5), value);
	}
};

struct Group_t2014041649_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t2014041649 * ___Fail_3;

public:
	inline static int32_t get_offset_of_Fail_3() { return static_cast<int32_t>(offsetof(Group_t2014041649_StaticFields, ___Fail_3)); }
	inline Group_t2014041649 * get_Fail_3() const { return ___Fail_3; }
	inline Group_t2014041649 ** get_address_of_Fail_3() { return &___Fail_3; }
	inline void set_Fail_3(Group_t2014041649 * value)
	{
		___Fail_3 = value;
		Il2CppCodeGenWriteBarrier((&___Fail_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T2014041649_H
#ifndef X509EXTENSION_T4194795987_H
#define X509EXTENSION_T4194795987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Extension
struct  X509Extension_t4194795987  : public AsnEncodedData_t489724395
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_3;

public:
	inline static int32_t get_offset_of__critical_3() { return static_cast<int32_t>(offsetof(X509Extension_t4194795987, ____critical_3)); }
	inline bool get__critical_3() const { return ____critical_3; }
	inline bool* get_address_of__critical_3() { return &____critical_3; }
	inline void set__critical_3(bool value)
	{
		____critical_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T4194795987_H
#ifndef INTSTACK_T2907159516_H
#define INTSTACK_T2907159516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/IntStack
struct  IntStack_t2907159516 
{
public:
	// System.Int32[] System.Text.RegularExpressions.Interpreter/IntStack::values
	Int32U5BU5D_t2152905300* ___values_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(IntStack_t2907159516, ___values_0)); }
	inline Int32U5BU5D_t2152905300* get_values_0() const { return ___values_0; }
	inline Int32U5BU5D_t2152905300** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(Int32U5BU5D_t2152905300* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(IntStack_t2907159516, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t2907159516_marshaled_pinvoke
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t2907159516_marshaled_com
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
#endif // INTSTACK_T2907159516_H
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
#ifndef SSLPOLICYERRORS_T2106566193_H
#define SSLPOLICYERRORS_T2106566193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2106566193 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2106566193, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T2106566193_H
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
#ifndef X509FINDTYPE_T4195191046_H
#define X509FINDTYPE_T4195191046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509FindType
struct  X509FindType_t4195191046 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509FindType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509FindType_t4195191046, ___value___1)); }
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
#endif // X509FINDTYPE_T4195191046_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3050736961_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3050736961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3050736961  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3050736961_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24128_t1281744251  ___U24U24fieldU2D2_0;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2412_t3923520614  ___U24U24fieldU2D3_1;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2412_t3923520614  ___U24U24fieldU2D4_2;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D2_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3050736961_StaticFields, ___U24U24fieldU2D2_0)); }
	inline U24ArrayTypeU24128_t1281744251  get_U24U24fieldU2D2_0() const { return ___U24U24fieldU2D2_0; }
	inline U24ArrayTypeU24128_t1281744251 * get_address_of_U24U24fieldU2D2_0() { return &___U24U24fieldU2D2_0; }
	inline void set_U24U24fieldU2D2_0(U24ArrayTypeU24128_t1281744251  value)
	{
		___U24U24fieldU2D2_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3050736961_StaticFields, ___U24U24fieldU2D3_1)); }
	inline U24ArrayTypeU2412_t3923520614  get_U24U24fieldU2D3_1() const { return ___U24U24fieldU2D3_1; }
	inline U24ArrayTypeU2412_t3923520614 * get_address_of_U24U24fieldU2D3_1() { return &___U24U24fieldU2D3_1; }
	inline void set_U24U24fieldU2D3_1(U24ArrayTypeU2412_t3923520614  value)
	{
		___U24U24fieldU2D3_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3050736961_StaticFields, ___U24U24fieldU2D4_2)); }
	inline U24ArrayTypeU2412_t3923520614  get_U24U24fieldU2D4_2() const { return ___U24U24fieldU2D4_2; }
	inline U24ArrayTypeU2412_t3923520614 * get_address_of_U24U24fieldU2D4_2() { return &___U24U24fieldU2D4_2; }
	inline void set_U24U24fieldU2D4_2(U24ArrayTypeU2412_t3923520614  value)
	{
		___U24U24fieldU2D4_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3050736961_H
#ifndef OPENFLAGS_T1810461225_H
#define OPENFLAGS_T1810461225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.OpenFlags
struct  OpenFlags_t1810461225 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.OpenFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpenFlags_t1810461225, ___value___1)); }
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
#endif // OPENFLAGS_T1810461225_H
#ifndef URIPARTIAL_T3003200482_H
#define URIPARTIAL_T3003200482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriPartial
struct  UriPartial_t3003200482 
{
public:
	// System.Int32 System.UriPartial::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriPartial_t3003200482, ___value___1)); }
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
#endif // URIPARTIAL_T3003200482_H
#ifndef STORELOCATION_T2625124543_H
#define STORELOCATION_T2625124543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreLocation
struct  StoreLocation_t2625124543 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StoreLocation_t2625124543, ___value___1)); }
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
#endif // STORELOCATION_T2625124543_H
#ifndef ASNDECODESTATUS_T1433064244_H
#define ASNDECODESTATUS_T1433064244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnDecodeStatus
struct  AsnDecodeStatus_t1433064244 
{
public:
	// System.Int32 System.Security.Cryptography.AsnDecodeStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AsnDecodeStatus_t1433064244, ___value___1)); }
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
#endif // ASNDECODESTATUS_T1433064244_H
#ifndef X509KEYUSAGEFLAGS_T2897705539_H
#define X509KEYUSAGEFLAGS_T2897705539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
struct  X509KeyUsageFlags_t2897705539 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyUsageFlags_t2897705539, ___value___1)); }
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
#endif // X509KEYUSAGEFLAGS_T2897705539_H
#ifndef X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T3478425256_H
#define X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T3478425256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
struct  X509SubjectKeyIdentifierHashAlgorithm_t3478425256 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierHashAlgorithm_t3478425256, ___value___1)); }
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
#endif // X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T3478425256_H
#ifndef SIGN_T3426657340_H
#define SIGN_T3426657340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t3426657340 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t3426657340, ___value___1)); }
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
#endif // SIGN_T3426657340_H
#ifndef CONFIDENCEFACTOR_T3452046927_H
#define CONFIDENCEFACTOR_T3452046927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t3452046927 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t3452046927, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T3452046927_H
#ifndef X509REVOCATIONMODE_T383538234_H
#define X509REVOCATIONMODE_T383538234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationMode
struct  X509RevocationMode_t383538234 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509RevocationMode_t383538234, ___value___1)); }
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
#endif // X509REVOCATIONMODE_T383538234_H
#ifndef X509REVOCATIONFLAG_T369577134_H
#define X509REVOCATIONFLAG_T369577134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationFlag
struct  X509RevocationFlag_t369577134 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509RevocationFlag_t369577134, ___value___1)); }
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
#endif // X509REVOCATIONFLAG_T369577134_H
#ifndef X509NAMETYPE_T3103341634_H
#define X509NAMETYPE_T3103341634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509NameType
struct  X509NameType_t3103341634 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509NameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509NameType_t3103341634, ___value___1)); }
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
#endif // X509NAMETYPE_T3103341634_H
#ifndef X509VERIFICATIONFLAGS_T2188179892_H
#define X509VERIFICATIONFLAGS_T2188179892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509VerificationFlags
struct  X509VerificationFlags_t2188179892 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509VerificationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509VerificationFlags_t2188179892, ___value___1)); }
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
#endif // X509VERIFICATIONFLAGS_T2188179892_H
#ifndef CHARACTERCLASS_T3392876538_H
#define CHARACTERCLASS_T3392876538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t3392876538  : public Expression_t1748784529
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_2;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t84217222 * ___pos_cats_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t84217222 * ___neg_cats_4;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t1300391255 * ___intervals_5;

public:
	inline static int32_t get_offset_of_negate_1() { return static_cast<int32_t>(offsetof(CharacterClass_t3392876538, ___negate_1)); }
	inline bool get_negate_1() const { return ___negate_1; }
	inline bool* get_address_of_negate_1() { return &___negate_1; }
	inline void set_negate_1(bool value)
	{
		___negate_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(CharacterClass_t3392876538, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_pos_cats_3() { return static_cast<int32_t>(offsetof(CharacterClass_t3392876538, ___pos_cats_3)); }
	inline BitArray_t84217222 * get_pos_cats_3() const { return ___pos_cats_3; }
	inline BitArray_t84217222 ** get_address_of_pos_cats_3() { return &___pos_cats_3; }
	inline void set_pos_cats_3(BitArray_t84217222 * value)
	{
		___pos_cats_3 = value;
		Il2CppCodeGenWriteBarrier((&___pos_cats_3), value);
	}

	inline static int32_t get_offset_of_neg_cats_4() { return static_cast<int32_t>(offsetof(CharacterClass_t3392876538, ___neg_cats_4)); }
	inline BitArray_t84217222 * get_neg_cats_4() const { return ___neg_cats_4; }
	inline BitArray_t84217222 ** get_address_of_neg_cats_4() { return &___neg_cats_4; }
	inline void set_neg_cats_4(BitArray_t84217222 * value)
	{
		___neg_cats_4 = value;
		Il2CppCodeGenWriteBarrier((&___neg_cats_4), value);
	}

	inline static int32_t get_offset_of_intervals_5() { return static_cast<int32_t>(offsetof(CharacterClass_t3392876538, ___intervals_5)); }
	inline IntervalCollection_t1300391255 * get_intervals_5() const { return ___intervals_5; }
	inline IntervalCollection_t1300391255 ** get_address_of_intervals_5() { return &___intervals_5; }
	inline void set_intervals_5(IntervalCollection_t1300391255 * value)
	{
		___intervals_5 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_5), value);
	}
};

struct CharacterClass_t3392876538_StaticFields
{
public:
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t1671137851  ___upper_case_characters_0;

public:
	inline static int32_t get_offset_of_upper_case_characters_0() { return static_cast<int32_t>(offsetof(CharacterClass_t3392876538_StaticFields, ___upper_case_characters_0)); }
	inline Interval_t1671137851  get_upper_case_characters_0() const { return ___upper_case_characters_0; }
	inline Interval_t1671137851 * get_address_of_upper_case_characters_0() { return &___upper_case_characters_0; }
	inline void set_upper_case_characters_0(Interval_t1671137851  value)
	{
		___upper_case_characters_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCLASS_T3392876538_H
#ifndef URIHOSTNAMETYPE_T3415614228_H
#define URIHOSTNAMETYPE_T3415614228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHostNameType
struct  UriHostNameType_t3415614228 
{
public:
	// System.Int32 System.UriHostNameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriHostNameType_t3415614228, ___value___1)); }
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
#endif // URIHOSTNAMETYPE_T3415614228_H
#ifndef OPCODE_T2684731588_H
#define OPCODE_T2684731588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.OpCode
struct  OpCode_t2684731588 
{
public:
	// System.UInt16 System.Text.RegularExpressions.OpCode::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCode_t2684731588, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T2684731588_H
#ifndef REGEXOPTIONS_T2167637736_H
#define REGEXOPTIONS_T2167637736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t2167637736 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t2167637736, ___value___1)); }
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
#endif // REGEXOPTIONS_T2167637736_H
#ifndef CATEGORY_T2070707855_H
#define CATEGORY_T2070707855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Category
struct  Category_t2070707855 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Category::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Category_t2070707855, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORY_T2070707855_H
#ifndef MATCH_T1291154093_H
#define MATCH_T1291154093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_t1291154093  : public Group_t2014041649
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t1647239264 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	RuntimeObject* ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t3674972464 * ___groups_9;

public:
	inline static int32_t get_offset_of_regex_6() { return static_cast<int32_t>(offsetof(Match_t1291154093, ___regex_6)); }
	inline Regex_t1647239264 * get_regex_6() const { return ___regex_6; }
	inline Regex_t1647239264 ** get_address_of_regex_6() { return &___regex_6; }
	inline void set_regex_6(Regex_t1647239264 * value)
	{
		___regex_6 = value;
		Il2CppCodeGenWriteBarrier((&___regex_6), value);
	}

	inline static int32_t get_offset_of_machine_7() { return static_cast<int32_t>(offsetof(Match_t1291154093, ___machine_7)); }
	inline RuntimeObject* get_machine_7() const { return ___machine_7; }
	inline RuntimeObject** get_address_of_machine_7() { return &___machine_7; }
	inline void set_machine_7(RuntimeObject* value)
	{
		___machine_7 = value;
		Il2CppCodeGenWriteBarrier((&___machine_7), value);
	}

	inline static int32_t get_offset_of_text_length_8() { return static_cast<int32_t>(offsetof(Match_t1291154093, ___text_length_8)); }
	inline int32_t get_text_length_8() const { return ___text_length_8; }
	inline int32_t* get_address_of_text_length_8() { return &___text_length_8; }
	inline void set_text_length_8(int32_t value)
	{
		___text_length_8 = value;
	}

	inline static int32_t get_offset_of_groups_9() { return static_cast<int32_t>(offsetof(Match_t1291154093, ___groups_9)); }
	inline GroupCollection_t3674972464 * get_groups_9() const { return ___groups_9; }
	inline GroupCollection_t3674972464 ** get_address_of_groups_9() { return &___groups_9; }
	inline void set_groups_9(GroupCollection_t3674972464 * value)
	{
		___groups_9 = value;
		Il2CppCodeGenWriteBarrier((&___groups_9), value);
	}
};

struct Match_t1291154093_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t1291154093 * ___empty_10;

public:
	inline static int32_t get_offset_of_empty_10() { return static_cast<int32_t>(offsetof(Match_t1291154093_StaticFields, ___empty_10)); }
	inline Match_t1291154093 * get_empty_10() const { return ___empty_10; }
	inline Match_t1291154093 ** get_address_of_empty_10() { return &___empty_10; }
	inline void set_empty_10(Match_t1291154093 * value)
	{
		___empty_10 = value;
		Il2CppCodeGenWriteBarrier((&___empty_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T1291154093_H
#ifndef PATTERNLINKSTACK_T641442069_H
#define PATTERNLINKSTACK_T641442069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
struct  PatternLinkStack_t641442069  : public LinkStack_t3836566106
{
public:
	// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::link
	Link_t2639220742  ___link_1;

public:
	inline static int32_t get_offset_of_link_1() { return static_cast<int32_t>(offsetof(PatternLinkStack_t641442069, ___link_1)); }
	inline Link_t2639220742  get_link_1() const { return ___link_1; }
	inline Link_t2639220742 * get_address_of_link_1() { return &___link_1; }
	inline void set_link_1(Link_t2639220742  value)
	{
		___link_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNLINKSTACK_T641442069_H
#ifndef INTERPRETER_T700753131_H
#define INTERPRETER_T700753131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter
struct  Interpreter_t700753131  : public BaseMachine_t3135197807
{
public:
	// System.UInt16[] System.Text.RegularExpressions.Interpreter::program
	UInt16U5BU5D_t2204977147* ___program_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter::program_start
	int32_t ___program_start_2;
	// System.String System.Text.RegularExpressions.Interpreter::text
	String_t* ___text_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter::text_end
	int32_t ___text_end_4;
	// System.Int32 System.Text.RegularExpressions.Interpreter::group_count
	int32_t ___group_count_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter::match_min
	int32_t ___match_min_6;
	// System.Text.RegularExpressions.QuickSearch System.Text.RegularExpressions.Interpreter::qs
	QuickSearch_t50949825 * ___qs_7;
	// System.Int32 System.Text.RegularExpressions.Interpreter::scan_ptr
	int32_t ___scan_ptr_8;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::repeat
	RepeatContext_t251824079 * ___repeat_9;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::fast
	RepeatContext_t251824079 * ___fast_10;
	// System.Text.RegularExpressions.Interpreter/IntStack System.Text.RegularExpressions.Interpreter::stack
	IntStack_t2907159516  ___stack_11;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::deep
	RepeatContext_t251824079 * ___deep_12;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.Interpreter::marks
	MarkU5BU5D_t1703016266* ___marks_13;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_start
	int32_t ___mark_start_14;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_end
	int32_t ___mark_end_15;
	// System.Int32[] System.Text.RegularExpressions.Interpreter::groups
	Int32U5BU5D_t2152905300* ___groups_16;

public:
	inline static int32_t get_offset_of_program_1() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___program_1)); }
	inline UInt16U5BU5D_t2204977147* get_program_1() const { return ___program_1; }
	inline UInt16U5BU5D_t2204977147** get_address_of_program_1() { return &___program_1; }
	inline void set_program_1(UInt16U5BU5D_t2204977147* value)
	{
		___program_1 = value;
		Il2CppCodeGenWriteBarrier((&___program_1), value);
	}

	inline static int32_t get_offset_of_program_start_2() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___program_start_2)); }
	inline int32_t get_program_start_2() const { return ___program_start_2; }
	inline int32_t* get_address_of_program_start_2() { return &___program_start_2; }
	inline void set_program_start_2(int32_t value)
	{
		___program_start_2 = value;
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((&___text_3), value);
	}

	inline static int32_t get_offset_of_text_end_4() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___text_end_4)); }
	inline int32_t get_text_end_4() const { return ___text_end_4; }
	inline int32_t* get_address_of_text_end_4() { return &___text_end_4; }
	inline void set_text_end_4(int32_t value)
	{
		___text_end_4 = value;
	}

	inline static int32_t get_offset_of_group_count_5() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___group_count_5)); }
	inline int32_t get_group_count_5() const { return ___group_count_5; }
	inline int32_t* get_address_of_group_count_5() { return &___group_count_5; }
	inline void set_group_count_5(int32_t value)
	{
		___group_count_5 = value;
	}

	inline static int32_t get_offset_of_match_min_6() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___match_min_6)); }
	inline int32_t get_match_min_6() const { return ___match_min_6; }
	inline int32_t* get_address_of_match_min_6() { return &___match_min_6; }
	inline void set_match_min_6(int32_t value)
	{
		___match_min_6 = value;
	}

	inline static int32_t get_offset_of_qs_7() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___qs_7)); }
	inline QuickSearch_t50949825 * get_qs_7() const { return ___qs_7; }
	inline QuickSearch_t50949825 ** get_address_of_qs_7() { return &___qs_7; }
	inline void set_qs_7(QuickSearch_t50949825 * value)
	{
		___qs_7 = value;
		Il2CppCodeGenWriteBarrier((&___qs_7), value);
	}

	inline static int32_t get_offset_of_scan_ptr_8() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___scan_ptr_8)); }
	inline int32_t get_scan_ptr_8() const { return ___scan_ptr_8; }
	inline int32_t* get_address_of_scan_ptr_8() { return &___scan_ptr_8; }
	inline void set_scan_ptr_8(int32_t value)
	{
		___scan_ptr_8 = value;
	}

	inline static int32_t get_offset_of_repeat_9() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___repeat_9)); }
	inline RepeatContext_t251824079 * get_repeat_9() const { return ___repeat_9; }
	inline RepeatContext_t251824079 ** get_address_of_repeat_9() { return &___repeat_9; }
	inline void set_repeat_9(RepeatContext_t251824079 * value)
	{
		___repeat_9 = value;
		Il2CppCodeGenWriteBarrier((&___repeat_9), value);
	}

	inline static int32_t get_offset_of_fast_10() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___fast_10)); }
	inline RepeatContext_t251824079 * get_fast_10() const { return ___fast_10; }
	inline RepeatContext_t251824079 ** get_address_of_fast_10() { return &___fast_10; }
	inline void set_fast_10(RepeatContext_t251824079 * value)
	{
		___fast_10 = value;
		Il2CppCodeGenWriteBarrier((&___fast_10), value);
	}

	inline static int32_t get_offset_of_stack_11() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___stack_11)); }
	inline IntStack_t2907159516  get_stack_11() const { return ___stack_11; }
	inline IntStack_t2907159516 * get_address_of_stack_11() { return &___stack_11; }
	inline void set_stack_11(IntStack_t2907159516  value)
	{
		___stack_11 = value;
	}

	inline static int32_t get_offset_of_deep_12() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___deep_12)); }
	inline RepeatContext_t251824079 * get_deep_12() const { return ___deep_12; }
	inline RepeatContext_t251824079 ** get_address_of_deep_12() { return &___deep_12; }
	inline void set_deep_12(RepeatContext_t251824079 * value)
	{
		___deep_12 = value;
		Il2CppCodeGenWriteBarrier((&___deep_12), value);
	}

	inline static int32_t get_offset_of_marks_13() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___marks_13)); }
	inline MarkU5BU5D_t1703016266* get_marks_13() const { return ___marks_13; }
	inline MarkU5BU5D_t1703016266** get_address_of_marks_13() { return &___marks_13; }
	inline void set_marks_13(MarkU5BU5D_t1703016266* value)
	{
		___marks_13 = value;
		Il2CppCodeGenWriteBarrier((&___marks_13), value);
	}

	inline static int32_t get_offset_of_mark_start_14() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___mark_start_14)); }
	inline int32_t get_mark_start_14() const { return ___mark_start_14; }
	inline int32_t* get_address_of_mark_start_14() { return &___mark_start_14; }
	inline void set_mark_start_14(int32_t value)
	{
		___mark_start_14 = value;
	}

	inline static int32_t get_offset_of_mark_end_15() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___mark_end_15)); }
	inline int32_t get_mark_end_15() const { return ___mark_end_15; }
	inline int32_t* get_address_of_mark_end_15() { return &___mark_end_15; }
	inline void set_mark_end_15(int32_t value)
	{
		___mark_end_15 = value;
	}

	inline static int32_t get_offset_of_groups_16() { return static_cast<int32_t>(offsetof(Interpreter_t700753131, ___groups_16)); }
	inline Int32U5BU5D_t2152905300* get_groups_16() const { return ___groups_16; }
	inline Int32U5BU5D_t2152905300** get_address_of_groups_16() { return &___groups_16; }
	inline void set_groups_16(Int32U5BU5D_t2152905300* value)
	{
		___groups_16 = value;
		Il2CppCodeGenWriteBarrier((&___groups_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETER_T700753131_H
#ifndef MODE_T3102573554_H
#define MODE_T3102573554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/Mode
struct  Mode_t3102573554 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t3102573554, ___value___1)); }
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
#endif // MODE_T3102573554_H
#ifndef GROUP_T2626406225_H
#define GROUP_T2626406225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Group
struct  Group_t2626406225  : public CompositeExpression_t3319034383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T2626406225_H
#ifndef URIKIND_T1540933907_H
#define URIKIND_T1540933907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t1540933907 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t1540933907, ___value___1)); }
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
#endif // URIKIND_T1540933907_H
#ifndef REPETITION_T3121433016_H
#define REPETITION_T3121433016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Repetition
struct  Repetition_t3121433016  : public CompositeExpression_t3319034383
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.Repetition::lazy
	bool ___lazy_3;

public:
	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(Repetition_t3121433016, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(Repetition_t3121433016, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(Repetition_t3121433016, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPETITION_T3121433016_H
#ifndef POSITION_T476769265_H
#define POSITION_T476769265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Position
struct  Position_t476769265 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Position::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Position_t476769265, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T476769265_H
#ifndef BACKSLASHNUMBER_T473344428_H
#define BACKSLASHNUMBER_T473344428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct  BackslashNumber_t473344428  : public Reference_t3154439687
{
public:
	// System.String System.Text.RegularExpressions.Syntax.BackslashNumber::literal
	String_t* ___literal_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ecma
	bool ___ecma_3;

public:
	inline static int32_t get_offset_of_literal_2() { return static_cast<int32_t>(offsetof(BackslashNumber_t473344428, ___literal_2)); }
	inline String_t* get_literal_2() const { return ___literal_2; }
	inline String_t** get_address_of_literal_2() { return &___literal_2; }
	inline void set_literal_2(String_t* value)
	{
		___literal_2 = value;
		Il2CppCodeGenWriteBarrier((&___literal_2), value);
	}

	inline static int32_t get_offset_of_ecma_3() { return static_cast<int32_t>(offsetof(BackslashNumber_t473344428, ___ecma_3)); }
	inline bool get_ecma_3() const { return ___ecma_3; }
	inline bool* get_address_of_ecma_3() { return &___ecma_3; }
	inline void set_ecma_3(bool value)
	{
		___ecma_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKSLASHNUMBER_T473344428_H
#ifndef ASSERTION_T3667476890_H
#define ASSERTION_T3667476890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Assertion
struct  Assertion_t3667476890  : public CompositeExpression_t3319034383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTION_T3667476890_H
#ifndef OPFLAGS_T2647777195_H
#define OPFLAGS_T2647777195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.OpFlags
struct  OpFlags_t2647777195 
{
public:
	// System.UInt16 System.Text.RegularExpressions.OpFlags::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpFlags_t2647777195, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPFLAGS_T2647777195_H
#ifndef ALTERNATION_T1468148132_H
#define ALTERNATION_T1468148132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Alternation
struct  Alternation_t1468148132  : public CompositeExpression_t3319034383
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALTERNATION_T1468148132_H
#ifndef URIFORMATEXCEPTION_T1938134364_H
#define URIFORMATEXCEPTION_T1938134364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormatException
struct  UriFormatException_t1938134364  : public FormatException_t681632938
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIFORMATEXCEPTION_T1938134364_H
#ifndef KEY_T635553929_H
#define KEY_T635553929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache/Key
struct  Key_t635553929  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.FactoryCache/Key::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.FactoryCache/Key::options
	int32_t ___options_1;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Key_t635553929, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(Key_t635553929, ___options_1)); }
	inline int32_t get_options_1() const { return ___options_1; }
	inline int32_t* get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(int32_t value)
	{
		___options_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T635553929_H
#ifndef ANCHORINFO_T3295506375_H
#define ANCHORINFO_T3295506375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct  AnchorInfo_t3295506375  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.AnchorInfo::expr
	Expression_t1748784529 * ___expr_0;
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::pos
	uint16_t ___pos_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::offset
	int32_t ___offset_2;
	// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::str
	String_t* ___str_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::width
	int32_t ___width_4;
	// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::ignore
	bool ___ignore_5;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(AnchorInfo_t3295506375, ___expr_0)); }
	inline Expression_t1748784529 * get_expr_0() const { return ___expr_0; }
	inline Expression_t1748784529 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t1748784529 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(AnchorInfo_t3295506375, ___pos_1)); }
	inline uint16_t get_pos_1() const { return ___pos_1; }
	inline uint16_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(uint16_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(AnchorInfo_t3295506375, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(AnchorInfo_t3295506375, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((&___str_3), value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AnchorInfo_t3295506375, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(AnchorInfo_t3295506375, ___ignore_5)); }
	inline bool get_ignore_5() const { return ___ignore_5; }
	inline bool* get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(bool value)
	{
		___ignore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORINFO_T3295506375_H
#ifndef REGEX_T1647239264_H
#define REGEX_T1647239264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t1647239264  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t3667000786* ___group_names_5;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t2152905300* ___group_numbers_6;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_7;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_8;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t1647239264, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t1647239264, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t1647239264, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t1647239264, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_group_names_5() { return static_cast<int32_t>(offsetof(Regex_t1647239264, ___group_names_5)); }
	inline StringU5BU5D_t3667000786* get_group_names_5() const { return ___group_names_5; }
	inline StringU5BU5D_t3667000786** get_address_of_group_names_5() { return &___group_names_5; }
	inline void set_group_names_5(StringU5BU5D_t3667000786* value)
	{
		___group_names_5 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_5), value);
	}

	inline static int32_t get_offset_of_group_numbers_6() { return static_cast<int32_t>(offsetof(Regex_t1647239264, ___group_numbers_6)); }
	inline Int32U5BU5D_t2152905300* get_group_numbers_6() const { return ___group_numbers_6; }
	inline Int32U5BU5D_t2152905300** get_address_of_group_numbers_6() { return &___group_numbers_6; }
	inline void set_group_numbers_6(Int32U5BU5D_t2152905300* value)
	{
		___group_numbers_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_6), value);
	}

	inline static int32_t get_offset_of_pattern_7() { return static_cast<int32_t>(offsetof(Regex_t1647239264, ___pattern_7)); }
	inline String_t* get_pattern_7() const { return ___pattern_7; }
	inline String_t** get_address_of_pattern_7() { return &___pattern_7; }
	inline void set_pattern_7(String_t* value)
	{
		___pattern_7 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_7), value);
	}

	inline static int32_t get_offset_of_roptions_8() { return static_cast<int32_t>(offsetof(Regex_t1647239264, ___roptions_8)); }
	inline int32_t get_roptions_8() const { return ___roptions_8; }
	inline int32_t* get_address_of_roptions_8() { return &___roptions_8; }
	inline void set_roptions_8(int32_t value)
	{
		___roptions_8 = value;
	}
};

struct Regex_t1647239264_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t1274120282 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t1647239264_StaticFields, ___cache_0)); }
	inline FactoryCache_t1274120282 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t1274120282 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t1274120282 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T1647239264_H
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
#ifndef X509KEYUSAGEEXTENSION_T4005100727_H
#define X509KEYUSAGEEXTENSION_T4005100727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct  X509KeyUsageExtension_t4005100727  : public X509Extension_t4194795987
{
public:
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__keyUsages_7() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t4005100727, ____keyUsages_7)); }
	inline int32_t get__keyUsages_7() const { return ____keyUsages_7; }
	inline int32_t* get_address_of__keyUsages_7() { return &____keyUsages_7; }
	inline void set__keyUsages_7(int32_t value)
	{
		____keyUsages_7 = value;
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t4005100727, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYUSAGEEXTENSION_T4005100727_H
#ifndef X509STORE_T421779914_H
#define X509STORE_T421779914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Store
struct  X509Store_t421779914  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Store::_name
	String_t* ____name_0;
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Store::_location
	int32_t ____location_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::list
	X509Certificate2Collection_t120072283 * ___list_2;
	// System.Security.Cryptography.X509Certificates.OpenFlags System.Security.Cryptography.X509Certificates.X509Store::_flags
	int32_t ____flags_3;
	// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::store
	X509Store_t1566667678 * ___store_4;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(X509Store_t421779914, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__location_1() { return static_cast<int32_t>(offsetof(X509Store_t421779914, ____location_1)); }
	inline int32_t get__location_1() const { return ____location_1; }
	inline int32_t* get_address_of__location_1() { return &____location_1; }
	inline void set__location_1(int32_t value)
	{
		____location_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(X509Store_t421779914, ___list_2)); }
	inline X509Certificate2Collection_t120072283 * get_list_2() const { return ___list_2; }
	inline X509Certificate2Collection_t120072283 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(X509Certificate2Collection_t120072283 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}

	inline static int32_t get_offset_of__flags_3() { return static_cast<int32_t>(offsetof(X509Store_t421779914, ____flags_3)); }
	inline int32_t get__flags_3() const { return ____flags_3; }
	inline int32_t* get_address_of__flags_3() { return &____flags_3; }
	inline void set__flags_3(int32_t value)
	{
		____flags_3 = value;
	}

	inline static int32_t get_offset_of_store_4() { return static_cast<int32_t>(offsetof(X509Store_t421779914, ___store_4)); }
	inline X509Store_t1566667678 * get_store_4() const { return ___store_4; }
	inline X509Store_t1566667678 ** get_address_of_store_4() { return &___store_4; }
	inline void set_store_4(X509Store_t1566667678 * value)
	{
		___store_4 = value;
		Il2CppCodeGenWriteBarrier((&___store_4), value);
	}
};

struct X509Store_t421779914_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Store::<>f__switch$mapF
	Dictionary_2_t1284524661 * ___U3CU3Ef__switchU24mapF_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_5() { return static_cast<int32_t>(offsetof(X509Store_t421779914_StaticFields, ___U3CU3Ef__switchU24mapF_5)); }
	inline Dictionary_2_t1284524661 * get_U3CU3Ef__switchU24mapF_5() const { return ___U3CU3Ef__switchU24mapF_5; }
	inline Dictionary_2_t1284524661 ** get_address_of_U3CU3Ef__switchU24mapF_5() { return &___U3CU3Ef__switchU24mapF_5; }
	inline void set_U3CU3Ef__switchU24mapF_5(Dictionary_2_t1284524661 * value)
	{
		___U3CU3Ef__switchU24mapF_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T421779914_H
#ifndef POSITIONASSERTION_T3757851855_H
#define POSITIONASSERTION_T3757851855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct  PositionAssertion_t3757851855  : public Expression_t1748784529
{
public:
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.PositionAssertion::pos
	uint16_t ___pos_0;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(PositionAssertion_t3757851855, ___pos_0)); }
	inline uint16_t get_pos_0() const { return ___pos_0; }
	inline uint16_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(uint16_t value)
	{
		___pos_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASSERTION_T3757851855_H
#ifndef EXPRESSIONASSERTION_T3217283804_H
#define EXPRESSIONASSERTION_T3217283804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct  ExpressionAssertion_t3217283804  : public Assertion_t3667476890
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::reverse
	bool ___reverse_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::negate
	bool ___negate_2;

public:
	inline static int32_t get_offset_of_reverse_1() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t3217283804, ___reverse_1)); }
	inline bool get_reverse_1() const { return ___reverse_1; }
	inline bool* get_address_of_reverse_1() { return &___reverse_1; }
	inline void set_reverse_1(bool value)
	{
		___reverse_1 = value;
	}

	inline static int32_t get_offset_of_negate_2() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t3217283804, ___negate_2)); }
	inline bool get_negate_2() const { return ___negate_2; }
	inline bool* get_address_of_negate_2() { return &___negate_2; }
	inline void set_negate_2(bool value)
	{
		___negate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONASSERTION_T3217283804_H
#ifndef REGULAREXPRESSION_T1218664516_H
#define REGULAREXPRESSION_T1218664516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.RegularExpression
struct  RegularExpression_t1218664516  : public Group_t2626406225
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.RegularExpression::group_count
	int32_t ___group_count_1;

public:
	inline static int32_t get_offset_of_group_count_1() { return static_cast<int32_t>(offsetof(RegularExpression_t1218664516, ___group_count_1)); }
	inline int32_t get_group_count_1() const { return ___group_count_1; }
	inline int32_t* get_address_of_group_count_1() { return &___group_count_1; }
	inline void set_group_count_1(int32_t value)
	{
		___group_count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGULAREXPRESSION_T1218664516_H
#ifndef CAPTUREASSERTION_T2081605539_H
#define CAPTUREASSERTION_T2081605539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t2081605539  : public Assertion_t3667476890
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t3217283804 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t2155871962 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t3516984091 * ___literal_3;

public:
	inline static int32_t get_offset_of_alternate_1() { return static_cast<int32_t>(offsetof(CaptureAssertion_t2081605539, ___alternate_1)); }
	inline ExpressionAssertion_t3217283804 * get_alternate_1() const { return ___alternate_1; }
	inline ExpressionAssertion_t3217283804 ** get_address_of_alternate_1() { return &___alternate_1; }
	inline void set_alternate_1(ExpressionAssertion_t3217283804 * value)
	{
		___alternate_1 = value;
		Il2CppCodeGenWriteBarrier((&___alternate_1), value);
	}

	inline static int32_t get_offset_of_group_2() { return static_cast<int32_t>(offsetof(CaptureAssertion_t2081605539, ___group_2)); }
	inline CapturingGroup_t2155871962 * get_group_2() const { return ___group_2; }
	inline CapturingGroup_t2155871962 ** get_address_of_group_2() { return &___group_2; }
	inline void set_group_2(CapturingGroup_t2155871962 * value)
	{
		___group_2 = value;
		Il2CppCodeGenWriteBarrier((&___group_2), value);
	}

	inline static int32_t get_offset_of_literal_3() { return static_cast<int32_t>(offsetof(CaptureAssertion_t2081605539, ___literal_3)); }
	inline Literal_t3516984091 * get_literal_3() const { return ___literal_3; }
	inline Literal_t3516984091 ** get_address_of_literal_3() { return &___literal_3; }
	inline void set_literal_3(Literal_t3516984091 * value)
	{
		___literal_3 = value;
		Il2CppCodeGenWriteBarrier((&___literal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTUREASSERTION_T2081605539_H
#ifndef NONBACKTRACKINGGROUP_T2051838064_H
#define NONBACKTRACKINGGROUP_T2051838064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
struct  NonBacktrackingGroup_t2051838064  : public Group_t2626406225
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONBACKTRACKINGGROUP_T2051838064_H
#ifndef X509SUBJECTKEYIDENTIFIEREXTENSION_T3938610145_H
#define X509SUBJECTKEYIDENTIFIEREXTENSION_T3938610145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct  X509SubjectKeyIdentifierExtension_t3938610145  : public X509Extension_t4194795987
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_t806882901* ____subjectKeyIdentifier_6;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__subjectKeyIdentifier_6() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t3938610145, ____subjectKeyIdentifier_6)); }
	inline ByteU5BU5D_t806882901* get__subjectKeyIdentifier_6() const { return ____subjectKeyIdentifier_6; }
	inline ByteU5BU5D_t806882901** get_address_of__subjectKeyIdentifier_6() { return &____subjectKeyIdentifier_6; }
	inline void set__subjectKeyIdentifier_6(ByteU5BU5D_t806882901* value)
	{
		____subjectKeyIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((&____subjectKeyIdentifier_6), value);
	}

	inline static int32_t get_offset_of__ski_7() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t3938610145, ____ski_7)); }
	inline String_t* get__ski_7() const { return ____ski_7; }
	inline String_t** get_address_of__ski_7() { return &____ski_7; }
	inline void set__ski_7(String_t* value)
	{
		____ski_7 = value;
		Il2CppCodeGenWriteBarrier((&____ski_7), value);
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t3938610145, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509SUBJECTKEYIDENTIFIEREXTENSION_T3938610145_H
#ifndef CAPTURINGGROUP_T2155871962_H
#define CAPTURINGGROUP_T2155871962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CapturingGroup
struct  CapturingGroup_t2155871962  : public Group_t2626406225
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::gid
	int32_t ___gid_1;
	// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_gid_1() { return static_cast<int32_t>(offsetof(CapturingGroup_t2155871962, ___gid_1)); }
	inline int32_t get_gid_1() const { return ___gid_1; }
	inline int32_t* get_address_of_gid_1() { return &___gid_1; }
	inline void set_gid_1(int32_t value)
	{
		___gid_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CapturingGroup_t2155871962, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURINGGROUP_T2155871962_H
#ifndef COSTDELEGATE_T1286754855_H
#define COSTDELEGATE_T1286754855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct  CostDelegate_t1286754855  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COSTDELEGATE_T1286754855_H
#ifndef REMOTECERTIFICATEVALIDATIONCALLBACK_T2019689696_H
#define REMOTECERTIFICATEVALIDATIONCALLBACK_T2019689696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.RemoteCertificateValidationCallback
struct  RemoteCertificateValidationCallback_t2019689696  : public MulticastDelegate_t2132012776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTECERTIFICATEVALIDATIONCALLBACK_T2019689696_H
#ifndef BALANCINGGROUP_T2584106639_H
#define BALANCINGGROUP_T2584106639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BalancingGroup
struct  BalancingGroup_t2584106639  : public CapturingGroup_t2155871962
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.BalancingGroup::balance
	CapturingGroup_t2155871962 * ___balance_3;

public:
	inline static int32_t get_offset_of_balance_3() { return static_cast<int32_t>(offsetof(BalancingGroup_t2584106639, ___balance_3)); }
	inline CapturingGroup_t2155871962 * get_balance_3() const { return ___balance_3; }
	inline CapturingGroup_t2155871962 ** get_address_of_balance_3() { return &___balance_3; }
	inline void set_balance_3(CapturingGroup_t2155871962 * value)
	{
		___balance_3 = value;
		Il2CppCodeGenWriteBarrier((&___balance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALANCINGGROUP_T2584106639_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { sizeof (X509ExtensionCollection_t2979578687), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1000[1] = 
{
	X509ExtensionCollection_t2979578687::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { sizeof (X509ExtensionEnumerator_t2428179183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1001[1] = 
{
	X509ExtensionEnumerator_t2428179183::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (X509FindType_t4195191046)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1002[16] = 
{
	X509FindType_t4195191046::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (X509KeyUsageExtension_t4005100727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1003[5] = 
{
	0,
	0,
	0,
	X509KeyUsageExtension_t4005100727::get_offset_of__keyUsages_7(),
	X509KeyUsageExtension_t4005100727::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (X509KeyUsageFlags_t2897705539)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1004[11] = 
{
	X509KeyUsageFlags_t2897705539::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (X509NameType_t3103341634)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1005[7] = 
{
	X509NameType_t3103341634::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (X509RevocationFlag_t369577134)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1006[4] = 
{
	X509RevocationFlag_t369577134::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { sizeof (X509RevocationMode_t383538234)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1007[4] = 
{
	X509RevocationMode_t383538234::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { sizeof (X509Store_t421779914), -1, sizeof(X509Store_t421779914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1008[6] = 
{
	X509Store_t421779914::get_offset_of__name_0(),
	X509Store_t421779914::get_offset_of__location_1(),
	X509Store_t421779914::get_offset_of_list_2(),
	X509Store_t421779914::get_offset_of__flags_3(),
	X509Store_t421779914::get_offset_of_store_4(),
	X509Store_t421779914_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (X509SubjectKeyIdentifierExtension_t3938610145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1009[5] = 
{
	0,
	0,
	X509SubjectKeyIdentifierExtension_t3938610145::get_offset_of__subjectKeyIdentifier_6(),
	X509SubjectKeyIdentifierExtension_t3938610145::get_offset_of__ski_7(),
	X509SubjectKeyIdentifierExtension_t3938610145::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (X509SubjectKeyIdentifierHashAlgorithm_t3478425256)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1010[4] = 
{
	X509SubjectKeyIdentifierHashAlgorithm_t3478425256::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (X509VerificationFlags_t2188179892)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1011[15] = 
{
	X509VerificationFlags_t2188179892::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (AsnDecodeStatus_t1433064244)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1012[7] = 
{
	AsnDecodeStatus_t1433064244::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (AsnEncodedData_t489724395), -1, sizeof(AsnEncodedData_t489724395_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1013[3] = 
{
	AsnEncodedData_t489724395::get_offset_of__oid_0(),
	AsnEncodedData_t489724395::get_offset_of__raw_1(),
	AsnEncodedData_t489724395_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (Oid_t3251093799), -1, sizeof(Oid_t3251093799_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1014[3] = 
{
	Oid_t3251093799::get_offset_of__value_0(),
	Oid_t3251093799::get_offset_of__name_1(),
	Oid_t3251093799_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (OidCollection_t2986385545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1015[2] = 
{
	OidCollection_t2986385545::get_offset_of__list_0(),
	OidCollection_t2986385545::get_offset_of__readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (OidEnumerator_t1095225807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1016[2] = 
{
	OidEnumerator_t1095225807::get_offset_of__collection_0(),
	OidEnumerator_t1095225807::get_offset_of__position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (BaseMachine_t3135197807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1017[1] = 
{
	BaseMachine_t3135197807::get_offset_of_needs_groups_or_captures_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (Capture_t400824136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1018[3] = 
{
	Capture_t400824136::get_offset_of_index_0(),
	Capture_t400824136::get_offset_of_length_1(),
	Capture_t400824136::get_offset_of_text_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (CaptureCollection_t3484960845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1019[1] = 
{
	CaptureCollection_t3484960845::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (Group_t2014041649), -1, sizeof(Group_t2014041649_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1020[3] = 
{
	Group_t2014041649_StaticFields::get_offset_of_Fail_3(),
	Group_t2014041649::get_offset_of_success_4(),
	Group_t2014041649::get_offset_of_captures_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (GroupCollection_t3674972464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1021[2] = 
{
	GroupCollection_t3674972464::get_offset_of_list_0(),
	GroupCollection_t3674972464::get_offset_of_gap_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (Match_t1291154093), -1, sizeof(Match_t1291154093_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1022[5] = 
{
	Match_t1291154093::get_offset_of_regex_6(),
	Match_t1291154093::get_offset_of_machine_7(),
	Match_t1291154093::get_offset_of_text_length_8(),
	Match_t1291154093::get_offset_of_groups_9(),
	Match_t1291154093_StaticFields::get_offset_of_empty_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (MatchCollection_t3960266899), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1023[2] = 
{
	MatchCollection_t3960266899::get_offset_of_current_0(),
	MatchCollection_t3960266899::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (Enumerator_t3203345625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1024[2] = 
{
	Enumerator_t3203345625::get_offset_of_index_0(),
	Enumerator_t3203345625::get_offset_of_coll_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (Regex_t1647239264), -1, sizeof(Regex_t1647239264_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1025[9] = 
{
	Regex_t1647239264_StaticFields::get_offset_of_cache_0(),
	Regex_t1647239264::get_offset_of_machineFactory_1(),
	Regex_t1647239264::get_offset_of_mapping_2(),
	Regex_t1647239264::get_offset_of_group_count_3(),
	Regex_t1647239264::get_offset_of_gap_4(),
	Regex_t1647239264::get_offset_of_group_names_5(),
	Regex_t1647239264::get_offset_of_group_numbers_6(),
	Regex_t1647239264::get_offset_of_pattern_7(),
	Regex_t1647239264::get_offset_of_roptions_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (RegexOptions_t2167637736)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1026[10] = 
{
	RegexOptions_t2167637736::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (OpCode_t2684731588)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1027[26] = 
{
	OpCode_t2684731588::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (OpFlags_t2647777195)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1028[6] = 
{
	OpFlags_t2647777195::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { sizeof (Position_t476769265)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1029[11] = 
{
	Position_t476769265::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { sizeof (FactoryCache_t1274120282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1032[3] = 
{
	FactoryCache_t1274120282::get_offset_of_capacity_0(),
	FactoryCache_t1274120282::get_offset_of_factories_1(),
	FactoryCache_t1274120282::get_offset_of_mru_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { sizeof (Key_t635553929), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1033[2] = 
{
	Key_t635553929::get_offset_of_pattern_0(),
	Key_t635553929::get_offset_of_options_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { sizeof (MRUList_t1646723449), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1034[2] = 
{
	MRUList_t1646723449::get_offset_of_head_0(),
	MRUList_t1646723449::get_offset_of_tail_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { sizeof (Node_t3952123855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1035[3] = 
{
	Node_t3952123855::get_offset_of_value_0(),
	Node_t3952123855::get_offset_of_previous_1(),
	Node_t3952123855::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { sizeof (Category_t2070707855)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1036[146] = 
{
	Category_t2070707855::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { sizeof (CategoryUtils_t2238458714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (LinkRef_t2968480225), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (InterpreterFactory_t1026382607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1040[4] = 
{
	InterpreterFactory_t1026382607::get_offset_of_mapping_0(),
	InterpreterFactory_t1026382607::get_offset_of_pattern_1(),
	InterpreterFactory_t1026382607::get_offset_of_namesMapping_2(),
	InterpreterFactory_t1026382607::get_offset_of_gap_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (PatternCompiler_t1873117280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1041[1] = 
{
	PatternCompiler_t1873117280::get_offset_of_pgm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (PatternLinkStack_t641442069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1042[1] = 
{
	PatternLinkStack_t641442069::get_offset_of_link_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (Link_t2639220742)+ sizeof (RuntimeObject), sizeof(Link_t2639220742 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1043[2] = 
{
	Link_t2639220742::get_offset_of_base_addr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Link_t2639220742::get_offset_of_offset_addr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (LinkStack_t3836566106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1044[1] = 
{
	LinkStack_t3836566106::get_offset_of_stack_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (Mark_t1806384555)+ sizeof (RuntimeObject), sizeof(Mark_t1806384555 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1045[3] = 
{
	Mark_t1806384555::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t1806384555::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t1806384555::get_offset_of_Previous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (Interpreter_t700753131), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1046[16] = 
{
	Interpreter_t700753131::get_offset_of_program_1(),
	Interpreter_t700753131::get_offset_of_program_start_2(),
	Interpreter_t700753131::get_offset_of_text_3(),
	Interpreter_t700753131::get_offset_of_text_end_4(),
	Interpreter_t700753131::get_offset_of_group_count_5(),
	Interpreter_t700753131::get_offset_of_match_min_6(),
	Interpreter_t700753131::get_offset_of_qs_7(),
	Interpreter_t700753131::get_offset_of_scan_ptr_8(),
	Interpreter_t700753131::get_offset_of_repeat_9(),
	Interpreter_t700753131::get_offset_of_fast_10(),
	Interpreter_t700753131::get_offset_of_stack_11(),
	Interpreter_t700753131::get_offset_of_deep_12(),
	Interpreter_t700753131::get_offset_of_marks_13(),
	Interpreter_t700753131::get_offset_of_mark_start_14(),
	Interpreter_t700753131::get_offset_of_mark_end_15(),
	Interpreter_t700753131::get_offset_of_groups_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (IntStack_t2907159516)+ sizeof (RuntimeObject), sizeof(IntStack_t2907159516_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1047[2] = 
{
	IntStack_t2907159516::get_offset_of_values_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntStack_t2907159516::get_offset_of_count_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (RepeatContext_t251824079), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1048[7] = 
{
	RepeatContext_t251824079::get_offset_of_start_0(),
	RepeatContext_t251824079::get_offset_of_min_1(),
	RepeatContext_t251824079::get_offset_of_max_2(),
	RepeatContext_t251824079::get_offset_of_lazy_3(),
	RepeatContext_t251824079::get_offset_of_expr_pc_4(),
	RepeatContext_t251824079::get_offset_of_previous_5(),
	RepeatContext_t251824079::get_offset_of_count_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (Mode_t3102573554)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1049[4] = 
{
	Mode_t3102573554::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (Interval_t1671137851)+ sizeof (RuntimeObject), sizeof(Interval_t1671137851_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1050[3] = 
{
	Interval_t1671137851::get_offset_of_low_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t1671137851::get_offset_of_high_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t1671137851::get_offset_of_contiguous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (IntervalCollection_t1300391255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1051[1] = 
{
	IntervalCollection_t1300391255::get_offset_of_intervals_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (Enumerator_t3666134196), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1052[2] = 
{
	Enumerator_t3666134196::get_offset_of_list_0(),
	Enumerator_t3666134196::get_offset_of_ptr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (CostDelegate_t1286754855), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (Parser_t4118969576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1054[6] = 
{
	Parser_t4118969576::get_offset_of_pattern_0(),
	Parser_t4118969576::get_offset_of_ptr_1(),
	Parser_t4118969576::get_offset_of_caps_2(),
	Parser_t4118969576::get_offset_of_refs_3(),
	Parser_t4118969576::get_offset_of_num_groups_4(),
	Parser_t4118969576::get_offset_of_gap_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (QuickSearch_t50949825), -1, sizeof(QuickSearch_t50949825_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1055[7] = 
{
	QuickSearch_t50949825::get_offset_of_str_0(),
	QuickSearch_t50949825::get_offset_of_len_1(),
	QuickSearch_t50949825::get_offset_of_ignore_2(),
	QuickSearch_t50949825::get_offset_of_reverse_3(),
	QuickSearch_t50949825::get_offset_of_shift_4(),
	QuickSearch_t50949825::get_offset_of_shiftExtended_5(),
	QuickSearch_t50949825_StaticFields::get_offset_of_THRESHOLD_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (ExpressionCollection_t3070857164), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { sizeof (Expression_t1748784529), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (CompositeExpression_t3319034383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1058[1] = 
{
	CompositeExpression_t3319034383::get_offset_of_expressions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (Group_t2626406225), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (RegularExpression_t1218664516), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1060[1] = 
{
	RegularExpression_t1218664516::get_offset_of_group_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (CapturingGroup_t2155871962), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1061[2] = 
{
	CapturingGroup_t2155871962::get_offset_of_gid_1(),
	CapturingGroup_t2155871962::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (BalancingGroup_t2584106639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1062[1] = 
{
	BalancingGroup_t2584106639::get_offset_of_balance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (NonBacktrackingGroup_t2051838064), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (Repetition_t3121433016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1064[3] = 
{
	Repetition_t3121433016::get_offset_of_min_1(),
	Repetition_t3121433016::get_offset_of_max_2(),
	Repetition_t3121433016::get_offset_of_lazy_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (Assertion_t3667476890), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (CaptureAssertion_t2081605539), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1066[3] = 
{
	CaptureAssertion_t2081605539::get_offset_of_alternate_1(),
	CaptureAssertion_t2081605539::get_offset_of_group_2(),
	CaptureAssertion_t2081605539::get_offset_of_literal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (ExpressionAssertion_t3217283804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1067[2] = 
{
	ExpressionAssertion_t3217283804::get_offset_of_reverse_1(),
	ExpressionAssertion_t3217283804::get_offset_of_negate_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (Alternation_t1468148132), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (Literal_t3516984091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1069[2] = 
{
	Literal_t3516984091::get_offset_of_str_0(),
	Literal_t3516984091::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (PositionAssertion_t3757851855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1070[1] = 
{
	PositionAssertion_t3757851855::get_offset_of_pos_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (Reference_t3154439687), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1071[2] = 
{
	Reference_t3154439687::get_offset_of_group_0(),
	Reference_t3154439687::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (BackslashNumber_t473344428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1072[2] = 
{
	BackslashNumber_t473344428::get_offset_of_literal_2(),
	BackslashNumber_t473344428::get_offset_of_ecma_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (CharacterClass_t3392876538), -1, sizeof(CharacterClass_t3392876538_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1073[6] = 
{
	CharacterClass_t3392876538_StaticFields::get_offset_of_upper_case_characters_0(),
	CharacterClass_t3392876538::get_offset_of_negate_1(),
	CharacterClass_t3392876538::get_offset_of_ignore_2(),
	CharacterClass_t3392876538::get_offset_of_pos_cats_3(),
	CharacterClass_t3392876538::get_offset_of_neg_cats_4(),
	CharacterClass_t3392876538::get_offset_of_intervals_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (AnchorInfo_t3295506375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1074[6] = 
{
	AnchorInfo_t3295506375::get_offset_of_expr_0(),
	AnchorInfo_t3295506375::get_offset_of_pos_1(),
	AnchorInfo_t3295506375::get_offset_of_offset_2(),
	AnchorInfo_t3295506375::get_offset_of_str_3(),
	AnchorInfo_t3295506375::get_offset_of_width_4(),
	AnchorInfo_t3295506375::get_offset_of_ignore_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (DefaultUriParser_t2318079743), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (GenericUriParser_t472507197), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (Uri_t375695819), -1, sizeof(Uri_t375695819_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1077[33] = 
{
	Uri_t375695819::get_offset_of_isUnixFilePath_0(),
	Uri_t375695819::get_offset_of_source_1(),
	Uri_t375695819::get_offset_of_scheme_2(),
	Uri_t375695819::get_offset_of_host_3(),
	Uri_t375695819::get_offset_of_port_4(),
	Uri_t375695819::get_offset_of_path_5(),
	Uri_t375695819::get_offset_of_query_6(),
	Uri_t375695819::get_offset_of_fragment_7(),
	Uri_t375695819::get_offset_of_userinfo_8(),
	Uri_t375695819::get_offset_of_isUnc_9(),
	Uri_t375695819::get_offset_of_isOpaquePart_10(),
	Uri_t375695819::get_offset_of_isAbsoluteUri_11(),
	Uri_t375695819::get_offset_of_userEscaped_12(),
	Uri_t375695819::get_offset_of_cachedAbsoluteUri_13(),
	Uri_t375695819::get_offset_of_cachedToString_14(),
	Uri_t375695819::get_offset_of_cachedHashCode_15(),
	Uri_t375695819_StaticFields::get_offset_of_hexUpperChars_16(),
	Uri_t375695819_StaticFields::get_offset_of_SchemeDelimiter_17(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeFile_18(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeFtp_19(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeGopher_20(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeHttp_21(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeHttps_22(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeMailto_23(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeNews_24(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeNntp_25(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeNetPipe_26(),
	Uri_t375695819_StaticFields::get_offset_of_UriSchemeNetTcp_27(),
	Uri_t375695819_StaticFields::get_offset_of_schemes_28(),
	Uri_t375695819::get_offset_of_parser_29(),
	Uri_t375695819_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_30(),
	Uri_t375695819_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_31(),
	Uri_t375695819_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (UriScheme_t3833939188)+ sizeof (RuntimeObject), sizeof(UriScheme_t3833939188_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1078[3] = 
{
	UriScheme_t3833939188::get_offset_of_scheme_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t3833939188::get_offset_of_delimiter_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t3833939188::get_offset_of_defaultPort_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (UriFormatException_t1938134364), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (UriHostNameType_t3415614228)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1080[6] = 
{
	UriHostNameType_t3415614228::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (UriKind_t1540933907)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1081[4] = 
{
	UriKind_t1540933907::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (UriParser_t2794153166), -1, sizeof(UriParser_t2794153166_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1082[6] = 
{
	UriParser_t2794153166_StaticFields::get_offset_of_lock_object_0(),
	UriParser_t2794153166_StaticFields::get_offset_of_table_1(),
	UriParser_t2794153166::get_offset_of_scheme_name_2(),
	UriParser_t2794153166::get_offset_of_default_port_3(),
	UriParser_t2794153166_StaticFields::get_offset_of_uri_regex_4(),
	UriParser_t2794153166_StaticFields::get_offset_of_auth_regex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (UriPartial_t3003200482)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1083[5] = 
{
	UriPartial_t3003200482::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (UriTypeConverter_t3414225847), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (RemoteCertificateValidationCallback_t2019689696), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (U3CPrivateImplementationDetailsU3E_t3050736961), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3050736961_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1086[3] = 
{
	U3CPrivateImplementationDetailsU3E_t3050736961_StaticFields::get_offset_of_U24U24fieldU2D2_0(),
	U3CPrivateImplementationDetailsU3E_t3050736961_StaticFields::get_offset_of_U24U24fieldU2D3_1(),
	U3CPrivateImplementationDetailsU3E_t3050736961_StaticFields::get_offset_of_U24U24fieldU2D4_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (U24ArrayTypeU24128_t1281744251)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t1281744251 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (U24ArrayTypeU2412_t3923520614)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t3923520614 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (U3CModuleU3E_t385520836), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (Locale_t3006319314), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (BigInteger_t3898687918), -1, sizeof(BigInteger_t3898687918_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1091[4] = 
{
	BigInteger_t3898687918::get_offset_of_length_0(),
	BigInteger_t3898687918::get_offset_of_data_1(),
	BigInteger_t3898687918_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t3898687918_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (Sign_t3426657340)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1092[4] = 
{
	Sign_t3426657340::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (ModulusRing_t4105162583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1093[2] = 
{
	ModulusRing_t4105162583::get_offset_of_mod_0(),
	ModulusRing_t4105162583::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (Kernel_t1110812790), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (ConfidenceFactor_t3452046927)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1095[7] = 
{
	ConfidenceFactor_t3452046927::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (PrimalityTests_t215990170), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (PrimeGeneratorBase_t20813722), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (SequentialSearchPrimeGeneratorBase_t2321262059), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (ASN1_t776684963), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1099[3] = 
{
	ASN1_t776684963::get_offset_of_m_nTag_0(),
	ASN1_t776684963::get_offset_of_m_aValue_1(),
	ASN1_t776684963::get_offset_of_elist_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
