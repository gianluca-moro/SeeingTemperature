#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem[]
struct XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual
struct BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual
struct ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t063D0EA483485B6D709977E7F4462E3731048173;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral54D70F3C5F44278C054CF3FB5ABAD3E4F00CAB12;
IL2CPP_EXTERN_C String_t* _stringLiteral6B05A48D559A106AA113C27CF6FB5433A6F2A646;
IL2CPP_EXTERN_C String_t* _stringLiteral73BD705371F6F76E4B2220CB27E7D2462676AB56;
IL2CPP_EXTERN_C String_t* _stringLiteral94F959FA44A6F233489BB7CFD109C9933D03C86B;
IL2CPP_EXTERN_C String_t* _stringLiteralA192EC5B45A30530ADDE5C1632196DCCF679B9C2;
IL2CPP_EXTERN_C String_t* _stringLiteralCD7CB0336FE46A3623C8B1B5409F67F0FD2BFA5B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0C77E187BA75E078CCF43F1C05C91B7BE51619;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m965435E8B1A526DA58EE2BF9D23D9593B758F0AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m260D606E1EF659DB2F8EF5AA1CD75F4C9731F05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m16C2BE2C4F2D7C18A3EF115573BF3DE2416798EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_mC58D89B45162CB184538C25AE9CF148467DB27B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m813E673677879A74DAFEAEAD08CE3369C5B30C55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA342648D5AD9A5257CAEB13BE9446EE3A4FD563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD_m3E8B8F1977A591C483278A261B5094C8DD9C3976_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF0B1D9A3C3F4F3E037DA7253FE994D7DBC11F632 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3, ____items_1)); }
	inline XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* get__items_1() const { return ____items_1; }
	inline XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3_StaticFields, ____emptyArray_5)); }
	inline XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

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


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
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

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310, ___list_0)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_list_0() const { return ___list_0; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310, ___current_3)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_current_3() const { return ___current_3; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
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


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD  : public SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F
{
public:
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_DefaultConfigurationChooser_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * ___m_ConfigurationChooser_5;

public:
	inline static int32_t get_offset_of_m_DefaultConfigurationChooser_4() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_DefaultConfigurationChooser_4)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_DefaultConfigurationChooser_4() const { return ___m_DefaultConfigurationChooser_4; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_DefaultConfigurationChooser_4() { return &___m_DefaultConfigurationChooser_4; }
	inline void set_m_DefaultConfigurationChooser_4(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_DefaultConfigurationChooser_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultConfigurationChooser_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigurationChooser_5() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_ConfigurationChooser_5)); }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * get_m_ConfigurationChooser_5() const { return ___m_ConfigurationChooser_5; }
	inline ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 ** get_address_of_m_ConfigurationChooser_5() { return &___m_ConfigurationChooser_5; }
	inline void set_m_ConfigurationChooser_5(ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * value)
	{
		___m_ConfigurationChooser_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigurationChooser_5), (void*)value);
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A  : public BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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

// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D  : public BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<TrackingLost>k__BackingField
	bool ___U3CTrackingLostU3Ek__BackingField_9;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingLost>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingLostU3Ek__BackingField_10;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingRestored>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingRestoredU3Ek__BackingField_11;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::profile
	LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * ___profile_12;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::visual
	RuntimeObject* ___visual_13;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::cullingMaskOnTrackingLost
	int32_t ___cullingMaskOnTrackingLost_14;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::timeScaleOnTrackingLost
	float ___timeScaleOnTrackingLost_15;
	// UnityEngine.XR.ARSubsystems.TrackingState Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::lastTrackingState
	int32_t ___lastTrackingState_16;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::lastNotTrackingReason
	int32_t ___lastNotTrackingReason_17;

public:
	inline static int32_t get_offset_of_U3CTrackingLostU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___U3CTrackingLostU3Ek__BackingField_9)); }
	inline bool get_U3CTrackingLostU3Ek__BackingField_9() const { return ___U3CTrackingLostU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CTrackingLostU3Ek__BackingField_9() { return &___U3CTrackingLostU3Ek__BackingField_9; }
	inline void set_U3CTrackingLostU3Ek__BackingField_9(bool value)
	{
		___U3CTrackingLostU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3COnTrackingLostU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___U3COnTrackingLostU3Ek__BackingField_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingLostU3Ek__BackingField_10() const { return ___U3COnTrackingLostU3Ek__BackingField_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingLostU3Ek__BackingField_10() { return &___U3COnTrackingLostU3Ek__BackingField_10; }
	inline void set_U3COnTrackingLostU3Ek__BackingField_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingLostU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingLostU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTrackingRestoredU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___U3COnTrackingRestoredU3Ek__BackingField_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingRestoredU3Ek__BackingField_11() const { return ___U3COnTrackingRestoredU3Ek__BackingField_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingRestoredU3Ek__BackingField_11() { return &___U3COnTrackingRestoredU3Ek__BackingField_11; }
	inline void set_U3COnTrackingRestoredU3Ek__BackingField_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingRestoredU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingRestoredU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_profile_12() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___profile_12)); }
	inline LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * get_profile_12() const { return ___profile_12; }
	inline LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE ** get_address_of_profile_12() { return &___profile_12; }
	inline void set_profile_12(LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * value)
	{
		___profile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_12), (void*)value);
	}

	inline static int32_t get_offset_of_visual_13() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___visual_13)); }
	inline RuntimeObject* get_visual_13() const { return ___visual_13; }
	inline RuntimeObject** get_address_of_visual_13() { return &___visual_13; }
	inline void set_visual_13(RuntimeObject* value)
	{
		___visual_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visual_13), (void*)value);
	}

	inline static int32_t get_offset_of_cullingMaskOnTrackingLost_14() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___cullingMaskOnTrackingLost_14)); }
	inline int32_t get_cullingMaskOnTrackingLost_14() const { return ___cullingMaskOnTrackingLost_14; }
	inline int32_t* get_address_of_cullingMaskOnTrackingLost_14() { return &___cullingMaskOnTrackingLost_14; }
	inline void set_cullingMaskOnTrackingLost_14(int32_t value)
	{
		___cullingMaskOnTrackingLost_14 = value;
	}

	inline static int32_t get_offset_of_timeScaleOnTrackingLost_15() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___timeScaleOnTrackingLost_15)); }
	inline float get_timeScaleOnTrackingLost_15() const { return ___timeScaleOnTrackingLost_15; }
	inline float* get_address_of_timeScaleOnTrackingLost_15() { return &___timeScaleOnTrackingLost_15; }
	inline void set_timeScaleOnTrackingLost_15(float value)
	{
		___timeScaleOnTrackingLost_15 = value;
	}

	inline static int32_t get_offset_of_lastTrackingState_16() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___lastTrackingState_16)); }
	inline int32_t get_lastTrackingState_16() const { return ___lastTrackingState_16; }
	inline int32_t* get_address_of_lastTrackingState_16() { return &___lastTrackingState_16; }
	inline void set_lastTrackingState_16(int32_t value)
	{
		___lastTrackingState_16 = value;
	}

	inline static int32_t get_offset_of_lastNotTrackingReason_17() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D, ___lastNotTrackingReason_17)); }
	inline int32_t get_lastNotTrackingReason_17() const { return ___lastNotTrackingReason_17; }
	inline int32_t* get_address_of_lastNotTrackingReason_17() { return &___lastNotTrackingReason_17; }
	inline void set_lastNotTrackingReason_17(int32_t value)
	{
		___lastNotTrackingReason_17 = value;
	}
};

struct LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DisableTrackingLostVisualPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___EnableTrackingLostVisualPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetTrackingLostPerfMarker_21;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::sessionSubsystem
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___sessionSubsystem_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem> Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::XRSessionSubsystems
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___XRSessionSubsystems_23;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_18() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___UpdatePerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_18() const { return ___UpdatePerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_18() { return &___UpdatePerfMarker_18; }
	inline void set_UpdatePerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_DisableTrackingLostVisualPerfMarker_19() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___DisableTrackingLostVisualPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DisableTrackingLostVisualPerfMarker_19() const { return ___DisableTrackingLostVisualPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DisableTrackingLostVisualPerfMarker_19() { return &___DisableTrackingLostVisualPerfMarker_19; }
	inline void set_DisableTrackingLostVisualPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DisableTrackingLostVisualPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_EnableTrackingLostVisualPerfMarker_20() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___EnableTrackingLostVisualPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_EnableTrackingLostVisualPerfMarker_20() const { return ___EnableTrackingLostVisualPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_EnableTrackingLostVisualPerfMarker_20() { return &___EnableTrackingLostVisualPerfMarker_20; }
	inline void set_EnableTrackingLostVisualPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___EnableTrackingLostVisualPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_SetTrackingLostPerfMarker_21() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___SetTrackingLostPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetTrackingLostPerfMarker_21() const { return ___SetTrackingLostPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetTrackingLostPerfMarker_21() { return &___SetTrackingLostPerfMarker_21; }
	inline void set_SetTrackingLostPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetTrackingLostPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_sessionSubsystem_22() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___sessionSubsystem_22)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_sessionSubsystem_22() const { return ___sessionSubsystem_22; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_sessionSubsystem_22() { return &___sessionSubsystem_22; }
	inline void set_sessionSubsystem_22(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___sessionSubsystem_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionSubsystem_22), (void*)value);
	}

	inline static int32_t get_offset_of_XRSessionSubsystems_23() { return static_cast<int32_t>(offsetof(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields, ___XRSessionSubsystems_23)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_XRSessionSubsystems_23() const { return ___XRSessionSubsystems_23; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_XRSessionSubsystems_23() { return &___XRSessionSubsystems_23; }
	inline void set_XRSessionSubsystems_23(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___XRSessionSubsystems_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XRSessionSubsystems_23), (void*)value);
	}
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE  : public BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostVisualPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___trackingLostVisualPrefab_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostVisualLayer
	int32_t ___trackingLostVisualLayer_6;
	// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostCullingMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___trackingLostCullingMask_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::haltTimeWhileTrackingLost
	bool ___haltTimeWhileTrackingLost_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::haltAudioWhileTrackingLost
	bool ___haltAudioWhileTrackingLost_9;

public:
	inline static int32_t get_offset_of_trackingLostVisualPrefab_5() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE, ___trackingLostVisualPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_trackingLostVisualPrefab_5() const { return ___trackingLostVisualPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_trackingLostVisualPrefab_5() { return &___trackingLostVisualPrefab_5; }
	inline void set_trackingLostVisualPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___trackingLostVisualPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingLostVisualPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_trackingLostVisualLayer_6() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE, ___trackingLostVisualLayer_6)); }
	inline int32_t get_trackingLostVisualLayer_6() const { return ___trackingLostVisualLayer_6; }
	inline int32_t* get_address_of_trackingLostVisualLayer_6() { return &___trackingLostVisualLayer_6; }
	inline void set_trackingLostVisualLayer_6(int32_t value)
	{
		___trackingLostVisualLayer_6 = value;
	}

	inline static int32_t get_offset_of_trackingLostCullingMask_7() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE, ___trackingLostCullingMask_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_trackingLostCullingMask_7() const { return ___trackingLostCullingMask_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_trackingLostCullingMask_7() { return &___trackingLostCullingMask_7; }
	inline void set_trackingLostCullingMask_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___trackingLostCullingMask_7 = value;
	}

	inline static int32_t get_offset_of_haltTimeWhileTrackingLost_8() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE, ___haltTimeWhileTrackingLost_8)); }
	inline bool get_haltTimeWhileTrackingLost_8() const { return ___haltTimeWhileTrackingLost_8; }
	inline bool* get_address_of_haltTimeWhileTrackingLost_8() { return &___haltTimeWhileTrackingLost_8; }
	inline void set_haltTimeWhileTrackingLost_8(bool value)
	{
		___haltTimeWhileTrackingLost_8 = value;
	}

	inline static int32_t get_offset_of_haltAudioWhileTrackingLost_9() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE, ___haltAudioWhileTrackingLost_9)); }
	inline bool get_haltAudioWhileTrackingLost_9() const { return ___haltAudioWhileTrackingLost_9; }
	inline bool* get_address_of_haltAudioWhileTrackingLost_9() { return &___haltAudioWhileTrackingLost_9; }
	inline void set_haltAudioWhileTrackingLost_9(bool value)
	{
		___haltAudioWhileTrackingLost_9 = value;
	}
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual
struct BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::gridRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___gridRenderer_4;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::loopClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___loopClip_5;
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_6;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::pulseTimer
	float ___pulseTimer_7;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::pulseDuration
	float ___pulseDuration_8;

public:
	inline static int32_t get_offset_of_gridRenderer_4() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769, ___gridRenderer_4)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_gridRenderer_4() const { return ___gridRenderer_4; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_gridRenderer_4() { return &___gridRenderer_4; }
	inline void set_gridRenderer_4(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___gridRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopClip_5() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769, ___loopClip_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_loopClip_5() const { return ___loopClip_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_loopClip_5() { return &___loopClip_5; }
	inline void set_loopClip_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___loopClip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopClip_5), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769, ___audioSource_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_pulseTimer_7() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769, ___pulseTimer_7)); }
	inline float get_pulseTimer_7() const { return ___pulseTimer_7; }
	inline float* get_address_of_pulseTimer_7() { return &___pulseTimer_7; }
	inline void set_pulseTimer_7(float value)
	{
		___pulseTimer_7 = value;
	}

	inline static int32_t get_offset_of_pulseDuration_8() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769, ___pulseDuration_8)); }
	inline float get_pulseDuration_8() const { return ___pulseDuration_8; }
	inline float* get_address_of_pulseDuration_8() { return &___pulseDuration_8; }
	inline void set_pulseDuration_8(float value)
	{
		___pulseDuration_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___subsystems0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m8D26B36A8EFEA29468CCEE69C1A2CF81E657AA8D (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_mFE834D9716EBD99F3A6C2E967254C050D737D79D_inline (BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_mBB2B18F97FC1E174461F532AB58AB9977C570E45 (BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile2, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_SessionSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * LostTrackingService_get_SessionSubsystem_m25E6D077E85EC52CA0B1DC854C3D0FD14E0E1F05 (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m246F2689B2570E42A8BEA8D574A202A4989FEA4F (BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_SetTrackingLost_mD183D182A24E94A78BBE838941EAD148714CF37F (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, bool ___trackingLost0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m59038EC9065B131E53ADC161CAE0D72F4C5F5DD5 (const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltTimeWhileTrackingLost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m5D333A5647865ACB2B1EA79B7EE2B4F1ADE18CA8_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltAudioOnTrackingLost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m39459377E2A7013B1D7ED62846D937C700B46DBC_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_m31B1DCCAD9D3B48EEE8A6F221FD550F2CBAED389 (bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m8AE4BFB2D9166267E89E662EF802B09A4FCFF91D_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual>()
inline RuntimeObject* GameObject_GetComponentInChildren_TisILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_mC58D89B45162CB184538C25AE9CF148467DB27B1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostCullingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LostTrackingServiceProfile_get_TrackingLostCullingMask_m1FFC49355D348984331C8B7D95C1A7AE0363924D_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_m6278076B0A351EB7CA01235A781593BFC9E960FD_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_TrackingLost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_m97C5E8928D92794CD4CED1BA8AA9CECA9AB4E309_inline (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_TrackingLost(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m56BB1B8E5CA81BC7A7D216C32C19F9595BFDF09B_inline (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, bool ___value0, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingLost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingLost_m13591A64B213208D6F1340736828767FB0A41D14_inline (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_EnableTrackingLostVisual_mE75F10FFF159182C4036A67E2C4E9C445E20B699 (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingRestored()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingRestored_m4E2AC05110C7C4E5B44696F4074B5F37079D3A65_inline (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_DisableTrackingLostVisual_m3FA8213E6A3B58D785492CF63FBDD3CE336F381D (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline (SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD_m3E8B8F1977A591C483278A261B5094C8DD9C3976 (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___subsystems0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared)(___subsystems0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::GetEnumerator()
inline Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310  List_1_GetEnumerator_m813E673677879A74DAFEAEAD08CE3369C5B30C55 (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310  (*) (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::get_Current()
inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * Enumerator_get_Current_m16C2BE2C4F2D7C18A3EF115573BF3DE2416798EA_inline (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * (*) (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m260D606E1EF659DB2F8EF5AA1CD75F4C9731F05E (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::Dispose()
inline void Enumerator_Dispose_m965435E8B1A526DA58EE2BF9D23D9593B758F0AD (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void List_1__ctor_mDA342648D5AD9A5257CAEB13BE9446EE3A4FD563 (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMask_set_value_mE825B6131A75814FCF2EA32ECBE2A205E6531585 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mF709430A064018C3B2A996A5F7950053A00EC14C (BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BasicLostTrackingVisual_get_Enabled_mFD4C275518A3B57F373A3C413B5ECFCD4A2E7414 (BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769 * __this, const RuntimeMethod* method)
{
	{
		// get { return gameObject.activeSelf; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_set_Enabled_m8E866C50F343B41F4E40CA827930A373E6EE81B2 (BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { gameObject.SetActive(value); }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_1 = ___value0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// set { gameObject.SetActive(value); }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::ResetVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_ResetVisual_mD35D499A9608092A7451AF9074C1CD2205F16AF8 (BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94F959FA44A6F233489BB7CFD109C9933D03C86B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audioSource != null && loopClip != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_loopClip_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// audioSource.clip = loopClip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_loopClip_5();
		NullCheck(L_4);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_4, L_5, /*hidden argument*/NULL);
		// audioSource.loop = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_audioSource_6();
		NullCheck(L_6);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_6, (bool)1, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSource_6();
		NullCheck(L_7);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// pulseTimer = 0.0f;
		__this->set_pulseTimer_7((0.0f));
		// if (gridRenderer != null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_8 = __this->get_gridRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// gridRenderer.material.SetFloat("_Pulse_", 0.0f);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_10 = __this->get_gridRenderer_4();
		NullCheck(L_10);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11;
		L_11 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_11, _stringLiteral94F959FA44A6F233489BB7CFD109C9933D03C86B, (0.0f), /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::SetLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_SetLayer_mB020E0075AA777495834B6F39B9445529CD593E7 (BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769 * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1;
		L_1 = Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C(L_0, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0022;
	}

IL_0010:
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// child.gameObject.layer = layer;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___layer0;
		NullCheck(L_6);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		int32_t L_9 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_Update_m6A4410814856216D11A6BBFF3BA99EFA7D84F2BB (BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94F959FA44A6F233489BB7CFD109C9933D03C86B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA192EC5B45A30530ADDE5C1632196DCCF679B9C2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// pulseTimer += Time.unscaledDeltaTime;
		float L_0 = __this->get_pulseTimer_7();
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		__this->set_pulseTimer_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// float normalizedPulseValue = Mathf.Clamp01(pulseTimer / pulseDuration);
		float L_2 = __this->get_pulseTimer_7();
		float L_3 = __this->get_pulseDuration_8();
		float L_4;
		L_4 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		// if (pulseTimer >= pulseDuration)
		float L_5 = __this->get_pulseTimer_7();
		float L_6 = __this->get_pulseDuration_8();
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_003e;
		}
	}
	{
		// pulseTimer = 0;
		__this->set_pulseTimer_7((0.0f));
	}

IL_003e:
	{
		// if (gridRenderer != null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_7 = __this->get_gridRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_008c;
		}
	}
	{
		// gridRenderer.material.SetFloat("_Pulse_", normalizedPulseValue);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_9 = __this->get_gridRenderer_4();
		NullCheck(L_9);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_9, /*hidden argument*/NULL);
		float L_11 = V_0;
		NullCheck(L_10);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_10, _stringLiteral94F959FA44A6F233489BB7CFD109C9933D03C86B, L_11, /*hidden argument*/NULL);
		// gridRenderer.material.SetVector("_Pulse_Origin_", gridRenderer.transform.position);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_12 = __this->get_gridRenderer_4();
		NullCheck(L_12);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13;
		L_13 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_12, /*hidden argument*/NULL);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_14 = __this->get_gridRenderer_4();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_17;
		L_17 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_13, _stringLiteralA192EC5B45A30530ADDE5C1632196DCCF679B9C2, L_17, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual__ctor_m96D316F79B21C8EF5D69B47F59A09E0D3C12E449 (BasicLostTrackingVisual_t4B8901C3C71419D06A7A3F25E4118F847207D769 * __this, const RuntimeMethod* method)
{
	{
		// private float pulseDuration = 2.0f;
		__this->set_pulseDuration_8((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_TrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_m97C5E8928D92794CD4CED1BA8AA9CECA9AB4E309 (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = __this->get_U3CTrackingLostU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_TrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m56BB1B8E5CA81BC7A7D216C32C19F9595BFDF09B (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CTrackingLostU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingLost_m13591A64B213208D6F1340736828767FB0A41D14 (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTrackingLostU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_OnTrackingLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_OnTrackingLost_m3A0C4FF65B30877F5CB996CB2192E60824908840 (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnTrackingLostU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingRestored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingRestored_m4E2AC05110C7C4E5B44696F4074B5F37079D3A65 (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTrackingRestoredU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_OnTrackingRestored(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_OnTrackingRestored_m388FE947D67B30D9C9CF45A586E62D666D92DD1C (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnTrackingRestoredU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m55AF2289D146CA05D406B474B4F442222478BDAD (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, RuntimeObject* ___registrar0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile) : this(name, priority, profile)
		String_t* L_0 = ___name1;
		uint32_t L_1 = ___priority2;
		BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * L_2 = ___profile3;
		LostTrackingService__ctor_m8D26B36A8EFEA29468CCEE69C1A2CF81E657AA8D(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_3 = ___registrar0;
		BaseExtensionService_set_Registrar_mFE834D9716EBD99F3A6C2E967254C050D737D79D_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m8D26B36A8EFEA29468CCEE69C1A2CF81E657AA8D (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_0 = ___name0;
		uint32_t L_1 = ___priority1;
		BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * L_2 = ___profile2;
		BaseExtensionService__ctor_mBB2B18F97FC1E174461F532AB58AB9977C570E45(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// this.profile = profile as LostTrackingServiceProfile;
		BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * L_3 = ___profile2;
		__this->set_profile_12(((LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE *)IsInstClass((RuntimeObject*)L_3, LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_Initialize_m84C7F674E6F5E75B88449B719D6B46DF2DE4DD04 (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_Update_m661B9B75ED7AFC3B9F5359CA4B9F53BC3F1E59B4 (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_18();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// XRSessionSubsystem sessionSubsystem = SessionSubsystem;
			IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_2;
			L_2 = LostTrackingService_get_SessionSubsystem_m25E6D077E85EC52CA0B1DC854C3D0FD14E0E1F05(/*hidden argument*/NULL);
			V_2 = L_2;
			// if (sessionSubsystem == null)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_3 = V_2;
			if (L_3)
			{
				goto IL_0019;
			}
		}

IL_0017:
		{
			// return;
			IL2CPP_LEAVE(0x86, FINALLY_0078);
		}

IL_0019:
		{
			// if (sessionSubsystem.trackingState == lastTrackingState && sessionSubsystem.notTrackingReason == lastNotTrackingReason)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687(L_4, /*hidden argument*/NULL);
			int32_t L_6 = __this->get_lastTrackingState_16();
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_0037;
			}
		}

IL_0027:
		{
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_7 = V_2;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928(L_7, /*hidden argument*/NULL);
			int32_t L_9 = __this->get_lastNotTrackingReason_17();
			if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
			{
				goto IL_0037;
			}
		}

IL_0035:
		{
			// return;
			IL2CPP_LEAVE(0x86, FINALLY_0078);
		}

IL_0037:
		{
			// base.Update();
			BaseService_Update_m246F2689B2570E42A8BEA8D574A202A4989FEA4F(__this, /*hidden argument*/NULL);
			// if (sessionSubsystem.trackingState == UnityEngine.XR.ARSubsystems.TrackingState.None && sessionSubsystem.notTrackingReason == NotTrackingReason.Relocalizing)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11;
			L_11 = XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0057;
			}
		}

IL_0045:
		{
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_12 = V_2;
			NullCheck(L_12);
			int32_t L_13;
			L_13 = XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928(L_12, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_13) == ((uint32_t)2))))
			{
				goto IL_0057;
			}
		}

IL_004e:
		{
			// SetTrackingLost(true);
			LostTrackingService_SetTrackingLost_mD183D182A24E94A78BBE838941EAD148714CF37F(__this, (bool)1, /*hidden argument*/NULL);
			// }
			goto IL_005e;
		}

IL_0057:
		{
			// SetTrackingLost(false);
			LostTrackingService_SetTrackingLost_mD183D182A24E94A78BBE838941EAD148714CF37F(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_005e:
		{
			// lastTrackingState = sessionSubsystem.trackingState;
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_14 = V_2;
			NullCheck(L_14);
			int32_t L_15;
			L_15 = XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687(L_14, /*hidden argument*/NULL);
			__this->set_lastTrackingState_16(L_15);
			// lastNotTrackingReason = sessionSubsystem.notTrackingReason;
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_16 = V_2;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928(L_16, /*hidden argument*/NULL);
			__this->set_lastNotTrackingReason_17(L_17);
			// }
			IL2CPP_LEAVE(0x86, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x86, IL_0086)
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_DisableTrackingLostVisual_m3FA8213E6A3B58D785492CF63FBDD3CE336F381D (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (DisableTrackingLostVisualPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->get_DisableTrackingLostVisualPerfMarker_19();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (visual != null && visual.Enabled)
			RuntimeObject* L_2 = __this->get_visual_13();
			if (!L_2)
			{
				goto IL_006a;
			}
		}

IL_0016:
		{
			RuntimeObject* L_3 = __this->get_visual_13();
			NullCheck(L_3);
			bool L_4;
			L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::get_Enabled() */, ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var, L_3);
			if (!L_4)
			{
				goto IL_006a;
			}
		}

IL_0023:
		{
			// CameraCache.Main.cullingMask = cullingMaskOnTrackingLost;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
			L_5 = CameraCache_get_Main_m59038EC9065B131E53ADC161CAE0D72F4C5F5DD5(/*hidden argument*/NULL);
			int32_t L_6 = __this->get_cullingMaskOnTrackingLost_14();
			NullCheck(L_5);
			Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_5, L_6, /*hidden argument*/NULL);
			// if (profile.HaltTimeWhileTrackingLost)
			LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * L_7 = __this->get_profile_12();
			NullCheck(L_7);
			bool L_8;
			L_8 = LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m5D333A5647865ACB2B1EA79B7EE2B4F1ADE18CA8_inline(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_004b;
			}
		}

IL_0040:
		{
			// Time.timeScale = timeScaleOnTrackingLost;
			float L_9 = __this->get_timeScaleOnTrackingLost_15();
			Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(L_9, /*hidden argument*/NULL);
		}

IL_004b:
		{
			// if (profile.HaltAudioOnTrackingLost)
			LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * L_10 = __this->get_profile_12();
			NullCheck(L_10);
			bool L_11;
			L_11 = LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m39459377E2A7013B1D7ED62846D937C700B46DBC_inline(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_005e;
			}
		}

IL_0058:
		{
			// AudioListener.pause = false;
			AudioListener_set_pause_m31B1DCCAD9D3B48EEE8A6F221FD550F2CBAED389((bool)0, /*hidden argument*/NULL);
		}

IL_005e:
		{
			// visual.Enabled = false;
			RuntimeObject* L_12 = __this->get_visual_13();
			NullCheck(L_12);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var, L_12, (bool)0);
		}

IL_006a:
		{
			// }
			IL2CPP_LEAVE(0x7A, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_EnableTrackingLostVisual_mE75F10FFF159182C4036A67E2C4E9C445E20B699 (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_mC58D89B45162CB184538C25AE9CF148467DB27B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0C77E187BA75E078CCF43F1C05C91B7BE51619);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (EnableTrackingLostVisualPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->get_EnableTrackingLostVisualPerfMarker_20();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (visual == null)
			RuntimeObject* L_2 = __this->get_visual_13();
			if (L_2)
			{
				goto IL_005f;
			}
		}

IL_0016:
		{
			// GameObject visualObject = UnityEngine.Object.Instantiate(profile.TrackingLostVisualPrefab);
			LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * L_3 = __this->get_profile_12();
			NullCheck(L_3);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m8AE4BFB2D9166267E89E662EF802B09A4FCFF91D_inline(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
			L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
			V_2 = L_5;
			// if (visualObject != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_2;
			bool L_7;
			L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0030:
		{
			// visual = visualObject.GetComponentInChildren<ILostTrackingVisual>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_2;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = GameObject_GetComponentInChildren_TisILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_mC58D89B45162CB184538C25AE9CF148467DB27B1(L_8, /*hidden argument*/GameObject_GetComponentInChildren_TisILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_mC58D89B45162CB184538C25AE9CF148467DB27B1_RuntimeMethod_var);
			__this->set_visual_13(L_9);
		}

IL_003c:
		{
			// if (visual == null)
			RuntimeObject* L_10 = __this->get_visual_13();
			if (L_10)
			{
				goto IL_0053;
			}
		}

IL_0044:
		{
			// Debug.LogError("No ILostTrackingVisual found on prefab supplied by LostTrackingServiceProfile.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralFC0C77E187BA75E078CCF43F1C05C91B7BE51619, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x10B, FINALLY_00fd);
		}

IL_0053:
		{
			// visual.Enabled = false;
			RuntimeObject* L_11 = __this->get_visual_13();
			NullCheck(L_11);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var, L_11, (bool)0);
		}

IL_005f:
		{
			// if (!visual.Enabled)
			RuntimeObject* L_12 = __this->get_visual_13();
			NullCheck(L_12);
			bool L_13;
			L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::get_Enabled() */, ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_00fb;
			}
		}

IL_006f:
		{
			// cullingMaskOnTrackingLost = CameraCache.Main.cullingMask;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14;
			L_14 = CameraCache_get_Main_m59038EC9065B131E53ADC161CAE0D72F4C5F5DD5(/*hidden argument*/NULL);
			NullCheck(L_14);
			int32_t L_15;
			L_15 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_14, /*hidden argument*/NULL);
			__this->set_cullingMaskOnTrackingLost_14(L_15);
			// timeScaleOnTrackingLost = Time.timeScale;
			float L_16;
			L_16 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
			__this->set_timeScaleOnTrackingLost_15(L_16);
			// CameraCache.Main.cullingMask = profile.TrackingLostCullingMask;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17;
			L_17 = CameraCache_get_Main_m59038EC9065B131E53ADC161CAE0D72F4C5F5DD5(/*hidden argument*/NULL);
			LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * L_18 = __this->get_profile_12();
			NullCheck(L_18);
			LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_19;
			L_19 = LostTrackingServiceProfile_get_TrackingLostCullingMask_m1FFC49355D348984331C8B7D95C1A7AE0363924D_inline(L_18, /*hidden argument*/NULL);
			int32_t L_20;
			L_20 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_19, /*hidden argument*/NULL);
			NullCheck(L_17);
			Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_17, L_20, /*hidden argument*/NULL);
			// if (profile.HaltTimeWhileTrackingLost)
			LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * L_21 = __this->get_profile_12();
			NullCheck(L_21);
			bool L_22;
			L_22 = LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m5D333A5647865ACB2B1EA79B7EE2B4F1ADE18CA8_inline(L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_00bb;
			}
		}

IL_00b1:
		{
			// Time.timeScale = 0.0f;
			Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		}

IL_00bb:
		{
			// if (profile.HaltAudioOnTrackingLost)
			LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * L_23 = __this->get_profile_12();
			NullCheck(L_23);
			bool L_24;
			L_24 = LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m39459377E2A7013B1D7ED62846D937C700B46DBC_inline(L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00ce;
			}
		}

IL_00c8:
		{
			// AudioListener.pause = true;
			AudioListener_set_pause_m31B1DCCAD9D3B48EEE8A6F221FD550F2CBAED389((bool)1, /*hidden argument*/NULL);
		}

IL_00ce:
		{
			// visual.Enabled = true;
			RuntimeObject* L_25 = __this->get_visual_13();
			NullCheck(L_25);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var, L_25, (bool)1);
			// visual.SetLayer(profile.TrackingLostVisualLayer);
			RuntimeObject* L_26 = __this->get_visual_13();
			LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * L_27 = __this->get_profile_12();
			NullCheck(L_27);
			int32_t L_28;
			L_28 = LostTrackingServiceProfile_get_TrackingLostVisualLayer_m6278076B0A351EB7CA01235A781593BFC9E960FD_inline(L_27, /*hidden argument*/NULL);
			NullCheck(L_26);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::SetLayer(System.Int32) */, ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var, L_26, L_28);
			// visual.ResetVisual();
			RuntimeObject* L_29 = __this->get_visual_13();
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::ResetVisual() */, ILostTrackingVisual_tF2454A398CC66BF968E6CFDA1079540F168C5DBB_il2cpp_TypeInfo_var, L_29);
		}

IL_00fb:
		{
			// }
			IL2CPP_LEAVE(0x10B, FINALLY_00fd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fd;
	}

FINALLY_00fd:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(253)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(253)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10B, IL_010b)
	}

IL_010b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_SetTrackingLost_mD183D182A24E94A78BBE838941EAD148714CF37F (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, bool ___trackingLost0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B9_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B8_0 = NULL;
	{
		// using (SetTrackingLostPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->get_SetTrackingLostPerfMarker_21();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (TrackingLost != trackingLost)
			bool L_2;
			L_2 = LostTrackingService_get_TrackingLost_m97C5E8928D92794CD4CED1BA8AA9CECA9AB4E309_inline(__this, /*hidden argument*/NULL);
			bool L_3 = ___trackingLost0;
			if ((((int32_t)L_2) == ((int32_t)L_3)))
			{
				goto IL_0056;
			}
		}

IL_0017:
		{
			// TrackingLost = trackingLost;
			bool L_4 = ___trackingLost0;
			LostTrackingService_set_TrackingLost_m56BB1B8E5CA81BC7A7D216C32C19F9595BFDF09B_inline(__this, L_4, /*hidden argument*/NULL);
			// if (TrackingLost)
			bool L_5;
			L_5 = LostTrackingService_get_TrackingLost_m97C5E8928D92794CD4CED1BA8AA9CECA9AB4E309_inline(__this, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_003f;
			}
		}

IL_0026:
		{
			// OnTrackingLost?.Invoke();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6;
			L_6 = LostTrackingService_get_OnTrackingLost_m13591A64B213208D6F1340736828767FB0A41D14_inline(__this, /*hidden argument*/NULL);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6;
			G_B4_0 = L_7;
			if (L_7)
			{
				G_B5_0 = L_7;
				goto IL_0032;
			}
		}

IL_002f:
		{
			goto IL_0037;
		}

IL_0032:
		{
			NullCheck(G_B5_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B5_0, /*hidden argument*/NULL);
		}

IL_0037:
		{
			// EnableTrackingLostVisual();
			LostTrackingService_EnableTrackingLostVisual_mE75F10FFF159182C4036A67E2C4E9C445E20B699(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}

IL_003f:
		{
			// OnTrackingRestored?.Invoke();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
			L_8 = LostTrackingService_get_OnTrackingRestored_m4E2AC05110C7C4E5B44696F4074B5F37079D3A65_inline(__this, /*hidden argument*/NULL);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = L_8;
			G_B8_0 = L_9;
			if (L_9)
			{
				G_B9_0 = L_9;
				goto IL_004b;
			}
		}

IL_0048:
		{
			goto IL_0050;
		}

IL_004b:
		{
			NullCheck(G_B9_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B9_0, /*hidden argument*/NULL);
		}

IL_0050:
		{
			// DisableTrackingLostVisual();
			LostTrackingService_DisableTrackingLostVisual_m3FA8213E6A3B58D785492CF63FBDD3CE336F381D(__this, /*hidden argument*/NULL);
		}

IL_0056:
		{
			// }
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
	}

IL_0066:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_SessionSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * LostTrackingService_get_SessionSubsystem_m25E6D077E85EC52CA0B1DC854C3D0FD14E0E1F05 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m965435E8B1A526DA58EE2BF9D23D9593B758F0AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m260D606E1EF659DB2F8EF5AA1CD75F4C9731F05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m16C2BE2C4F2D7C18A3EF115573BF3DE2416798EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m813E673677879A74DAFEAEAD08CE3369C5B30C55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_GetInstances_TisXRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD_m3E8B8F1977A591C483278A261B5094C8DD9C3976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (sessionSubsystem == null || !sessionSubsystem.running)
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_0 = ((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->get_sessionSubsystem_22();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_1 = ((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->get_sessionSubsystem_22();
		NullCheck(L_1);
		bool L_2;
		L_2 = SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0061;
		}
	}

IL_0013:
	{
		// sessionSubsystem = null;
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->set_sessionSubsystem_22((XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD *)NULL);
		// SubsystemManager.GetInstances(XRSessionSubsystems);
		List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * L_3 = ((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->get_XRSessionSubsystems_23();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD_m3E8B8F1977A591C483278A261B5094C8DD9C3976(L_3, /*hidden argument*/SubsystemManager_GetInstances_TisXRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD_m3E8B8F1977A591C483278A261B5094C8DD9C3976_RuntimeMethod_var);
		// foreach (XRSessionSubsystem xrSessionSubsystem in XRSessionSubsystems)
		List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * L_4 = ((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->get_XRSessionSubsystems_23();
		NullCheck(L_4);
		Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310  L_5;
		L_5 = List_1_GetEnumerator_m813E673677879A74DAFEAEAD08CE3369C5B30C55(L_4, /*hidden argument*/List_1_GetEnumerator_m813E673677879A74DAFEAEAD08CE3369C5B30C55_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0030:
		{
			// foreach (XRSessionSubsystem xrSessionSubsystem in XRSessionSubsystems)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_6;
			L_6 = Enumerator_get_Current_m16C2BE2C4F2D7C18A3EF115573BF3DE2416798EA_inline((Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m16C2BE2C4F2D7C18A3EF115573BF3DE2416798EA_RuntimeMethod_var);
			V_1 = L_6;
			// if (xrSessionSubsystem.running)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_7 = V_1;
			NullCheck(L_7);
			bool L_8;
			L_8 = SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0048;
			}
		}

IL_0040:
		{
			// sessionSubsystem = xrSessionSubsystem;
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_9 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
			((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->set_sessionSubsystem_22(L_9);
			// break;
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}

IL_0048:
		{
			// foreach (XRSessionSubsystem xrSessionSubsystem in XRSessionSubsystems)
			bool L_10;
			L_10 = Enumerator_MoveNext_m260D606E1EF659DB2F8EF5AA1CD75F4C9731F05E((Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m260D606E1EF659DB2F8EF5AA1CD75F4C9731F05E_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0030;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m965435E8B1A526DA58EE2BF9D23D9593B758F0AD((Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m965435E8B1A526DA58EE2BF9D23D9593B758F0AD_RuntimeMethod_var);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
		// return sessionSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_11 = ((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->get_sessionSubsystem_22();
		return L_11;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__cctor_m308494E2EB6224F2DE80F09A2E5819A410E67178 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDA342648D5AD9A5257CAEB13BE9446EE3A4FD563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54D70F3C5F44278C054CF3FB5ABAD3E4F00CAB12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B05A48D559A106AA113C27CF6FB5433A6F2A646);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73BD705371F6F76E4B2220CB27E7D2462676AB56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD7CB0336FE46A3623C8B1B5409F67F0FD2BFA5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral6B05A48D559A106AA113C27CF6FB5433A6F2A646, /*hidden argument*/NULL);
		((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_18(L_0);
		// private static readonly ProfilerMarker DisableTrackingLostVisualPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.DisableTrackingLostVisual");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralCD7CB0336FE46A3623C8B1B5409F67F0FD2BFA5B, /*hidden argument*/NULL);
		((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->set_DisableTrackingLostVisualPerfMarker_19(L_1);
		// private static readonly ProfilerMarker EnableTrackingLostVisualPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.EnableTrackingLostVisual");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral73BD705371F6F76E4B2220CB27E7D2462676AB56, /*hidden argument*/NULL);
		((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->set_EnableTrackingLostVisualPerfMarker_20(L_2);
		// private static readonly ProfilerMarker SetTrackingLostPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.SetTrackingLost");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral54D70F3C5F44278C054CF3FB5ABAD3E4F00CAB12, /*hidden argument*/NULL);
		((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->set_SetTrackingLostPerfMarker_21(L_3);
		// private static XRSessionSubsystem sessionSubsystem = null;
		((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->set_sessionSubsystem_22((XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD *)NULL);
		// private static readonly List<XRSessionSubsystem> XRSessionSubsystems = new List<XRSessionSubsystem>();
		List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * L_4 = (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 *)il2cpp_codegen_object_new(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA342648D5AD9A5257CAEB13BE9446EE3A4FD563(L_4, /*hidden argument*/List_1__ctor_mDA342648D5AD9A5257CAEB13BE9446EE3A4FD563_RuntimeMethod_var);
		((LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D_il2cpp_TypeInfo_var))->set_XRSessionSubsystems_23(L_4);
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
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m8AE4BFB2D9166267E89E662EF802B09A4FCFF91D (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public GameObject TrackingLostVisualPrefab => trackingLostVisualPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_trackingLostVisualPrefab_5();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_m6278076B0A351EB7CA01235A781593BFC9E960FD (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public int TrackingLostVisualLayer => trackingLostVisualLayer;
		int32_t L_0 = __this->get_trackingLostVisualLayer_6();
		return L_0;
	}
}
// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostCullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LostTrackingServiceProfile_get_TrackingLostCullingMask_m1FFC49355D348984331C8B7D95C1A7AE0363924D (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask TrackingLostCullingMask => trackingLostCullingMask;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = __this->get_trackingLostCullingMask_7();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltTimeWhileTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m5D333A5647865ACB2B1EA79B7EE2B4F1ADE18CA8 (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltTimeWhileTrackingLost => haltTimeWhileTrackingLost;
		bool L_0 = __this->get_haltTimeWhileTrackingLost_8();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltAudioOnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m39459377E2A7013B1D7ED62846D937C700B46DBC (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltAudioOnTrackingLost => haltAudioWhileTrackingLost;
		bool L_0 = __this->get_haltAudioWhileTrackingLost_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingServiceProfile_OnValidate_mA46852F4C942DA1684F5B77736689A4675A9FB75 (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// trackingLostCullingMask.value |= 1 << trackingLostVisualLayer;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * L_0 = __this->get_address_of_trackingLostCullingMask_7();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * L_1 = L_0;
		int32_t L_2;
		L_2 = LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_trackingLostVisualLayer_6();
		LayerMask_set_value_mE825B6131A75814FCF2EA32ECBE2A205E6531585((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)L_1, ((int32_t)((int32_t)L_2|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingServiceProfile__ctor_mF2C5096005135C22B574FD52B09686C3C1190197 (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// private int trackingLostVisualLayer = 31;
		__this->set_trackingLostVisualLayer_6(((int32_t)31));
		// private bool haltTimeWhileTrackingLost = true;
		__this->set_haltTimeWhileTrackingLost_8((bool)1);
		// private bool haltAudioWhileTrackingLost = true;
		__this->set_haltAudioWhileTrackingLost_9((bool)1);
		BaseMixedRealityProfile__ctor_mF709430A064018C3B2A996A5F7950053A00EC14C(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_mFE834D9716EBD99F3A6C2E967254C050D737D79D_inline (BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m5D333A5647865ACB2B1EA79B7EE2B4F1ADE18CA8_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltTimeWhileTrackingLost => haltTimeWhileTrackingLost;
		bool L_0 = __this->get_haltTimeWhileTrackingLost_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m39459377E2A7013B1D7ED62846D937C700B46DBC_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltAudioOnTrackingLost => haltAudioWhileTrackingLost;
		bool L_0 = __this->get_haltAudioWhileTrackingLost_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m8AE4BFB2D9166267E89E662EF802B09A4FCFF91D_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public GameObject TrackingLostVisualPrefab => trackingLostVisualPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_trackingLostVisualPrefab_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LostTrackingServiceProfile_get_TrackingLostCullingMask_m1FFC49355D348984331C8B7D95C1A7AE0363924D_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask TrackingLostCullingMask => trackingLostCullingMask;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = __this->get_trackingLostCullingMask_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_m6278076B0A351EB7CA01235A781593BFC9E960FD_inline (LostTrackingServiceProfile_tB5E9DC2D6BDBB0A0F4E8EF30D8C59FB4D6B84CFE * __this, const RuntimeMethod* method)
{
	{
		// public int TrackingLostVisualLayer => trackingLostVisualLayer;
		int32_t L_0 = __this->get_trackingLostVisualLayer_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_m97C5E8928D92794CD4CED1BA8AA9CECA9AB4E309_inline (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = __this->get_U3CTrackingLostU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m56BB1B8E5CA81BC7A7D216C32C19F9595BFDF09B_inline (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CTrackingLostU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingLost_m13591A64B213208D6F1340736828767FB0A41D14_inline (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTrackingLostU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingRestored_m4E2AC05110C7C4E5B44696F4074B5F37079D3A65_inline (LostTrackingService_t71DEC83A25AFE6BD285FCDA2504CC7FD0656EB0D * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTrackingRestoredU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline (SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CrunningU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
