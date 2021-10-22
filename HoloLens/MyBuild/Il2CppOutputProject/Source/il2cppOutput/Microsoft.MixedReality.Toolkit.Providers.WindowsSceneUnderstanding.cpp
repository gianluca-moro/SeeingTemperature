#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject>
struct IReadOnlyDictionary_2_t726FA41A7EB9D75923ADD0E64C7DCE566C7C4DD2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t063D0EA483485B6D709977E7F4462E3731048173;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tC55D34D75F571FA6A3F6169F6352C9CDC4C93D67;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile
struct SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0A92AF1E766DFCDF7986ADF733DD6F143EED0B;
IL2CPP_EXTERN_C String_t* _stringLiteralBF74DAF63DFBBFE944944E5B82F675D0B045EC0D;
IL2CPP_EXTERN_C String_t* _stringLiteralD8638A036277D99E851CF95C6DE4FE10A47DE9B8;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF6B26327A9D2E6EEC818DBDDCFE34E201E3F6A6F 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_tCCF09E8E0897B32217D7A31140B45E3F4C4259DF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_tCCF09E8E0897B32217D7A31140B45E3F4C4259DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_t8864FDD8C2A52D457BCB07B2542006AEECECEC52 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t8864FDD8C2A52D457BCB07B2542006AEECECEC52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes
struct SpatialAwarenessSurfaceTypes_t4171AD7D18FC43C9953C069EB4D0A2A4DEA4B0F3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessSurfaceTypes_t4171AD7D18FC43C9953C069EB4D0A2A4DEA4B0F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_tB43B97A49FEB747E472C6E42B5EE9E4E66005A80 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_tB43B97A49FEB747E472C6E42B5EE9E4E66005A80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_tC3C2CE562A2FE146CDBD360CE01C0F11A91DEB0E  : public BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC3C2CE562A2FE146CDBD360CE01C0F11A91DEB0E, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tC3C2CE562A2FE146CDBD360CE01C0F11A91DEB0E, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
	}
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC  : public BaseDataProvider_1_tC3C2CE562A2FE146CDBD360CE01C0F11A91DEB0E
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_11;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_13;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_16;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_18;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_20;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CSourceIdU3Ek__BackingField_11)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_11() const { return ___U3CSourceIdU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_11() { return &___U3CSourceIdU3Ek__BackingField_11; }
	inline void set_U3CSourceIdU3Ek__BackingField_11(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CSourceNameU3Ek__BackingField_12)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_12() const { return ___U3CSourceNameU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_12() { return &___U3CSourceNameU3Ek__BackingField_12; }
	inline void set_U3CSourceNameU3Ek__BackingField_12(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CStartupBehaviorU3Ek__BackingField_13)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_13() const { return ___U3CStartupBehaviorU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_13() { return &___U3CStartupBehaviorU3Ek__BackingField_13; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_13(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CDefaultPhysicsLayerU3Ek__BackingField_14)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_14() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_14() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_14; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_14(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CIsRunningU3Ek__BackingField_15)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_15() const { return ___U3CIsRunningU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_15() { return &___U3CIsRunningU3Ek__BackingField_15; }
	inline void set_U3CIsRunningU3Ek__BackingField_15(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CIsStationaryObserverU3Ek__BackingField_16)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_16() const { return ___U3CIsStationaryObserverU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_16() { return &___U3CIsStationaryObserverU3Ek__BackingField_16; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_16(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CObserverRotationU3Ek__BackingField_17)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_17() const { return ___U3CObserverRotationU3Ek__BackingField_17; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_17() { return &___U3CObserverRotationU3Ek__BackingField_17; }
	inline void set_U3CObserverRotationU3Ek__BackingField_17(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CObserverOriginU3Ek__BackingField_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_18() const { return ___U3CObserverOriginU3Ek__BackingField_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_18() { return &___U3CObserverOriginU3Ek__BackingField_18; }
	inline void set_U3CObserverOriginU3Ek__BackingField_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CObserverVolumeTypeU3Ek__BackingField_19)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_19() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_19() { return &___U3CObserverVolumeTypeU3Ek__BackingField_19; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_19(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CObservationExtentsU3Ek__BackingField_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_20() const { return ___U3CObservationExtentsU3Ek__BackingField_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_20() { return &___U3CObservationExtentsU3Ek__BackingField_20; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC, ___U3CUpdateIntervalU3Ek__BackingField_21)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_21() const { return ___U3CUpdateIntervalU3Ek__BackingField_21; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_21() { return &___U3CUpdateIntervalU3Ek__BackingField_21; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_21(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_21 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05  : public BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::startupBehavior
	int32_t ___startupBehavior_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::isStationaryObserver
	bool ___isStationaryObserver_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___observationExtents_7;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observerVolumeType
	int32_t ___observerVolumeType_8;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::updateInterval
	float ___updateInterval_9;

public:
	inline static int32_t get_offset_of_startupBehavior_5() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05, ___startupBehavior_5)); }
	inline int32_t get_startupBehavior_5() const { return ___startupBehavior_5; }
	inline int32_t* get_address_of_startupBehavior_5() { return &___startupBehavior_5; }
	inline void set_startupBehavior_5(int32_t value)
	{
		___startupBehavior_5 = value;
	}

	inline static int32_t get_offset_of_isStationaryObserver_6() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05, ___isStationaryObserver_6)); }
	inline bool get_isStationaryObserver_6() const { return ___isStationaryObserver_6; }
	inline bool* get_address_of_isStationaryObserver_6() { return &___isStationaryObserver_6; }
	inline void set_isStationaryObserver_6(bool value)
	{
		___isStationaryObserver_6 = value;
	}

	inline static int32_t get_offset_of_observationExtents_7() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05, ___observationExtents_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_observationExtents_7() const { return ___observationExtents_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_observationExtents_7() { return &___observationExtents_7; }
	inline void set_observationExtents_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___observationExtents_7 = value;
	}

	inline static int32_t get_offset_of_observerVolumeType_8() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05, ___observerVolumeType_8)); }
	inline int32_t get_observerVolumeType_8() const { return ___observerVolumeType_8; }
	inline int32_t* get_address_of_observerVolumeType_8() { return &___observerVolumeType_8; }
	inline void set_observerVolumeType_8(int32_t value)
	{
		___observerVolumeType_8 = value;
	}

	inline static int32_t get_offset_of_updateInterval_9() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05, ___updateInterval_9)); }
	inline float get_updateInterval_9() const { return ___updateInterval_9; }
	inline float* get_address_of_updateInterval_9() { return &___updateInterval_9; }
	inline void set_updateInterval_9(float value)
	{
		___updateInterval_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver
struct WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91  : public BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<SurfaceTypes>k__BackingField
	int32_t ___U3CSurfaceTypesU3Ek__BackingField_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<ShouldLoadFromFile>k__BackingField
	bool ___U3CShouldLoadFromFileU3Ek__BackingField_23;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InstantiationBatchRate>k__BackingField
	int32_t ___U3CInstantiationBatchRateU3Ek__BackingField_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<InferRegions>k__BackingField
	bool ___U3CInferRegionsU3Ek__BackingField_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestMeshData>k__BackingField
	bool ___U3CRequestMeshDataU3Ek__BackingField_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestPlaneData>k__BackingField
	bool ___U3CRequestPlaneDataU3Ek__BackingField_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<RequestOcclusionMask>k__BackingField
	bool ___U3CRequestOcclusionMaskU3Ek__BackingField_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UsePersistentObjects>k__BackingField
	bool ___U3CUsePersistentObjectsU3Ek__BackingField_29;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<QueryRadius>k__BackingField
	float ___U3CQueryRadiusU3Ek__BackingField_30;
	// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OcclusionMaskResolution>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3COcclusionMaskResolutionU3Ek__BackingField_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<CreateGameObjects>k__BackingField
	bool ___U3CCreateGameObjectsU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<AutoUpdate>k__BackingField
	bool ___U3CAutoUpdateU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<OrientScene>k__BackingField
	bool ___U3COrientSceneU3Ek__BackingField_34;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<WorldMeshLevelOfDetail>k__BackingField
	int32_t ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_35;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<FirstAutoUpdateDelay>k__BackingField
	float ___U3CFirstAutoUpdateDelayU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<UpdateOnceInitialized>k__BackingField
	bool ___U3CUpdateOnceInitializedU3Ek__BackingField_37;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultMaterial>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CDefaultMaterialU3Ek__BackingField_38;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::<DefaultWorldMeshMaterial>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_39;
	// System.Byte[] Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::sceneBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___sceneBytes_40;
	// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::serializedScene
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___serializedScene_41;

public:
	inline static int32_t get_offset_of_U3CSurfaceTypesU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CSurfaceTypesU3Ek__BackingField_22)); }
	inline int32_t get_U3CSurfaceTypesU3Ek__BackingField_22() const { return ___U3CSurfaceTypesU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CSurfaceTypesU3Ek__BackingField_22() { return &___U3CSurfaceTypesU3Ek__BackingField_22; }
	inline void set_U3CSurfaceTypesU3Ek__BackingField_22(int32_t value)
	{
		___U3CSurfaceTypesU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CShouldLoadFromFileU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CShouldLoadFromFileU3Ek__BackingField_23)); }
	inline bool get_U3CShouldLoadFromFileU3Ek__BackingField_23() const { return ___U3CShouldLoadFromFileU3Ek__BackingField_23; }
	inline bool* get_address_of_U3CShouldLoadFromFileU3Ek__BackingField_23() { return &___U3CShouldLoadFromFileU3Ek__BackingField_23; }
	inline void set_U3CShouldLoadFromFileU3Ek__BackingField_23(bool value)
	{
		___U3CShouldLoadFromFileU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CInstantiationBatchRateU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CInstantiationBatchRateU3Ek__BackingField_24)); }
	inline int32_t get_U3CInstantiationBatchRateU3Ek__BackingField_24() const { return ___U3CInstantiationBatchRateU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CInstantiationBatchRateU3Ek__BackingField_24() { return &___U3CInstantiationBatchRateU3Ek__BackingField_24; }
	inline void set_U3CInstantiationBatchRateU3Ek__BackingField_24(int32_t value)
	{
		___U3CInstantiationBatchRateU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CInferRegionsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CInferRegionsU3Ek__BackingField_25)); }
	inline bool get_U3CInferRegionsU3Ek__BackingField_25() const { return ___U3CInferRegionsU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CInferRegionsU3Ek__BackingField_25() { return &___U3CInferRegionsU3Ek__BackingField_25; }
	inline void set_U3CInferRegionsU3Ek__BackingField_25(bool value)
	{
		___U3CInferRegionsU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CRequestMeshDataU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CRequestMeshDataU3Ek__BackingField_26)); }
	inline bool get_U3CRequestMeshDataU3Ek__BackingField_26() const { return ___U3CRequestMeshDataU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CRequestMeshDataU3Ek__BackingField_26() { return &___U3CRequestMeshDataU3Ek__BackingField_26; }
	inline void set_U3CRequestMeshDataU3Ek__BackingField_26(bool value)
	{
		___U3CRequestMeshDataU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CRequestPlaneDataU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CRequestPlaneDataU3Ek__BackingField_27)); }
	inline bool get_U3CRequestPlaneDataU3Ek__BackingField_27() const { return ___U3CRequestPlaneDataU3Ek__BackingField_27; }
	inline bool* get_address_of_U3CRequestPlaneDataU3Ek__BackingField_27() { return &___U3CRequestPlaneDataU3Ek__BackingField_27; }
	inline void set_U3CRequestPlaneDataU3Ek__BackingField_27(bool value)
	{
		___U3CRequestPlaneDataU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CRequestOcclusionMaskU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CRequestOcclusionMaskU3Ek__BackingField_28)); }
	inline bool get_U3CRequestOcclusionMaskU3Ek__BackingField_28() const { return ___U3CRequestOcclusionMaskU3Ek__BackingField_28; }
	inline bool* get_address_of_U3CRequestOcclusionMaskU3Ek__BackingField_28() { return &___U3CRequestOcclusionMaskU3Ek__BackingField_28; }
	inline void set_U3CRequestOcclusionMaskU3Ek__BackingField_28(bool value)
	{
		___U3CRequestOcclusionMaskU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CUsePersistentObjectsU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CUsePersistentObjectsU3Ek__BackingField_29)); }
	inline bool get_U3CUsePersistentObjectsU3Ek__BackingField_29() const { return ___U3CUsePersistentObjectsU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CUsePersistentObjectsU3Ek__BackingField_29() { return &___U3CUsePersistentObjectsU3Ek__BackingField_29; }
	inline void set_U3CUsePersistentObjectsU3Ek__BackingField_29(bool value)
	{
		___U3CUsePersistentObjectsU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CQueryRadiusU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CQueryRadiusU3Ek__BackingField_30)); }
	inline float get_U3CQueryRadiusU3Ek__BackingField_30() const { return ___U3CQueryRadiusU3Ek__BackingField_30; }
	inline float* get_address_of_U3CQueryRadiusU3Ek__BackingField_30() { return &___U3CQueryRadiusU3Ek__BackingField_30; }
	inline void set_U3CQueryRadiusU3Ek__BackingField_30(float value)
	{
		___U3CQueryRadiusU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3COcclusionMaskResolutionU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3COcclusionMaskResolutionU3Ek__BackingField_31)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3COcclusionMaskResolutionU3Ek__BackingField_31() const { return ___U3COcclusionMaskResolutionU3Ek__BackingField_31; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3COcclusionMaskResolutionU3Ek__BackingField_31() { return &___U3COcclusionMaskResolutionU3Ek__BackingField_31; }
	inline void set_U3COcclusionMaskResolutionU3Ek__BackingField_31(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3COcclusionMaskResolutionU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CCreateGameObjectsU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CCreateGameObjectsU3Ek__BackingField_32)); }
	inline bool get_U3CCreateGameObjectsU3Ek__BackingField_32() const { return ___U3CCreateGameObjectsU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CCreateGameObjectsU3Ek__BackingField_32() { return &___U3CCreateGameObjectsU3Ek__BackingField_32; }
	inline void set_U3CCreateGameObjectsU3Ek__BackingField_32(bool value)
	{
		___U3CCreateGameObjectsU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CAutoUpdateU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CAutoUpdateU3Ek__BackingField_33)); }
	inline bool get_U3CAutoUpdateU3Ek__BackingField_33() const { return ___U3CAutoUpdateU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CAutoUpdateU3Ek__BackingField_33() { return &___U3CAutoUpdateU3Ek__BackingField_33; }
	inline void set_U3CAutoUpdateU3Ek__BackingField_33(bool value)
	{
		___U3CAutoUpdateU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3COrientSceneU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3COrientSceneU3Ek__BackingField_34)); }
	inline bool get_U3COrientSceneU3Ek__BackingField_34() const { return ___U3COrientSceneU3Ek__BackingField_34; }
	inline bool* get_address_of_U3COrientSceneU3Ek__BackingField_34() { return &___U3COrientSceneU3Ek__BackingField_34; }
	inline void set_U3COrientSceneU3Ek__BackingField_34(bool value)
	{
		___U3COrientSceneU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CWorldMeshLevelOfDetailU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_35)); }
	inline int32_t get_U3CWorldMeshLevelOfDetailU3Ek__BackingField_35() const { return ___U3CWorldMeshLevelOfDetailU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CWorldMeshLevelOfDetailU3Ek__BackingField_35() { return &___U3CWorldMeshLevelOfDetailU3Ek__BackingField_35; }
	inline void set_U3CWorldMeshLevelOfDetailU3Ek__BackingField_35(int32_t value)
	{
		___U3CWorldMeshLevelOfDetailU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CFirstAutoUpdateDelayU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CFirstAutoUpdateDelayU3Ek__BackingField_36)); }
	inline float get_U3CFirstAutoUpdateDelayU3Ek__BackingField_36() const { return ___U3CFirstAutoUpdateDelayU3Ek__BackingField_36; }
	inline float* get_address_of_U3CFirstAutoUpdateDelayU3Ek__BackingField_36() { return &___U3CFirstAutoUpdateDelayU3Ek__BackingField_36; }
	inline void set_U3CFirstAutoUpdateDelayU3Ek__BackingField_36(float value)
	{
		___U3CFirstAutoUpdateDelayU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateOnceInitializedU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CUpdateOnceInitializedU3Ek__BackingField_37)); }
	inline bool get_U3CUpdateOnceInitializedU3Ek__BackingField_37() const { return ___U3CUpdateOnceInitializedU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CUpdateOnceInitializedU3Ek__BackingField_37() { return &___U3CUpdateOnceInitializedU3Ek__BackingField_37; }
	inline void set_U3CUpdateOnceInitializedU3Ek__BackingField_37(bool value)
	{
		___U3CUpdateOnceInitializedU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultMaterialU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CDefaultMaterialU3Ek__BackingField_38)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CDefaultMaterialU3Ek__BackingField_38() const { return ___U3CDefaultMaterialU3Ek__BackingField_38; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CDefaultMaterialU3Ek__BackingField_38() { return &___U3CDefaultMaterialU3Ek__BackingField_38; }
	inline void set_U3CDefaultMaterialU3Ek__BackingField_38(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CDefaultMaterialU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultMaterialU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDefaultWorldMeshMaterialU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_39)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CDefaultWorldMeshMaterialU3Ek__BackingField_39() const { return ___U3CDefaultWorldMeshMaterialU3Ek__BackingField_39; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CDefaultWorldMeshMaterialU3Ek__BackingField_39() { return &___U3CDefaultWorldMeshMaterialU3Ek__BackingField_39; }
	inline void set_U3CDefaultWorldMeshMaterialU3Ek__BackingField_39(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CDefaultWorldMeshMaterialU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultWorldMeshMaterialU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_sceneBytes_40() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___sceneBytes_40)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_sceneBytes_40() const { return ___sceneBytes_40; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_sceneBytes_40() { return &___sceneBytes_40; }
	inline void set_sceneBytes_40(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___sceneBytes_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneBytes_40), (void*)value);
	}

	inline static int32_t get_offset_of_serializedScene_41() { return static_cast<int32_t>(offsetof(WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91, ___serializedScene_41)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_serializedScene_41() const { return ___serializedScene_41; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_serializedScene_41() { return &___serializedScene_41; }
	inline void set_serializedScene_41(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___serializedScene_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedScene_41), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile
struct SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4  : public BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::updateOnceInitialized
	bool ___updateOnceInitialized_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::autoUpdate
	bool ___autoUpdate_11;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::defaultPhysicsLayer
	int32_t ___defaultPhysicsLayer_12;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::surfaceTypes
	int32_t ___surfaceTypes_13;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::instantiationBatchRate
	int32_t ___instantiationBatchRate_14;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_15;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::defaultWorldMeshMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultWorldMeshMaterial_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::shouldLoadFromFile
	bool ___shouldLoadFromFile_17;
	// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::serializedScene
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___serializedScene_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::createGameObjects
	bool ___createGameObjects_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::requestPlaneData
	bool ___requestPlaneData_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::requestMeshData
	bool ___requestMeshData_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::inferRegions
	bool ___inferRegions_22;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::firstAutoUpdateDelay
	float ___firstAutoUpdateDelay_23;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::worldMeshLevelOfDetail
	int32_t ___worldMeshLevelOfDetail_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::usePersistentObjects
	bool ___usePersistentObjects_25;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::queryRadius
	float ___queryRadius_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::requestOcclusionMask
	bool ___requestOcclusionMask_27;
	// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::occlusionMaskResolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___occlusionMaskResolution_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::orientScene
	bool ___orientScene_29;

public:
	inline static int32_t get_offset_of_updateOnceInitialized_10() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___updateOnceInitialized_10)); }
	inline bool get_updateOnceInitialized_10() const { return ___updateOnceInitialized_10; }
	inline bool* get_address_of_updateOnceInitialized_10() { return &___updateOnceInitialized_10; }
	inline void set_updateOnceInitialized_10(bool value)
	{
		___updateOnceInitialized_10 = value;
	}

	inline static int32_t get_offset_of_autoUpdate_11() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___autoUpdate_11)); }
	inline bool get_autoUpdate_11() const { return ___autoUpdate_11; }
	inline bool* get_address_of_autoUpdate_11() { return &___autoUpdate_11; }
	inline void set_autoUpdate_11(bool value)
	{
		___autoUpdate_11 = value;
	}

	inline static int32_t get_offset_of_defaultPhysicsLayer_12() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___defaultPhysicsLayer_12)); }
	inline int32_t get_defaultPhysicsLayer_12() const { return ___defaultPhysicsLayer_12; }
	inline int32_t* get_address_of_defaultPhysicsLayer_12() { return &___defaultPhysicsLayer_12; }
	inline void set_defaultPhysicsLayer_12(int32_t value)
	{
		___defaultPhysicsLayer_12 = value;
	}

	inline static int32_t get_offset_of_surfaceTypes_13() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___surfaceTypes_13)); }
	inline int32_t get_surfaceTypes_13() const { return ___surfaceTypes_13; }
	inline int32_t* get_address_of_surfaceTypes_13() { return &___surfaceTypes_13; }
	inline void set_surfaceTypes_13(int32_t value)
	{
		___surfaceTypes_13 = value;
	}

	inline static int32_t get_offset_of_instantiationBatchRate_14() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___instantiationBatchRate_14)); }
	inline int32_t get_instantiationBatchRate_14() const { return ___instantiationBatchRate_14; }
	inline int32_t* get_address_of_instantiationBatchRate_14() { return &___instantiationBatchRate_14; }
	inline void set_instantiationBatchRate_14(int32_t value)
	{
		___instantiationBatchRate_14 = value;
	}

	inline static int32_t get_offset_of_defaultMaterial_15() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___defaultMaterial_15)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_15() const { return ___defaultMaterial_15; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_15() { return &___defaultMaterial_15; }
	inline void set_defaultMaterial_15(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_15), (void*)value);
	}

	inline static int32_t get_offset_of_defaultWorldMeshMaterial_16() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___defaultWorldMeshMaterial_16)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultWorldMeshMaterial_16() const { return ___defaultWorldMeshMaterial_16; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultWorldMeshMaterial_16() { return &___defaultWorldMeshMaterial_16; }
	inline void set_defaultWorldMeshMaterial_16(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultWorldMeshMaterial_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultWorldMeshMaterial_16), (void*)value);
	}

	inline static int32_t get_offset_of_shouldLoadFromFile_17() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___shouldLoadFromFile_17)); }
	inline bool get_shouldLoadFromFile_17() const { return ___shouldLoadFromFile_17; }
	inline bool* get_address_of_shouldLoadFromFile_17() { return &___shouldLoadFromFile_17; }
	inline void set_shouldLoadFromFile_17(bool value)
	{
		___shouldLoadFromFile_17 = value;
	}

	inline static int32_t get_offset_of_serializedScene_18() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___serializedScene_18)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_serializedScene_18() const { return ___serializedScene_18; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_serializedScene_18() { return &___serializedScene_18; }
	inline void set_serializedScene_18(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___serializedScene_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedScene_18), (void*)value);
	}

	inline static int32_t get_offset_of_createGameObjects_19() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___createGameObjects_19)); }
	inline bool get_createGameObjects_19() const { return ___createGameObjects_19; }
	inline bool* get_address_of_createGameObjects_19() { return &___createGameObjects_19; }
	inline void set_createGameObjects_19(bool value)
	{
		___createGameObjects_19 = value;
	}

	inline static int32_t get_offset_of_requestPlaneData_20() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___requestPlaneData_20)); }
	inline bool get_requestPlaneData_20() const { return ___requestPlaneData_20; }
	inline bool* get_address_of_requestPlaneData_20() { return &___requestPlaneData_20; }
	inline void set_requestPlaneData_20(bool value)
	{
		___requestPlaneData_20 = value;
	}

	inline static int32_t get_offset_of_requestMeshData_21() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___requestMeshData_21)); }
	inline bool get_requestMeshData_21() const { return ___requestMeshData_21; }
	inline bool* get_address_of_requestMeshData_21() { return &___requestMeshData_21; }
	inline void set_requestMeshData_21(bool value)
	{
		___requestMeshData_21 = value;
	}

	inline static int32_t get_offset_of_inferRegions_22() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___inferRegions_22)); }
	inline bool get_inferRegions_22() const { return ___inferRegions_22; }
	inline bool* get_address_of_inferRegions_22() { return &___inferRegions_22; }
	inline void set_inferRegions_22(bool value)
	{
		___inferRegions_22 = value;
	}

	inline static int32_t get_offset_of_firstAutoUpdateDelay_23() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___firstAutoUpdateDelay_23)); }
	inline float get_firstAutoUpdateDelay_23() const { return ___firstAutoUpdateDelay_23; }
	inline float* get_address_of_firstAutoUpdateDelay_23() { return &___firstAutoUpdateDelay_23; }
	inline void set_firstAutoUpdateDelay_23(float value)
	{
		___firstAutoUpdateDelay_23 = value;
	}

	inline static int32_t get_offset_of_worldMeshLevelOfDetail_24() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___worldMeshLevelOfDetail_24)); }
	inline int32_t get_worldMeshLevelOfDetail_24() const { return ___worldMeshLevelOfDetail_24; }
	inline int32_t* get_address_of_worldMeshLevelOfDetail_24() { return &___worldMeshLevelOfDetail_24; }
	inline void set_worldMeshLevelOfDetail_24(int32_t value)
	{
		___worldMeshLevelOfDetail_24 = value;
	}

	inline static int32_t get_offset_of_usePersistentObjects_25() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___usePersistentObjects_25)); }
	inline bool get_usePersistentObjects_25() const { return ___usePersistentObjects_25; }
	inline bool* get_address_of_usePersistentObjects_25() { return &___usePersistentObjects_25; }
	inline void set_usePersistentObjects_25(bool value)
	{
		___usePersistentObjects_25 = value;
	}

	inline static int32_t get_offset_of_queryRadius_26() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___queryRadius_26)); }
	inline float get_queryRadius_26() const { return ___queryRadius_26; }
	inline float* get_address_of_queryRadius_26() { return &___queryRadius_26; }
	inline void set_queryRadius_26(float value)
	{
		___queryRadius_26 = value;
	}

	inline static int32_t get_offset_of_requestOcclusionMask_27() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___requestOcclusionMask_27)); }
	inline bool get_requestOcclusionMask_27() const { return ___requestOcclusionMask_27; }
	inline bool* get_address_of_requestOcclusionMask_27() { return &___requestOcclusionMask_27; }
	inline void set_requestOcclusionMask_27(bool value)
	{
		___requestOcclusionMask_27 = value;
	}

	inline static int32_t get_offset_of_occlusionMaskResolution_28() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___occlusionMaskResolution_28)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_occlusionMaskResolution_28() const { return ___occlusionMaskResolution_28; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_occlusionMaskResolution_28() { return &___occlusionMaskResolution_28; }
	inline void set_occlusionMaskResolution_28(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___occlusionMaskResolution_28 = value;
	}

	inline static int32_t get_offset_of_orientScene_29() { return static_cast<int32_t>(offsetof(SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4, ___orientScene_29)); }
	inline bool get_orientScene_29() const { return ___orientScene_29; }
	inline bool* get_address_of_orientScene_29() { return &___orientScene_29; }
	inline void set_orientScene_29(bool value)
	{
		___orientScene_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialAwarenessObserverProfile__ctor_m8FA65D043D7D8968EC7B46DB2679D6A15A185EEE (BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseSpatialObserver__ctor_mD9D451C721290FC43AF43EA08949FC2E17DD74BF (BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_ReadProfile_mD23F2842546BBC636A9F596698B5B43E8B84C1C3 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_AutoUpdate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_AutoUpdate_mEA86304AE43FEE8F31F547681EC7D48C4BDD2621_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_AutoUpdate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_AutoUpdate_m00605D01067BD86923248743346C3AFBA6E747C2_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_UpdateOnceInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UpdateOnceInitialized_m7BB798027EBB2EF83322BC3F79415DF61EB546A1_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_UpdateOnceInitialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UpdateOnceInitialized_m783A7B3501FDDF49D625EF72B6FCF807C4867FCE_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneUnderstandingObserverProfile_get_DefaultMaterial_m5B31FE67C4EEB2081DB7C658723F25ED520F5083_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_DefaultMaterial(UnityEngine.Material)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultMaterial_m136A84843E7934DB16F5B6CC3038967D77A64484_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultWorldMeshMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneUnderstandingObserverProfile_get_DefaultWorldMeshMaterial_m3D31A7AEC8E16633F4B0D7B7084D55F72CA7D429_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_DefaultWorldMeshMaterial(UnityEngine.Material)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultWorldMeshMaterial_mFB60D03B497B4D07651B221FBB777A0958BFB75A_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_SurfaceTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_SurfaceTypes_m5F64FF1D7886650DFEAE5D744CA8B2E89B2562F6_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_SurfaceTypes(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SurfaceTypes_m9CA3A204565F8AFE1A59631F58C72D5BBD20519B_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestMeshData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestMeshData_mA223BBAF942BE35F91FEE75AE08B106132EA9334_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestMeshData(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestMeshData_m406830EDFA29898EDA8A0AEBF7A64B5818DBC4A4_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestPlaneData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestPlaneData_mFA3213658209F57EE350DDD80868C416FCC191B6_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestPlaneData(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestPlaneData_m327CB885A8A763223941AE0DC906F07AC5337C55_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_InferRegions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_InferRegions_mA522F0782D742AD580E0044DEF58DD24467DA1A6_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_InferRegions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InferRegions_m85EC47A4941B3C17A84F9FAFD467ACACDCC90451_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_CreateGameObjects()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_CreateGameObjects_mE324A920813B9EDB3E45176744B45AF2B1130073_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_CreateGameObjects(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_CreateGameObjects_m3B3F2E29896E4C71AA78E6A93C6B5DBAA4BD01C0_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_UsePersistentObjects()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UsePersistentObjects_m3AD144360683F5EA38CAD0133DDD22CCD7AA6DA3_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_UsePersistentObjects(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UsePersistentObjects_m935E4EAAD7AC8C09024FBEB2AAE97FA7FAD2E05D_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::get_UpdateInterval()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseSpatialAwarenessObserverProfile_get_UpdateInterval_mECC8D5C0A0EA6856D2D4435A3E22C12196172743_inline (BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_UpdateInterval(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_UpdateInterval_m93DC01E983C3E2001B48B60ED010F9621E77E80C_inline (BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_FirstAutoUpdateDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_FirstAutoUpdateDelay_m34F85A502697063C4C51AC3E7ACDD1F3BE57AC29_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_FirstAutoUpdateDelay(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_FirstAutoUpdateDelay_mE59EA46CFB410E10BF63219DCE40DC248BC31ECD_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_ShouldLoadFromFile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_ShouldLoadFromFile_m7F4BC110FDD10066066E280C11AB474FABBC8309_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_ShouldLoadFromFile(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_ShouldLoadFromFile_m9A2960E1D8AC818006EF02EC408DB686E13AEDBA_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_SerializedScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * SceneUnderstandingObserverProfile_get_SerializedScene_mCD0F01CDBDBDBFC7E74607EA7BC275B39C0E2556_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_SerializedScene(UnityEngine.TextAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SerializedScene_m794F7FA6AC6BD607A95DEEC148F6E3E786AD0B88 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_WorldMeshLevelOfDetail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_WorldMeshLevelOfDetail_mC21426254606F053D18B0395B4127E8A0961368A_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_WorldMeshLevelOfDetail(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_WorldMeshLevelOfDetail_mF98C5D9448854BDBE0F6ACD7163962799C14878A_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_InstantiationBatchRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_InstantiationBatchRate_m6EAC0824723F60E1768C69859E2332612872BF73_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_InstantiationBatchRate(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InstantiationBatchRate_m157273B10FE45A5F01B007B8A5CFD851F0453918_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::get_ObservationExtents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialAwarenessObserverProfile_get_ObservationExtents_m7D4C42EEACACD35A18FED274A4D3F596FC3AF2F5_inline (BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::set_ObservationExtents(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObservationExtents_m5ED468CEEAA3219E3A04A748D91D0310CE3E31BF_inline (BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_QueryRadius()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_QueryRadius_mF38C17A85BF7F57CDBBD0645A825D96E73AF56A9_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_QueryRadius(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_QueryRadius_mA3F4313DC1DD80F0FD354CB7CC1DBBC592526EBE_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestOcclusionMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestOcclusionMask_m490CE7736231945A28A0093A5361EF028ED35AC5_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestOcclusionMask(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestOcclusionMask_mE6BE74CD99EAAC95D528DC11432B13FEAB4829CB_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_OcclusionMaskResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  SceneUnderstandingObserverProfile_get_OcclusionMaskResolution_m2EBC2002FF49D6CEDAD252E47FF0AE40FBC08CF3_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_OcclusionMaskResolution(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OcclusionMaskResolution_mBE8DC6BE57DD8C47C274A64BE2D2CD419032EF4B_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_OrientScene()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_OrientScene_mC18FA6CFBE16AF070BF7060F0B04326664779D0C_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_OrientScene(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OrientScene_m00D62F9FC79B9B9C0CF7D30B05483A77951E19CD_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_UpdateOnceInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UpdateOnceInitialized_m7BB798027EBB2EF83322BC3F79415DF61EB546A1 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool UpdateOnceInitialized => updateOnceInitialized;
		bool L_0 = __this->get_updateOnceInitialized_10();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_AutoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_AutoUpdate_mEA86304AE43FEE8F31F547681EC7D48C4BDD2621 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool AutoUpdate => autoUpdate;
		bool L_0 = __this->get_autoUpdate_11();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_DefaultPhysicsLayer_m623F92D5DEEB8B112B30490DD30CC19FC22186BB (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public int DefaultPhysicsLayer => defaultPhysicsLayer;
		int32_t L_0 = __this->get_defaultPhysicsLayer_12();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_SurfaceTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_SurfaceTypes_m5F64FF1D7886650DFEAE5D744CA8B2E89B2562F6 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes => surfaceTypes;
		int32_t L_0 = __this->get_surfaceTypes_13();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_InstantiationBatchRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_InstantiationBatchRate_m6EAC0824723F60E1768C69859E2332612872BF73 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public int InstantiationBatchRate => instantiationBatchRate;
		int32_t L_0 = __this->get_instantiationBatchRate_14();
		return L_0;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneUnderstandingObserverProfile_get_DefaultMaterial_m5B31FE67C4EEB2081DB7C658723F25ED520F5083 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public Material DefaultMaterial => defaultMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_defaultMaterial_15();
		return L_0;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_DefaultWorldMeshMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneUnderstandingObserverProfile_get_DefaultWorldMeshMaterial_m3D31A7AEC8E16633F4B0D7B7084D55F72CA7D429 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public Material DefaultWorldMeshMaterial => defaultWorldMeshMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_defaultWorldMeshMaterial_16();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_ShouldLoadFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_ShouldLoadFromFile_m7F4BC110FDD10066066E280C11AB474FABBC8309 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShouldLoadFromFile => shouldLoadFromFile;
		bool L_0 = __this->get_shouldLoadFromFile_17();
		return L_0;
	}
}
// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_SerializedScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * SceneUnderstandingObserverProfile_get_SerializedScene_mCD0F01CDBDBDBFC7E74607EA7BC275B39C0E2556 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public TextAsset SerializedScene => serializedScene;
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_0 = __this->get_serializedScene_18();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_CreateGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_CreateGameObjects_mE324A920813B9EDB3E45176744B45AF2B1130073 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool CreateGameObjects => createGameObjects;
		bool L_0 = __this->get_createGameObjects_19();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestPlaneData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestPlaneData_mFA3213658209F57EE350DDD80868C416FCC191B6 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequestPlaneData => requestPlaneData;
		bool L_0 = __this->get_requestPlaneData_20();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestMeshData_mA223BBAF942BE35F91FEE75AE08B106132EA9334 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequestMeshData => requestMeshData;
		bool L_0 = __this->get_requestMeshData_21();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_InferRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_InferRegions_mA522F0782D742AD580E0044DEF58DD24467DA1A6 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool InferRegions => inferRegions;
		bool L_0 = __this->get_inferRegions_22();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_FirstAutoUpdateDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_FirstAutoUpdateDelay_m34F85A502697063C4C51AC3E7ACDD1F3BE57AC29 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public float FirstAutoUpdateDelay => firstAutoUpdateDelay;
		float L_0 = __this->get_firstAutoUpdateDelay_23();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_WorldMeshLevelOfDetail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_WorldMeshLevelOfDetail_mC21426254606F053D18B0395B4127E8A0961368A (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail => worldMeshLevelOfDetail;
		int32_t L_0 = __this->get_worldMeshLevelOfDetail_24();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_UsePersistentObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UsePersistentObjects_m3AD144360683F5EA38CAD0133DDD22CCD7AA6DA3 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePersistentObjects => usePersistentObjects;
		bool L_0 = __this->get_usePersistentObjects_25();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_QueryRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_QueryRadius_mF38C17A85BF7F57CDBBD0645A825D96E73AF56A9 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public float QueryRadius => queryRadius;
		float L_0 = __this->get_queryRadius_26();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_RequestOcclusionMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestOcclusionMask_m490CE7736231945A28A0093A5361EF028ED35AC5 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequestOcclusionMask => requestOcclusionMask;
		bool L_0 = __this->get_requestOcclusionMask_27();
		return L_0;
	}
}
// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_OcclusionMaskResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  SceneUnderstandingObserverProfile_get_OcclusionMaskResolution_m2EBC2002FF49D6CEDAD252E47FF0AE40FBC08CF3 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int OcclusionMaskResolution => occlusionMaskResolution;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_occlusionMaskResolution_28();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::get_OrientScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_OrientScene_mC18FA6CFBE16AF070BF7060F0B04326664779D0C (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool OrientScene => orientScene;
		bool L_0 = __this->get_orientScene_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.SceneUnderstandingObserverProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneUnderstandingObserverProfile__ctor_m25DDD0B35546912A285AFD4B3CCBA44667774492 (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// private int defaultPhysicsLayer = 31;
		__this->set_defaultPhysicsLayer_12(((int32_t)31));
		// private SpatialAwarenessSurfaceTypes surfaceTypes =
		//     SpatialAwarenessSurfaceTypes.Floor |
		//     SpatialAwarenessSurfaceTypes.Ceiling |
		//     SpatialAwarenessSurfaceTypes.Wall |
		//     SpatialAwarenessSurfaceTypes.Platform;
		__this->set_surfaceTypes_13(((int32_t)30));
		// private int instantiationBatchRate = 1;
		__this->set_instantiationBatchRate_14(1);
		// private bool createGameObjects = true;
		__this->set_createGameObjects_19((bool)1);
		// private bool requestPlaneData = true;
		__this->set_requestPlaneData_20((bool)1);
		// private bool inferRegions = true;
		__this->set_inferRegions_22((bool)1);
		// private float firstAutoUpdateDelay = 1.0f;
		__this->set_firstAutoUpdateDelay_23((1.0f));
		// private SpatialAwarenessMeshLevelOfDetail worldMeshLevelOfDetail = SpatialAwarenessMeshLevelOfDetail.Medium;
		__this->set_worldMeshLevelOfDetail_24(1);
		// private bool usePersistentObjects = true;
		__this->set_usePersistentObjects_25((bool)1);
		// private float queryRadius = 5.0f;
		__this->set_queryRadius_26((5.0f));
		// private bool requestOcclusionMask = true;
		__this->set_requestOcclusionMask_27((bool)1);
		// private Vector2Int occlusionMaskResolution = new Vector2Int(128, 128);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_0), ((int32_t)128), ((int32_t)128), /*hidden argument*/NULL);
		__this->set_occlusionMaskResolution_28(L_0);
		// private bool orientScene = true;
		__this->set_orientScene_29((bool)1);
		BaseSpatialAwarenessObserverProfile__ctor_m8FA65D043D7D8968EC7B46DB2679D6A15A185EEE(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver__ctor_m09853FD8E544EF9520781323841F55E83A8064E0 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_0 = ___spatialAwarenessSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * L_3 = ___profile3;
		BaseSpatialObserver__ctor_mD9D451C721290FC43AF43EA08949FC2E17DD74BF(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// ReadProfile();
		WindowsSceneUnderstandingObserver_ReadProfile_mD23F2842546BBC636A9F596698B5B43E8B84C1C3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::ReadProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_ReadProfile_mD23F2842546BBC636A9F596698B5B43E8B84C1C3 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8638A036277D99E851CF95C6DE4FE10A47DE9B8);
		s_Il2CppMethodInitialized = true;
	}
	SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * V_0 = NULL;
	{
		// if (ConfigurationProfile == null)
		BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * L_0;
		L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// SceneUnderstandingObserverProfile profile = ConfigurationProfile as SceneUnderstandingObserverProfile;
		BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * L_2;
		L_2 = VirtFuncInvoker0< BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * >::Invoke(22 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 *)IsInstClass((RuntimeObject*)L_2, SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4_il2cpp_TypeInfo_var));
		// if (profile == null)
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogError("Windows Scene Understanding Observer's configuration profile must be a SceneUnderstandingObserverProfile.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD8638A036277D99E851CF95C6DE4FE10A47DE9B8, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002f:
	{
		// AutoUpdate = profile.AutoUpdate;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = SceneUnderstandingObserverProfile_get_AutoUpdate_mEA86304AE43FEE8F31F547681EC7D48C4BDD2621_inline(L_5, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_AutoUpdate_m00605D01067BD86923248743346C3AFBA6E747C2_inline(__this, L_6, /*hidden argument*/NULL);
		// UpdateOnceInitialized = profile.UpdateOnceInitialized;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = SceneUnderstandingObserverProfile_get_UpdateOnceInitialized_m7BB798027EBB2EF83322BC3F79415DF61EB546A1_inline(L_7, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_UpdateOnceInitialized_m783A7B3501FDDF49D625EF72B6FCF807C4867FCE_inline(__this, L_8, /*hidden argument*/NULL);
		// DefaultMaterial = profile.DefaultMaterial;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_9 = V_0;
		NullCheck(L_9);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = SceneUnderstandingObserverProfile_get_DefaultMaterial_m5B31FE67C4EEB2081DB7C658723F25ED520F5083_inline(L_9, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_DefaultMaterial_m136A84843E7934DB16F5B6CC3038967D77A64484_inline(__this, L_10, /*hidden argument*/NULL);
		// DefaultWorldMeshMaterial = profile.DefaultWorldMeshMaterial;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_11 = V_0;
		NullCheck(L_11);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12;
		L_12 = SceneUnderstandingObserverProfile_get_DefaultWorldMeshMaterial_m3D31A7AEC8E16633F4B0D7B7084D55F72CA7D429_inline(L_11, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_DefaultWorldMeshMaterial_mFB60D03B497B4D07651B221FBB777A0958BFB75A_inline(__this, L_12, /*hidden argument*/NULL);
		// SurfaceTypes = profile.SurfaceTypes;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SceneUnderstandingObserverProfile_get_SurfaceTypes_m5F64FF1D7886650DFEAE5D744CA8B2E89B2562F6_inline(L_13, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_SurfaceTypes_m9CA3A204565F8AFE1A59631F58C72D5BBD20519B_inline(__this, L_14, /*hidden argument*/NULL);
		// RequestMeshData = profile.RequestMeshData;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = SceneUnderstandingObserverProfile_get_RequestMeshData_mA223BBAF942BE35F91FEE75AE08B106132EA9334_inline(L_15, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_RequestMeshData_m406830EDFA29898EDA8A0AEBF7A64B5818DBC4A4_inline(__this, L_16, /*hidden argument*/NULL);
		// RequestPlaneData = profile.RequestPlaneData;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = SceneUnderstandingObserverProfile_get_RequestPlaneData_mFA3213658209F57EE350DDD80868C416FCC191B6_inline(L_17, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_RequestPlaneData_m327CB885A8A763223941AE0DC906F07AC5337C55_inline(__this, L_18, /*hidden argument*/NULL);
		// InferRegions = profile.InferRegions;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_19 = V_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = SceneUnderstandingObserverProfile_get_InferRegions_mA522F0782D742AD580E0044DEF58DD24467DA1A6_inline(L_19, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_InferRegions_m85EC47A4941B3C17A84F9FAFD467ACACDCC90451_inline(__this, L_20, /*hidden argument*/NULL);
		// CreateGameObjects = profile.CreateGameObjects;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_21 = V_0;
		NullCheck(L_21);
		bool L_22;
		L_22 = SceneUnderstandingObserverProfile_get_CreateGameObjects_mE324A920813B9EDB3E45176744B45AF2B1130073_inline(L_21, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_CreateGameObjects_m3B3F2E29896E4C71AA78E6A93C6B5DBAA4BD01C0_inline(__this, L_22, /*hidden argument*/NULL);
		// UsePersistentObjects = profile.UsePersistentObjects;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_23 = V_0;
		NullCheck(L_23);
		bool L_24;
		L_24 = SceneUnderstandingObserverProfile_get_UsePersistentObjects_m3AD144360683F5EA38CAD0133DDD22CCD7AA6DA3_inline(L_23, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_UsePersistentObjects_m935E4EAAD7AC8C09024FBEB2AAE97FA7FAD2E05D_inline(__this, L_24, /*hidden argument*/NULL);
		// UpdateInterval = profile.UpdateInterval;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_25 = V_0;
		NullCheck(L_25);
		float L_26;
		L_26 = BaseSpatialAwarenessObserverProfile_get_UpdateInterval_mECC8D5C0A0EA6856D2D4435A3E22C12196172743_inline(L_25, /*hidden argument*/NULL);
		BaseSpatialObserver_set_UpdateInterval_m93DC01E983C3E2001B48B60ED010F9621E77E80C_inline(__this, L_26, /*hidden argument*/NULL);
		// FirstAutoUpdateDelay = profile.FirstAutoUpdateDelay;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_27 = V_0;
		NullCheck(L_27);
		float L_28;
		L_28 = SceneUnderstandingObserverProfile_get_FirstAutoUpdateDelay_m34F85A502697063C4C51AC3E7ACDD1F3BE57AC29_inline(L_27, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_FirstAutoUpdateDelay_mE59EA46CFB410E10BF63219DCE40DC248BC31ECD_inline(__this, L_28, /*hidden argument*/NULL);
		// ShouldLoadFromFile = profile.ShouldLoadFromFile;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_29 = V_0;
		NullCheck(L_29);
		bool L_30;
		L_30 = SceneUnderstandingObserverProfile_get_ShouldLoadFromFile_m7F4BC110FDD10066066E280C11AB474FABBC8309_inline(L_29, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_ShouldLoadFromFile_m9A2960E1D8AC818006EF02EC408DB686E13AEDBA_inline(__this, L_30, /*hidden argument*/NULL);
		// SerializedScene = profile.SerializedScene;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_31 = V_0;
		NullCheck(L_31);
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_32;
		L_32 = SceneUnderstandingObserverProfile_get_SerializedScene_mCD0F01CDBDBDBFC7E74607EA7BC275B39C0E2556_inline(L_31, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_SerializedScene_m794F7FA6AC6BD607A95DEEC148F6E3E786AD0B88(__this, L_32, /*hidden argument*/NULL);
		// WorldMeshLevelOfDetail = profile.WorldMeshLevelOfDetail;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = SceneUnderstandingObserverProfile_get_WorldMeshLevelOfDetail_mC21426254606F053D18B0395B4127E8A0961368A_inline(L_33, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_WorldMeshLevelOfDetail_mF98C5D9448854BDBE0F6ACD7163962799C14878A_inline(__this, L_34, /*hidden argument*/NULL);
		// InstantiationBatchRate = profile.InstantiationBatchRate;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = SceneUnderstandingObserverProfile_get_InstantiationBatchRate_m6EAC0824723F60E1768C69859E2332612872BF73_inline(L_35, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_InstantiationBatchRate_m157273B10FE45A5F01B007B8A5CFD851F0453918_inline(__this, L_36, /*hidden argument*/NULL);
		// ObservationExtents = profile.ObservationExtents;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_37 = V_0;
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = BaseSpatialAwarenessObserverProfile_get_ObservationExtents_m7D4C42EEACACD35A18FED274A4D3F596FC3AF2F5_inline(L_37, /*hidden argument*/NULL);
		BaseSpatialObserver_set_ObservationExtents_m5ED468CEEAA3219E3A04A748D91D0310CE3E31BF_inline(__this, L_38, /*hidden argument*/NULL);
		// QueryRadius = profile.QueryRadius;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_39 = V_0;
		NullCheck(L_39);
		float L_40;
		L_40 = SceneUnderstandingObserverProfile_get_QueryRadius_mF38C17A85BF7F57CDBBD0645A825D96E73AF56A9_inline(L_39, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_QueryRadius_mA3F4313DC1DD80F0FD354CB7CC1DBBC592526EBE_inline(__this, L_40, /*hidden argument*/NULL);
		// RequestOcclusionMask = profile.RequestOcclusionMask;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_41 = V_0;
		NullCheck(L_41);
		bool L_42;
		L_42 = SceneUnderstandingObserverProfile_get_RequestOcclusionMask_m490CE7736231945A28A0093A5361EF028ED35AC5_inline(L_41, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_RequestOcclusionMask_mE6BE74CD99EAAC95D528DC11432B13FEAB4829CB_inline(__this, L_42, /*hidden argument*/NULL);
		// OcclusionMaskResolution = profile.OcclusionMaskResolution;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_43 = V_0;
		NullCheck(L_43);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_44;
		L_44 = SceneUnderstandingObserverProfile_get_OcclusionMaskResolution_m2EBC2002FF49D6CEDAD252E47FF0AE40FBC08CF3_inline(L_43, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_OcclusionMaskResolution_mBE8DC6BE57DD8C47C274A64BE2D2CD419032EF4B_inline(__this, L_44, /*hidden argument*/NULL);
		// OrientScene = profile.OrientScene;
		SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * L_45 = V_0;
		NullCheck(L_45);
		bool L_46;
		L_46 = SceneUnderstandingObserverProfile_get_OrientScene_mC18FA6CFBE16AF070BF7060F0B04326664779D0C_inline(L_45, /*hidden argument*/NULL);
		WindowsSceneUnderstandingObserver_set_OrientScene_m00D62F9FC79B9B9C0CF7D30B05483A77951E19CD_inline(__this, L_46, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_Initialize_mA6A5DFEDF52B320CC18429E93F4D88FF6BE99EF3 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF74DAF63DFBBFE944944E5B82F675D0B045EC0D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// Debug.LogWarning("The required package Microsoft.MixedReality.SceneUnderstanding is not installed or properly configured. Please visit https://docs.microsoft.com/windows/mixed-reality/mrtk-unity/features/spatial-awareness/scene-understanding for more information.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBF74DAF63DFBBFE944944E5B82F675D0B045EC0D, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_Enable_m35C7CF6BB36CD236EB78101DBCD54BD197D872D1 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_Resume_m76CEB1B3A068FF85EEC8261AFC966080D8041DC0 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::Suspend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_Suspend_m9701A911B88E3A5F6F5F80F5602A12E9CA58B1D8 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject> Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_SceneObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsSceneUnderstandingObserver_get_SceneObjects_m1776F8C800574CB8E15A35914EA9793181DBB482 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// get => null;
		return (RuntimeObject*)NULL;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_SurfaceTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSceneUnderstandingObserver_get_SurfaceTypes_mEB6830437E47AEC6E1B539810D4B2E3DB6EDBDF7 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes { get; set; }
		int32_t L_0 = __this->get_U3CSurfaceTypesU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_SurfaceTypes(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SurfaceTypes_m9CA3A204565F8AFE1A59631F58C72D5BBD20519B (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSurfaceTypesU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_ShouldLoadFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_ShouldLoadFromFile_m1499D8E277F0260C439C66E51CB88809613294F2 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShouldLoadFromFile { get; set; }
		bool L_0 = __this->get_U3CShouldLoadFromFileU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_ShouldLoadFromFile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_ShouldLoadFromFile_m9A2960E1D8AC818006EF02EC408DB686E13AEDBA (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShouldLoadFromFile { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShouldLoadFromFileU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_InstantiationBatchRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSceneUnderstandingObserver_get_InstantiationBatchRate_mD9CC67BC44BB35FD75441E158447DD826FFC305B (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public int InstantiationBatchRate { get; set; }
		int32_t L_0 = __this->get_U3CInstantiationBatchRateU3Ek__BackingField_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_InstantiationBatchRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InstantiationBatchRate_m157273B10FE45A5F01B007B8A5CFD851F0453918 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int InstantiationBatchRate { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CInstantiationBatchRateU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_InferRegions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_InferRegions_mB81C245DD2BE8386CF22B908BBEDA19A615650B6 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool InferRegions { get; set; }
		bool L_0 = __this->get_U3CInferRegionsU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_InferRegions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InferRegions_m85EC47A4941B3C17A84F9FAFD467ACACDCC90451 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool InferRegions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CInferRegionsU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_RequestMeshData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_RequestMeshData_m2F3A7A1D4F59554DFA0D4D2F8504911D5F45B396 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequestMeshData { get; set; }
		bool L_0 = __this->get_U3CRequestMeshDataU3Ek__BackingField_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestMeshData_m406830EDFA29898EDA8A0AEBF7A64B5818DBC4A4 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RequestMeshData { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRequestMeshDataU3Ek__BackingField_26(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_RequestPlaneData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_RequestPlaneData_m2D2F7EE646770FA627764E962A2ADA1C8B69F14C (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequestPlaneData { get; set; }
		bool L_0 = __this->get_U3CRequestPlaneDataU3Ek__BackingField_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestPlaneData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestPlaneData_m327CB885A8A763223941AE0DC906F07AC5337C55 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RequestPlaneData { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRequestPlaneDataU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_RequestOcclusionMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_RequestOcclusionMask_mDB577FD6684D122041994743A48CD1284CCC8BA2 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequestOcclusionMask { get; set; }
		bool L_0 = __this->get_U3CRequestOcclusionMaskU3Ek__BackingField_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_RequestOcclusionMask(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestOcclusionMask_mE6BE74CD99EAAC95D528DC11432B13FEAB4829CB (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RequestOcclusionMask { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRequestOcclusionMaskU3Ek__BackingField_28(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_UsePersistentObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_UsePersistentObjects_m398D84AAF8C9319F5C64CD555F4D143325F8D3D4 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePersistentObjects { get; set; }
		bool L_0 = __this->get_U3CUsePersistentObjectsU3Ek__BackingField_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_UsePersistentObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UsePersistentObjects_m935E4EAAD7AC8C09024FBEB2AAE97FA7FAD2E05D (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePersistentObjects { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePersistentObjectsU3Ek__BackingField_29(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_QueryRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindowsSceneUnderstandingObserver_get_QueryRadius_m1ED83779839A2A60A5E711F0B6FC6E1A30EA6BAD (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public float QueryRadius { get; set; }
		float L_0 = __this->get_U3CQueryRadiusU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_QueryRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_QueryRadius_mA3F4313DC1DD80F0FD354CB7CC1DBBC592526EBE (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float QueryRadius { get; set; }
		float L_0 = ___value0;
		__this->set_U3CQueryRadiusU3Ek__BackingField_30(L_0);
		return;
	}
}
// UnityEngine.Vector2Int Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_OcclusionMaskResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  WindowsSceneUnderstandingObserver_get_OcclusionMaskResolution_m6B140A5C81A472310A758F4F54DA9E19B19D892A (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int OcclusionMaskResolution { get; set; }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_U3COcclusionMaskResolutionU3Ek__BackingField_31();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_OcclusionMaskResolution(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OcclusionMaskResolution_mBE8DC6BE57DD8C47C274A64BE2D2CD419032EF4B (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Int OcclusionMaskResolution { get; set; }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = ___value0;
		__this->set_U3COcclusionMaskResolutionU3Ek__BackingField_31(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_CreateGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_CreateGameObjects_mEC5130C44472C26A2D6DEC2DC896074794B249D9 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool CreateGameObjects { get; set; }
		bool L_0 = __this->get_U3CCreateGameObjectsU3Ek__BackingField_32();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_CreateGameObjects(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_CreateGameObjects_m3B3F2E29896E4C71AA78E6A93C6B5DBAA4BD01C0 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CreateGameObjects { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CCreateGameObjectsU3Ek__BackingField_32(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_AutoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_AutoUpdate_mFCA5BBCF60B11A630B228947E7FC269E4D366B8D (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool AutoUpdate { get; set; }
		bool L_0 = __this->get_U3CAutoUpdateU3Ek__BackingField_33();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_AutoUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_AutoUpdate_m00605D01067BD86923248743346C3AFBA6E747C2 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AutoUpdate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CAutoUpdateU3Ek__BackingField_33(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_OrientScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_OrientScene_mA775D1DB4D7FC56AB3F9D94057C9D7AF26F138E5 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool OrientScene { get; set; }
		bool L_0 = __this->get_U3COrientSceneU3Ek__BackingField_34();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_OrientScene(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OrientScene_m00D62F9FC79B9B9C0CF7D30B05483A77951E19CD (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OrientScene { get; set; }
		bool L_0 = ___value0;
		__this->set_U3COrientSceneU3Ek__BackingField_34(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_WorldMeshLevelOfDetail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsSceneUnderstandingObserver_get_WorldMeshLevelOfDetail_m19AD619D44164E600DD2409A43916599938CAFF6 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail { get; set; }
		int32_t L_0 = __this->get_U3CWorldMeshLevelOfDetailU3Ek__BackingField_35();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_WorldMeshLevelOfDetail(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_WorldMeshLevelOfDetail_mF98C5D9448854BDBE0F6ACD7163962799C14878A (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CWorldMeshLevelOfDetailU3Ek__BackingField_35(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::SaveScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_SaveScene_mB8F42E0C5532971933B138573762E3A33E5CB586 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, String_t* ___filenamePrefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD0A92AF1E766DFCDF7986ADF733DD6F143EED0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("SaveScene() only supported at runtime! Ignoring request.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBD0A92AF1E766DFCDF7986ADF733DD6F143EED0B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_FirstAutoUpdateDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WindowsSceneUnderstandingObserver_get_FirstAutoUpdateDelay_mE28E0DB420B2F144635655475A8C9405317565BD (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public float FirstAutoUpdateDelay { get; set; }
		float L_0 = __this->get_U3CFirstAutoUpdateDelayU3Ek__BackingField_36();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_FirstAutoUpdateDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_FirstAutoUpdateDelay_mE59EA46CFB410E10BF63219DCE40DC248BC31ECD (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FirstAutoUpdateDelay { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFirstAutoUpdateDelayU3Ek__BackingField_36(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::UpdateOnDemand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_UpdateOnDemand_mCAA3B3655DE8442C131F34CAE3F8EE59DF7147C9 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_UpdateOnceInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_get_UpdateOnceInitialized_m70D65A19D6969D528843C98A9A4CCCBAA0EC7606 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public bool UpdateOnceInitialized { get; set; }
		bool L_0 = __this->get_U3CUpdateOnceInitializedU3Ek__BackingField_37();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_UpdateOnceInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UpdateOnceInitialized_m783A7B3501FDDF49D625EF72B6FCF807C4867FCE (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UpdateOnceInitialized { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUpdateOnceInitializedU3Ek__BackingField_37(L_0);
		return;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_DefaultMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * WindowsSceneUnderstandingObserver_get_DefaultMaterial_m155C2621DFB572546AA667DE4801D555E9E0EF02 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public Material DefaultMaterial { get; set; } // Need references so they are included for runtime
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_U3CDefaultMaterialU3Ek__BackingField_38();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_DefaultMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultMaterial_m136A84843E7934DB16F5B6CC3038967D77A64484 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method)
{
	{
		// public Material DefaultMaterial { get; set; } // Need references so they are included for runtime
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___value0;
		__this->set_U3CDefaultMaterialU3Ek__BackingField_38(L_0);
		return;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_DefaultWorldMeshMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * WindowsSceneUnderstandingObserver_get_DefaultWorldMeshMaterial_m2BAF85D767305764BF138A90388BE659E6B3B091 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// public Material DefaultWorldMeshMaterial { get; set; } // Need references so they are included for runtime
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_U3CDefaultWorldMeshMaterialU3Ek__BackingField_39();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_DefaultWorldMeshMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultWorldMeshMaterial_mFB60D03B497B4D07651B221FBB777A0958BFB75A (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method)
{
	{
		// public Material DefaultWorldMeshMaterial { get; set; } // Need references so they are included for runtime
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___value0;
		__this->set_U3CDefaultWorldMeshMaterialU3Ek__BackingField_39(L_0);
		return;
	}
}
// UnityEngine.TextAsset Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::get_SerializedScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * WindowsSceneUnderstandingObserver_get_SerializedScene_mBD0B7BA1774E739FDD0F1DAF7B6A810EDF9FF883 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, const RuntimeMethod* method)
{
	{
		// get { return serializedScene; }
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_0 = __this->get_serializedScene_41();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::set_SerializedScene(UnityEngine.TextAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SerializedScene_m794F7FA6AC6BD607A95DEEC148F6E3E786AD0B88 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (serializedScene != value)
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_0 = __this->get_serializedScene_41();
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// serializedScene = value;
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_3 = ___value0;
		__this->set_serializedScene_41(L_3);
		// sceneBytes = serializedScene.bytes;
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_4 = __this->get_serializedScene_41();
		NullCheck(L_4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F(L_4, /*hidden argument*/NULL);
		__this->set_sceneBytes_40(L_5);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::TryGetOcclusionMask(System.Int32,System.UInt16,System.UInt16,System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_TryGetOcclusionMask_mFAE2C174B7D32116E49001C60FDD4E7559E02782 (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___quadId0, uint16_t ___textureWidth1, uint16_t ___textureHeight2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___mask3, const RuntimeMethod* method)
{
	{
		// mask = null;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = ___mask3;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsSceneUnderstanding.Experimental.WindowsSceneUnderstandingObserver::TryFindCentermostPlacement(System.Int32,UnityEngine.Vector2,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsSceneUnderstandingObserver_TryFindCentermostPlacement_m2148FCB9A01442866FF9F853895C7D371808ACDA (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___quadId0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___objExtents1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___placementPosOnQuad2, const RuntimeMethod* method)
{
	{
		// placementPosOnQuad = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___placementPosOnQuad2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_AutoUpdate_mEA86304AE43FEE8F31F547681EC7D48C4BDD2621_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool AutoUpdate => autoUpdate;
		bool L_0 = __this->get_autoUpdate_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_AutoUpdate_m00605D01067BD86923248743346C3AFBA6E747C2_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool AutoUpdate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CAutoUpdateU3Ek__BackingField_33(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UpdateOnceInitialized_m7BB798027EBB2EF83322BC3F79415DF61EB546A1_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool UpdateOnceInitialized => updateOnceInitialized;
		bool L_0 = __this->get_updateOnceInitialized_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UpdateOnceInitialized_m783A7B3501FDDF49D625EF72B6FCF807C4867FCE_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UpdateOnceInitialized { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUpdateOnceInitializedU3Ek__BackingField_37(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneUnderstandingObserverProfile_get_DefaultMaterial_m5B31FE67C4EEB2081DB7C658723F25ED520F5083_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public Material DefaultMaterial => defaultMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_defaultMaterial_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultMaterial_m136A84843E7934DB16F5B6CC3038967D77A64484_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method)
{
	{
		// public Material DefaultMaterial { get; set; } // Need references so they are included for runtime
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___value0;
		__this->set_U3CDefaultMaterialU3Ek__BackingField_38(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneUnderstandingObserverProfile_get_DefaultWorldMeshMaterial_m3D31A7AEC8E16633F4B0D7B7084D55F72CA7D429_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public Material DefaultWorldMeshMaterial => defaultWorldMeshMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_defaultWorldMeshMaterial_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_DefaultWorldMeshMaterial_mFB60D03B497B4D07651B221FBB777A0958BFB75A_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method)
{
	{
		// public Material DefaultWorldMeshMaterial { get; set; } // Need references so they are included for runtime
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___value0;
		__this->set_U3CDefaultWorldMeshMaterialU3Ek__BackingField_39(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_SurfaceTypes_m5F64FF1D7886650DFEAE5D744CA8B2E89B2562F6_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes => surfaceTypes;
		int32_t L_0 = __this->get_surfaceTypes_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_SurfaceTypes_m9CA3A204565F8AFE1A59631F58C72D5BBD20519B_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessSurfaceTypes SurfaceTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSurfaceTypesU3Ek__BackingField_22(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestMeshData_mA223BBAF942BE35F91FEE75AE08B106132EA9334_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequestMeshData => requestMeshData;
		bool L_0 = __this->get_requestMeshData_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestMeshData_m406830EDFA29898EDA8A0AEBF7A64B5818DBC4A4_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RequestMeshData { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRequestMeshDataU3Ek__BackingField_26(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestPlaneData_mFA3213658209F57EE350DDD80868C416FCC191B6_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequestPlaneData => requestPlaneData;
		bool L_0 = __this->get_requestPlaneData_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestPlaneData_m327CB885A8A763223941AE0DC906F07AC5337C55_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RequestPlaneData { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRequestPlaneDataU3Ek__BackingField_27(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_InferRegions_mA522F0782D742AD580E0044DEF58DD24467DA1A6_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool InferRegions => inferRegions;
		bool L_0 = __this->get_inferRegions_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InferRegions_m85EC47A4941B3C17A84F9FAFD467ACACDCC90451_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool InferRegions { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CInferRegionsU3Ek__BackingField_25(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_CreateGameObjects_mE324A920813B9EDB3E45176744B45AF2B1130073_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool CreateGameObjects => createGameObjects;
		bool L_0 = __this->get_createGameObjects_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_CreateGameObjects_m3B3F2E29896E4C71AA78E6A93C6B5DBAA4BD01C0_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CreateGameObjects { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CCreateGameObjectsU3Ek__BackingField_32(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_UsePersistentObjects_m3AD144360683F5EA38CAD0133DDD22CCD7AA6DA3_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePersistentObjects => usePersistentObjects;
		bool L_0 = __this->get_usePersistentObjects_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_UsePersistentObjects_m935E4EAAD7AC8C09024FBEB2AAE97FA7FAD2E05D_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePersistentObjects { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePersistentObjectsU3Ek__BackingField_29(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseSpatialAwarenessObserverProfile_get_UpdateInterval_mECC8D5C0A0EA6856D2D4435A3E22C12196172743_inline (BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05 * __this, const RuntimeMethod* method)
{
	{
		// public float UpdateInterval => updateInterval;
		float L_0 = __this->get_updateInterval_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_UpdateInterval_m93DC01E983C3E2001B48B60ED010F9621E77E80C_inline (BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float UpdateInterval { get; set; } = 3.5f; // 3.5 seconds
		float L_0 = ___value0;
		__this->set_U3CUpdateIntervalU3Ek__BackingField_21(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_FirstAutoUpdateDelay_m34F85A502697063C4C51AC3E7ACDD1F3BE57AC29_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public float FirstAutoUpdateDelay => firstAutoUpdateDelay;
		float L_0 = __this->get_firstAutoUpdateDelay_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_FirstAutoUpdateDelay_mE59EA46CFB410E10BF63219DCE40DC248BC31ECD_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FirstAutoUpdateDelay { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFirstAutoUpdateDelayU3Ek__BackingField_36(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_ShouldLoadFromFile_m7F4BC110FDD10066066E280C11AB474FABBC8309_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool ShouldLoadFromFile => shouldLoadFromFile;
		bool L_0 = __this->get_shouldLoadFromFile_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_ShouldLoadFromFile_m9A2960E1D8AC818006EF02EC408DB686E13AEDBA_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool ShouldLoadFromFile { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CShouldLoadFromFileU3Ek__BackingField_23(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * SceneUnderstandingObserverProfile_get_SerializedScene_mCD0F01CDBDBDBFC7E74607EA7BC275B39C0E2556_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public TextAsset SerializedScene => serializedScene;
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_0 = __this->get_serializedScene_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_WorldMeshLevelOfDetail_mC21426254606F053D18B0395B4127E8A0961368A_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail => worldMeshLevelOfDetail;
		int32_t L_0 = __this->get_worldMeshLevelOfDetail_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_WorldMeshLevelOfDetail_mF98C5D9448854BDBE0F6ACD7163962799C14878A_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public SpatialAwarenessMeshLevelOfDetail WorldMeshLevelOfDetail { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CWorldMeshLevelOfDetailU3Ek__BackingField_35(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneUnderstandingObserverProfile_get_InstantiationBatchRate_m6EAC0824723F60E1768C69859E2332612872BF73_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public int InstantiationBatchRate => instantiationBatchRate;
		int32_t L_0 = __this->get_instantiationBatchRate_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_InstantiationBatchRate_m157273B10FE45A5F01B007B8A5CFD851F0453918_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int InstantiationBatchRate { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CInstantiationBatchRateU3Ek__BackingField_24(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialAwarenessObserverProfile_get_ObservationExtents_m7D4C42EEACACD35A18FED274A4D3F596FC3AF2F5_inline (BaseSpatialAwarenessObserverProfile_t65DF5976FB34B414497381F5825588C588415C05 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents => observationExtents;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_observationExtents_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseSpatialObserver_set_ObservationExtents_m5ED468CEEAA3219E3A04A748D91D0310CE3E31BF_inline (BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_U3CObservationExtentsU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneUnderstandingObserverProfile_get_QueryRadius_mF38C17A85BF7F57CDBBD0645A825D96E73AF56A9_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public float QueryRadius => queryRadius;
		float L_0 = __this->get_queryRadius_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_QueryRadius_mA3F4313DC1DD80F0FD354CB7CC1DBBC592526EBE_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float QueryRadius { get; set; }
		float L_0 = ___value0;
		__this->set_U3CQueryRadiusU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_RequestOcclusionMask_m490CE7736231945A28A0093A5361EF028ED35AC5_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool RequestOcclusionMask => requestOcclusionMask;
		bool L_0 = __this->get_requestOcclusionMask_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_RequestOcclusionMask_mE6BE74CD99EAAC95D528DC11432B13FEAB4829CB_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool RequestOcclusionMask { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CRequestOcclusionMaskU3Ek__BackingField_28(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  SceneUnderstandingObserverProfile_get_OcclusionMaskResolution_m2EBC2002FF49D6CEDAD252E47FF0AE40FBC08CF3_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int OcclusionMaskResolution => occlusionMaskResolution;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_occlusionMaskResolution_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OcclusionMaskResolution_mBE8DC6BE57DD8C47C274A64BE2D2CD419032EF4B_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2Int OcclusionMaskResolution { get; set; }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = ___value0;
		__this->set_U3COcclusionMaskResolutionU3Ek__BackingField_31(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneUnderstandingObserverProfile_get_OrientScene_mC18FA6CFBE16AF070BF7060F0B04326664779D0C_inline (SceneUnderstandingObserverProfile_tA4EE106C087BF50F2A8862171AAD5D3804008EF4 * __this, const RuntimeMethod* method)
{
	{
		// public bool OrientScene => orientScene;
		bool L_0 = __this->get_orientScene_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsSceneUnderstandingObserver_set_OrientScene_m00D62F9FC79B9B9C0CF7D30B05483A77951E19CD_inline (WindowsSceneUnderstandingObserver_tFC5F0C922F30C1DD1F53194597CE4EC0D2E37F91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OrientScene { get; set; }
		bool L_0 = ___value0;
		__this->set_U3COrientSceneU3Ek__BackingField_34(L_0);
		return;
	}
}
