#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B;
// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object>
struct Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t2540786130E9454B07F952EFE95468EA67CC768E;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88;
// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerMediator>
struct Dictionary_2_tC83B76260EEF373CC567182B5BA04BC0BB714FFB;
// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData>
struct Dictionary_2_t53BEDDE14FD5A4890CA209C6A5C92ED36C826DB0;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Threading.IAsyncLocal>
struct List_1_t053589A158AAF0B471CF80825616560409AF43D4;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData>
struct List_1_t01AE7573418E41C6368D999AC83D30FDD4B7A650;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences>
struct List_1_t4CBBB4F995CDEA7D5C17AC4762EDC54F854E718C;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.IO.Compression.DeflateStream
struct DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5;
// System.Net.FileWebRequest
struct FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE;
// System.Net.FtpWebRequest
struct FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine
struct GazePointerVisibilityStateMachine_t770C8C03078DF14477C7E7E89B7F05105ECC7D49;
// Microsoft.MixedReality.OpenXR.GestureSubsystem
struct GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tD7A4D45A3EC6D529A76D820F246766734679BEA0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t822DC75FC5FE312C7B336AD3EEE3A2C624A5EA0A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPrimaryPointerSelector
struct IMixedRealityPrimaryPointerSelector_t3AB1C55EE472FBC929959AA25D76521DEFC91F29;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t063D0EA483485B6D709977E7F4462E3731048173;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tC55D34D75F571FA6A3F6169F6352C9CDC4C93D67;
// System.Runtime.Remoting.Messaging.IllogicalCallContext
struct IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3;
// System.Text.RegularExpressions.Match
struct Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler
struct PrimaryPointerChangedHandler_t54B2A550FF3CD29EA058197E342B122B536BE5C2;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData
struct PointerData_t0B1ED33EEC6DA420E84DE4DAAAFAA812F55EBD56;
// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult
struct PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tE9B563526C618CB18271B63A0D8B6972E4075CDC;
struct IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct NOVTABLE IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE4524DC68711FA3BBED088D21A0C0886ED005EEE(IIterator_1_tE9B563526C618CB18271B63A0D8B6972E4075CDC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>
struct NOVTABLE IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m66634C00C961C7768897D388C2B5164C725E5DA6(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m84D9E32AEE514FB3D963961C40B6ADE4053273F0(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m58FF395677F45DCFB3C34790C1B8EA9F3FA2B854(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mB7FA30C6154E705958DA25B185A635382425B860(IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___first0, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Int32>
struct NOVTABLE IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mC3C875318BFC0DB6FF109AE2142E81C32EE671F5(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m63C033311CA7C5A3729C7DF1CB91E39692AEFF9D(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1B96A82E2F0F0BD6AE8062B6C5D88A2EE5F23D4B(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mADE51304A0A90C8A9653864A44951D8D6F7F8DBE(IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m45056F1C11332A4A4451B6A72A7ED34ACD50010E(Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m0C0042EEDAC0EF223BC63A12CBB023B2FFD9FA64(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m0E5AE97AEE6B826AADF35E2500CCCA3C29862B62() = 0;
};
// Windows.Foundation.IReference`1<System.Exception>
struct NOVTABLE IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAA3D5310A328BC7561FCA472E95A3A358367ADBD(int32_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>
struct ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E, ___m_keys_2)); }
	inline KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t07BEC88094F6A41AB1A7C288E89E228DD02DF9A9 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keys_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E, ___m_values_3)); }
	inline ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t2476EB081B9DAD8256D3838F6E142BEC7F21A50A * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.Disposable
struct Disposable_tA924B6CF8FE3FCA41CAB8237181B22851A08BE6E  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.OpenXR.Disposable::<disposedValue>k__BackingField
	bool ___U3CdisposedValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CdisposedValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Disposable_tA924B6CF8FE3FCA41CAB8237181B22851A08BE6E, ___U3CdisposedValueU3Ek__BackingField_0)); }
	inline bool get_U3CdisposedValueU3Ek__BackingField_0() const { return ___U3CdisposedValueU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CdisposedValueU3Ek__BackingField_0() { return &___U3CdisposedValueU3Ek__BackingField_0; }
	inline void set_U3CdisposedValueU3Ek__BackingField_0(bool value)
	{
		___U3CdisposedValueU3Ek__BackingField_0 = value;
	}
};


// System.Security.Policy.Evidence
struct Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___assemblyEvidenceList_2;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB, ___hostEvidenceList_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostEvidenceList_1), (void*)value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB, ___assemblyEvidenceList_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyEvidenceList_2), (void*)value);
	}
};


// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* ____groups_2;

public:
	inline static int32_t get_offset_of__match_0() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____match_0)); }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * get__match_0() const { return ____match_0; }
	inline Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B ** get_address_of__match_0() { return &____match_0; }
	inline void set__match_0(Match_t8CC0A47F766954F17AD4D1C1597754C8F576464B * value)
	{
		____match_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____match_0), (void*)value);
	}

	inline static int32_t get_offset_of__captureMap_1() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____captureMap_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__captureMap_1() const { return ____captureMap_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__captureMap_1() { return &____captureMap_1; }
	inline void set__captureMap_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____captureMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____captureMap_1), (void*)value);
	}

	inline static int32_t get_offset_of__groups_2() { return static_cast<int32_t>(offsetof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556, ____groups_2)); }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* get__groups_2() const { return ____groups_2; }
	inline GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5** get_address_of__groups_2() { return &____groups_2; }
	inline void set__groups_2(GroupU5BU5D_tE125DBFFA979634FDDAEDF77F5EC47134D764AB5* value)
	{
		____groups_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____groups_2), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
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

// Windows.Foundation.FoundationContract
struct FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C 
{
public:

public:
};


// UnityEngineInternal.GenericStack
struct GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C  : public Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfMeshPrimitiveAttributes
struct GltfMeshPrimitiveAttributes_t781775A2FA054027314443BF0985658D8BEA6B8A  : public ReadOnlyDictionary_2_tAF6E0B774B72245512E723BA4679DC0F59B4E21E
{
public:

public:
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
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


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
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


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

// Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mF828061D1EC5AB7A239BAE56E3DEDC85BDD96581(FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Guid>
struct NOVTABLE IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7AEA139C31FD4E2AFE6D20B7BB007E20B4389047(Guid_t * comReturnValue) = 0;
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


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.FtpDataStream
struct FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Net.FtpWebRequest System.Net.FtpDataStream::request
	FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * ___request_4;
	// System.IO.Stream System.Net.FtpDataStream::networkStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___networkStream_5;
	// System.Boolean System.Net.FtpDataStream::disposed
	bool ___disposed_6;
	// System.Boolean System.Net.FtpDataStream::isRead
	bool ___isRead_7;
	// System.Int32 System.Net.FtpDataStream::totalRead
	int32_t ___totalRead_8;

public:
	inline static int32_t get_offset_of_request_4() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___request_4)); }
	inline FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * get_request_4() const { return ___request_4; }
	inline FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D ** get_address_of_request_4() { return &___request_4; }
	inline void set_request_4(FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * value)
	{
		___request_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_4), (void*)value);
	}

	inline static int32_t get_offset_of_networkStream_5() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___networkStream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_networkStream_5() const { return ___networkStream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_networkStream_5() { return &___networkStream_5; }
	inline void set_networkStream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___networkStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkStream_5), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}

	inline static int32_t get_offset_of_isRead_7() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___isRead_7)); }
	inline bool get_isRead_7() const { return ___isRead_7; }
	inline bool* get_address_of_isRead_7() { return &___isRead_7; }
	inline void set_isRead_7(bool value)
	{
		___isRead_7 = value;
	}

	inline static int32_t get_offset_of_totalRead_8() { return static_cast<int32_t>(offsetof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0, ___totalRead_8)); }
	inline int32_t get_totalRead_8() const { return ___totalRead_8; }
	inline int32_t* get_address_of_totalRead_8() { return &___totalRead_8; }
	inline void set_totalRead_8(int32_t value)
	{
		___totalRead_8 = value;
	}
};


// System.Net.FtpStatusCode
struct FtpStatusCode_t6CE8FABCFD78E194BFEF150C79B3E7A87A0532D0 
{
public:
	// System.Int32 System.Net.FtpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FtpStatusCode_t6CE8FABCFD78E194BFEF150C79B3E7A87A0532D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.GZipStream
struct GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5 * ____deflateStream_4;

public:
	inline static int32_t get_offset_of__deflateStream_4() { return static_cast<int32_t>(offsetof(GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6, ____deflateStream_4)); }
	inline DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5 * get__deflateStream_4() const { return ____deflateStream_4; }
	inline DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5 ** get_address_of__deflateStream_4() { return &____deflateStream_4; }
	inline void set__deflateStream_4(DeflateStream_t23FBBBCAA86C6AEA9E520A44C0FD0F947236A8B5 * value)
	{
		____deflateStream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____deflateStream_4), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.GestureSettings
struct GestureSettings_tD8DCF437C6CD407396FAD8D6CAB4FAC72CA3F8F7 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.GestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureSettings_tD8DCF437C6CD407396FAD8D6CAB4FAC72CA3F8F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.NativeLibToken
struct NativeLibToken_t6B062C802FE41BEFF795664C43BE99B960E18D32 
{
public:
	// System.UInt64 Microsoft.MixedReality.OpenXR.NativeLibToken::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeLibToken_t6B062C802FE41BEFF795664C43BE99B960E18D32, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.PointerBehavior
struct PointerBehavior_t331986A1172E2A21F2D67ED57D8B58DDADD2EE32 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerBehavior_t331986A1172E2A21F2D67ED57D8B58DDADD2EE32, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_tF63A548A4872D179003C5776983FBA8F285761E2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_tF63A548A4872D179003C5776983FBA8F285761E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
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


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Threading.ExecutionContext/Flags
struct Flags_t84E4B7439C575026B3A9D10B43AC61B9709011E4 
{
public:
	// System.Int32 System.Threading.ExecutionContext/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t84E4B7439C575026B3A9D10B43AC61B9709011E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_tB7BE4CA8994D4833428801365F8E05CB51E14D17  : public BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tB7BE4CA8994D4833428801365F8E05CB51E14D17, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tB7BE4CA8994D4833428801365F8E05CB51E14D17, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
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


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4  : public BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_9;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_10;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE * ___postponedActions_11;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6 * ___postponedObjectActions_12;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88 * ___U3CEventHandlersByTypeU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___eventExecutionDepth_9)); }
	inline int32_t get_eventExecutionDepth_9() const { return ___eventExecutionDepth_9; }
	inline int32_t* get_address_of_eventExecutionDepth_9() { return &___eventExecutionDepth_9; }
	inline void set_eventExecutionDepth_9(int32_t value)
	{
		___eventExecutionDepth_9 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___eventSystemHandlerType_10)); }
	inline Type_t * get_eventSystemHandlerType_10() const { return ___eventSystemHandlerType_10; }
	inline Type_t ** get_address_of_eventSystemHandlerType_10() { return &___eventSystemHandlerType_10; }
	inline void set_eventSystemHandlerType_10(Type_t * value)
	{
		___eventSystemHandlerType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_10), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___postponedActions_11)); }
	inline List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE * get_postponedActions_11() const { return ___postponedActions_11; }
	inline List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE ** get_address_of_postponedActions_11() { return &___postponedActions_11; }
	inline void set_postponedActions_11(List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE * value)
	{
		___postponedActions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_11), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___postponedObjectActions_12)); }
	inline List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6 * get_postponedObjectActions_12() const { return ___postponedObjectActions_12; }
	inline List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6 ** get_address_of_postponedObjectActions_12() { return &___postponedObjectActions_12; }
	inline void set_postponedObjectActions_12(List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6 * value)
	{
		___postponedObjectActions_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___U3CEventHandlersByTypeU3Ek__BackingField_13)); }
	inline Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88 * get_U3CEventHandlersByTypeU3Ek__BackingField_13() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return &___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_13(Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4, ___U3CEventListenersU3Ek__BackingField_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_14() const { return ___U3CEventListenersU3Ek__BackingField_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_14() { return &___U3CEventListenersU3Ek__BackingField_14; }
	inline void set_U3CEventListenersU3Ek__BackingField_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_14), (void*)value);
	}
};

struct BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_15;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4_StaticFields, ___enableDanglingHandlerDiagnostics_8)); }
	inline bool get_enableDanglingHandlerDiagnostics_8() const { return ___enableDanglingHandlerDiagnostics_8; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_8() { return &___enableDanglingHandlerDiagnostics_8; }
	inline void set_enableDanglingHandlerDiagnostics_8(bool value)
	{
		___enableDanglingHandlerDiagnostics_8 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_15() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_15 = value;
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____syncContext_0;
	// System.Threading.SynchronizationContext System.Threading.ExecutionContext::_syncContextNoFlow
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____syncContextNoFlow_1;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Threading.ExecutionContext::_logicalCallContext
	LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * ____logicalCallContext_2;
	// System.Runtime.Remoting.Messaging.IllogicalCallContext System.Threading.ExecutionContext::_illogicalCallContext
	IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * ____illogicalCallContext_3;
	// System.Threading.ExecutionContext/Flags System.Threading.ExecutionContext::_flags
	int32_t ____flags_4;
	// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object> System.Threading.ExecutionContext::_localValues
	Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * ____localValues_5;
	// System.Collections.Generic.List`1<System.Threading.IAsyncLocal> System.Threading.ExecutionContext::_localChangeNotifications
	List_1_t053589A158AAF0B471CF80825616560409AF43D4 * ____localChangeNotifications_6;

public:
	inline static int32_t get_offset_of__syncContext_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____syncContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__syncContext_0() const { return ____syncContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__syncContext_0() { return &____syncContext_0; }
	inline void set__syncContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____syncContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncContext_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncContextNoFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____syncContextNoFlow_1)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__syncContextNoFlow_1() const { return ____syncContextNoFlow_1; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__syncContextNoFlow_1() { return &____syncContextNoFlow_1; }
	inline void set__syncContextNoFlow_1(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____syncContextNoFlow_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncContextNoFlow_1), (void*)value);
	}

	inline static int32_t get_offset_of__logicalCallContext_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____logicalCallContext_2)); }
	inline LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * get__logicalCallContext_2() const { return ____logicalCallContext_2; }
	inline LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 ** get_address_of__logicalCallContext_2() { return &____logicalCallContext_2; }
	inline void set__logicalCallContext_2(LogicalCallContext_tB537C2A13F19FCC7EBC74757A415F2CA5C8FA1C3 * value)
	{
		____logicalCallContext_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logicalCallContext_2), (void*)value);
	}

	inline static int32_t get_offset_of__illogicalCallContext_3() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____illogicalCallContext_3)); }
	inline IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * get__illogicalCallContext_3() const { return ____illogicalCallContext_3; }
	inline IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E ** get_address_of__illogicalCallContext_3() { return &____illogicalCallContext_3; }
	inline void set__illogicalCallContext_3(IllogicalCallContext_tFC01A2B688E85D44897206E4ACD81E050D25846E * value)
	{
		____illogicalCallContext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____illogicalCallContext_3), (void*)value);
	}

	inline static int32_t get_offset_of__flags_4() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____flags_4)); }
	inline int32_t get__flags_4() const { return ____flags_4; }
	inline int32_t* get_address_of__flags_4() { return &____flags_4; }
	inline void set__flags_4(int32_t value)
	{
		____flags_4 = value;
	}

	inline static int32_t get_offset_of__localValues_5() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____localValues_5)); }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * get__localValues_5() const { return ____localValues_5; }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 ** get_address_of__localValues_5() { return &____localValues_5; }
	inline void set__localValues_5(Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * value)
	{
		____localValues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localValues_5), (void*)value);
	}

	inline static int32_t get_offset_of__localChangeNotifications_6() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414, ____localChangeNotifications_6)); }
	inline List_1_t053589A158AAF0B471CF80825616560409AF43D4 * get__localChangeNotifications_6() const { return ____localChangeNotifications_6; }
	inline List_1_t053589A158AAF0B471CF80825616560409AF43D4 ** get_address_of__localChangeNotifications_6() { return &____localChangeNotifications_6; }
	inline void set__localChangeNotifications_6(List_1_t053589A158AAF0B471CF80825616560409AF43D4 * value)
	{
		____localChangeNotifications_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localChangeNotifications_6), (void*)value);
	}
};

struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_StaticFields
{
public:
	// System.Threading.ExecutionContext System.Threading.ExecutionContext::s_dummyDefaultEC
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___s_dummyDefaultEC_7;

public:
	inline static int32_t get_offset_of_s_dummyDefaultEC_7() { return static_cast<int32_t>(offsetof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_StaticFields, ___s_dummyDefaultEC_7)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_s_dummyDefaultEC_7() const { return ___s_dummyDefaultEC_7; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_s_dummyDefaultEC_7() { return &___s_dummyDefaultEC_7; }
	inline void set_s_dummyDefaultEC_7(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___s_dummyDefaultEC_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_dummyDefaultEC_7), (void*)value);
	}
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.Net.FileWebResponse
struct FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6  : public WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0
{
public:
	// System.Boolean System.Net.FileWebResponse::m_closed
	bool ___m_closed_1;
	// System.Int64 System.Net.FileWebResponse::m_contentLength
	int64_t ___m_contentLength_2;
	// System.IO.FileAccess System.Net.FileWebResponse::m_fileAccess
	int32_t ___m_fileAccess_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::m_headers
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___m_headers_4;
	// System.IO.Stream System.Net.FileWebResponse::m_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_stream_5;
	// System.Uri System.Net.FileWebResponse::m_uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_uri_6;

public:
	inline static int32_t get_offset_of_m_closed_1() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_closed_1)); }
	inline bool get_m_closed_1() const { return ___m_closed_1; }
	inline bool* get_address_of_m_closed_1() { return &___m_closed_1; }
	inline void set_m_closed_1(bool value)
	{
		___m_closed_1 = value;
	}

	inline static int32_t get_offset_of_m_contentLength_2() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_contentLength_2)); }
	inline int64_t get_m_contentLength_2() const { return ___m_contentLength_2; }
	inline int64_t* get_address_of_m_contentLength_2() { return &___m_contentLength_2; }
	inline void set_m_contentLength_2(int64_t value)
	{
		___m_contentLength_2 = value;
	}

	inline static int32_t get_offset_of_m_fileAccess_3() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_fileAccess_3)); }
	inline int32_t get_m_fileAccess_3() const { return ___m_fileAccess_3; }
	inline int32_t* get_address_of_m_fileAccess_3() { return &___m_fileAccess_3; }
	inline void set_m_fileAccess_3(int32_t value)
	{
		___m_fileAccess_3 = value;
	}

	inline static int32_t get_offset_of_m_headers_4() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_headers_4)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_m_headers_4() const { return ___m_headers_4; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_m_headers_4() { return &___m_headers_4; }
	inline void set_m_headers_4(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___m_headers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_headers_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_stream_5() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_stream_5() const { return ___m_stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_stream_5() { return &___m_stream_5; }
	inline void set_m_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_uri_6() { return static_cast<int32_t>(offsetof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6, ___m_uri_6)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_uri_6() const { return ___m_uri_6; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_uri_6() { return &___m_uri_6; }
	inline void set_m_uri_6(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_uri_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_uri_6), (void*)value);
	}
};


// System.Net.FtpWebResponse
struct FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49  : public WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0
{
public:
	// System.IO.Stream System.Net.FtpWebResponse::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_1;
	// System.Uri System.Net.FtpWebResponse::uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri_2;
	// System.Net.FtpStatusCode System.Net.FtpWebResponse::statusCode
	int32_t ___statusCode_3;
	// System.DateTime System.Net.FtpWebResponse::lastModified
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastModified_4;
	// System.String System.Net.FtpWebResponse::bannerMessage
	String_t* ___bannerMessage_5;
	// System.String System.Net.FtpWebResponse::welcomeMessage
	String_t* ___welcomeMessage_6;
	// System.String System.Net.FtpWebResponse::exitMessage
	String_t* ___exitMessage_7;
	// System.String System.Net.FtpWebResponse::statusDescription
	String_t* ___statusDescription_8;
	// System.String System.Net.FtpWebResponse::method
	String_t* ___method_9;
	// System.Boolean System.Net.FtpWebResponse::disposed
	bool ___disposed_10;
	// System.Net.FtpWebRequest System.Net.FtpWebResponse::request
	FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * ___request_11;
	// System.Int64 System.Net.FtpWebResponse::contentLength
	int64_t ___contentLength_12;

public:
	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___stream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_1() const { return ___stream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_uri_2() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___uri_2)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_uri_2() const { return ___uri_2; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_uri_2() { return &___uri_2; }
	inline void set_uri_2(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___uri_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_2), (void*)value);
	}

	inline static int32_t get_offset_of_statusCode_3() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___statusCode_3)); }
	inline int32_t get_statusCode_3() const { return ___statusCode_3; }
	inline int32_t* get_address_of_statusCode_3() { return &___statusCode_3; }
	inline void set_statusCode_3(int32_t value)
	{
		___statusCode_3 = value;
	}

	inline static int32_t get_offset_of_lastModified_4() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___lastModified_4)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_lastModified_4() const { return ___lastModified_4; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_lastModified_4() { return &___lastModified_4; }
	inline void set_lastModified_4(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___lastModified_4 = value;
	}

	inline static int32_t get_offset_of_bannerMessage_5() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___bannerMessage_5)); }
	inline String_t* get_bannerMessage_5() const { return ___bannerMessage_5; }
	inline String_t** get_address_of_bannerMessage_5() { return &___bannerMessage_5; }
	inline void set_bannerMessage_5(String_t* value)
	{
		___bannerMessage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bannerMessage_5), (void*)value);
	}

	inline static int32_t get_offset_of_welcomeMessage_6() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___welcomeMessage_6)); }
	inline String_t* get_welcomeMessage_6() const { return ___welcomeMessage_6; }
	inline String_t** get_address_of_welcomeMessage_6() { return &___welcomeMessage_6; }
	inline void set_welcomeMessage_6(String_t* value)
	{
		___welcomeMessage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___welcomeMessage_6), (void*)value);
	}

	inline static int32_t get_offset_of_exitMessage_7() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___exitMessage_7)); }
	inline String_t* get_exitMessage_7() const { return ___exitMessage_7; }
	inline String_t** get_address_of_exitMessage_7() { return &___exitMessage_7; }
	inline void set_exitMessage_7(String_t* value)
	{
		___exitMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exitMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of_statusDescription_8() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___statusDescription_8)); }
	inline String_t* get_statusDescription_8() const { return ___statusDescription_8; }
	inline String_t** get_address_of_statusDescription_8() { return &___statusDescription_8; }
	inline void set_statusDescription_8(String_t* value)
	{
		___statusDescription_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusDescription_8), (void*)value);
	}

	inline static int32_t get_offset_of_method_9() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___method_9)); }
	inline String_t* get_method_9() const { return ___method_9; }
	inline String_t** get_address_of_method_9() { return &___method_9; }
	inline void set_method_9(String_t* value)
	{
		___method_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_9), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_10() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___disposed_10)); }
	inline bool get_disposed_10() const { return ___disposed_10; }
	inline bool* get_address_of_disposed_10() { return &___disposed_10; }
	inline void set_disposed_10(bool value)
	{
		___disposed_10 = value;
	}

	inline static int32_t get_offset_of_request_11() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___request_11)); }
	inline FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * get_request_11() const { return ___request_11; }
	inline FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D ** get_address_of_request_11() { return &___request_11; }
	inline void set_request_11(FtpWebRequest_t9CA7B151B9A2C305627461D607795EC345CD267D * value)
	{
		___request_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_11), (void*)value);
	}

	inline static int32_t get_offset_of_contentLength_12() { return static_cast<int32_t>(offsetof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49, ___contentLength_12)); }
	inline int64_t get_contentLength_12() const { return ___contentLength_12; }
	inline int64_t* get_address_of_contentLength_12() { return &___contentLength_12; }
	inline void set_contentLength_12(int64_t value)
	{
		___contentLength_12 = value;
	}
};


// Microsoft.MixedReality.OpenXR.GestureRecognizer
struct GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B  : public Disposable_tA924B6CF8FE3FCA41CAB8237181B22851A08BE6E
{
public:
	// Microsoft.MixedReality.OpenXR.GestureSubsystem Microsoft.MixedReality.OpenXR.GestureRecognizer::m_gestureSubsystem
	GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26 * ___m_gestureSubsystem_1;
	// Microsoft.MixedReality.OpenXR.GestureSettings Microsoft.MixedReality.OpenXR.GestureRecognizer::m_requestedSettings
	int32_t ___m_requestedSettings_2;

public:
	inline static int32_t get_offset_of_m_gestureSubsystem_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B, ___m_gestureSubsystem_1)); }
	inline GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26 * get_m_gestureSubsystem_1() const { return ___m_gestureSubsystem_1; }
	inline GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26 ** get_address_of_m_gestureSubsystem_1() { return &___m_gestureSubsystem_1; }
	inline void set_m_gestureSubsystem_1(GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26 * value)
	{
		___m_gestureSubsystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_gestureSubsystem_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_requestedSettings_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B, ___m_requestedSettings_2)); }
	inline int32_t get_m_requestedSettings_2() const { return ___m_requestedSettings_2; }
	inline int32_t* get_address_of_m_requestedSettings_2() { return &___m_requestedSettings_2; }
	inline void set_m_requestedSettings_2(int32_t value)
	{
		___m_requestedSettings_2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.GestureSubsystem
struct GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26  : public Disposable_tA924B6CF8FE3FCA41CAB8237181B22851A08BE6E
{
public:
	// System.UInt64 Microsoft.MixedReality.OpenXR.GestureSubsystem::m_gestureRecognizerHandle
	uint64_t ___m_gestureRecognizerHandle_2;
	// Microsoft.MixedReality.OpenXR.GestureSettings Microsoft.MixedReality.OpenXR.GestureSubsystem::m_gestureSettings
	int32_t ___m_gestureSettings_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.GestureSubsystem::m_running
	bool ___m_running_4;
	// System.Object Microsoft.MixedReality.OpenXR.GestureSubsystem::m_runningLock
	RuntimeObject * ___m_runningLock_5;

public:
	inline static int32_t get_offset_of_m_gestureRecognizerHandle_2() { return static_cast<int32_t>(offsetof(GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26, ___m_gestureRecognizerHandle_2)); }
	inline uint64_t get_m_gestureRecognizerHandle_2() const { return ___m_gestureRecognizerHandle_2; }
	inline uint64_t* get_address_of_m_gestureRecognizerHandle_2() { return &___m_gestureRecognizerHandle_2; }
	inline void set_m_gestureRecognizerHandle_2(uint64_t value)
	{
		___m_gestureRecognizerHandle_2 = value;
	}

	inline static int32_t get_offset_of_m_gestureSettings_3() { return static_cast<int32_t>(offsetof(GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26, ___m_gestureSettings_3)); }
	inline int32_t get_m_gestureSettings_3() const { return ___m_gestureSettings_3; }
	inline int32_t* get_address_of_m_gestureSettings_3() { return &___m_gestureSettings_3; }
	inline void set_m_gestureSettings_3(int32_t value)
	{
		___m_gestureSettings_3 = value;
	}

	inline static int32_t get_offset_of_m_running_4() { return static_cast<int32_t>(offsetof(GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26, ___m_running_4)); }
	inline bool get_m_running_4() const { return ___m_running_4; }
	inline bool* get_address_of_m_running_4() { return &___m_running_4; }
	inline void set_m_running_4(bool value)
	{
		___m_running_4 = value;
	}

	inline static int32_t get_offset_of_m_runningLock_5() { return static_cast<int32_t>(offsetof(GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26, ___m_runningLock_5)); }
	inline RuntimeObject * get_m_runningLock_5() const { return ___m_runningLock_5; }
	inline RuntimeObject ** get_address_of_m_runningLock_5() { return &___m_runningLock_5; }
	inline void set_m_runningLock_5(RuntimeObject * value)
	{
		___m_runningLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_runningLock_5), (void*)value);
	}
};

struct GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26_StaticFields
{
public:
	// Microsoft.MixedReality.OpenXR.NativeLibToken Microsoft.MixedReality.OpenXR.GestureSubsystem::nativeLibToken
	uint64_t ___nativeLibToken_1;

public:
	inline static int32_t get_offset_of_nativeLibToken_1() { return static_cast<int32_t>(offsetof(GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26_StaticFields, ___nativeLibToken_1)); }
	inline uint64_t get_nativeLibToken_1() const { return ___nativeLibToken_1; }
	inline uint64_t* get_address_of_nativeLibToken_1() { return &___nativeLibToken_1; }
	inline void set_nativeLibToken_1(uint64_t value)
	{
		___nativeLibToken_1 = value;
	}
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t93CD0A8CBB640727205E73529E3D90688DB6A8A3  : public BaseDataProvider_1_tB7BE4CA8994D4833428801365F8E05CB51E14D17
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t93CD0A8CBB640727205E73529E3D90688DB6A8A3, ___U3CIsOpaqueU3Ek__BackingField_10)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_10() const { return ___U3CIsOpaqueU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_10() { return &___U3CIsOpaqueU3Ek__BackingField_10; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_10(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C  : public BaseEventSystem_t4D6150178E1DD01DCB6B5B529FBF42B5FF215AA4
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C, ___U3CRegistrarU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_16() const { return ___U3CRegistrarU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_16() { return &___U3CRegistrarU3Ek__BackingField_16; }
	inline void set_U3CRegistrarU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_16), (void*)value);
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


// System.Net.FileWebStream
struct FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C  : public FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26
{
public:
	// System.Net.FileWebRequest System.Net.FileWebStream::m_request
	FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE * ___m_request_21;

public:
	inline static int32_t get_offset_of_m_request_21() { return static_cast<int32_t>(offsetof(FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C, ___m_request_21)); }
	inline FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE * get_m_request_21() const { return ___m_request_21; }
	inline FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE ** get_address_of_m_request_21() { return &___m_request_21; }
	inline void set_m_request_21(FileWebRequest_tCB19C2A278EDBAC1EC2A802398B6B14AB16782AE * value)
	{
		___m_request_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_request_21), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E  : public BaseSpatialObserver_t91C9BEDFFEA090ABEC4A4E0250E1B3801E382FDC
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93 * ___meshEventData_22;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_23;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_33;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t2540786130E9454B07F952EFE95468EA67CC768E * ___meshes_35;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_37;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_38;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_39;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_40;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_41;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___runtimeSpatialMeshPrefab_42;

public:
	inline static int32_t get_offset_of_meshEventData_22() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___meshEventData_22)); }
	inline MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93 * get_meshEventData_22() const { return ___meshEventData_22; }
	inline MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93 ** get_address_of_meshEventData_22() { return &___meshEventData_22; }
	inline void set_meshEventData_22(MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93 * value)
	{
		___meshEventData_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_22), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_23() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___observedObjectParent_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_23() const { return ___observedObjectParent_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_23() { return &___observedObjectParent_23; }
	inline void set_observedObjectParent_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_23), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___displayOption_33)); }
	inline int32_t get_displayOption_33() const { return ___displayOption_33; }
	inline int32_t* get_address_of_displayOption_33() { return &___displayOption_33; }
	inline void set_displayOption_33(int32_t value)
	{
		___displayOption_33 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___levelOfDetail_34)); }
	inline int32_t get_levelOfDetail_34() const { return ___levelOfDetail_34; }
	inline int32_t* get_address_of_levelOfDetail_34() { return &___levelOfDetail_34; }
	inline void set_levelOfDetail_34(int32_t value)
	{
		___levelOfDetail_34 = value;
	}

	inline static int32_t get_offset_of_meshes_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___meshes_35)); }
	inline Dictionary_2_t2540786130E9454B07F952EFE95468EA67CC768E * get_meshes_35() const { return ___meshes_35; }
	inline Dictionary_2_t2540786130E9454B07F952EFE95468EA67CC768E ** get_address_of_meshes_35() { return &___meshes_35; }
	inline void set_meshes_35(Dictionary_2_t2540786130E9454B07F952EFE95468EA67CC768E * value)
	{
		___meshes_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_35), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___meshPhysicsLayer_36)); }
	inline int32_t get_meshPhysicsLayer_36() const { return ___meshPhysicsLayer_36; }
	inline int32_t* get_address_of_meshPhysicsLayer_36() { return &___meshPhysicsLayer_36; }
	inline void set_meshPhysicsLayer_36(int32_t value)
	{
		___meshPhysicsLayer_36 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___U3CRecalculateNormalsU3Ek__BackingField_37)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_37() const { return ___U3CRecalculateNormalsU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_37() { return &___U3CRecalculateNormalsU3Ek__BackingField_37; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_37(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_38)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_38() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_38; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_38() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_38; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_38(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___occlusionMaterial_39)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_39() const { return ___occlusionMaterial_39; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_39() { return &___occlusionMaterial_39; }
	inline void set_occlusionMaterial_39(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_39), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___physicsMaterial_40)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_40() const { return ___physicsMaterial_40; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_40() { return &___physicsMaterial_40; }
	inline void set_physicsMaterial_40(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___visibleMaterial_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_41() const { return ___visibleMaterial_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_41() { return &___visibleMaterial_41; }
	inline void set_visibleMaterial_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E, ___runtimeSpatialMeshPrefab_42)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_runtimeSpatialMeshPrefab_42() const { return ___runtimeSpatialMeshPrefab_42; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_runtimeSpatialMeshPrefab_42() { return &___runtimeSpatialMeshPrefab_42; }
	inline void set_runtimeSpatialMeshPrefab_42(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___runtimeSpatialMeshPrefab_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_42), (void*)value);
	}
};

struct BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE * ___OnMeshAdded_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE * ___OnMeshUpdated_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE * ___OnMeshRemoved_32;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_24() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_24() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_24() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_24; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_25() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_25() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_25() { return &___ApplyUpdatedMeshPhysicsPerfMarker_25; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_26() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_26() { return &___ApplyUpdatedPhysicsLayerPerfMarker_26; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields, ___OnMeshAddedPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_27() const { return ___OnMeshAddedPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_27() { return &___OnMeshAddedPerfMarker_27; }
	inline void set_OnMeshAddedPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields, ___OnMeshAdded_28)); }
	inline EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE * get_OnMeshAdded_28() const { return ___OnMeshAdded_28; }
	inline EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE ** get_address_of_OnMeshAdded_28() { return &___OnMeshAdded_28; }
	inline void set_OnMeshAdded_28(EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE * value)
	{
		___OnMeshAdded_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields, ___OnMeshUpdatedPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_29() const { return ___OnMeshUpdatedPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_29() { return &___OnMeshUpdatedPerfMarker_29; }
	inline void set_OnMeshUpdatedPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields, ___OnMeshUpdated_30)); }
	inline EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE * get_OnMeshUpdated_30() const { return ___OnMeshUpdated_30; }
	inline EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE ** get_address_of_OnMeshUpdated_30() { return &___OnMeshUpdated_30; }
	inline void set_OnMeshUpdated_30(EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE * value)
	{
		___OnMeshUpdated_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields, ___OnMeshRemovedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_31() const { return ___OnMeshRemovedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_31() { return &___OnMeshRemovedPerfMarker_31; }
	inline void set_OnMeshRemovedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E_StaticFields, ___OnMeshRemoved_32)); }
	inline EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE * get_OnMeshRemoved_32() const { return ___OnMeshRemoved_32; }
	inline EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE ** get_address_of_OnMeshRemoved_32() { return &___OnMeshRemoved_32; }
	inline void set_OnMeshRemoved_32(EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE * value)
	{
		___OnMeshRemoved_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_32), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.FocusProvider
struct FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E  : public BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pointers
	Dictionary_2_t53BEDDE14FD5A4890CA209C6A5C92ED36C826DB0 * ___pointers_17;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pendingOverallFocusEnterSet
	HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * ___pendingOverallFocusEnterSet_18;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pendingOverallFocusExitSet
	Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * ___pendingOverallFocusExitSet_19;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pendingPointerSpecificFocusChange
	List_1_t01AE7573418E41C6368D999AC83D30FDD4B7A650 * ___pendingPointerSpecificFocusChange_20;
	// System.Collections.Generic.Dictionary`2<System.UInt32,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerMediator> Microsoft.MixedReality.Toolkit.Input.FocusProvider::pointerMediators
	Dictionary_2_tC83B76260EEF373CC567182B5BA04BC0BB714FFB * ___pointerMediators_21;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult Microsoft.MixedReality.Toolkit.Input.FocusProvider::hitResult3d
	PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D * ___hitResult3d_22;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult Microsoft.MixedReality.Toolkit.Input.FocusProvider::hitResultUi
	PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D * ___hitResultUi_23;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.FocusProvider::inputSystemProfile
	MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468 * ___inputSystemProfile_24;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider::maxQuerySceneResults
	int32_t ___maxQuerySceneResults_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider::shouldUseGraphicsRaycast
	bool ___shouldUseGraphicsRaycast_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.FocusProvider::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_27;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider::<NumNearPointersActive>k__BackingField
	int32_t ___U3CNumNearPointersActiveU3Ek__BackingField_28;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.FocusProvider::<NumFarPointersActive>k__BackingField
	int32_t ___U3CNumFarPointersActiveU3Ek__BackingField_29;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusProvider::primaryPointer
	RuntimeObject* ___primaryPointer_30;
	// System.String Microsoft.MixedReality.Toolkit.Input.FocusProvider::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_31;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.FocusProvider::focusLayerMasks
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___focusLayerMasks_32;
	// UnityEngine.RenderTexture Microsoft.MixedReality.Toolkit.Input.FocusProvider::uiRaycastCameraTargetTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___uiRaycastCameraTargetTexture_33;
	// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Input.FocusProvider::uiRaycastCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___uiRaycastCamera_34;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerData Microsoft.MixedReality.Toolkit.Input.FocusProvider::gazeProviderPointingData
	PointerData_t0B1ED33EEC6DA420E84DE4DAAAFAA812F55EBD56 * ___gazeProviderPointingData_35;
	// Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerHitResult Microsoft.MixedReality.Toolkit.Input.FocusProvider::gazeHitResult
	PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D * ___gazeHitResult_36;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.FocusProvider::newUiRaycastPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newUiRaycastPosition_37;
	// Microsoft.MixedReality.Toolkit.Input.GazePointerVisibilityStateMachine Microsoft.MixedReality.Toolkit.Input.FocusProvider::gazePointerStateMachine
	GazePointerVisibilityStateMachine_t770C8C03078DF14477C7E7E89B7F05105ECC7D49 * ___gazePointerStateMachine_38;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPrimaryPointerSelector Microsoft.MixedReality.Toolkit.Input.FocusProvider::primaryPointerSelector
	RuntimeObject* ___primaryPointerSelector_39;
	// Microsoft.MixedReality.Toolkit.Input.PrimaryPointerChangedHandler Microsoft.MixedReality.Toolkit.Input.FocusProvider::PrimaryPointerChanged
	PrimaryPointerChangedHandler_t54B2A550FF3CD29EA058197E342B122B536BE5C2 * ___PrimaryPointerChanged_40;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.FocusProvider/PointerPreferences> Microsoft.MixedReality.Toolkit.Input.FocusProvider::customPointerBehaviors
	List_1_t4CBBB4F995CDEA7D5C17AC4762EDC54F854E718C * ___customPointerBehaviors_62;
	// Microsoft.MixedReality.Toolkit.Input.PointerBehavior Microsoft.MixedReality.Toolkit.Input.FocusProvider::<GazePointerBehavior>k__BackingField
	int32_t ___U3CGazePointerBehaviorU3Ek__BackingField_63;

public:
	inline static int32_t get_offset_of_pointers_17() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___pointers_17)); }
	inline Dictionary_2_t53BEDDE14FD5A4890CA209C6A5C92ED36C826DB0 * get_pointers_17() const { return ___pointers_17; }
	inline Dictionary_2_t53BEDDE14FD5A4890CA209C6A5C92ED36C826DB0 ** get_address_of_pointers_17() { return &___pointers_17; }
	inline void set_pointers_17(Dictionary_2_t53BEDDE14FD5A4890CA209C6A5C92ED36C826DB0 * value)
	{
		___pointers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointers_17), (void*)value);
	}

	inline static int32_t get_offset_of_pendingOverallFocusEnterSet_18() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___pendingOverallFocusEnterSet_18)); }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * get_pendingOverallFocusEnterSet_18() const { return ___pendingOverallFocusEnterSet_18; }
	inline HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 ** get_address_of_pendingOverallFocusEnterSet_18() { return &___pendingOverallFocusEnterSet_18; }
	inline void set_pendingOverallFocusEnterSet_18(HashSet_1_t77825C5E92A478ADAC0C07A97589EB9CBFF229E3 * value)
	{
		___pendingOverallFocusEnterSet_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingOverallFocusEnterSet_18), (void*)value);
	}

	inline static int32_t get_offset_of_pendingOverallFocusExitSet_19() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___pendingOverallFocusExitSet_19)); }
	inline Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * get_pendingOverallFocusExitSet_19() const { return ___pendingOverallFocusExitSet_19; }
	inline Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B ** get_address_of_pendingOverallFocusExitSet_19() { return &___pendingOverallFocusExitSet_19; }
	inline void set_pendingOverallFocusExitSet_19(Dictionary_2_t4C2FB1CAF9188DADBB3D9EC66581072D16870B9B * value)
	{
		___pendingOverallFocusExitSet_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingOverallFocusExitSet_19), (void*)value);
	}

	inline static int32_t get_offset_of_pendingPointerSpecificFocusChange_20() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___pendingPointerSpecificFocusChange_20)); }
	inline List_1_t01AE7573418E41C6368D999AC83D30FDD4B7A650 * get_pendingPointerSpecificFocusChange_20() const { return ___pendingPointerSpecificFocusChange_20; }
	inline List_1_t01AE7573418E41C6368D999AC83D30FDD4B7A650 ** get_address_of_pendingPointerSpecificFocusChange_20() { return &___pendingPointerSpecificFocusChange_20; }
	inline void set_pendingPointerSpecificFocusChange_20(List_1_t01AE7573418E41C6368D999AC83D30FDD4B7A650 * value)
	{
		___pendingPointerSpecificFocusChange_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingPointerSpecificFocusChange_20), (void*)value);
	}

	inline static int32_t get_offset_of_pointerMediators_21() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___pointerMediators_21)); }
	inline Dictionary_2_tC83B76260EEF373CC567182B5BA04BC0BB714FFB * get_pointerMediators_21() const { return ___pointerMediators_21; }
	inline Dictionary_2_tC83B76260EEF373CC567182B5BA04BC0BB714FFB ** get_address_of_pointerMediators_21() { return &___pointerMediators_21; }
	inline void set_pointerMediators_21(Dictionary_2_tC83B76260EEF373CC567182B5BA04BC0BB714FFB * value)
	{
		___pointerMediators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerMediators_21), (void*)value);
	}

	inline static int32_t get_offset_of_hitResult3d_22() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___hitResult3d_22)); }
	inline PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D * get_hitResult3d_22() const { return ___hitResult3d_22; }
	inline PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D ** get_address_of_hitResult3d_22() { return &___hitResult3d_22; }
	inline void set_hitResult3d_22(PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D * value)
	{
		___hitResult3d_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitResult3d_22), (void*)value);
	}

	inline static int32_t get_offset_of_hitResultUi_23() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___hitResultUi_23)); }
	inline PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D * get_hitResultUi_23() const { return ___hitResultUi_23; }
	inline PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D ** get_address_of_hitResultUi_23() { return &___hitResultUi_23; }
	inline void set_hitResultUi_23(PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D * value)
	{
		___hitResultUi_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitResultUi_23), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemProfile_24() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___inputSystemProfile_24)); }
	inline MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468 * get_inputSystemProfile_24() const { return ___inputSystemProfile_24; }
	inline MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468 ** get_address_of_inputSystemProfile_24() { return &___inputSystemProfile_24; }
	inline void set_inputSystemProfile_24(MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468 * value)
	{
		___inputSystemProfile_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_24), (void*)value);
	}

	inline static int32_t get_offset_of_maxQuerySceneResults_25() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___maxQuerySceneResults_25)); }
	inline int32_t get_maxQuerySceneResults_25() const { return ___maxQuerySceneResults_25; }
	inline int32_t* get_address_of_maxQuerySceneResults_25() { return &___maxQuerySceneResults_25; }
	inline void set_maxQuerySceneResults_25(int32_t value)
	{
		___maxQuerySceneResults_25 = value;
	}

	inline static int32_t get_offset_of_shouldUseGraphicsRaycast_26() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___shouldUseGraphicsRaycast_26)); }
	inline bool get_shouldUseGraphicsRaycast_26() const { return ___shouldUseGraphicsRaycast_26; }
	inline bool* get_address_of_shouldUseGraphicsRaycast_26() { return &___shouldUseGraphicsRaycast_26; }
	inline void set_shouldUseGraphicsRaycast_26(bool value)
	{
		___shouldUseGraphicsRaycast_26 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_27() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___focusIndividualCompoundCollider_27)); }
	inline bool get_focusIndividualCompoundCollider_27() const { return ___focusIndividualCompoundCollider_27; }
	inline bool* get_address_of_focusIndividualCompoundCollider_27() { return &___focusIndividualCompoundCollider_27; }
	inline void set_focusIndividualCompoundCollider_27(bool value)
	{
		___focusIndividualCompoundCollider_27 = value;
	}

	inline static int32_t get_offset_of_U3CNumNearPointersActiveU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___U3CNumNearPointersActiveU3Ek__BackingField_28)); }
	inline int32_t get_U3CNumNearPointersActiveU3Ek__BackingField_28() const { return ___U3CNumNearPointersActiveU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CNumNearPointersActiveU3Ek__BackingField_28() { return &___U3CNumNearPointersActiveU3Ek__BackingField_28; }
	inline void set_U3CNumNearPointersActiveU3Ek__BackingField_28(int32_t value)
	{
		___U3CNumNearPointersActiveU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CNumFarPointersActiveU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___U3CNumFarPointersActiveU3Ek__BackingField_29)); }
	inline int32_t get_U3CNumFarPointersActiveU3Ek__BackingField_29() const { return ___U3CNumFarPointersActiveU3Ek__BackingField_29; }
	inline int32_t* get_address_of_U3CNumFarPointersActiveU3Ek__BackingField_29() { return &___U3CNumFarPointersActiveU3Ek__BackingField_29; }
	inline void set_U3CNumFarPointersActiveU3Ek__BackingField_29(int32_t value)
	{
		___U3CNumFarPointersActiveU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_primaryPointer_30() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___primaryPointer_30)); }
	inline RuntimeObject* get_primaryPointer_30() const { return ___primaryPointer_30; }
	inline RuntimeObject** get_address_of_primaryPointer_30() { return &___primaryPointer_30; }
	inline void set_primaryPointer_30(RuntimeObject* value)
	{
		___primaryPointer_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryPointer_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___U3CNameU3Ek__BackingField_31)); }
	inline String_t* get_U3CNameU3Ek__BackingField_31() const { return ___U3CNameU3Ek__BackingField_31; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_31() { return &___U3CNameU3Ek__BackingField_31; }
	inline void set_U3CNameU3Ek__BackingField_31(String_t* value)
	{
		___U3CNameU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_focusLayerMasks_32() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___focusLayerMasks_32)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_focusLayerMasks_32() const { return ___focusLayerMasks_32; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_focusLayerMasks_32() { return &___focusLayerMasks_32; }
	inline void set_focusLayerMasks_32(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___focusLayerMasks_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusLayerMasks_32), (void*)value);
	}

	inline static int32_t get_offset_of_uiRaycastCameraTargetTexture_33() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___uiRaycastCameraTargetTexture_33)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_uiRaycastCameraTargetTexture_33() const { return ___uiRaycastCameraTargetTexture_33; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_uiRaycastCameraTargetTexture_33() { return &___uiRaycastCameraTargetTexture_33; }
	inline void set_uiRaycastCameraTargetTexture_33(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___uiRaycastCameraTargetTexture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiRaycastCameraTargetTexture_33), (void*)value);
	}

	inline static int32_t get_offset_of_uiRaycastCamera_34() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___uiRaycastCamera_34)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_uiRaycastCamera_34() const { return ___uiRaycastCamera_34; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_uiRaycastCamera_34() { return &___uiRaycastCamera_34; }
	inline void set_uiRaycastCamera_34(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___uiRaycastCamera_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiRaycastCamera_34), (void*)value);
	}

	inline static int32_t get_offset_of_gazeProviderPointingData_35() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___gazeProviderPointingData_35)); }
	inline PointerData_t0B1ED33EEC6DA420E84DE4DAAAFAA812F55EBD56 * get_gazeProviderPointingData_35() const { return ___gazeProviderPointingData_35; }
	inline PointerData_t0B1ED33EEC6DA420E84DE4DAAAFAA812F55EBD56 ** get_address_of_gazeProviderPointingData_35() { return &___gazeProviderPointingData_35; }
	inline void set_gazeProviderPointingData_35(PointerData_t0B1ED33EEC6DA420E84DE4DAAAFAA812F55EBD56 * value)
	{
		___gazeProviderPointingData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeProviderPointingData_35), (void*)value);
	}

	inline static int32_t get_offset_of_gazeHitResult_36() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___gazeHitResult_36)); }
	inline PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D * get_gazeHitResult_36() const { return ___gazeHitResult_36; }
	inline PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D ** get_address_of_gazeHitResult_36() { return &___gazeHitResult_36; }
	inline void set_gazeHitResult_36(PointerHitResult_tFD3A26522CA5C043652151B2CDEC3A133611204D * value)
	{
		___gazeHitResult_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeHitResult_36), (void*)value);
	}

	inline static int32_t get_offset_of_newUiRaycastPosition_37() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___newUiRaycastPosition_37)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newUiRaycastPosition_37() const { return ___newUiRaycastPosition_37; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newUiRaycastPosition_37() { return &___newUiRaycastPosition_37; }
	inline void set_newUiRaycastPosition_37(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newUiRaycastPosition_37 = value;
	}

	inline static int32_t get_offset_of_gazePointerStateMachine_38() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___gazePointerStateMachine_38)); }
	inline GazePointerVisibilityStateMachine_t770C8C03078DF14477C7E7E89B7F05105ECC7D49 * get_gazePointerStateMachine_38() const { return ___gazePointerStateMachine_38; }
	inline GazePointerVisibilityStateMachine_t770C8C03078DF14477C7E7E89B7F05105ECC7D49 ** get_address_of_gazePointerStateMachine_38() { return &___gazePointerStateMachine_38; }
	inline void set_gazePointerStateMachine_38(GazePointerVisibilityStateMachine_t770C8C03078DF14477C7E7E89B7F05105ECC7D49 * value)
	{
		___gazePointerStateMachine_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazePointerStateMachine_38), (void*)value);
	}

	inline static int32_t get_offset_of_primaryPointerSelector_39() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___primaryPointerSelector_39)); }
	inline RuntimeObject* get_primaryPointerSelector_39() const { return ___primaryPointerSelector_39; }
	inline RuntimeObject** get_address_of_primaryPointerSelector_39() { return &___primaryPointerSelector_39; }
	inline void set_primaryPointerSelector_39(RuntimeObject* value)
	{
		___primaryPointerSelector_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryPointerSelector_39), (void*)value);
	}

	inline static int32_t get_offset_of_PrimaryPointerChanged_40() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___PrimaryPointerChanged_40)); }
	inline PrimaryPointerChangedHandler_t54B2A550FF3CD29EA058197E342B122B536BE5C2 * get_PrimaryPointerChanged_40() const { return ___PrimaryPointerChanged_40; }
	inline PrimaryPointerChangedHandler_t54B2A550FF3CD29EA058197E342B122B536BE5C2 ** get_address_of_PrimaryPointerChanged_40() { return &___PrimaryPointerChanged_40; }
	inline void set_PrimaryPointerChanged_40(PrimaryPointerChangedHandler_t54B2A550FF3CD29EA058197E342B122B536BE5C2 * value)
	{
		___PrimaryPointerChanged_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrimaryPointerChanged_40), (void*)value);
	}

	inline static int32_t get_offset_of_customPointerBehaviors_62() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___customPointerBehaviors_62)); }
	inline List_1_t4CBBB4F995CDEA7D5C17AC4762EDC54F854E718C * get_customPointerBehaviors_62() const { return ___customPointerBehaviors_62; }
	inline List_1_t4CBBB4F995CDEA7D5C17AC4762EDC54F854E718C ** get_address_of_customPointerBehaviors_62() { return &___customPointerBehaviors_62; }
	inline void set_customPointerBehaviors_62(List_1_t4CBBB4F995CDEA7D5C17AC4762EDC54F854E718C * value)
	{
		___customPointerBehaviors_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customPointerBehaviors_62), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazePointerBehaviorU3Ek__BackingField_63() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E, ___U3CGazePointerBehaviorU3Ek__BackingField_63)); }
	inline int32_t get_U3CGazePointerBehaviorU3Ek__BackingField_63() const { return ___U3CGazePointerBehaviorU3Ek__BackingField_63; }
	inline int32_t* get_address_of_U3CGazePointerBehaviorU3Ek__BackingField_63() { return &___U3CGazePointerBehaviorU3Ek__BackingField_63; }
	inline void set_U3CGazePointerBehaviorU3Ek__BackingField_63(int32_t value)
	{
		___U3CGazePointerBehaviorU3Ek__BackingField_63 = value;
	}
};

struct FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_41;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdateGazeProviderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateGazeProviderPerfMarker_42;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::GetFocusedObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetFocusedObjectPerfMarker_43;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::TryGetFocusDetailsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetFocusDetailsPerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::TryOverrideFocusDetailsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryOverrideFocusDetailsPerfMarker_45;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::GenerateNewPointerIdPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GenerateNewPointerIdPerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RegisterPointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RegisterPointerPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RegisterPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RegisterPointersPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UnregisterPointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnregisterPointerPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::TryGetPointerDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryGetPointerDataPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdatePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePointersPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePointerPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::GetPrioritizedHitResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetPrioritizedHitResultPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::ReconcilePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReconcilePointersPerfMarker_54;
	// UnityEngine.Collider[] Microsoft.MixedReality.Toolkit.Input.FocusProvider::colliders
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___colliders_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::QueryScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___QueryScenePerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RaycastGraphicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaycastGraphicsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::RaycastGraphicsStepPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaycastGraphicsStepPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::UpdateFocusedObjectsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateFocusedObjectsPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::OnSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceDetectedPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.FocusProvider::OnSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceLostPerfMarker_61;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_41() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___UpdatePerfMarker_41)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_41() const { return ___UpdatePerfMarker_41; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_41() { return &___UpdatePerfMarker_41; }
	inline void set_UpdatePerfMarker_41(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_41 = value;
	}

	inline static int32_t get_offset_of_UpdateGazeProviderPerfMarker_42() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___UpdateGazeProviderPerfMarker_42)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateGazeProviderPerfMarker_42() const { return ___UpdateGazeProviderPerfMarker_42; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateGazeProviderPerfMarker_42() { return &___UpdateGazeProviderPerfMarker_42; }
	inline void set_UpdateGazeProviderPerfMarker_42(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateGazeProviderPerfMarker_42 = value;
	}

	inline static int32_t get_offset_of_GetFocusedObjectPerfMarker_43() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___GetFocusedObjectPerfMarker_43)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetFocusedObjectPerfMarker_43() const { return ___GetFocusedObjectPerfMarker_43; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetFocusedObjectPerfMarker_43() { return &___GetFocusedObjectPerfMarker_43; }
	inline void set_GetFocusedObjectPerfMarker_43(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetFocusedObjectPerfMarker_43 = value;
	}

	inline static int32_t get_offset_of_TryGetFocusDetailsPerfMarker_44() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___TryGetFocusDetailsPerfMarker_44)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetFocusDetailsPerfMarker_44() const { return ___TryGetFocusDetailsPerfMarker_44; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetFocusDetailsPerfMarker_44() { return &___TryGetFocusDetailsPerfMarker_44; }
	inline void set_TryGetFocusDetailsPerfMarker_44(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetFocusDetailsPerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_TryOverrideFocusDetailsPerfMarker_45() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___TryOverrideFocusDetailsPerfMarker_45)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryOverrideFocusDetailsPerfMarker_45() const { return ___TryOverrideFocusDetailsPerfMarker_45; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryOverrideFocusDetailsPerfMarker_45() { return &___TryOverrideFocusDetailsPerfMarker_45; }
	inline void set_TryOverrideFocusDetailsPerfMarker_45(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryOverrideFocusDetailsPerfMarker_45 = value;
	}

	inline static int32_t get_offset_of_GenerateNewPointerIdPerfMarker_46() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___GenerateNewPointerIdPerfMarker_46)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GenerateNewPointerIdPerfMarker_46() const { return ___GenerateNewPointerIdPerfMarker_46; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GenerateNewPointerIdPerfMarker_46() { return &___GenerateNewPointerIdPerfMarker_46; }
	inline void set_GenerateNewPointerIdPerfMarker_46(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GenerateNewPointerIdPerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_RegisterPointerPerfMarker_47() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___RegisterPointerPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RegisterPointerPerfMarker_47() const { return ___RegisterPointerPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RegisterPointerPerfMarker_47() { return &___RegisterPointerPerfMarker_47; }
	inline void set_RegisterPointerPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RegisterPointerPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_RegisterPointersPerfMarker_48() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___RegisterPointersPerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RegisterPointersPerfMarker_48() const { return ___RegisterPointersPerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RegisterPointersPerfMarker_48() { return &___RegisterPointersPerfMarker_48; }
	inline void set_RegisterPointersPerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RegisterPointersPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_UnregisterPointerPerfMarker_49() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___UnregisterPointerPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnregisterPointerPerfMarker_49() const { return ___UnregisterPointerPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnregisterPointerPerfMarker_49() { return &___UnregisterPointerPerfMarker_49; }
	inline void set_UnregisterPointerPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnregisterPointerPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_TryGetPointerDataPerfMarker_50() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___TryGetPointerDataPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryGetPointerDataPerfMarker_50() const { return ___TryGetPointerDataPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryGetPointerDataPerfMarker_50() { return &___TryGetPointerDataPerfMarker_50; }
	inline void set_TryGetPointerDataPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryGetPointerDataPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_UpdatePointersPerfMarker_51() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___UpdatePointersPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePointersPerfMarker_51() const { return ___UpdatePointersPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePointersPerfMarker_51() { return &___UpdatePointersPerfMarker_51; }
	inline void set_UpdatePointersPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePointersPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_UpdatePointerPerfMarker_52() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___UpdatePointerPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePointerPerfMarker_52() const { return ___UpdatePointerPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePointerPerfMarker_52() { return &___UpdatePointerPerfMarker_52; }
	inline void set_UpdatePointerPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePointerPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_GetPrioritizedHitResultPerfMarker_53() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___GetPrioritizedHitResultPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetPrioritizedHitResultPerfMarker_53() const { return ___GetPrioritizedHitResultPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetPrioritizedHitResultPerfMarker_53() { return &___GetPrioritizedHitResultPerfMarker_53; }
	inline void set_GetPrioritizedHitResultPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetPrioritizedHitResultPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_ReconcilePointersPerfMarker_54() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___ReconcilePointersPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReconcilePointersPerfMarker_54() const { return ___ReconcilePointersPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReconcilePointersPerfMarker_54() { return &___ReconcilePointersPerfMarker_54; }
	inline void set_ReconcilePointersPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReconcilePointersPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_colliders_55() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___colliders_55)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_colliders_55() const { return ___colliders_55; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_colliders_55() { return &___colliders_55; }
	inline void set_colliders_55(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___colliders_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_55), (void*)value);
	}

	inline static int32_t get_offset_of_QueryScenePerfMarker_56() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___QueryScenePerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_QueryScenePerfMarker_56() const { return ___QueryScenePerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_QueryScenePerfMarker_56() { return &___QueryScenePerfMarker_56; }
	inline void set_QueryScenePerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___QueryScenePerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_RaycastGraphicsPerfMarker_57() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___RaycastGraphicsPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaycastGraphicsPerfMarker_57() const { return ___RaycastGraphicsPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaycastGraphicsPerfMarker_57() { return &___RaycastGraphicsPerfMarker_57; }
	inline void set_RaycastGraphicsPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaycastGraphicsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_RaycastGraphicsStepPerfMarker_58() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___RaycastGraphicsStepPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaycastGraphicsStepPerfMarker_58() const { return ___RaycastGraphicsStepPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaycastGraphicsStepPerfMarker_58() { return &___RaycastGraphicsStepPerfMarker_58; }
	inline void set_RaycastGraphicsStepPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaycastGraphicsStepPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_UpdateFocusedObjectsPerfMarker_59() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___UpdateFocusedObjectsPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateFocusedObjectsPerfMarker_59() const { return ___UpdateFocusedObjectsPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateFocusedObjectsPerfMarker_59() { return &___UpdateFocusedObjectsPerfMarker_59; }
	inline void set_UpdateFocusedObjectsPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateFocusedObjectsPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedPerfMarker_60() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___OnSourceDetectedPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceDetectedPerfMarker_60() const { return ___OnSourceDetectedPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceDetectedPerfMarker_60() { return &___OnSourceDetectedPerfMarker_60; }
	inline void set_OnSourceDetectedPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceDetectedPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_61() { return static_cast<int32_t>(offsetof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_StaticFields, ___OnSourceLostPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceLostPerfMarker_61() const { return ___OnSourceLostPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceLostPerfMarker_61() { return &___OnSourceLostPerfMarker_61; }
	inline void set_OnSourceLostPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceLostPerfMarker_61 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct GenericXRSDKCameraSettings_tA2E5BA8DA73340AE829113BAAA336052D86180EF  : public BaseCameraSettingsProvider_t93CD0A8CBB640727205E73529E3D90688DB6A8A3
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings::trackedPoseDriver
	TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * ___trackedPoseDriver_11;

public:
	inline static int32_t get_offset_of_trackedPoseDriver_11() { return static_cast<int32_t>(offsetof(GenericXRSDKCameraSettings_tA2E5BA8DA73340AE829113BAAA336052D86180EF, ___trackedPoseDriver_11)); }
	inline TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * get_trackedPoseDriver_11() const { return ___trackedPoseDriver_11; }
	inline TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 ** get_address_of_trackedPoseDriver_11() { return &___trackedPoseDriver_11; }
	inline void set_trackedPoseDriver_11(TrackedPoseDriver_t76FFA7BA9FCABF9DA0A77CA1D1B387E63BE3EDE8 * value)
	{
		___trackedPoseDriver_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedPoseDriver_11), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2  : public BaseSpatialMeshObserver_t4008A4CB21ECAA7396BAC5FA29E4CD8436E4AF1E
{
public:
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshSubsystem_43;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_45;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_46;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * ___outstandingMeshObject_47;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * ___spareMeshObject_48;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_49;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_58;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_59;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_60;

public:
	inline static int32_t get_offset_of_meshSubsystem_43() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2, ___meshSubsystem_43)); }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * get_meshSubsystem_43() const { return ___meshSubsystem_43; }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 ** get_address_of_meshSubsystem_43() { return &___meshSubsystem_43; }
	inline void set_meshSubsystem_43(XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * value)
	{
		___meshSubsystem_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_43), (void*)value);
	}

	inline static int32_t get_offset_of_meshWorkQueue_45() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2, ___meshWorkQueue_45)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_45() const { return ___meshWorkQueue_45; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_45() { return &___meshWorkQueue_45; }
	inline void set_meshWorkQueue_45(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_45), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_46() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2, ___meshInfos_46)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_46() const { return ___meshInfos_46; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_46() { return &___meshInfos_46; }
	inline void set_meshInfos_46(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_46), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2, ___outstandingMeshObject_47)); }
	inline SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * get_outstandingMeshObject_47() const { return ___outstandingMeshObject_47; }
	inline SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 ** get_address_of_outstandingMeshObject_47() { return &___outstandingMeshObject_47; }
	inline void set_outstandingMeshObject_47(SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * value)
	{
		___outstandingMeshObject_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_47), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2, ___spareMeshObject_48)); }
	inline SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * get_spareMeshObject_48() const { return ___spareMeshObject_48; }
	inline SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 ** get_address_of_spareMeshObject_48() { return &___spareMeshObject_48; }
	inline void set_spareMeshObject_48(SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899 * value)
	{
		___spareMeshObject_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_48), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2, ___lastUpdated_49)); }
	inline float get_lastUpdated_49() const { return ___lastUpdated_49; }
	inline float* get_address_of_lastUpdated_49() { return &___lastUpdated_49; }
	inline void set_lastUpdated_49(float value)
	{
		___lastUpdated_49 = value;
	}

	inline static int32_t get_offset_of_oldObserverOrigin_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2, ___oldObserverOrigin_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_58() const { return ___oldObserverOrigin_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_58() { return &___oldObserverOrigin_58; }
	inline void set_oldObserverOrigin_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_58 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2, ___oldObservationExtents_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_59() const { return ___oldObservationExtents_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_59() { return &___oldObservationExtents_59; }
	inline void set_oldObservationExtents_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_59 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_60() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2, ___oldObserverVolumeType_60)); }
	inline int32_t get_oldObserverVolumeType_60() const { return ___oldObserverVolumeType_60; }
	inline int32_t* get_address_of_oldObserverVolumeType_60() { return &___oldObserverVolumeType_60; }
	inline void set_oldObserverVolumeType_60(int32_t value)
	{
		___oldObserverVolumeType_60 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_62;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_44() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___UpdatePerfMarker_44)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_44() const { return ___UpdatePerfMarker_44; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_44() { return &___UpdatePerfMarker_44; }
	inline void set_UpdatePerfMarker_44(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___ResumePerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_50() const { return ___ResumePerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_50() { return &___ResumePerfMarker_50; }
	inline void set_ResumePerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___SuspendPerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_51() const { return ___SuspendPerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_51() { return &___SuspendPerfMarker_51; }
	inline void set_SuspendPerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___ClearObservationsPerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_52() const { return ___ClearObservationsPerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_52() { return &___ClearObservationsPerfMarker_52; }
	inline void set_ClearObservationsPerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___UpdateObserverPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_53() const { return ___UpdateObserverPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_53() { return &___UpdateObserverPerfMarker_53; }
	inline void set_UpdateObserverPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___RequestMeshPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_54() const { return ___RequestMeshPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_54() { return &___RequestMeshPerfMarker_54; }
	inline void set_RequestMeshPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___RemoveMeshObjectPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_55() const { return ___RemoveMeshObjectPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_55() { return &___RemoveMeshObjectPerfMarker_55; }
	inline void set_RemoveMeshObjectPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___ReclaimMeshObjectPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_56() const { return ___ReclaimMeshObjectPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_56() { return &___ReclaimMeshObjectPerfMarker_56; }
	inline void set_ReclaimMeshObjectPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___ConfigureObserverVolumePerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_57() const { return ___ConfigureObserverVolumePerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_57() { return &___ConfigureObserverVolumePerfMarker_57; }
	inline void set_ConfigureObserverVolumePerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_61() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___UpdateMeshesPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_61() const { return ___UpdateMeshesPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_61() { return &___UpdateMeshesPerfMarker_61; }
	inline void set_UpdateMeshesPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_62() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_StaticFields, ___MeshGenerationActionPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_62() const { return ___MeshGenerationActionPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_62() { return &___MeshGenerationActionPerfMarker_62; }
	inline void set_MeshGenerationActionPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_62 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_mC3C875318BFC0DB6FF109AE2142E81C32EE671F5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m63C033311CA7C5A3729C7DF1CB91E39692AEFF9D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m1B96A82E2F0F0BD6AE8062B6C5D88A2EE5F23D4B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mADE51304A0A90C8A9653864A44951D8D6F7F8DBE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m45056F1C11332A4A4451B6A72A7ED34ACD50010E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m0C0042EEDAC0EF223BC63A12CBB023B2FFD9FA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0);
il2cpp_hresult_t IMap_2_Clear_m0E5AE97AEE6B826AADF35E2500CCCA3C29862B62_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mE4524DC68711FA3BBED088D21A0C0886ED005EEE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE9B563526C618CB18271B63A0D8B6972E4075CDC** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m66634C00C961C7768897D388C2B5164C725E5DA6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_m84D9E32AEE514FB3D963961C40B6ADE4053273F0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m58FF395677F45DCFB3C34790C1B8EA9F3FA2B854_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mB7FA30C6154E705958DA25B185A635382425B860_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___first0, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___second1);


// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);

// COM Callable Wrapper for System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Policy.Evidence
struct Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Evidence_t5512CE2EB76E95C5D4A88D1960CA0A56125E30DB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Exception
struct Exception_t_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Exception_t_ComCallableWrapper>, IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Exception_t_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Exception_t_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t6EEA131ED0FE08607FF7DF69D2A329F4165A16CB::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAA3D5310A328BC7561FCA472E95A3A358367ADBD(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t * returnValue;
		try
		{
			returnValue = static_cast<Exception_t *>(GetManagedObjectInline());
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Exception_t(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Exception_t_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Exception_t_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FileWebResponse
struct FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileWebResponse_t25879ED76518C6498485DE2A77255A712FD5E3A6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FileWebStream
struct FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FileWebStream_t3FE155782224B8E59388C0D8D767BDA4F21B915C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.FocusProvider
struct FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FocusProvider_tE5A6D914A0DCAD639440994842320215BDEB5F5E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.FoundationContract
struct FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper>, IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_tD8746117A7FBAA39E9832608AFFFC5D5E9496625::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mF828061D1EC5AB7A239BAE56E3DEDC85BDD96581(FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C  returnValue;
		try
		{
			returnValue = *static_cast<FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C *>(UnBox(GetManagedObjectInline(), FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FoundationContract_t93F803850791CE4B6F679E29D06E70DCAC71261C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FtpDataStream
struct FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FtpDataStream_t8D77868ECA7AFC1A74A996CADD50D0E0B40ACFB0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.FtpWebResponse
struct FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) FtpWebResponse_t4462ADF9C14124B97DC10705932A9234DACEED49_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.Compression.GZipStream
struct GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GZipStream_t3C2FE429FBD114B00B7B65623757F5862196B9B6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngineInternal.GenericStack
struct GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GenericStack_tFE88EF4FAC2E3519951AC2A4D721C3BD1A02E24C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKCameraSettings
struct GenericXRSDKCameraSettings_tA2E5BA8DA73340AE829113BAAA336052D86180EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GenericXRSDKCameraSettings_tA2E5BA8DA73340AE829113BAAA336052D86180EF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GenericXRSDKCameraSettings_tA2E5BA8DA73340AE829113BAAA336052D86180EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GenericXRSDKCameraSettings_tA2E5BA8DA73340AE829113BAAA336052D86180EF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GenericXRSDKCameraSettings_tA2E5BA8DA73340AE829113BAAA336052D86180EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GenericXRSDKCameraSettings_tA2E5BA8DA73340AE829113BAAA336052D86180EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GenericXRSDKCameraSettings_tA2E5BA8DA73340AE829113BAAA336052D86180EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.GestureRecognizer
struct GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.GestureSubsystem
struct GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GestureSubsystem_t4977AB1F9EE419C0E29C118BCB7D05A423215F26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.Gltf.Schema.GltfMeshPrimitiveAttributes
struct GltfMeshPrimitiveAttributes_t781775A2FA054027314443BF0985658D8BEA6B8A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GltfMeshPrimitiveAttributes_t781775A2FA054027314443BF0985658D8BEA6B8A_ComCallableWrapper>, IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599, IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82
{
	inline GltfMeshPrimitiveAttributes_t781775A2FA054027314443BF0985658D8BEA6B8A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GltfMeshPrimitiveAttributes_t781775A2FA054027314443BF0985658D8BEA6B8A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_tD2BD3BC15C804F5F1EA2FCCB6863B1B6CFC8F599::IID;
		interfaceIds[1] = IIterable_1_tC1B323F9031EA36094A9613B13F783C30560D9D6::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mC3C875318BFC0DB6FF109AE2142E81C32EE671F5(Il2CppHString ___key0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_mC3C875318BFC0DB6FF109AE2142E81C32EE671F5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m63C033311CA7C5A3729C7DF1CB91E39692AEFF9D(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m63C033311CA7C5A3729C7DF1CB91E39692AEFF9D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1B96A82E2F0F0BD6AE8062B6C5D88A2EE5F23D4B(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m1B96A82E2F0F0BD6AE8062B6C5D88A2EE5F23D4B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mADE51304A0A90C8A9653864A44951D8D6F7F8DBE(IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mADE51304A0A90C8A9653864A44951D8D6F7F8DBE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m45056F1C11332A4A4451B6A72A7ED34ACD50010E(Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m45056F1C11332A4A4451B6A72A7ED34ACD50010E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m0C0042EEDAC0EF223BC63A12CBB023B2FFD9FA64(Il2CppHString ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m0C0042EEDAC0EF223BC63A12CBB023B2FFD9FA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m0E5AE97AEE6B826AADF35E2500CCCA3C29862B62() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m0E5AE97AEE6B826AADF35E2500CCCA3C29862B62_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE4524DC68711FA3BBED088D21A0C0886ED005EEE(IIterator_1_tE9B563526C618CB18271B63A0D8B6972E4075CDC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE4524DC68711FA3BBED088D21A0C0886ED005EEE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m66634C00C961C7768897D388C2B5164C725E5DA6(Il2CppHString ___key0, int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m66634C00C961C7768897D388C2B5164C725E5DA6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m84D9E32AEE514FB3D963961C40B6ADE4053273F0(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_m84D9E32AEE514FB3D963961C40B6ADE4053273F0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m58FF395677F45DCFB3C34790C1B8EA9F3FA2B854(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m58FF395677F45DCFB3C34790C1B8EA9F3FA2B854_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mB7FA30C6154E705958DA25B185A635382425B860(IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___first0, IMapView_2_tF4CA61667F5F65A76776BC44B449959B1A5CFD82** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mB7FA30C6154E705958DA25B185A635382425B860_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GltfMeshPrimitiveAttributes_t781775A2FA054027314443BF0985658D8BEA6B8A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GltfMeshPrimitiveAttributes_t781775A2FA054027314443BF0985658D8BEA6B8A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GltfMeshPrimitiveAttributes_t781775A2FA054027314443BF0985658D8BEA6B8A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) GroupCollection_tAA9CA4E93B1A9D6B7199EE25AEB32922E72AA556_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Guid
struct Guid_t_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Guid_t_ComCallableWrapper>, IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Guid_t_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Guid_t_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t4296715C42C1A39E8C298DD033EFC22C829A08C9::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7AEA139C31FD4E2AFE6D20B7BB007E20B4389047(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Guid_t  returnValue;
		try
		{
			returnValue = *static_cast<Guid_t *>(UnBox(GetManagedObjectInline(), Guid_t_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 16;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		String_t* returnValue;
		try
		{
			String_t* il2cppRetVal;
			il2cppRetVal = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75(static_cast<Guid_t *>(UnBox(GetManagedObjectInline(), Guid_t_il2cpp_TypeInfo_var)), NULL);
			returnValue = il2cppRetVal;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		Il2CppHString _returnValue_marshaled = NULL;
		if (returnValue == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL);
		}
		_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Guid_t  returnValue;
		try
		{
			returnValue = *static_cast<Guid_t *>(UnBox(GetManagedObjectInline(), Guid_t_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Guid", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Guid_t(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Guid_t_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Guid_t_ComCallableWrapper(obj));
}
