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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tE4AA04B31C201432D691DD81E64F3624906B15D4;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_tBDD5926BC1EE372C9A9E1DB2F7D5D2A1CF1BAE97;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t2540786130E9454B07F952EFE95468EA67CC768E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Int32>
struct Dictionary_2_t9271D5E45EC14905F5999D37CAEA9320F5D0A5F6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t5F7116A55851C62C57EC2420EC2A9B9C8FF72CEE;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t1BCE2EEFEB80F4B25AFBEAD3023FB032C666B996;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Diagnostics.AsyncStreamReader
struct AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D;
// System.Xml.BitStack
struct BitStack_t06F411C96B04DE5B8D4A67EC95F15674B52ACB98;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_tB02F61739723804E9D06078A4864FFB3F74BED90;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.OpenXR.GestureRecognizer
struct GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tD7A4D45A3EC6D529A76D820F246766734679BEA0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t063D0EA483485B6D709977E7F4462E3731048173;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tC55D34D75F571FA6A3F6169F6352C9CDC4C93D67;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t95FF063A5295003D96C3C680EDF773DDF830DBF9;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_tE715F6572D858174C1BDCF0076B3C6415B226CD0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseController
struct MouseController_tE1582583C612D46D94D35AFDECD68DEDA4993836;
// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater
struct OpenXRReprojectionUpdater_t4320C55EE4A355C24029708EF1F94A5720FDD82E;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t808A113087635F3D104C8374BE1309A415BD0E22;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_tE3B25350576B52757F2CF7031F93D9E690972899;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905;
// System.Xml.XmlRawWriter
struct XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5;
// System.Xml.XmlRawWriterBase64Encoder
struct XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
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
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_2), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_3), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_4)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_4), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_5)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_5() const { return ____serializationInfo_5; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_5() { return &____serializationInfo_5; }
	inline void set__serializationInfo_5(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_6)); }
	inline int32_t get__version_6() const { return ____version_6; }
	inline int32_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int32_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_7), (void*)value);
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_8;

public:
	inline static int32_t get_offset_of_defaultComparer_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_8)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_8() const { return ___defaultComparer_8; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_8() { return &___defaultComparer_8; }
	inline void set_defaultComparer_8(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_8), (void*)value);
	}
};


// System.Security.Cryptography.OidCollection
struct OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.OidCollection::m_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___m_list_0;

public:
	inline static int32_t get_offset_of_m_list_0() { return static_cast<int32_t>(offsetof(OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902, ___m_list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_m_list_0() const { return ___m_list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_m_list_0() { return &___m_list_0; }
	inline void set_m_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___m_list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_list_0), (void*)value);
	}
};


// System.Collections.Specialized.OrderedDictionary
struct OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::_objectsArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____objectsArray_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::_objectsTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____objectsTable_1;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::_initialCapacity
	int32_t ____initialCapacity_2;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::_comparer
	RuntimeObject* ____comparer_3;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::_readOnly
	bool ____readOnly_4;
	// System.Object System.Collections.Specialized.OrderedDictionary::_syncRoot
	RuntimeObject * ____syncRoot_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_6;

public:
	inline static int32_t get_offset_of__objectsArray_0() { return static_cast<int32_t>(offsetof(OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16, ____objectsArray_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__objectsArray_0() const { return ____objectsArray_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__objectsArray_0() { return &____objectsArray_0; }
	inline void set__objectsArray_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____objectsArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectsArray_0), (void*)value);
	}

	inline static int32_t get_offset_of__objectsTable_1() { return static_cast<int32_t>(offsetof(OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16, ____objectsTable_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__objectsTable_1() const { return ____objectsTable_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__objectsTable_1() { return &____objectsTable_1; }
	inline void set__objectsTable_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____objectsTable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectsTable_1), (void*)value);
	}

	inline static int32_t get_offset_of__initialCapacity_2() { return static_cast<int32_t>(offsetof(OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16, ____initialCapacity_2)); }
	inline int32_t get__initialCapacity_2() const { return ____initialCapacity_2; }
	inline int32_t* get_address_of__initialCapacity_2() { return &____initialCapacity_2; }
	inline void set__initialCapacity_2(int32_t value)
	{
		____initialCapacity_2 = value;
	}

	inline static int32_t get_offset_of__comparer_3() { return static_cast<int32_t>(offsetof(OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16, ____comparer_3)); }
	inline RuntimeObject* get__comparer_3() const { return ____comparer_3; }
	inline RuntimeObject** get_address_of__comparer_3() { return &____comparer_3; }
	inline void set__comparer_3(RuntimeObject* value)
	{
		____comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of__readOnly_4() { return static_cast<int32_t>(offsetof(OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16, ____readOnly_4)); }
	inline bool get__readOnly_4() const { return ____readOnly_4; }
	inline bool* get_address_of__readOnly_4() { return &____readOnly_4; }
	inline void set__readOnly_4(bool value)
	{
		____readOnly_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}

	inline static int32_t get_offset_of__siInfo_6() { return static_cast<int32_t>(offsetof(OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16, ____siInfo_6)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_6() const { return ____siInfo_6; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_6() { return &____siInfo_6; }
	inline void set__siInfo_6(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_6), (void*)value);
	}
};


// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.ComponentModel.PropertyDescriptorCollection::cachedFoundProperties
	RuntimeObject* ___cachedFoundProperties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::cachedIgnoreCase
	bool ___cachedIgnoreCase_2;
	// System.ComponentModel.PropertyDescriptor[] System.ComponentModel.PropertyDescriptorCollection::properties
	PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* ___properties_3;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection::propCount
	int32_t ___propCount_4;
	// System.String[] System.ComponentModel.PropertyDescriptorCollection::namedSort
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___namedSort_5;
	// System.Collections.IComparer System.ComponentModel.PropertyDescriptorCollection::comparer
	RuntimeObject* ___comparer_6;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::propsOwned
	bool ___propsOwned_7;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::needSort
	bool ___needSort_8;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_9;

public:
	inline static int32_t get_offset_of_cachedFoundProperties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___cachedFoundProperties_1)); }
	inline RuntimeObject* get_cachedFoundProperties_1() const { return ___cachedFoundProperties_1; }
	inline RuntimeObject** get_address_of_cachedFoundProperties_1() { return &___cachedFoundProperties_1; }
	inline void set_cachedFoundProperties_1(RuntimeObject* value)
	{
		___cachedFoundProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedFoundProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_cachedIgnoreCase_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___cachedIgnoreCase_2)); }
	inline bool get_cachedIgnoreCase_2() const { return ___cachedIgnoreCase_2; }
	inline bool* get_address_of_cachedIgnoreCase_2() { return &___cachedIgnoreCase_2; }
	inline void set_cachedIgnoreCase_2(bool value)
	{
		___cachedIgnoreCase_2 = value;
	}

	inline static int32_t get_offset_of_properties_3() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___properties_3)); }
	inline PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* get_properties_3() const { return ___properties_3; }
	inline PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75** get_address_of_properties_3() { return &___properties_3; }
	inline void set_properties_3(PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* value)
	{
		___properties_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_3), (void*)value);
	}

	inline static int32_t get_offset_of_propCount_4() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___propCount_4)); }
	inline int32_t get_propCount_4() const { return ___propCount_4; }
	inline int32_t* get_address_of_propCount_4() { return &___propCount_4; }
	inline void set_propCount_4(int32_t value)
	{
		___propCount_4 = value;
	}

	inline static int32_t get_offset_of_namedSort_5() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___namedSort_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_namedSort_5() const { return ___namedSort_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_namedSort_5() { return &___namedSort_5; }
	inline void set_namedSort_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___namedSort_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedSort_5), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_propsOwned_7() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___propsOwned_7)); }
	inline bool get_propsOwned_7() const { return ___propsOwned_7; }
	inline bool* get_address_of_propsOwned_7() { return &___propsOwned_7; }
	inline void set_propsOwned_7(bool value)
	{
		___propsOwned_7 = value;
	}

	inline static int32_t get_offset_of_needSort_8() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___needSort_8)); }
	inline bool get_needSort_8() const { return ___needSort_8; }
	inline bool* get_address_of_needSort_8() { return &___needSort_8; }
	inline void set_needSort_8(bool value)
	{
		___needSort_8 = value;
	}

	inline static int32_t get_offset_of_readOnly_9() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___readOnly_9)); }
	inline bool get_readOnly_9() const { return ___readOnly_9; }
	inline bool* get_address_of_readOnly_9() { return &___readOnly_9; }
	inline void set_readOnly_9(bool value)
	{
		___readOnly_9 = value;
	}
};

struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_6), (void*)value);
	}
};


// System.Collections.ReadOnlyCollectionBase
struct ReadOnlyCollectionBase_tBFAB6A50CF24B0886983ED0E449C436E5D9C0492  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_tBFAB6A50CF24B0886983ED0E449C436E5D9C0492, ___list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_0() const { return ___list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
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

// System.Xml.XmlWriter
struct XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D  : public RuntimeObject
{
public:

public:
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


// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
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


// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_10;

public:
	inline static int32_t get_offset_of__all_9() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_9() const { return ____all_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_9() { return &____all_9; }
	inline void set__all_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_9), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_10() const { return ____allKeys_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_10() { return &____allKeys_10; }
	inline void set__allKeys_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_10), (void*)value);
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


// Windows.Foundation.Point
struct Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};


// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1  : public ReadOnlyCollectionBase_tBFAB6A50CF24B0886983ED0E449C436E5D9C0492
{
public:

public:
};


// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8  : public ReadOnlyCollectionBase_tBFAB6A50CF24B0886983ED0E449C436E5D9C0492
{
public:

public:
};


// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t808A113087635F3D104C8374BE1309A415BD0E22  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t808A113087635F3D104C8374BE1309A415BD0E22, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyName_1), (void*)value);
	}
};


// System.Numerics.Quaternion
struct Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C 
{
public:
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
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


// Windows.Foundation.Numerics.Quaternion
struct Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22 
{
public:
	// System.Single Windows.Foundation.Numerics.Quaternion::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single Windows.Foundation.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// System.Security.Cryptography.RIPEMD160
struct RIPEMD160_tC46FCE0C691B3F2E543969F484A39F7B3B6600C0  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
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


// Microsoft.MixedReality.OpenXR.TappedEventData
#pragma pack(push, tp, 8)
struct TappedEventData_t4EB3E62830D8993687C934302B5C47BC3FB68565 
{
public:
	// System.UInt32 Microsoft.MixedReality.OpenXR.TappedEventData::TapCount
	uint32_t ___TapCount_0;

public:
	inline static int32_t get_offset_of_TapCount_0() { return static_cast<int32_t>(offsetof(TappedEventData_t4EB3E62830D8993687C934302B5C47BC3FB68565, ___TapCount_0)); }
	inline uint32_t get_TapCount_0() const { return ___TapCount_0; }
	inline uint32_t* get_address_of_TapCount_0() { return &___TapCount_0; }
	inline void set_TapCount_0(uint32_t value)
	{
		___TapCount_0 = value;
	}
};
#pragma pack(pop, tp)


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


// System.Xml.XmlRawWriter
struct XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5  : public XmlWriter_t676293C138D2D0DAB9C1BC16A7BEE618391C5B2D
{
public:
	// System.Xml.XmlRawWriterBase64Encoder System.Xml.XmlRawWriter::base64Encoder
	XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * ___base64Encoder_0;
	// System.Xml.IXmlNamespaceResolver System.Xml.XmlRawWriter::resolver
	RuntimeObject* ___resolver_1;

public:
	inline static int32_t get_offset_of_base64Encoder_0() { return static_cast<int32_t>(offsetof(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5, ___base64Encoder_0)); }
	inline XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * get_base64Encoder_0() const { return ___base64Encoder_0; }
	inline XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB ** get_address_of_base64Encoder_0() { return &___base64Encoder_0; }
	inline void set_base64Encoder_0(XmlRawWriterBase64Encoder_t9C3C2BA7B5405031118DAA3614D21021CCC07EFB * value)
	{
		___base64Encoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Encoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_resolver_1() { return static_cast<int32_t>(offsetof(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5, ___resolver_1)); }
	inline RuntimeObject* get_resolver_1() const { return ___resolver_1; }
	inline RuntimeObject** get_address_of_resolver_1() { return &___resolver_1; }
	inline void set_resolver_1(RuntimeObject* value)
	{
		___resolver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolver_1), (void*)value);
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6BBE84644D81C739672BB5FE7BD65AD8AD6C044B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m0FC3B384D7E37F93935DFB33EA2D44E3FC3E8F49(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Numerics.Quaternion>
struct NOVTABLE IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC9B0A6358249758D52E8655254FFC53AB4E48D2F(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Quaternion>
struct NOVTABLE IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m223D1D22BBB08115FECD12012F70419914365276(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22 * comReturnValue) = 0;
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


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8, ___value___2)); }
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


// UnityEngine.Windows.WebCam.CapturePixelFormat
struct CapturePixelFormat_t862C8DB99BB8A10907BDC63453CD3DAD3E422A61 
{
public:
	// System.Int32 UnityEngine.Windows.WebCam.CapturePixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CapturePixelFormat_t862C8DB99BB8A10907BDC63453CD3DAD3E422A61, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.CipherMode
struct CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t4B09770C743AD8BCCA4B44539D0F4725DFCBCE50, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Microsoft.MixedReality.OpenXR.GestureEventType
struct GestureEventType_t7C8FE34C7C88DE9764696A501384BEE775195F01 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.GestureEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureEventType_t7C8FE34C7C88DE9764696A501384BEE775195F01, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.GestureHandedness
struct GestureHandedness_t62C7280F039A4B82530AAB9A843E6FE8FE2E6083 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.GestureHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureHandedness_t62C7280F039A4B82530AAB9A843E6FE8FE2E6083, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.ManipulationEventData
#pragma pack(push, tp, 8)
struct ManipulationEventData_t03BDB772218262E12209E621F639CCA8D18E7073 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.ManipulationEventData::CumulativeTranslation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CumulativeTranslation_0;

public:
	inline static int32_t get_offset_of_CumulativeTranslation_0() { return static_cast<int32_t>(offsetof(ManipulationEventData_t03BDB772218262E12209E621F639CCA8D18E7073, ___CumulativeTranslation_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CumulativeTranslation_0() const { return ___CumulativeTranslation_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CumulativeTranslation_0() { return &___CumulativeTranslation_0; }
	inline void set_CumulativeTranslation_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CumulativeTranslation_0 = value;
	}
};
#pragma pack(pop, tp)


// Microsoft.MixedReality.OpenXR.NativeDirectionFlags
struct NativeDirectionFlags_t8B7A50865B0C94F7C8C11491381CBD1DF2BD1F0B 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.NativeDirectionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeDirectionFlags_t8B7A50865B0C94F7C8C11491381CBD1DF2BD1F0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags
struct NativeSpaceLocationFlags_t79316AEEBEF27E34945A9B430536A64303400E33 
{
public:
	// System.UInt32 Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeSpaceLocationFlags_t79316AEEBEF27E34945A9B430536A64303400E33, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_StreamSocket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_7;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_9;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_11;

public:
	inline static int32_t get_offset_of_m_StreamSocket_4() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_StreamSocket_4)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_StreamSocket_4() const { return ___m_StreamSocket_4; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_StreamSocket_4() { return &___m_StreamSocket_4; }
	inline void set_m_StreamSocket_4(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_StreamSocket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Readable_5)); }
	inline bool get_m_Readable_5() const { return ___m_Readable_5; }
	inline bool* get_address_of_m_Readable_5() { return &___m_Readable_5; }
	inline void set_m_Readable_5(bool value)
	{
		___m_Readable_5 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Writeable_6)); }
	inline bool get_m_Writeable_6() const { return ___m_Writeable_6; }
	inline bool* get_address_of_m_Writeable_6() { return &___m_Writeable_6; }
	inline void set_m_Writeable_6(bool value)
	{
		___m_Writeable_6 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_7() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_OwnsSocket_7)); }
	inline bool get_m_OwnsSocket_7() const { return ___m_OwnsSocket_7; }
	inline bool* get_address_of_m_OwnsSocket_7() { return &___m_OwnsSocket_7; }
	inline void set_m_OwnsSocket_7(bool value)
	{
		___m_OwnsSocket_7 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_8() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CloseTimeout_8)); }
	inline int32_t get_m_CloseTimeout_8() const { return ___m_CloseTimeout_8; }
	inline int32_t* get_address_of_m_CloseTimeout_8() { return &___m_CloseTimeout_8; }
	inline void set_m_CloseTimeout_8(int32_t value)
	{
		___m_CloseTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_9() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CleanedUp_9)); }
	inline bool get_m_CleanedUp_9() const { return ___m_CleanedUp_9; }
	inline bool* get_address_of_m_CleanedUp_9() { return &___m_CleanedUp_9; }
	inline void set_m_CleanedUp_9(bool value)
	{
		___m_CleanedUp_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_10() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentReadTimeout_10)); }
	inline int32_t get_m_CurrentReadTimeout_10() const { return ___m_CurrentReadTimeout_10; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_10() { return &___m_CurrentReadTimeout_10; }
	inline void set_m_CurrentReadTimeout_10(int32_t value)
	{
		___m_CurrentReadTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentWriteTimeout_11)); }
	inline int32_t get_m_CurrentWriteTimeout_11() const { return ___m_CurrentWriteTimeout_11; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_11() { return &___m_CurrentWriteTimeout_11; }
	inline void set_m_CurrentWriteTimeout_11(int32_t value)
	{
		___m_CurrentWriteTimeout_11 = value;
	}
};


// System.Security.Cryptography.PaddingMode
struct PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t290E663334E2B7C9D97E4E1985CB3CAAB7B432D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Permissions.PermissionState
struct PermissionState_t8992AD46805E92D07E3BB37657F9E2C75302D4D9 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionState_t8992AD46805E92D07E3BB37657F9E2C75302D4D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.PhotoCapture::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_StaticFields
{
public:
	// UnityEngine.Resolution[] UnityEngine.Windows.WebCam.PhotoCapture::s_SupportedResolutions
	ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* ___s_SupportedResolutions_1;
	// System.Int64 UnityEngine.Windows.WebCam.PhotoCapture::HR_SUCCESS
	int64_t ___HR_SUCCESS_2;

public:
	inline static int32_t get_offset_of_s_SupportedResolutions_1() { return static_cast<int32_t>(offsetof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_StaticFields, ___s_SupportedResolutions_1)); }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* get_s_SupportedResolutions_1() const { return ___s_SupportedResolutions_1; }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597** get_address_of_s_SupportedResolutions_1() { return &___s_SupportedResolutions_1; }
	inline void set_s_SupportedResolutions_1(ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* value)
	{
		___s_SupportedResolutions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SupportedResolutions_1), (void*)value);
	}

	inline static int32_t get_offset_of_HR_SUCCESS_2() { return static_cast<int32_t>(offsetof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_StaticFields, ___HR_SUCCESS_2)); }
	inline int64_t get_HR_SUCCESS_2() const { return ___HR_SUCCESS_2; }
	inline int64_t* get_address_of_HR_SUCCESS_2() { return &___HR_SUCCESS_2; }
	inline void set_HR_SUCCESS_2(int64_t value)
	{
		___HR_SUCCESS_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
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


// System.Xml.QueryOutputWriter
struct QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB  : public XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5
{
public:
	// System.Xml.XmlRawWriter System.Xml.QueryOutputWriter::wrapped
	XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * ___wrapped_2;
	// System.Boolean System.Xml.QueryOutputWriter::inCDataSection
	bool ___inCDataSection_3;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Int32> System.Xml.QueryOutputWriter::lookupCDataElems
	Dictionary_2_t9271D5E45EC14905F5999D37CAEA9320F5D0A5F6 * ___lookupCDataElems_4;
	// System.Xml.BitStack System.Xml.QueryOutputWriter::bitsCData
	BitStack_t06F411C96B04DE5B8D4A67EC95F15674B52ACB98 * ___bitsCData_5;
	// System.Xml.XmlQualifiedName System.Xml.QueryOutputWriter::qnameCData
	XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * ___qnameCData_6;
	// System.Boolean System.Xml.QueryOutputWriter::outputDocType
	bool ___outputDocType_7;
	// System.Boolean System.Xml.QueryOutputWriter::checkWellFormedDoc
	bool ___checkWellFormedDoc_8;
	// System.Boolean System.Xml.QueryOutputWriter::hasDocElem
	bool ___hasDocElem_9;
	// System.Boolean System.Xml.QueryOutputWriter::inAttr
	bool ___inAttr_10;
	// System.String System.Xml.QueryOutputWriter::systemId
	String_t* ___systemId_11;
	// System.String System.Xml.QueryOutputWriter::publicId
	String_t* ___publicId_12;
	// System.Int32 System.Xml.QueryOutputWriter::depth
	int32_t ___depth_13;

public:
	inline static int32_t get_offset_of_wrapped_2() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___wrapped_2)); }
	inline XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * get_wrapped_2() const { return ___wrapped_2; }
	inline XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 ** get_address_of_wrapped_2() { return &___wrapped_2; }
	inline void set_wrapped_2(XmlRawWriter_t776E2EB89A59D17CB0B5B0891DDB1AFEB3F245E5 * value)
	{
		___wrapped_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrapped_2), (void*)value);
	}

	inline static int32_t get_offset_of_inCDataSection_3() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___inCDataSection_3)); }
	inline bool get_inCDataSection_3() const { return ___inCDataSection_3; }
	inline bool* get_address_of_inCDataSection_3() { return &___inCDataSection_3; }
	inline void set_inCDataSection_3(bool value)
	{
		___inCDataSection_3 = value;
	}

	inline static int32_t get_offset_of_lookupCDataElems_4() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___lookupCDataElems_4)); }
	inline Dictionary_2_t9271D5E45EC14905F5999D37CAEA9320F5D0A5F6 * get_lookupCDataElems_4() const { return ___lookupCDataElems_4; }
	inline Dictionary_2_t9271D5E45EC14905F5999D37CAEA9320F5D0A5F6 ** get_address_of_lookupCDataElems_4() { return &___lookupCDataElems_4; }
	inline void set_lookupCDataElems_4(Dictionary_2_t9271D5E45EC14905F5999D37CAEA9320F5D0A5F6 * value)
	{
		___lookupCDataElems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lookupCDataElems_4), (void*)value);
	}

	inline static int32_t get_offset_of_bitsCData_5() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___bitsCData_5)); }
	inline BitStack_t06F411C96B04DE5B8D4A67EC95F15674B52ACB98 * get_bitsCData_5() const { return ___bitsCData_5; }
	inline BitStack_t06F411C96B04DE5B8D4A67EC95F15674B52ACB98 ** get_address_of_bitsCData_5() { return &___bitsCData_5; }
	inline void set_bitsCData_5(BitStack_t06F411C96B04DE5B8D4A67EC95F15674B52ACB98 * value)
	{
		___bitsCData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bitsCData_5), (void*)value);
	}

	inline static int32_t get_offset_of_qnameCData_6() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___qnameCData_6)); }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * get_qnameCData_6() const { return ___qnameCData_6; }
	inline XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 ** get_address_of_qnameCData_6() { return &___qnameCData_6; }
	inline void set_qnameCData_6(XmlQualifiedName_t7A0154DCFCA5749B28B5B0CAE578FDF65EE17905 * value)
	{
		___qnameCData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qnameCData_6), (void*)value);
	}

	inline static int32_t get_offset_of_outputDocType_7() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___outputDocType_7)); }
	inline bool get_outputDocType_7() const { return ___outputDocType_7; }
	inline bool* get_address_of_outputDocType_7() { return &___outputDocType_7; }
	inline void set_outputDocType_7(bool value)
	{
		___outputDocType_7 = value;
	}

	inline static int32_t get_offset_of_checkWellFormedDoc_8() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___checkWellFormedDoc_8)); }
	inline bool get_checkWellFormedDoc_8() const { return ___checkWellFormedDoc_8; }
	inline bool* get_address_of_checkWellFormedDoc_8() { return &___checkWellFormedDoc_8; }
	inline void set_checkWellFormedDoc_8(bool value)
	{
		___checkWellFormedDoc_8 = value;
	}

	inline static int32_t get_offset_of_hasDocElem_9() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___hasDocElem_9)); }
	inline bool get_hasDocElem_9() const { return ___hasDocElem_9; }
	inline bool* get_address_of_hasDocElem_9() { return &___hasDocElem_9; }
	inline void set_hasDocElem_9(bool value)
	{
		___hasDocElem_9 = value;
	}

	inline static int32_t get_offset_of_inAttr_10() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___inAttr_10)); }
	inline bool get_inAttr_10() const { return ___inAttr_10; }
	inline bool* get_address_of_inAttr_10() { return &___inAttr_10; }
	inline void set_inAttr_10(bool value)
	{
		___inAttr_10 = value;
	}

	inline static int32_t get_offset_of_systemId_11() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___systemId_11)); }
	inline String_t* get_systemId_11() const { return ___systemId_11; }
	inline String_t** get_address_of_systemId_11() { return &___systemId_11; }
	inline void set_systemId_11(String_t* value)
	{
		___systemId_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemId_11), (void*)value);
	}

	inline static int32_t get_offset_of_publicId_12() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___publicId_12)); }
	inline String_t* get_publicId_12() const { return ___publicId_12; }
	inline String_t** get_address_of_publicId_12() { return &___publicId_12; }
	inline void set_publicId_12(String_t* value)
	{
		___publicId_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicId_12), (void*)value);
	}

	inline static int32_t get_offset_of_depth_13() { return static_cast<int32_t>(offsetof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB, ___depth_13)); }
	inline int32_t get_depth_13() const { return ___depth_13; }
	inline int32_t* get_address_of_depth_13() { return &___depth_13; }
	inline void set_depth_13(int32_t value)
	{
		___depth_13 = value;
	}
};


// System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28  : public RIPEMD160_tC46FCE0C691B3F2E543969F484A39F7B3B6600C0
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int64 System.Security.Cryptography.RIPEMD160Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_stateMD160
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____stateMD160_6;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_blockDWords
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____blockDWords_7;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28, ____count_5)); }
	inline int64_t get__count_5() const { return ____count_5; }
	inline int64_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int64_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__stateMD160_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28, ____stateMD160_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__stateMD160_6() const { return ____stateMD160_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__stateMD160_6() { return &____stateMD160_6; }
	inline void set__stateMD160_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____stateMD160_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stateMD160_6), (void*)value);
	}

	inline static int32_t get_offset_of__blockDWords_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28, ____blockDWords_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__blockDWords_7() const { return ____blockDWords_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__blockDWords_7() { return &____blockDWords_7; }
	inline void set__blockDWords_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____blockDWords_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____blockDWords_7), (void*)value);
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


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
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

// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings
struct WindowsGestureSettings_tC82313854D25001C9FAF9DFDCCE50495FE4B189D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WindowsGestureSettings_tC82313854D25001C9FAF9DFDCCE50495FE4B189D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Process/StreamReadMode
struct StreamReadMode_t619359082CA49700EEF5D5E49F297C00588E357A 
{
public:
	// System.Int32 System.Diagnostics.Process/StreamReadMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadMode_t619359082CA49700EEF5D5E49F297C00588E357A, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t598DD73AFA97CB256D0FBFD2895828C5F81F50B2  : public BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t598DD73AFA97CB256D0FBFD2895828C5F81F50B2, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t598DD73AFA97CB256D0FBFD2895828C5F81F50B2, ___U3CServiceU3Ek__BackingField_9)); }
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

// Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAFDC3A521A2D5078E107CAAA4F124AFC2D25F526(int32_t* comReturnValue) = 0;
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

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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

// System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// Microsoft.MixedReality.OpenXR.NativeGesturePoseData
#pragma pack(push, tp, 8)
struct NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4 
{
public:
	// System.UInt64 Microsoft.MixedReality.OpenXR.NativeGesturePoseData::gestureTime
	uint64_t ___gestureTime_0;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.NativeGesturePoseData::headPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose_1;
	// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags Microsoft.MixedReality.OpenXR.NativeGesturePoseData::headPoseFlags
	uint32_t ___headPoseFlags_2;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.NativeGesturePoseData::eyeGazePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___eyeGazePose_3;
	// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags Microsoft.MixedReality.OpenXR.NativeGesturePoseData::eyeGazePoseFlags
	uint32_t ___eyeGazePoseFlags_4;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.NativeGesturePoseData::handAimPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___handAimPose_5;
	// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags Microsoft.MixedReality.OpenXR.NativeGesturePoseData::handAimPoseFlags
	uint32_t ___handAimPoseFlags_6;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.NativeGesturePoseData::handGripPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___handGripPose_7;
	// Microsoft.MixedReality.OpenXR.NativeSpaceLocationFlags Microsoft.MixedReality.OpenXR.NativeGesturePoseData::handGripPoseFlags
	uint32_t ___handGripPoseFlags_8;

public:
	inline static int32_t get_offset_of_gestureTime_0() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4, ___gestureTime_0)); }
	inline uint64_t get_gestureTime_0() const { return ___gestureTime_0; }
	inline uint64_t* get_address_of_gestureTime_0() { return &___gestureTime_0; }
	inline void set_gestureTime_0(uint64_t value)
	{
		___gestureTime_0 = value;
	}

	inline static int32_t get_offset_of_headPose_1() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4, ___headPose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_headPose_1() const { return ___headPose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_headPose_1() { return &___headPose_1; }
	inline void set_headPose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___headPose_1 = value;
	}

	inline static int32_t get_offset_of_headPoseFlags_2() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4, ___headPoseFlags_2)); }
	inline uint32_t get_headPoseFlags_2() const { return ___headPoseFlags_2; }
	inline uint32_t* get_address_of_headPoseFlags_2() { return &___headPoseFlags_2; }
	inline void set_headPoseFlags_2(uint32_t value)
	{
		___headPoseFlags_2 = value;
	}

	inline static int32_t get_offset_of_eyeGazePose_3() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4, ___eyeGazePose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_eyeGazePose_3() const { return ___eyeGazePose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_eyeGazePose_3() { return &___eyeGazePose_3; }
	inline void set_eyeGazePose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___eyeGazePose_3 = value;
	}

	inline static int32_t get_offset_of_eyeGazePoseFlags_4() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4, ___eyeGazePoseFlags_4)); }
	inline uint32_t get_eyeGazePoseFlags_4() const { return ___eyeGazePoseFlags_4; }
	inline uint32_t* get_address_of_eyeGazePoseFlags_4() { return &___eyeGazePoseFlags_4; }
	inline void set_eyeGazePoseFlags_4(uint32_t value)
	{
		___eyeGazePoseFlags_4 = value;
	}

	inline static int32_t get_offset_of_handAimPose_5() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4, ___handAimPose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_handAimPose_5() const { return ___handAimPose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_handAimPose_5() { return &___handAimPose_5; }
	inline void set_handAimPose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___handAimPose_5 = value;
	}

	inline static int32_t get_offset_of_handAimPoseFlags_6() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4, ___handAimPoseFlags_6)); }
	inline uint32_t get_handAimPoseFlags_6() const { return ___handAimPoseFlags_6; }
	inline uint32_t* get_address_of_handAimPoseFlags_6() { return &___handAimPoseFlags_6; }
	inline void set_handAimPoseFlags_6(uint32_t value)
	{
		___handAimPoseFlags_6 = value;
	}

	inline static int32_t get_offset_of_handGripPose_7() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4, ___handGripPose_7)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_handGripPose_7() const { return ___handGripPose_7; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_handGripPose_7() { return &___handGripPose_7; }
	inline void set_handGripPose_7(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___handGripPose_7 = value;
	}

	inline static int32_t get_offset_of_handGripPoseFlags_8() { return static_cast<int32_t>(offsetof(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4, ___handGripPoseFlags_8)); }
	inline uint32_t get_handGripPoseFlags_8() const { return ___handGripPoseFlags_8; }
	inline uint32_t* get_address_of_handGripPoseFlags_8() { return &___handGripPoseFlags_8; }
	inline void set_handGripPoseFlags_8(uint32_t value)
	{
		___handGripPoseFlags_8 = value;
	}
};
#pragma pack(pop, tp)


// Microsoft.MixedReality.OpenXR.NavigationEventData
#pragma pack(push, tp, 8)
struct NavigationEventData_t0B5F4DD285484FC0686EF62AA9E6169CAB9B6F2F 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.NavigationEventData::NormalizedOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___NormalizedOffset_0;
	// Microsoft.MixedReality.OpenXR.NativeDirectionFlags Microsoft.MixedReality.OpenXR.NavigationEventData::m_directionFlags
	int32_t ___m_directionFlags_1;

public:
	inline static int32_t get_offset_of_NormalizedOffset_0() { return static_cast<int32_t>(offsetof(NavigationEventData_t0B5F4DD285484FC0686EF62AA9E6169CAB9B6F2F, ___NormalizedOffset_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_NormalizedOffset_0() const { return ___NormalizedOffset_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_NormalizedOffset_0() { return &___NormalizedOffset_0; }
	inline void set_NormalizedOffset_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___NormalizedOffset_0 = value;
	}

	inline static int32_t get_offset_of_m_directionFlags_1() { return static_cast<int32_t>(offsetof(NavigationEventData_t0B5F4DD285484FC0686EF62AA9E6169CAB9B6F2F, ___m_directionFlags_1)); }
	inline int32_t get_m_directionFlags_1() const { return ___m_directionFlags_1; }
	inline int32_t* get_address_of_m_directionFlags_1() { return &___m_directionFlags_1; }
	inline void set_m_directionFlags_1(int32_t value)
	{
		___m_directionFlags_1 = value;
	}
};
#pragma pack(pop, tp)


// System.Threading.Tasks.ParallelForReplicaTask
struct ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// System.Object System.Threading.Tasks.ParallelForReplicaTask::m_stateForNextReplica
	RuntimeObject * ___m_stateForNextReplica_40;
	// System.Object System.Threading.Tasks.ParallelForReplicaTask::m_stateFromPreviousReplica
	RuntimeObject * ___m_stateFromPreviousReplica_41;
	// System.Threading.Tasks.Task System.Threading.Tasks.ParallelForReplicaTask::m_handedOverChildReplica
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_handedOverChildReplica_42;

public:
	inline static int32_t get_offset_of_m_stateForNextReplica_40() { return static_cast<int32_t>(offsetof(ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6, ___m_stateForNextReplica_40)); }
	inline RuntimeObject * get_m_stateForNextReplica_40() const { return ___m_stateForNextReplica_40; }
	inline RuntimeObject ** get_address_of_m_stateForNextReplica_40() { return &___m_stateForNextReplica_40; }
	inline void set_m_stateForNextReplica_40(RuntimeObject * value)
	{
		___m_stateForNextReplica_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateForNextReplica_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFromPreviousReplica_41() { return static_cast<int32_t>(offsetof(ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6, ___m_stateFromPreviousReplica_41)); }
	inline RuntimeObject * get_m_stateFromPreviousReplica_41() const { return ___m_stateFromPreviousReplica_41; }
	inline RuntimeObject ** get_address_of_m_stateFromPreviousReplica_41() { return &___m_stateFromPreviousReplica_41; }
	inline void set_m_stateFromPreviousReplica_41(RuntimeObject * value)
	{
		___m_stateFromPreviousReplica_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateFromPreviousReplica_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_handedOverChildReplica_42() { return static_cast<int32_t>(offsetof(ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6, ___m_handedOverChildReplica_42)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_handedOverChildReplica_42() const { return ___m_handedOverChildReplica_42; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_handedOverChildReplica_42() { return &___m_handedOverChildReplica_42; }
	inline void set_m_handedOverChildReplica_42(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_handedOverChildReplica_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_handedOverChildReplica_42), (void*)value);
	}
};


// System.Threading.Tasks.ParallelForReplicatingTask
struct ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// System.Int32 System.Threading.Tasks.ParallelForReplicatingTask::m_replicationDownCount
	int32_t ___m_replicationDownCount_40;

public:
	inline static int32_t get_offset_of_m_replicationDownCount_40() { return static_cast<int32_t>(offsetof(ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9, ___m_replicationDownCount_40)); }
	inline int32_t get_m_replicationDownCount_40() const { return ___m_replicationDownCount_40; }
	inline int32_t* get_address_of_m_replicationDownCount_40() { return &___m_replicationDownCount_40; }
	inline void set_m_replicationDownCount_40(int32_t value)
	{
		___m_replicationDownCount_40 = value;
	}
};


// System.Security.PermissionSet
struct PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503  : public RuntimeObject
{
public:
	// System.Security.Permissions.PermissionState System.Security.PermissionSet::state
	int32_t ___state_1;
	// System.Collections.ArrayList System.Security.PermissionSet::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_2;
	// System.Boolean System.Security.PermissionSet::_declsec
	bool ____declsec_3;
	// System.Boolean[] System.Security.PermissionSet::_ignored
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____ignored_4;

public:
	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503, ___list_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_2() const { return ___list_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_2), (void*)value);
	}

	inline static int32_t get_offset_of__declsec_3() { return static_cast<int32_t>(offsetof(PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503, ____declsec_3)); }
	inline bool get__declsec_3() const { return ____declsec_3; }
	inline bool* get_address_of__declsec_3() { return &____declsec_3; }
	inline void set__declsec_3(bool value)
	{
		____declsec_3 = value;
	}

	inline static int32_t get_offset_of__ignored_4() { return static_cast<int32_t>(offsetof(PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503, ____ignored_4)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__ignored_4() const { return ____ignored_4; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__ignored_4() { return &____ignored_4; }
	inline void set__ignored_4(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____ignored_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ignored_4), (void*)value);
	}
};

struct PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503_StaticFields
{
public:
	// System.Object[] System.Security.PermissionSet::psUnrestricted
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___psUnrestricted_0;
	// System.Object[] System.Security.PermissionSet::action
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___action_5;

public:
	inline static int32_t get_offset_of_psUnrestricted_0() { return static_cast<int32_t>(offsetof(PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503_StaticFields, ___psUnrestricted_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_psUnrestricted_0() const { return ___psUnrestricted_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_psUnrestricted_0() { return &___psUnrestricted_0; }
	inline void set_psUnrestricted_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___psUnrestricted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___psUnrestricted_0), (void*)value);
	}

	inline static int32_t get_offset_of_action_5() { return static_cast<int32_t>(offsetof(PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503_StaticFields, ___action_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_action_5() const { return ___action_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_action_5() { return &___action_5; }
	inline void set_action_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_5), (void*)value);
	}
};


// UnityEngine.Windows.WebCam.PhotoCaptureFrame
struct PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.WebCam.PhotoCaptureFrame::m_NativePtr
	intptr_t ___m_NativePtr_0;
	// System.Int32 UnityEngine.Windows.WebCam.PhotoCaptureFrame::<dataLength>k__BackingField
	int32_t ___U3CdataLengthU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Windows.WebCam.PhotoCaptureFrame::<hasLocationData>k__BackingField
	bool ___U3ChasLocationDataU3Ek__BackingField_2;
	// UnityEngine.Windows.WebCam.CapturePixelFormat UnityEngine.Windows.WebCam.PhotoCaptureFrame::<pixelFormat>k__BackingField
	int32_t ___U3CpixelFormatU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}

	inline static int32_t get_offset_of_U3CdataLengthU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___U3CdataLengthU3Ek__BackingField_1)); }
	inline int32_t get_U3CdataLengthU3Ek__BackingField_1() const { return ___U3CdataLengthU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CdataLengthU3Ek__BackingField_1() { return &___U3CdataLengthU3Ek__BackingField_1; }
	inline void set_U3CdataLengthU3Ek__BackingField_1(int32_t value)
	{
		___U3CdataLengthU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3ChasLocationDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___U3ChasLocationDataU3Ek__BackingField_2)); }
	inline bool get_U3ChasLocationDataU3Ek__BackingField_2() const { return ___U3ChasLocationDataU3Ek__BackingField_2; }
	inline bool* get_address_of_U3ChasLocationDataU3Ek__BackingField_2() { return &___U3ChasLocationDataU3Ek__BackingField_2; }
	inline void set_U3ChasLocationDataU3Ek__BackingField_2(bool value)
	{
		___U3ChasLocationDataU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CpixelFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0, ___U3CpixelFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CpixelFormatU3Ek__BackingField_3() const { return ___U3CpixelFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CpixelFormatU3Ek__BackingField_3() { return &___U3CpixelFormatU3Ek__BackingField_3; }
	inline void set_U3CpixelFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CpixelFormatU3Ek__BackingField_3 = value;
	}
};


// System.Diagnostics.Process
struct Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:
	// System.Boolean System.Diagnostics.Process::haveProcessId
	bool ___haveProcessId_4;
	// System.Int32 System.Diagnostics.Process::processId
	int32_t ___processId_5;
	// System.Boolean System.Diagnostics.Process::haveProcessHandle
	bool ___haveProcessHandle_6;
	// Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::m_processHandle
	SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * ___m_processHandle_7;
	// System.Boolean System.Diagnostics.Process::isRemoteMachine
	bool ___isRemoteMachine_8;
	// System.String System.Diagnostics.Process::machineName
	String_t* ___machineName_9;
	// System.Int32 System.Diagnostics.Process::m_processAccess
	int32_t ___m_processAccess_10;
	// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::threads
	ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * ___threads_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::modules
	ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * ___modules_12;
	// System.Boolean System.Diagnostics.Process::haveWorkingSetLimits
	bool ___haveWorkingSetLimits_13;
	// System.Boolean System.Diagnostics.Process::havePriorityClass
	bool ___havePriorityClass_14;
	// System.Boolean System.Diagnostics.Process::watchForExit
	bool ___watchForExit_15;
	// System.Boolean System.Diagnostics.Process::watchingForExit
	bool ___watchingForExit_16;
	// System.EventHandler System.Diagnostics.Process::onExited
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___onExited_17;
	// System.Boolean System.Diagnostics.Process::exited
	bool ___exited_18;
	// System.Int32 System.Diagnostics.Process::exitCode
	int32_t ___exitCode_19;
	// System.Boolean System.Diagnostics.Process::signaled
	bool ___signaled_20;
	// System.Boolean System.Diagnostics.Process::haveExitTime
	bool ___haveExitTime_21;
	// System.Boolean System.Diagnostics.Process::raisedOnExited
	bool ___raisedOnExited_22;
	// System.Threading.RegisteredWaitHandle System.Diagnostics.Process::registeredWaitHandle
	RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * ___registeredWaitHandle_23;
	// System.Threading.WaitHandle System.Diagnostics.Process::waitHandle
	WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * ___waitHandle_24;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	RuntimeObject* ___synchronizingObject_25;
	// System.IO.StreamReader System.Diagnostics.Process::standardOutput
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___standardOutput_26;
	// System.IO.StreamWriter System.Diagnostics.Process::standardInput
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___standardInput_27;
	// System.IO.StreamReader System.Diagnostics.Process::standardError
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___standardError_28;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_29;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::outputStreamReadMode
	int32_t ___outputStreamReadMode_30;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::errorStreamReadMode
	int32_t ___errorStreamReadMode_31;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::inputStreamReadMode
	int32_t ___inputStreamReadMode_32;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::output
	AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * ___output_33;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::error
	AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * ___error_34;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_35;

public:
	inline static int32_t get_offset_of_haveProcessId_4() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveProcessId_4)); }
	inline bool get_haveProcessId_4() const { return ___haveProcessId_4; }
	inline bool* get_address_of_haveProcessId_4() { return &___haveProcessId_4; }
	inline void set_haveProcessId_4(bool value)
	{
		___haveProcessId_4 = value;
	}

	inline static int32_t get_offset_of_processId_5() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___processId_5)); }
	inline int32_t get_processId_5() const { return ___processId_5; }
	inline int32_t* get_address_of_processId_5() { return &___processId_5; }
	inline void set_processId_5(int32_t value)
	{
		___processId_5 = value;
	}

	inline static int32_t get_offset_of_haveProcessHandle_6() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveProcessHandle_6)); }
	inline bool get_haveProcessHandle_6() const { return ___haveProcessHandle_6; }
	inline bool* get_address_of_haveProcessHandle_6() { return &___haveProcessHandle_6; }
	inline void set_haveProcessHandle_6(bool value)
	{
		___haveProcessHandle_6 = value;
	}

	inline static int32_t get_offset_of_m_processHandle_7() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___m_processHandle_7)); }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * get_m_processHandle_7() const { return ___m_processHandle_7; }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C ** get_address_of_m_processHandle_7() { return &___m_processHandle_7; }
	inline void set_m_processHandle_7(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * value)
	{
		___m_processHandle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_processHandle_7), (void*)value);
	}

	inline static int32_t get_offset_of_isRemoteMachine_8() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___isRemoteMachine_8)); }
	inline bool get_isRemoteMachine_8() const { return ___isRemoteMachine_8; }
	inline bool* get_address_of_isRemoteMachine_8() { return &___isRemoteMachine_8; }
	inline void set_isRemoteMachine_8(bool value)
	{
		___isRemoteMachine_8 = value;
	}

	inline static int32_t get_offset_of_machineName_9() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___machineName_9)); }
	inline String_t* get_machineName_9() const { return ___machineName_9; }
	inline String_t** get_address_of_machineName_9() { return &___machineName_9; }
	inline void set_machineName_9(String_t* value)
	{
		___machineName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___machineName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_processAccess_10() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___m_processAccess_10)); }
	inline int32_t get_m_processAccess_10() const { return ___m_processAccess_10; }
	inline int32_t* get_address_of_m_processAccess_10() { return &___m_processAccess_10; }
	inline void set_m_processAccess_10(int32_t value)
	{
		___m_processAccess_10 = value;
	}

	inline static int32_t get_offset_of_threads_11() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___threads_11)); }
	inline ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * get_threads_11() const { return ___threads_11; }
	inline ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 ** get_address_of_threads_11() { return &___threads_11; }
	inline void set_threads_11(ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * value)
	{
		___threads_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threads_11), (void*)value);
	}

	inline static int32_t get_offset_of_modules_12() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___modules_12)); }
	inline ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * get_modules_12() const { return ___modules_12; }
	inline ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 ** get_address_of_modules_12() { return &___modules_12; }
	inline void set_modules_12(ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * value)
	{
		___modules_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modules_12), (void*)value);
	}

	inline static int32_t get_offset_of_haveWorkingSetLimits_13() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveWorkingSetLimits_13)); }
	inline bool get_haveWorkingSetLimits_13() const { return ___haveWorkingSetLimits_13; }
	inline bool* get_address_of_haveWorkingSetLimits_13() { return &___haveWorkingSetLimits_13; }
	inline void set_haveWorkingSetLimits_13(bool value)
	{
		___haveWorkingSetLimits_13 = value;
	}

	inline static int32_t get_offset_of_havePriorityClass_14() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___havePriorityClass_14)); }
	inline bool get_havePriorityClass_14() const { return ___havePriorityClass_14; }
	inline bool* get_address_of_havePriorityClass_14() { return &___havePriorityClass_14; }
	inline void set_havePriorityClass_14(bool value)
	{
		___havePriorityClass_14 = value;
	}

	inline static int32_t get_offset_of_watchForExit_15() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___watchForExit_15)); }
	inline bool get_watchForExit_15() const { return ___watchForExit_15; }
	inline bool* get_address_of_watchForExit_15() { return &___watchForExit_15; }
	inline void set_watchForExit_15(bool value)
	{
		___watchForExit_15 = value;
	}

	inline static int32_t get_offset_of_watchingForExit_16() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___watchingForExit_16)); }
	inline bool get_watchingForExit_16() const { return ___watchingForExit_16; }
	inline bool* get_address_of_watchingForExit_16() { return &___watchingForExit_16; }
	inline void set_watchingForExit_16(bool value)
	{
		___watchingForExit_16 = value;
	}

	inline static int32_t get_offset_of_onExited_17() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___onExited_17)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_onExited_17() const { return ___onExited_17; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_onExited_17() { return &___onExited_17; }
	inline void set_onExited_17(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___onExited_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onExited_17), (void*)value);
	}

	inline static int32_t get_offset_of_exited_18() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___exited_18)); }
	inline bool get_exited_18() const { return ___exited_18; }
	inline bool* get_address_of_exited_18() { return &___exited_18; }
	inline void set_exited_18(bool value)
	{
		___exited_18 = value;
	}

	inline static int32_t get_offset_of_exitCode_19() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___exitCode_19)); }
	inline int32_t get_exitCode_19() const { return ___exitCode_19; }
	inline int32_t* get_address_of_exitCode_19() { return &___exitCode_19; }
	inline void set_exitCode_19(int32_t value)
	{
		___exitCode_19 = value;
	}

	inline static int32_t get_offset_of_signaled_20() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___signaled_20)); }
	inline bool get_signaled_20() const { return ___signaled_20; }
	inline bool* get_address_of_signaled_20() { return &___signaled_20; }
	inline void set_signaled_20(bool value)
	{
		___signaled_20 = value;
	}

	inline static int32_t get_offset_of_haveExitTime_21() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveExitTime_21)); }
	inline bool get_haveExitTime_21() const { return ___haveExitTime_21; }
	inline bool* get_address_of_haveExitTime_21() { return &___haveExitTime_21; }
	inline void set_haveExitTime_21(bool value)
	{
		___haveExitTime_21 = value;
	}

	inline static int32_t get_offset_of_raisedOnExited_22() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___raisedOnExited_22)); }
	inline bool get_raisedOnExited_22() const { return ___raisedOnExited_22; }
	inline bool* get_address_of_raisedOnExited_22() { return &___raisedOnExited_22; }
	inline void set_raisedOnExited_22(bool value)
	{
		___raisedOnExited_22 = value;
	}

	inline static int32_t get_offset_of_registeredWaitHandle_23() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___registeredWaitHandle_23)); }
	inline RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * get_registeredWaitHandle_23() const { return ___registeredWaitHandle_23; }
	inline RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F ** get_address_of_registeredWaitHandle_23() { return &___registeredWaitHandle_23; }
	inline void set_registeredWaitHandle_23(RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * value)
	{
		___registeredWaitHandle_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredWaitHandle_23), (void*)value);
	}

	inline static int32_t get_offset_of_waitHandle_24() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___waitHandle_24)); }
	inline WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * get_waitHandle_24() const { return ___waitHandle_24; }
	inline WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 ** get_address_of_waitHandle_24() { return &___waitHandle_24; }
	inline void set_waitHandle_24(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * value)
	{
		___waitHandle_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitHandle_24), (void*)value);
	}

	inline static int32_t get_offset_of_synchronizingObject_25() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___synchronizingObject_25)); }
	inline RuntimeObject* get_synchronizingObject_25() const { return ___synchronizingObject_25; }
	inline RuntimeObject** get_address_of_synchronizingObject_25() { return &___synchronizingObject_25; }
	inline void set_synchronizingObject_25(RuntimeObject* value)
	{
		___synchronizingObject_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizingObject_25), (void*)value);
	}

	inline static int32_t get_offset_of_standardOutput_26() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardOutput_26)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_standardOutput_26() const { return ___standardOutput_26; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_standardOutput_26() { return &___standardOutput_26; }
	inline void set_standardOutput_26(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___standardOutput_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardOutput_26), (void*)value);
	}

	inline static int32_t get_offset_of_standardInput_27() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardInput_27)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_standardInput_27() const { return ___standardInput_27; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_standardInput_27() { return &___standardInput_27; }
	inline void set_standardInput_27(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___standardInput_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardInput_27), (void*)value);
	}

	inline static int32_t get_offset_of_standardError_28() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardError_28)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_standardError_28() const { return ___standardError_28; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_standardError_28() { return &___standardError_28; }
	inline void set_standardError_28(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___standardError_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardError_28), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_29() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___disposed_29)); }
	inline bool get_disposed_29() const { return ___disposed_29; }
	inline bool* get_address_of_disposed_29() { return &___disposed_29; }
	inline void set_disposed_29(bool value)
	{
		___disposed_29 = value;
	}

	inline static int32_t get_offset_of_outputStreamReadMode_30() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___outputStreamReadMode_30)); }
	inline int32_t get_outputStreamReadMode_30() const { return ___outputStreamReadMode_30; }
	inline int32_t* get_address_of_outputStreamReadMode_30() { return &___outputStreamReadMode_30; }
	inline void set_outputStreamReadMode_30(int32_t value)
	{
		___outputStreamReadMode_30 = value;
	}

	inline static int32_t get_offset_of_errorStreamReadMode_31() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___errorStreamReadMode_31)); }
	inline int32_t get_errorStreamReadMode_31() const { return ___errorStreamReadMode_31; }
	inline int32_t* get_address_of_errorStreamReadMode_31() { return &___errorStreamReadMode_31; }
	inline void set_errorStreamReadMode_31(int32_t value)
	{
		___errorStreamReadMode_31 = value;
	}

	inline static int32_t get_offset_of_inputStreamReadMode_32() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___inputStreamReadMode_32)); }
	inline int32_t get_inputStreamReadMode_32() const { return ___inputStreamReadMode_32; }
	inline int32_t* get_address_of_inputStreamReadMode_32() { return &___inputStreamReadMode_32; }
	inline void set_inputStreamReadMode_32(int32_t value)
	{
		___inputStreamReadMode_32 = value;
	}

	inline static int32_t get_offset_of_output_33() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___output_33)); }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * get_output_33() const { return ___output_33; }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C ** get_address_of_output_33() { return &___output_33; }
	inline void set_output_33(AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * value)
	{
		___output_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_33), (void*)value);
	}

	inline static int32_t get_offset_of_error_34() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___error_34)); }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * get_error_34() const { return ___error_34; }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C ** get_address_of_error_34() { return &___error_34; }
	inline void set_error_34(AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * value)
	{
		___error_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_34), (void*)value);
	}

	inline static int32_t get_offset_of_process_name_35() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___process_name_35)); }
	inline String_t* get_process_name_35() const { return ___process_name_35; }
	inline String_t** get_address_of_process_name_35() { return &___process_name_35; }
	inline void set_process_name_35(String_t* value)
	{
		___process_name_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___process_name_35), (void*)value);
	}
};


// System.Diagnostics.ProcessWaitHandle
struct ProcessWaitHandle_t88F9EB49F2D6E81DC362B2B50C23FABA8D1F6F94  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___IVValue_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IVValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeyValue_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_3), (void*)value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalBlockSizesValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};


// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___algo_0)); }
	inline SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___algo_0), (void*)value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___temp_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp_3), (void*)value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___temp2_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp2_4), (void*)value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___workBuff_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workBuff_5), (void*)value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___workout_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workout_6), (void*)value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76, ____rng_11)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_11), (void*)value);
	}
};


// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____buffer_4)); }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____lastReadTask_12)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_12), (void*)value);
	}
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


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA  : public BaseDataProvider_1_t598DD73AFA97CB256D0FBFD2895828C5F81F50B2
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_10;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t1BCE2EEFEB80F4B25AFBEAD3023FB032C666B996* ___pointerConfigurations_11;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tE4AA04B31C201432D691DD81E64F3624906B15D4 * ___activePointersToConfig_13;

public:
	inline static int32_t get_offset_of_enablePointerCache_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA, ___enablePointerCache_10)); }
	inline bool get_enablePointerCache_10() const { return ___enablePointerCache_10; }
	inline bool* get_address_of_enablePointerCache_10() { return &___enablePointerCache_10; }
	inline void set_enablePointerCache_10(bool value)
	{
		___enablePointerCache_10 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_11() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA, ___pointerConfigurations_11)); }
	inline PointerConfigU5BU5D_t1BCE2EEFEB80F4B25AFBEAD3023FB032C666B996* get_pointerConfigurations_11() const { return ___pointerConfigurations_11; }
	inline PointerConfigU5BU5D_t1BCE2EEFEB80F4B25AFBEAD3023FB032C666B996** get_address_of_pointerConfigurations_11() { return &___pointerConfigurations_11; }
	inline void set_pointerConfigurations_11(PointerConfigU5BU5D_t1BCE2EEFEB80F4B25AFBEAD3023FB032C666B996* value)
	{
		___pointerConfigurations_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_11), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_13() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA, ___activePointersToConfig_13)); }
	inline Dictionary_2_tE4AA04B31C201432D691DD81E64F3624906B15D4 * get_activePointersToConfig_13() const { return ___activePointersToConfig_13; }
	inline Dictionary_2_tE4AA04B31C201432D691DD81E64F3624906B15D4 ** get_address_of_activePointersToConfig_13() { return &___activePointersToConfig_13; }
	inline void set_activePointersToConfig_13(Dictionary_2_tE4AA04B31C201432D691DD81E64F3624906B15D4 * value)
	{
		___activePointersToConfig_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_13), (void*)value);
	}
};

struct BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_16;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA_StaticFields, ___RequestPointersPerfMarker_12)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_12() const { return ___RequestPointersPerfMarker_12; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_12() { return &___RequestPointersPerfMarker_12; }
	inline void set_RequestPointersPerfMarker_12(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_12 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA_StaticFields, ___RecyclePointersPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_14() const { return ___RecyclePointersPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_14() { return &___RecyclePointersPerfMarker_14; }
	inline void set_RecyclePointersPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA_StaticFields, ___CreatePointerPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_15() const { return ___CreatePointerPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_15() { return &___CreatePointerPerfMarker_15; }
	inline void set_CreatePointerPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA_StaticFields, ___CleanActivePointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_16() const { return ___CleanActivePointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_16() { return &___CleanActivePointersPerfMarker_16; }
	inline void set_CleanActivePointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_16 = value;
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


// System.Security.NamedPermissionSet
struct NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69  : public PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503
{
public:
	// System.String System.Security.NamedPermissionSet::name
	String_t* ___name_6;
	// System.String System.Security.NamedPermissionSet::description
	String_t* ___description_7;

public:
	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_6), (void*)value);
	}

	inline static int32_t get_offset_of_description_7() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69, ___description_7)); }
	inline String_t* get_description_7() const { return ___description_7; }
	inline String_t** get_address_of_description_7() { return &___description_7; }
	inline void set_description_7(String_t* value)
	{
		___description_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_7), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.NativeGestureEventData
#pragma pack(push, tp, 8)
struct NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04 
{
public:
	// Microsoft.MixedReality.OpenXR.GestureEventType Microsoft.MixedReality.OpenXR.NativeGestureEventData::eventType
	int32_t ___eventType_0;
	// Microsoft.MixedReality.OpenXR.GestureHandedness Microsoft.MixedReality.OpenXR.NativeGestureEventData::handedness
	int32_t ___handedness_1;
	// Microsoft.MixedReality.OpenXR.NativeGesturePoseData Microsoft.MixedReality.OpenXR.NativeGestureEventData::poseData
	NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4  ___poseData_2;
	// Microsoft.MixedReality.OpenXR.TappedEventData Microsoft.MixedReality.OpenXR.NativeGestureEventData::tappedData
	TappedEventData_t4EB3E62830D8993687C934302B5C47BC3FB68565  ___tappedData_3;
	// Microsoft.MixedReality.OpenXR.ManipulationEventData Microsoft.MixedReality.OpenXR.NativeGestureEventData::manipulationData
	ManipulationEventData_t03BDB772218262E12209E621F639CCA8D18E7073  ___manipulationData_4;
	// Microsoft.MixedReality.OpenXR.NavigationEventData Microsoft.MixedReality.OpenXR.NativeGestureEventData::navigationData
	NavigationEventData_t0B5F4DD285484FC0686EF62AA9E6169CAB9B6F2F  ___navigationData_5;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04, ___eventType_0)); }
	inline int32_t get_eventType_0() const { return ___eventType_0; }
	inline int32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(int32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_handedness_1() { return static_cast<int32_t>(offsetof(NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04, ___handedness_1)); }
	inline int32_t get_handedness_1() const { return ___handedness_1; }
	inline int32_t* get_address_of_handedness_1() { return &___handedness_1; }
	inline void set_handedness_1(int32_t value)
	{
		___handedness_1 = value;
	}

	inline static int32_t get_offset_of_poseData_2() { return static_cast<int32_t>(offsetof(NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04, ___poseData_2)); }
	inline NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4  get_poseData_2() const { return ___poseData_2; }
	inline NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4 * get_address_of_poseData_2() { return &___poseData_2; }
	inline void set_poseData_2(NativeGesturePoseData_t9A7C49B99B3A4DBBAAD4BE474CB357CCE36C30C4  value)
	{
		___poseData_2 = value;
	}

	inline static int32_t get_offset_of_tappedData_3() { return static_cast<int32_t>(offsetof(NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04, ___tappedData_3)); }
	inline TappedEventData_t4EB3E62830D8993687C934302B5C47BC3FB68565  get_tappedData_3() const { return ___tappedData_3; }
	inline TappedEventData_t4EB3E62830D8993687C934302B5C47BC3FB68565 * get_address_of_tappedData_3() { return &___tappedData_3; }
	inline void set_tappedData_3(TappedEventData_t4EB3E62830D8993687C934302B5C47BC3FB68565  value)
	{
		___tappedData_3 = value;
	}

	inline static int32_t get_offset_of_manipulationData_4() { return static_cast<int32_t>(offsetof(NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04, ___manipulationData_4)); }
	inline ManipulationEventData_t03BDB772218262E12209E621F639CCA8D18E7073  get_manipulationData_4() const { return ___manipulationData_4; }
	inline ManipulationEventData_t03BDB772218262E12209E621F639CCA8D18E7073 * get_address_of_manipulationData_4() { return &___manipulationData_4; }
	inline void set_manipulationData_4(ManipulationEventData_t03BDB772218262E12209E621F639CCA8D18E7073  value)
	{
		___manipulationData_4 = value;
	}

	inline static int32_t get_offset_of_navigationData_5() { return static_cast<int32_t>(offsetof(NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04, ___navigationData_5)); }
	inline NavigationEventData_t0B5F4DD285484FC0686EF62AA9E6169CAB9B6F2F  get_navigationData_5() const { return ___navigationData_5; }
	inline NavigationEventData_t0B5F4DD285484FC0686EF62AA9E6169CAB9B6F2F * get_address_of_navigationData_5() { return &___navigationData_5; }
	inline void set_navigationData_5(NavigationEventData_t0B5F4DD285484FC0686EF62AA9E6169CAB9B6F2F  value)
	{
		___navigationData_5 = value;
	}
};
#pragma pack(pop, tp)


// System.IO.PinnedBufferMemoryStream
struct PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78  : public UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62
{
public:
	// System.Byte[] System.IO.PinnedBufferMemoryStream::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_13;
	// System.Runtime.InteropServices.GCHandle System.IO.PinnedBufferMemoryStream::_pinningHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____pinningHandle_14;

public:
	inline static int32_t get_offset_of__array_13() { return static_cast<int32_t>(offsetof(PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78, ____array_13)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_13() const { return ____array_13; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_13() { return &____array_13; }
	inline void set__array_13(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_13), (void*)value);
	}

	inline static int32_t get_offset_of__pinningHandle_14() { return static_cast<int32_t>(offsetof(PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78, ____pinningHandle_14)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__pinningHandle_14() const { return ____pinningHandle_14; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__pinningHandle_14() { return &____pinningHandle_14; }
	inline void set__pinningHandle_14(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____pinningHandle_14 = value;
	}
};


// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.ComponentModel.PropertyChangedEventHandler
struct IPropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, PropertyChangedEventArgs_t808A113087635F3D104C8374BE1309A415BD0E22 * ___e1) = 0;
};


// Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct IPropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, PropertyChangedEventArgs_t808A113087635F3D104C8374BE1309A415BD0E22 * ___e1) = 0;
};


// System.Security.Cryptography.RC2
struct RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9  : public SymmetricAlgorithm_tD007D9D59B6B96F42548FFE58E5F65CA5F9B7754
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_9;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_9() { return static_cast<int32_t>(offsetof(RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9, ___EffectiveKeySizeValue_9)); }
	inline int32_t get_EffectiveKeySizeValue_9() const { return ___EffectiveKeySizeValue_9; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_9() { return &___EffectiveKeySizeValue_9; }
	inline void set_EffectiveKeySizeValue_9(int32_t value)
	{
		___EffectiveKeySizeValue_9 = value;
	}
};

struct RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2::s_legalBlockSizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalBlockSizes_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_11), (void*)value);
	}
};


// System.Security.Cryptography.RC2Transform
struct RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1  : public SymmetricTransform_t7F2159C79FF7B594CAC28B7061F5891F9B7CDB76
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___K_16)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___K_16), (void*)value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pitable_18), (void*)value);
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


// Microsoft.MixedReality.OpenXR.GestureEventData
#pragma pack(push, tp, 8)
struct GestureEventData_t8531D445FB6504695BBD8852D6561278E05842D1 
{
public:
	// Microsoft.MixedReality.OpenXR.NativeGestureEventData Microsoft.MixedReality.OpenXR.GestureEventData::nativeData
	NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04  ___nativeData_0;

public:
	inline static int32_t get_offset_of_nativeData_0() { return static_cast<int32_t>(offsetof(GestureEventData_t8531D445FB6504695BBD8852D6561278E05842D1, ___nativeData_0)); }
	inline NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04  get_nativeData_0() const { return ___nativeData_0; }
	inline NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04 * get_address_of_nativeData_0() { return &___nativeData_0; }
	inline void set_nativeData_0(NativeGestureEventData_tE2CFB82D1EF4D8FFF9C0CD86536C3759F4D96F04  value)
	{
		___nativeData_0 = value;
	}
};
#pragma pack(pop, tp)


// Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager
struct MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516  : public BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager::cursorSpeed
	float ___cursorSpeed_19;
	// System.Single Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager::wheelSpeed
	float ___wheelSpeed_20;
	// Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseController Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager::<Controller>k__BackingField
	MouseController_tE1582583C612D46D94D35AFDECD68DEDA4993836 * ___U3CControllerU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_cursorSpeed_19() { return static_cast<int32_t>(offsetof(MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516, ___cursorSpeed_19)); }
	inline float get_cursorSpeed_19() const { return ___cursorSpeed_19; }
	inline float* get_address_of_cursorSpeed_19() { return &___cursorSpeed_19; }
	inline void set_cursorSpeed_19(float value)
	{
		___cursorSpeed_19 = value;
	}

	inline static int32_t get_offset_of_wheelSpeed_20() { return static_cast<int32_t>(offsetof(MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516, ___wheelSpeed_20)); }
	inline float get_wheelSpeed_20() const { return ___wheelSpeed_20; }
	inline float* get_address_of_wheelSpeed_20() { return &___wheelSpeed_20; }
	inline void set_wheelSpeed_20(float value)
	{
		___wheelSpeed_20 = value;
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516, ___U3CControllerU3Ek__BackingField_21)); }
	inline MouseController_tE1582583C612D46D94D35AFDECD68DEDA4993836 * get_U3CControllerU3Ek__BackingField_21() const { return ___U3CControllerU3Ek__BackingField_21; }
	inline MouseController_tE1582583C612D46D94D35AFDECD68DEDA4993836 ** get_address_of_U3CControllerU3Ek__BackingField_21() { return &___U3CControllerU3Ek__BackingField_21; }
	inline void set_U3CControllerU3Ek__BackingField_21(MouseController_tE1582583C612D46D94D35AFDECD68DEDA4993836 * value)
	{
		___U3CControllerU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_21), (void*)value);
	}
};

struct MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_22;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_22() { return static_cast<int32_t>(offsetof(MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516_StaticFields, ___UpdatePerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_22() const { return ___UpdatePerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_22() { return &___UpdatePerfMarker_22; }
	inline void set_UpdatePerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_22 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings
struct OpenXRCameraSettings_t303C5AA52C6E90838E083728D386B47F78F7D9F0  : public BaseCameraSettingsProvider_t93CD0A8CBB640727205E73529E3D90688DB6A8A3
{
public:
	// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRReprojectionUpdater Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings::reprojectionUpdater
	OpenXRReprojectionUpdater_t4320C55EE4A355C24029708EF1F94A5720FDD82E * ___reprojectionUpdater_11;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_11() { return static_cast<int32_t>(offsetof(OpenXRCameraSettings_t303C5AA52C6E90838E083728D386B47F78F7D9F0, ___reprojectionUpdater_11)); }
	inline OpenXRReprojectionUpdater_t4320C55EE4A355C24029708EF1F94A5720FDD82E * get_reprojectionUpdater_11() const { return ___reprojectionUpdater_11; }
	inline OpenXRReprojectionUpdater_t4320C55EE4A355C24029708EF1F94A5720FDD82E ** get_address_of_reprojectionUpdater_11() { return &___reprojectionUpdater_11; }
	inline void set_reprojectionUpdater_11(OpenXRReprojectionUpdater_t4320C55EE4A355C24029708EF1F94A5720FDD82E * value)
	{
		___reprojectionUpdater_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_11), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider
struct OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F  : public BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_tB02F61739723804E9D06078A4864FFB3F74BED90 * ___gazeSmoother_18;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_19;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_20;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_21;
	// UnityEngine.XR.InputDevice Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::eyeTrackingDevice
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___eyeTrackingDevice_23;

public:
	inline static int32_t get_offset_of_U3CSmoothEyeTrackingU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F, ___U3CSmoothEyeTrackingU3Ek__BackingField_17)); }
	inline bool get_U3CSmoothEyeTrackingU3Ek__BackingField_17() const { return ___U3CSmoothEyeTrackingU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CSmoothEyeTrackingU3Ek__BackingField_17() { return &___U3CSmoothEyeTrackingU3Ek__BackingField_17; }
	inline void set_U3CSmoothEyeTrackingU3Ek__BackingField_17(bool value)
	{
		___U3CSmoothEyeTrackingU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_gazeSmoother_18() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F, ___gazeSmoother_18)); }
	inline EyeGazeSmoother_tB02F61739723804E9D06078A4864FFB3F74BED90 * get_gazeSmoother_18() const { return ___gazeSmoother_18; }
	inline EyeGazeSmoother_tB02F61739723804E9D06078A4864FFB3F74BED90 ** get_address_of_gazeSmoother_18() { return &___gazeSmoother_18; }
	inline void set_gazeSmoother_18(EyeGazeSmoother_tB02F61739723804E9D06078A4864FFB3F74BED90 * value)
	{
		___gazeSmoother_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeSmoother_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccade_19() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F, ___OnSaccade_19)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_19() const { return ___OnSaccade_19; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_19() { return &___OnSaccade_19; }
	inline void set_OnSaccade_19(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_19), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_20() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F, ___OnSaccadeX_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_20() const { return ___OnSaccadeX_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_20() { return &___OnSaccadeX_20; }
	inline void set_OnSaccadeX_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_20), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_21() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F, ___OnSaccadeY_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_21() const { return ___OnSaccadeY_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_21() { return &___OnSaccadeY_21; }
	inline void set_OnSaccadeY_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_21), (void*)value);
	}

	inline static int32_t get_offset_of_eyeTrackingDevice_23() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F, ___eyeTrackingDevice_23)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_eyeTrackingDevice_23() const { return ___eyeTrackingDevice_23; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_eyeTrackingDevice_23() { return &___eyeTrackingDevice_23; }
	inline void set_eyeTrackingDevice_23(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___eyeTrackingDevice_23 = value;
	}
};

struct OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::InputDeviceList
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___InputDeviceList_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_24;

public:
	inline static int32_t get_offset_of_InputDeviceList_22() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F_StaticFields, ___InputDeviceList_22)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_InputDeviceList_22() const { return ___InputDeviceList_22; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_InputDeviceList_22() { return &___InputDeviceList_22; }
	inline void set_InputDeviceList_22(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___InputDeviceList_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDeviceList_22), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_24() { return static_cast<int32_t>(offsetof(OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F_StaticFields, ___UpdatePerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_24() const { return ___UpdatePerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_24() { return &___UpdatePerfMarker_24; }
	inline void set_UpdatePerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_24 = value;
	}
};


// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009  : public RC2_t6785EB5219F7B22606804A2D198BCB100E4813F9
{
public:
	// System.Boolean System.Security.Cryptography.RC2CryptoServiceProvider::m_use40bitSalt
	bool ___m_use40bitSalt_12;

public:
	inline static int32_t get_offset_of_m_use40bitSalt_12() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009, ___m_use40bitSalt_12)); }
	inline bool get_m_use40bitSalt_12() const { return ___m_use40bitSalt_12; }
	inline bool* get_address_of_m_use40bitSalt_12() { return &___m_use40bitSalt_12; }
	inline void set_m_use40bitSalt_12(bool value)
	{
		___m_use40bitSalt_12 = value;
	}
};

struct RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.RC2CryptoServiceProvider::s_legalKeySizes
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___s_legalKeySizes_13;

public:
	inline static int32_t get_offset_of_s_legalKeySizes_13() { return static_cast<int32_t>(offsetof(RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_StaticFields, ___s_legalKeySizes_13)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_s_legalKeySizes_13() const { return ___s_legalKeySizes_13; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_s_legalKeySizes_13() { return &___s_legalKeySizes_13; }
	inline void set_s_legalKeySizes_13(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___s_legalKeySizes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legalKeySizes_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033  : public BaseInputDeviceManager_t05BA188196DF9628F2ED02D3DC87D4ED89F1F3AA
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_inputDevices_18() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033, ___inputDevices_18)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_18() const { return ___inputDevices_18; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_18() { return &___inputDevices_18; }
	inline void set_inputDevices_18(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_18), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_19() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033, ___inputDevicesSubset_19)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_19() const { return ___inputDevicesSubset_19; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_19() { return &___inputDevicesSubset_19; }
	inline void set_inputDevicesSubset_19(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_19), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_20() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033, ___lastInputDevices_20)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_20() const { return ___lastInputDevices_20; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_20() { return &___lastInputDevices_20; }
	inline void set_lastInputDevices_20(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_21)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_21() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_21; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_21() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_21; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_21(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_21), (void*)value);
	}
};

struct XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_tBDD5926BC1EE372C9A9E1DB2F7D5D2A1CF1BAE97 * ___ActiveControllers_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_24;

public:
	inline static int32_t get_offset_of_ActiveControllers_17() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033_StaticFields, ___ActiveControllers_17)); }
	inline Dictionary_2_tBDD5926BC1EE372C9A9E1DB2F7D5D2A1CF1BAE97 * get_ActiveControllers_17() const { return ___ActiveControllers_17; }
	inline Dictionary_2_tBDD5926BC1EE372C9A9E1DB2F7D5D2A1CF1BAE97 ** get_address_of_ActiveControllers_17() { return &___ActiveControllers_17; }
	inline void set_ActiveControllers_17(Dictionary_2_tBDD5926BC1EE372C9A9E1DB2F7D5D2A1CF1BAE97 * value)
	{
		___ActiveControllers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033_StaticFields, ___UpdatePerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_22() const { return ___UpdatePerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_22() { return &___UpdatePerfMarker_22; }
	inline void set_UpdatePerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033_StaticFields, ___GetOrAddControllerPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_23() const { return ___GetOrAddControllerPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_23() { return &___GetOrAddControllerPerfMarker_23; }
	inline void set_GetOrAddControllerPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033_StaticFields, ___RemoveControllerPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_24() const { return ___RemoveControllerPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_24() { return &___RemoveControllerPerfMarker_24; }
	inline void set_RemoveControllerPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_24 = value;
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


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager
struct OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556  : public XRSDKDeviceManager_t1D1E6FDF33ACA800FA5691913E03B0421A770033
{
public:
	// Microsoft.MixedReality.OpenXR.GestureRecognizer Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::gestureRecognizer
	GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B * ___gestureRecognizer_25;
	// Microsoft.MixedReality.OpenXR.GestureRecognizer Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::navigationGestureRecognizer
	GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B * ___navigationGestureRecognizer_26;
	// Microsoft.MixedReality.OpenXR.GestureEventData Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::eventData
	GestureEventData_t8531D445FB6504695BBD8852D6561278E05842D1  ___eventData_27;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::autoStartBehavior
	int32_t ___autoStartBehavior_28;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::gestureSettings
	int32_t ___gestureSettings_29;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::navigationSettings
	int32_t ___navigationSettings_30;
	// Microsoft.MixedReality.Toolkit.Windows.Input.WindowsGestureSettings Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::railsNavigationSettings
	int32_t ___railsNavigationSettings_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::useRailsNavigation
	bool ___useRailsNavigation_32;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::holdAction
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___holdAction_33;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::navigationAction
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___navigationAction_34;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::manipulationAction
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___manipulationAction_35;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::selectAction
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___selectAction_36;

public:
	inline static int32_t get_offset_of_gestureRecognizer_25() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___gestureRecognizer_25)); }
	inline GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B * get_gestureRecognizer_25() const { return ___gestureRecognizer_25; }
	inline GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B ** get_address_of_gestureRecognizer_25() { return &___gestureRecognizer_25; }
	inline void set_gestureRecognizer_25(GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B * value)
	{
		___gestureRecognizer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gestureRecognizer_25), (void*)value);
	}

	inline static int32_t get_offset_of_navigationGestureRecognizer_26() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___navigationGestureRecognizer_26)); }
	inline GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B * get_navigationGestureRecognizer_26() const { return ___navigationGestureRecognizer_26; }
	inline GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B ** get_address_of_navigationGestureRecognizer_26() { return &___navigationGestureRecognizer_26; }
	inline void set_navigationGestureRecognizer_26(GestureRecognizer_tA36FD8DFACC61D6B245E2DE1591D6D415D38861B * value)
	{
		___navigationGestureRecognizer_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___navigationGestureRecognizer_26), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_27() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___eventData_27)); }
	inline GestureEventData_t8531D445FB6504695BBD8852D6561278E05842D1  get_eventData_27() const { return ___eventData_27; }
	inline GestureEventData_t8531D445FB6504695BBD8852D6561278E05842D1 * get_address_of_eventData_27() { return &___eventData_27; }
	inline void set_eventData_27(GestureEventData_t8531D445FB6504695BBD8852D6561278E05842D1  value)
	{
		___eventData_27 = value;
	}

	inline static int32_t get_offset_of_autoStartBehavior_28() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___autoStartBehavior_28)); }
	inline int32_t get_autoStartBehavior_28() const { return ___autoStartBehavior_28; }
	inline int32_t* get_address_of_autoStartBehavior_28() { return &___autoStartBehavior_28; }
	inline void set_autoStartBehavior_28(int32_t value)
	{
		___autoStartBehavior_28 = value;
	}

	inline static int32_t get_offset_of_gestureSettings_29() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___gestureSettings_29)); }
	inline int32_t get_gestureSettings_29() const { return ___gestureSettings_29; }
	inline int32_t* get_address_of_gestureSettings_29() { return &___gestureSettings_29; }
	inline void set_gestureSettings_29(int32_t value)
	{
		___gestureSettings_29 = value;
	}

	inline static int32_t get_offset_of_navigationSettings_30() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___navigationSettings_30)); }
	inline int32_t get_navigationSettings_30() const { return ___navigationSettings_30; }
	inline int32_t* get_address_of_navigationSettings_30() { return &___navigationSettings_30; }
	inline void set_navigationSettings_30(int32_t value)
	{
		___navigationSettings_30 = value;
	}

	inline static int32_t get_offset_of_railsNavigationSettings_31() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___railsNavigationSettings_31)); }
	inline int32_t get_railsNavigationSettings_31() const { return ___railsNavigationSettings_31; }
	inline int32_t* get_address_of_railsNavigationSettings_31() { return &___railsNavigationSettings_31; }
	inline void set_railsNavigationSettings_31(int32_t value)
	{
		___railsNavigationSettings_31 = value;
	}

	inline static int32_t get_offset_of_useRailsNavigation_32() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___useRailsNavigation_32)); }
	inline bool get_useRailsNavigation_32() const { return ___useRailsNavigation_32; }
	inline bool* get_address_of_useRailsNavigation_32() { return &___useRailsNavigation_32; }
	inline void set_useRailsNavigation_32(bool value)
	{
		___useRailsNavigation_32 = value;
	}

	inline static int32_t get_offset_of_holdAction_33() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___holdAction_33)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_holdAction_33() const { return ___holdAction_33; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_holdAction_33() { return &___holdAction_33; }
	inline void set_holdAction_33(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___holdAction_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___holdAction_33))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_navigationAction_34() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___navigationAction_34)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_navigationAction_34() const { return ___navigationAction_34; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_navigationAction_34() { return &___navigationAction_34; }
	inline void set_navigationAction_34(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___navigationAction_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___navigationAction_34))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_manipulationAction_35() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___manipulationAction_35)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_manipulationAction_35() const { return ___manipulationAction_35; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_manipulationAction_35() { return &___manipulationAction_35; }
	inline void set_manipulationAction_35(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___manipulationAction_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___manipulationAction_35))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_selectAction_36() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556, ___selectAction_36)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_selectAction_36() const { return ___selectAction_36; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_selectAction_36() { return &___selectAction_36; }
	inline void set_selectAction_36(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___selectAction_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___selectAction_36))->___description_2), (void*)NULL);
	}
};

struct OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_38;

public:
	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_37() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556_StaticFields, ___GetOrAddControllerPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_37() const { return ___GetOrAddControllerPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_37() { return &___GetOrAddControllerPerfMarker_37; }
	inline void set_GetOrAddControllerPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_38() { return static_cast<int32_t>(offsetof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556_StaticFields, ___RemoveControllerPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_38() const { return ___RemoveControllerPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_38() { return &___RemoveControllerPerfMarker_38; }
	inline void set_RemoveControllerPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_38 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver
struct OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D  : public GenericXRSDKSpatialMeshObserver_t99987173EAE3BC9F7C6986ED13E49D6188AE14E2
{
public:

public:
};

struct OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver::LookupTriangleDensityPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LookupTriangleDensityPerfMarker_64;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_63() { return static_cast<int32_t>(offsetof(OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_63() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_63() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_63; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_LookupTriangleDensityPerfMarker_64() { return static_cast<int32_t>(offsetof(OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D_StaticFields, ___LookupTriangleDensityPerfMarker_64)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LookupTriangleDensityPerfMarker_64() const { return ___LookupTriangleDensityPerfMarker_64; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LookupTriangleDensityPerfMarker_64() { return &___LookupTriangleDensityPerfMarker_64; }
	inline void set_LookupTriangleDensityPerfMarker_64(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LookupTriangleDensityPerfMarker_64 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);


// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.UnityInput.MouseDeviceManager
struct MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MouseDeviceManager_tBF9F8AE584C64A2E8466497E36943062C526C516_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Mutex
struct Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Mutex_tA342933FCB3E3E679E3CD498804DE36CD81801B5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.NamedPermissionSet
struct NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NamedPermissionSet_t4387D81FDC42E5B7A75EA9C1C86BF3C15B8A8D69_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.OidCollection
struct OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OidCollection_tA091E185B8840648BE96A6C547F0C26F88E3A902_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRCameraSettings
struct OpenXRCameraSettings_t303C5AA52C6E90838E083728D386B47F78F7D9F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXRCameraSettings_t303C5AA52C6E90838E083728D386B47F78F7D9F0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OpenXRCameraSettings_t303C5AA52C6E90838E083728D386B47F78F7D9F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXRCameraSettings_t303C5AA52C6E90838E083728D386B47F78F7D9F0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXRCameraSettings_t303C5AA52C6E90838E083728D386B47F78F7D9F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXRCameraSettings_t303C5AA52C6E90838E083728D386B47F78F7D9F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXRCameraSettings_t303C5AA52C6E90838E083728D386B47F78F7D9F0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRDeviceManager
struct OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXRDeviceManager_t25064035834CCE9FB41523C0BF697BA0BD595556_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXREyeGazeDataProvider
struct OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXREyeGazeDataProvider_t21AF9134F9DBCBF9514BAC85A51332F56F92480F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.XRSDK.OpenXR.OpenXRSpatialAwarenessMeshObserver
struct OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OpenXRSpatialAwarenessMeshObserver_t8FCDFF522E0DF2EE31FE351837FE7DBBD7D5303D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.OrderedDictionary
struct OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OrderedDictionary_t5732A1063EEB3F32B0EEA37DAC760B5A58578D16_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.ParallelForReplicaTask
struct ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParallelForReplicaTask_tA8EF390CFE7A34F4D940DA70CFC2925E8E10E7A6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.ParallelForReplicatingTask
struct ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParallelForReplicatingTask_t5C662CB60CF2C6AAAFD99BCE33295652B32762A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.PermissionSet
struct PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PermissionSet_t4B5D92D4FA83DE0438D0177B4308F3A40047B503_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.PhotoCapture
struct PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PhotoCapture_t776617AFD6DE0F6CEE985719380EC3DB91C8BB74_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.WebCam.PhotoCaptureFrame
struct PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PhotoCaptureFrame_t70F1A58CF7A76D6B44D7CEBD65B784BB20996CD0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.PinnedBufferMemoryStream
struct PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PinnedBufferMemoryStream_tDB1B8D639F3D8F7E60BA9E050BC48C575E573E78_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper>, IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38*>(this);
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
		interfaceIds[0] = IReference_1_t7F259CA808F8CA00C0A7F31D57D93E94ABE7FD38::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6BBE84644D81C739672BB5FE7BD65AD8AD6C044B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  returnValue;
		try
		{
			returnValue = *static_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(UnBox(GetManagedObjectInline(), Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var));
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
			returnValue = 17;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  returnValue;
		try
		{
			returnValue = *static_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(UnBox(GetManagedObjectInline(), Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var));
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Point
struct Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper>, IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590*>(this);
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
		interfaceIds[0] = IReference_1_t22FB8AE92DF2358ED21FB1C7C5B2FFCAEB97C590::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m0FC3B384D7E37F93935DFB33EA2D44E3FC3E8F49(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB  returnValue;
		try
		{
			returnValue = *static_cast<Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB *>(UnBox(GetManagedObjectInline(), Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_il2cpp_TypeInfo_var));
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
			returnValue = 17;
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
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Point", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Point_t8B0B7243DC381133E329E2DCCB319DC6F4CBF8CB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Process
struct Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.ProcessWaitHandle
struct ProcessWaitHandle_t88F9EB49F2D6E81DC362B2B50C23FABA8D1F6F94_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ProcessWaitHandle_t88F9EB49F2D6E81DC362B2B50C23FABA8D1F6F94_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ProcessWaitHandle_t88F9EB49F2D6E81DC362B2B50C23FABA8D1F6F94_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ProcessWaitHandle_t88F9EB49F2D6E81DC362B2B50C23FABA8D1F6F94_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ProcessWaitHandle_t88F9EB49F2D6E81DC362B2B50C23FABA8D1F6F94(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ProcessWaitHandle_t88F9EB49F2D6E81DC362B2B50C23FABA8D1F6F94_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ProcessWaitHandle_t88F9EB49F2D6E81DC362B2B50C23FABA8D1F6F94_ComCallableWrapper(obj));
}

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PropertyChangedEventArgs_t808A113087635F3D104C8374BE1309A415BD0E22(RuntimeObject* obj)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.ComponentModel.PropertyChangedEventArgs'."), NULL);
}

// COM Callable Wrapper class definition for System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper>, IPropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper
{
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IPropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper*>(this);
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

	// COM Callable invoker for System.ComponentModel.PropertyChangedEventHandler
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, PropertyChangedEventArgs_t808A113087635F3D104C8374BE1309A415BD0E22 * ___e1) override
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.ComponentModel.PropertyChangedEventArgs'."), NULL);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper>, IPropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper
{
	inline PropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<PropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper>(obj)
	{
	}

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

		if (::memcmp(&iid, &IPropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper*>(this);
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

	// COM Callable invoker for Windows.UI.Xaml.Data.PropertyChangedEventHandler
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, PropertyChangedEventArgs_t808A113087635F3D104C8374BE1309A415BD0E22 * ___e1) override
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.ComponentModel.PropertyChangedEventArgs'."), NULL);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PropertyChangedEventHandler_tE3C750160E9C136651491C97D1A772056EF059A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
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
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper>, IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B*>(this);
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
		interfaceIds[0] = IReference_1_tA4E67817B79498EFBA69D3B855B0D877416F6A8B::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAFDC3A521A2D5078E107CAAA4F124AFC2D25F526(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
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
			returnValue = true;
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
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
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

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Quaternion
struct Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper>, IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31*>(this);
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
		interfaceIds[0] = IReference_1_t33EFD59F5EFEE8E48055FF4CB9A75732C6EA2E31::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC9B0A6358249758D52E8655254FFC53AB4E48D2F(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C  returnValue;
		try
		{
			returnValue = *static_cast<Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C *>(UnBox(GetManagedObjectInline(), Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Quaternion_tE38335092171ED778CFD631B55A5C81347A93E8C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Quaternion
struct Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper>, IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A*>(this);
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
		interfaceIds[0] = IReference_1_t3A0E57B1670337C77F71EEB98E7BC1AFBB35812A::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m223D1D22BBB08115FECD12012F70419914365276(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22  returnValue;
		try
		{
			returnValue = *static_cast<Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22 *>(UnBox(GetManagedObjectInline(), Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Quaternion_tEA023D1069B1229FB3B43923B6DB22090B599B22_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Xml.QueryOutputWriter
struct QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) QueryOutputWriter_t0B71F7C52905D7411C6F142161FBCF3912C104DB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Queue_t66723C58C7422102C36F8570BE048BD0CC489E52(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Queue_t66723C58C7422102C36F8570BE048BD0CC489E52_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RC2CryptoServiceProvider_t2C9BCC9EEB6099FC4DC3045D239AABAA18C03009_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RC2Transform
struct RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RC2Transform_t635973BE70BDC76311DEBF2709D2CD267451B9C1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RIPEMD160Managed
struct RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RIPEMD160Managed_tA55A312373AED6057575B289893B2918C4730A28_ComCallableWrapper(obj));
}
