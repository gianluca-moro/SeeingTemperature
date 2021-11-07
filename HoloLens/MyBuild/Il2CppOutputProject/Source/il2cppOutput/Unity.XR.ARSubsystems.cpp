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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>
struct InputProcessor_1_t3B296CAFE25B64EAAAE8F5BB2A9BEF4730F7C318;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>
struct InputProcessor_1_tECA9EB13E7BADD5A5051C1DD6A48A74758C11D87;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_t4F631AC12A41E95D188968B1776F2A1F983B90A4;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t0A7F13BEDD4EC8DFDD5AEC7D5171B22F3D852CE5;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t389082A83361A00577FB12B1BFEFA4439DBEAA69;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t0E1C52F3F099638F0EFF9E03352A814E50092E22;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tE9888364F17DF110619D7238068EB1EC98053AE5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_tB5A0B737E782053A89719964DAF99F32E5CBFC46;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t03AE7A9F3FCFC6AD533F1AC3F403168B8140649F;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t346381F1A8322029735E6CB60BE656844AC911E8;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_tE9F5623D0E551591334872A367EFF28A72775EEA;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct TrackingSubsystem_4_t87A57AE1E1117ED73BBD3B84DD595F36FA975077;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>[]
struct InputProcessor_1U5BU5D_t324EC5B385A3D14C5B73D4BB80097CBF08A6B2F5;
// UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>[]
struct InputProcessor_1U5BU5D_t10C66942B06FAD209C137BB0A7FB2808039D10C3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4;
// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// UnityEngine.XR.ARSubsystems.HandheldARInputDevice
struct HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.InputSystem.InputControl
struct InputControl_t3CDD1115017147EEC9D825834637D7700669C006;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0040832A71810E092F962A5F9A66A6A1866CC7D1;
IL2CPP_EXTERN_C String_t* _stringLiteral068B9DAC1E2A8DA48FFC0F566F9C805099D13F1B;
IL2CPP_EXTERN_C String_t* _stringLiteral0EEB74DAF175D886E4EA5D5BB23B6E48993A80AF;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBF1F3BF0E575F4D92649F1F5678267C887CF89;
IL2CPP_EXTERN_C String_t* _stringLiteral132C67C31C67A73009E12AF0BF92B84B55B95E84;
IL2CPP_EXTERN_C String_t* _stringLiteral158E95C298826281B51D5B4EE894BE864B7D1153;
IL2CPP_EXTERN_C String_t* _stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A;
IL2CPP_EXTERN_C String_t* _stringLiteral1862DB4B99A6D2D4DDE2C775E5AC1AF7CD03A268;
IL2CPP_EXTERN_C String_t* _stringLiteral1889AF12D766B3A68EB9EE79FE4ECA560C23A4F5;
IL2CPP_EXTERN_C String_t* _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4;
IL2CPP_EXTERN_C String_t* _stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB0DA5C0A0620735E866EA5BC9FCAA876BA5545;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77;
IL2CPP_EXTERN_C String_t* _stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B;
IL2CPP_EXTERN_C String_t* _stringLiteral41D4ECEC72974BEA998FBA733A15A0EA3B7DF9B1;
IL2CPP_EXTERN_C String_t* _stringLiteral49DE19A080E7D5ADFAE0565CAFC30E6F99EB7FFD;
IL2CPP_EXTERN_C String_t* _stringLiteral4B80EFD0BD00CE9A8E26DD1EA0F4B58964AF32CD;
IL2CPP_EXTERN_C String_t* _stringLiteral5BA2A4A16421FA9FAB2CAF2E4AFC91121F7BB4FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6F57A13713CB116503D42E8DFD65A84DA07B33BB;
IL2CPP_EXTERN_C String_t* _stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral772119CD0175AC1E1CADE4F75080F5F07B6BB1F9;
IL2CPP_EXTERN_C String_t* _stringLiteral7F623AA45815B8B51F227F5A19CB68E1BD42852E;
IL2CPP_EXTERN_C String_t* _stringLiteralA8A8717ECC5E31F30A99C8547616828C8F428B66;
IL2CPP_EXTERN_C String_t* _stringLiteralA9BA2974AED76FB92F26F69C6093F790414376FA;
IL2CPP_EXTERN_C String_t* _stringLiteralAA661F2F4F2AC2A4D1268C73A499D77CA7E0C476;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC838375A805C8CCC6514E96BA13E150D629186;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D;
IL2CPP_EXTERN_C String_t* _stringLiteralC127E2685E9BA6170311362A98135614A56E47AF;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA8A633C4C95F85CAB2C4D07CAFA53611912B32;
IL2CPP_EXTERN_C String_t* _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567;
IL2CPP_EXTERN_C String_t* _stringLiteralD2316C6372C4914C9A07CD469B803A77534ADCF4;
IL2CPP_EXTERN_C String_t* _stringLiteralD629B7D26A17486767CD11C705978B046E7819F7;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D10F5EBD63494DC1C7F8C9033E7A490800B3AF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA1CD25788E7EE9FDEA55BBF0CEE5D1AD7F125CD;
IL2CPP_EXTERN_C String_t* _stringLiteralE249513646B3CA3B2119CA7AD27370C9E9012B74;
IL2CPP_EXTERN_C String_t* _stringLiteralE573BD7F9C4A38697EE4A429FA0C236D6C7038C4;
IL2CPP_EXTERN_C String_t* _stringLiteralE7538558415E1BD8F7A4C577BB457C0AD0F3C884;
IL2CPP_EXTERN_C String_t* _stringLiteralED9546C195BD4988B71713BD762B7E7F364227ED;
IL2CPP_EXTERN_C String_t* _stringLiteralF1FF99A8F97A90CE3EB35AA1C7B40C1DDFC82A9B;
IL2CPP_EXTERN_C String_t* _stringLiteralF627CDA1D5403909B224DFB1DDF5D0F8E00F2EEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9A65D560514A0DBAEA0BD813C4A25CD252C2D66;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisQuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5_mF45CA641B692688646A6061E30A52C4D75C101DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControl_GetChildControl_TisVector3Control_tADE778D5286B97C6E5622015537184D00B70C423_m9F0BB25C25D46A91E7A9835E8EAE6CDC920ABC51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_requestedPlaneDetectionMode_m6F76C54F3DDC0811336F80D6CF40CBC64147DAD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m1CF8865269978062A7763335B78C6D873D10F09E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m44F60A7BB6F0282109ED44817703F6FDE0DAD8E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m63E1420F5B2D7E40BDAAD6BC312979C25D61C6EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_mC9825ABADBFD661143DBD286E7A4203D29661704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m3070FB0F5EDD35A102DFE6DB270CB1423E80A059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m080533A05983B6767F8B3470E127A772D0D59530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_mAA0B384C82E784EFEEE8ABCC29FCCB1AE4106ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_m66B311A47D5E648C66011BA6F376723D0BAB98DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_mBF63E483B756C84A0068727BDBEC29BBC5182F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_mEBA68D2AF3E32AF7F962362371B19DD06C4951AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRAnchorSubsystem_GetChanges_mA9E2E9974DB9E35A550FEE38B33356141E3AE5F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneSubsystem_GetBoundary_mE3A06B4C37DB403DC6E5DD45A7E30700C73B3CA3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1A5F46CB58C39FA8C3A1BEF72944AB765466DF6C 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.FeatureExtensions
struct FeatureExtensions_t3AE82EEF9BA5B67267E4A8371D344F93AA983603  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.HashCode
struct HashCode_t04F499E8E1D225853C1B731BE6D80A44C9DD1800  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Quaternion>>
struct InlinedArray_1_t6CA70C45B1DFD4141C5BB0EA63A9D4652FA42294 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_t3B296CAFE25B64EAAAE8F5BB2A9BEF4730F7C318 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t324EC5B385A3D14C5B73D4BB80097CBF08A6B2F5* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6CA70C45B1DFD4141C5BB0EA63A9D4652FA42294, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6CA70C45B1DFD4141C5BB0EA63A9D4652FA42294, ___firstValue_1)); }
	inline InputProcessor_1_t3B296CAFE25B64EAAAE8F5BB2A9BEF4730F7C318 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_t3B296CAFE25B64EAAAE8F5BB2A9BEF4730F7C318 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_t3B296CAFE25B64EAAAE8F5BB2A9BEF4730F7C318 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6CA70C45B1DFD4141C5BB0EA63A9D4652FA42294, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t324EC5B385A3D14C5B73D4BB80097CBF08A6B2F5* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t324EC5B385A3D14C5B73D4BB80097CBF08A6B2F5** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t324EC5B385A3D14C5B73D4BB80097CBF08A6B2F5* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<UnityEngine.Vector3>>
struct InlinedArray_1_t3EBE2296219C1225DEFCD3B969ADB29B8B6DB72C 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tECA9EB13E7BADD5A5051C1DD6A48A74758C11D87 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_t10C66942B06FAD209C137BB0A7FB2808039D10C3* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3EBE2296219C1225DEFCD3B969ADB29B8B6DB72C, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3EBE2296219C1225DEFCD3B969ADB29B8B6DB72C, ___firstValue_1)); }
	inline InputProcessor_1_tECA9EB13E7BADD5A5051C1DD6A48A74758C11D87 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tECA9EB13E7BADD5A5051C1DD6A48A74758C11D87 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tECA9EB13E7BADD5A5051C1DD6A48A74758C11D87 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t3EBE2296219C1225DEFCD3B969ADB29B8B6DB72C, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_t10C66942B06FAD209C137BB0A7FB2808039D10C3* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_t10C66942B06FAD209C137BB0A7FB2808039D10C3** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_t10C66942B06FAD209C137BB0A7FB2808039D10C3* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t0A7F13BEDD4EC8DFDD5AEC7D5171B22F3D852CE5  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t389082A83361A00577FB12B1BFEFA4439DBEAA69  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t0E1C52F3F099638F0EFF9E03352A814E50092E22  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tE9888364F17DF110619D7238068EB1EC98053AE5  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2, ___U3CproviderU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
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


// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F  : public ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4
{
public:

public:
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
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


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
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


// UnityEngine.XR.ARSubsystems.ScopedProfiler
struct ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E__padding[1];
	};

public:
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


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
struct Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_7() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_7; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsClassificationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD, ___U3CsupportsClassificationU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsClassificationU3Ek__BackingField_8() const { return ___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsClassificationU3Ek__BackingField_8() { return &___U3CsupportsClassificationU3Ek__BackingField_8; }
	inline void set_U3CsupportsClassificationU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsClassificationU3Ek__BackingField_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CproviderTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_3() const { return ___U3CproviderTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_3() { return &___U3CproviderTypeU3Ek__BackingField_3; }
	inline void set_U3CproviderTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemTypeOverrideU3Ek__BackingField_4)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_4() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_4() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_4; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_5() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_5() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_5; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94  : public SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1  : public SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct TrackingSubsystem_4_t87A57AE1E1117ED73BBD3B84DD595F36FA975077  : public SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E
{
public:

public:
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.XR.ARSubsystems.Feature
struct Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_21;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_22;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_23;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CformatU3Ek__BackingField_21)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CformatU3Ek__BackingField_21() const { return ___U3CformatU3Ek__BackingField_21; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CformatU3Ek__BackingField_21() { return &___U3CformatU3Ek__BackingField_21; }
	inline void set_U3CformatU3Ek__BackingField_21(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CformatU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbyteOffsetU3Ek__BackingField_22)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_22() const { return ___U3CbyteOffsetU3Ek__BackingField_22; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_22() { return &___U3CbyteOffsetU3Ek__BackingField_22; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_22(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbitOffsetU3Ek__BackingField_23)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_23() const { return ___U3CbitOffsetU3Ek__BackingField_23; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_23() { return &___U3CbitOffsetU3Ek__BackingField_23; }
	inline void set_U3CbitOffsetU3Ek__BackingField_23(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CsizeInBitsU3Ek__BackingField_24)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_24() const { return ___U3CsizeInBitsU3Ek__BackingField_24; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_24() { return &___U3CsizeInBitsU3Ek__BackingField_24; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_24(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_24 = value;
	}
};

struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSBit_3;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatInt_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUInt_5;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatShort_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUShort_7;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatByte_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSByte_9;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatLong_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatULong_11;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatFloat_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatDouble_13;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3_15;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatQuaternion_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Short_17;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Short_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Byte_19;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Byte_20;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatBit_2)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_3() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSBit_3)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSBit_3() const { return ___FormatSBit_3; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSBit_3() { return &___FormatSBit_3; }
	inline void set_FormatSBit_3(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSBit_3 = value;
	}

	inline static int32_t get_offset_of_FormatInt_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatInt_4)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatInt_4() const { return ___FormatInt_4; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatInt_4() { return &___FormatInt_4; }
	inline void set_FormatInt_4(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatInt_4 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_5() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUInt_5)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUInt_5() const { return ___FormatUInt_5; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUInt_5() { return &___FormatUInt_5; }
	inline void set_FormatUInt_5(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUInt_5 = value;
	}

	inline static int32_t get_offset_of_FormatShort_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatShort_6)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatShort_6() const { return ___FormatShort_6; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatShort_6() { return &___FormatShort_6; }
	inline void set_FormatShort_6(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatShort_6 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_7() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUShort_7)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUShort_7() const { return ___FormatUShort_7; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUShort_7() { return &___FormatUShort_7; }
	inline void set_FormatUShort_7(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUShort_7 = value;
	}

	inline static int32_t get_offset_of_FormatByte_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatByte_8)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatByte_8() const { return ___FormatByte_8; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatByte_8() { return &___FormatByte_8; }
	inline void set_FormatByte_8(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatByte_8 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_9() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSByte_9)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSByte_9() const { return ___FormatSByte_9; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSByte_9() { return &___FormatSByte_9; }
	inline void set_FormatSByte_9(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSByte_9 = value;
	}

	inline static int32_t get_offset_of_FormatLong_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatLong_10)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatLong_10() const { return ___FormatLong_10; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatLong_10() { return &___FormatLong_10; }
	inline void set_FormatLong_10(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatLong_10 = value;
	}

	inline static int32_t get_offset_of_FormatULong_11() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatULong_11)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatULong_11() const { return ___FormatULong_11; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatULong_11() { return &___FormatULong_11; }
	inline void set_FormatULong_11(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatULong_11 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatFloat_12)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatFloat_12() const { return ___FormatFloat_12; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatFloat_12() { return &___FormatFloat_12; }
	inline void set_FormatFloat_12(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatFloat_12 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_13() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatDouble_13)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatDouble_13() const { return ___FormatDouble_13; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatDouble_13() { return &___FormatDouble_13; }
	inline void set_FormatDouble_13(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatDouble_13 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2_14)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2_14() const { return ___FormatVector2_14; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2_14() { return &___FormatVector2_14; }
	inline void set_FormatVector2_14(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2_14 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_15() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3_15)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3_15() const { return ___FormatVector3_15; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3_15() { return &___FormatVector3_15; }
	inline void set_FormatVector3_15(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3_15 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatQuaternion_16)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatQuaternion_16() const { return ___FormatQuaternion_16; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatQuaternion_16() { return &___FormatQuaternion_16; }
	inline void set_FormatQuaternion_16(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatQuaternion_16 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_17() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Short_17)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Short_17() const { return ___FormatVector2Short_17; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Short_17() { return &___FormatVector2Short_17; }
	inline void set_FormatVector2Short_17(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Short_17 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Short_18)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Short_18() const { return ___FormatVector3Short_18; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Short_18() { return &___FormatVector3Short_18; }
	inline void set_FormatVector3Short_18(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Short_18 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_19() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Byte_19)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Byte_19() const { return ___FormatVector2Byte_19; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Byte_19() { return &___FormatVector2Byte_19; }
	inline void set_FormatVector2Byte_19(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Byte_19 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Byte_20)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Byte_20() const { return ___FormatVector3Byte_20; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Byte_20() { return &___FormatVector3Byte_20; }
	inline void set_FormatVector3Byte_20(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Byte_20 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_t22DC72CB3F42DDC9A2472A66F8119475357B48CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.ScreenOrientation
struct ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_tF5E98733E00C91772417EDEF3B3A6FA1DF653FCD, ___value___2)); }
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


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B  : public SubsystemDescriptorWithProvider_2_t0A7F13BEDD4EC8DFDD5AEC7D5171B22F3D852CE5
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_3() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_3() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_3; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483  : public SubsystemDescriptorWithProvider_2_t389082A83361A00577FB12B1BFEFA4439DBEAA69
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_6() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_6() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_6; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsClassificationU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483, ___U3CsupportsClassificationU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsClassificationU3Ek__BackingField_7() const { return ___U3CsupportsClassificationU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsClassificationU3Ek__BackingField_7() { return &___U3CsupportsClassificationU3Ek__BackingField_7; }
	inline void set_U3CsupportsClassificationU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsClassificationU3Ek__BackingField_7 = value;
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


// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C  : public SubsystemDescriptorWithProvider_2_tE9888364F17DF110619D7238068EB1EC98053AE5
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C, ___U3CsupportsInstallU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_3() const { return ___U3CsupportsInstallU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_3() { return &___U3CsupportsInstallU3Ek__BackingField_3; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C, ___U3CsupportsMatchFrameRateU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_4() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_4() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_4; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_4 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tFA512F7F09EC7A0F7A695F96DC860C91EF15BCFF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tFA512F7F09EC7A0F7A695F96DC860C91EF15BCFF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2  : public SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227  : public SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A  : public SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4
{
public:

public:
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_9;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_10;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_13;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_14;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_15;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_16;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_9() const { return ___caps_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_9() { return &___caps_9; }
	inline void set_caps_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_9), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_10)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_10() const { return ___capnames_10; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_10), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_11() const { return ___capslist_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_11() { return &___capslist_11; }
	inline void set_capslist_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_11), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_runnerref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_13)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_13() const { return ___runnerref_13; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_13() { return &___runnerref_13; }
	inline void set_runnerref_13(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_13), (void*)value);
	}

	inline static int32_t get_offset_of_replref_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_14)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_14() const { return ___replref_14; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_14() { return &___replref_14; }
	inline void set_replref_14(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_14), (void*)value);
	}

	inline static int32_t get_offset_of_code_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_15)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_15() const { return ___code_15; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_15() { return &___code_15; }
	inline void set_code_15(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_15), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_16)); }
	inline bool get_refsInitialized_16() const { return ___refsInitialized_16; }
	inline bool* get_address_of_refsInitialized_16() { return &___refsInitialized_16; }
	inline void set_refsInitialized_16(bool value)
	{
		___refsInitialized_16 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_7;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_8;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_17;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_18;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_7() const { return ___FallbackDefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_7() { return &___FallbackDefaultMatchTimeout_7; }
	inline void set_FallbackDefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_8)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_8() const { return ___DefaultMatchTimeout_8; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_8() { return &___DefaultMatchTimeout_8; }
	inline void set_DefaultMatchTimeout_8(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_8 = value;
	}

	inline static int32_t get_offset_of_livecode_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_17)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_17() const { return ___livecode_17; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_17() { return &___livecode_17; }
	inline void set_livecode_17(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_17), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_18() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_18)); }
	inline int32_t get_cacheSize_18() const { return ___cacheSize_18; }
	inline int32_t* get_address_of_cacheSize_18() { return &___cacheSize_18; }
	inline void set_cacheSize_18(int32_t value)
	{
		___cacheSize_18 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7  : public TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE  : public TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_HitTrackableId_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_HitTrackableId_6() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_HitTrackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_HitTrackableId_6() const { return ___m_HitTrackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_HitTrackableId_6() { return &___m_HitTrackableId_6; }
	inline void set_m_HitTrackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_HitTrackableId_6 = value;
	}
};

struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields, ___s_Default_0)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8  : public TrackingSubsystem_4_t87A57AE1E1117ED73BBD3B84DD595F36FA975077
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C  : public SubsystemDescriptorWithProvider_2_t0E1C52F3F099638F0EFF9E03352A814E50092E22
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_3() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_3() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_4() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_4() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C, ___U3CsupportedTrackableTypesU3Ek__BackingField_5)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_5() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_5() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_5; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_5(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C, ___U3CsupportsTrackedRaycastsU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsTrackedRaycastsU3Ek__BackingField_6() const { return ___U3CsupportsTrackedRaycastsU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_6() { return &___U3CsupportsTrackedRaycastsU3Ek__BackingField_6; }
	inline void set_U3CsupportsTrackedRaycastsU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsTrackedRaycastsU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportedTrackableTypesU3Ek__BackingField_6)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_6() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_6() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_6; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_6(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01, ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() const { return ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsTrackedRaycastsU3Ek__BackingField_7() { return &___U3CsupportsTrackedRaycastsU3Ek__BackingField_7; }
	inline void set_U3CsupportsTrackedRaycastsU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Added_1)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Updated_2)); }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t056649BD2D6D7DDC87945B1C2AEE66C39F4667B3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Added_1)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Updated_2)); }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tC0FA6F80F8C779BABF802ACD23BC7304CA5FD5E9  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Added_1)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Updated_2)); }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t7CC8D0A91D6B929CE8AF86EF904CA11B5437074E  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3, ___m_Removed_3)); }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_t991E9C764228B2B65D9688847CCDA8CE903F5D77  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 
{
public:
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdescriptorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CdescriptorU3Ek__BackingField_0)); }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  get_U3CdescriptorU3Ek__BackingField_0() const { return ___U3CdescriptorU3Ek__BackingField_0; }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * get_address_of_U3CdescriptorU3Ek__BackingField_0() { return &___U3CdescriptorU3Ek__BackingField_0; }
	inline void set_U3CdescriptorU3Ek__BackingField_0(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  value)
	{
		___U3CdescriptorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CfeaturesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0, ___U3CfeaturesU3Ek__BackingField_1)); }
	inline uint64_t get_U3CfeaturesU3Ek__BackingField_1() const { return ___U3CfeaturesU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CfeaturesU3Ek__BackingField_1() { return &___U3CfeaturesU3Ek__BackingField_1; }
	inline void set_U3CfeaturesU3Ek__BackingField_1(uint64_t value)
	{
		___U3CfeaturesU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t3CDD1115017147EEC9D825834637D7700669C006  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_StateBlock_0)); }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Name_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Layout_7)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Variants_8)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Device_9)); }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Parent_10)); }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DefaultState_18)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MinValue_19)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MaxValue_20)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MaxValue_20 = value;
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Quaternion>
struct InputControl_1_tBE5A9E3A18F75D1CB43DC5168B50CA5C78AE2B69  : public InputControl_t3CDD1115017147EEC9D825834637D7700669C006
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t6CA70C45B1DFD4141C5BB0EA63A9D4652FA42294  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_tBE5A9E3A18F75D1CB43DC5168B50CA5C78AE2B69, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t6CA70C45B1DFD4141C5BB0EA63A9D4652FA42294  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t6CA70C45B1DFD4141C5BB0EA63A9D4652FA42294 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t6CA70C45B1DFD4141C5BB0EA63A9D4652FA42294  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControl`1<UnityEngine.Vector3>
struct InputControl_1_t42A0AA20C4BA515C3EBB7CB21E10E64F1D0654DE  : public InputControl_t3CDD1115017147EEC9D825834637D7700669C006
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_t3EBE2296219C1225DEFCD3B969ADB29B8B6DB72C  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t42A0AA20C4BA515C3EBB7CB21E10E64F1D0654DE, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_t3EBE2296219C1225DEFCD3B969ADB29B8B6DB72C  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_t3EBE2296219C1225DEFCD3B969ADB29B8B6DB72C * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_t3EBE2296219C1225DEFCD3B969ADB29B8B6DB72C  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323  : public InputControl_t3CDD1115017147EEC9D825834637D7700669C006
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ChildrenForEachControl_34;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_Description_28)); }
	inline InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.HandheldARInputDevice
struct HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321  : public InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323
{
public:
	// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.ARSubsystems.HandheldARInputDevice::<devicePosition>k__BackingField
	Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * ___U3CdevicePositionU3Ek__BackingField_35;
	// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.ARSubsystems.HandheldARInputDevice::<deviceRotation>k__BackingField
	QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * ___U3CdeviceRotationU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_U3CdevicePositionU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321, ___U3CdevicePositionU3Ek__BackingField_35)); }
	inline Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * get_U3CdevicePositionU3Ek__BackingField_35() const { return ___U3CdevicePositionU3Ek__BackingField_35; }
	inline Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 ** get_address_of_U3CdevicePositionU3Ek__BackingField_35() { return &___U3CdevicePositionU3Ek__BackingField_35; }
	inline void set_U3CdevicePositionU3Ek__BackingField_35(Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * value)
	{
		___U3CdevicePositionU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdevicePositionU3Ek__BackingField_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdeviceRotationU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321, ___U3CdeviceRotationU3Ek__BackingField_36)); }
	inline QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * get_U3CdeviceRotationU3Ek__BackingField_36() const { return ___U3CdeviceRotationU3Ek__BackingField_36; }
	inline QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 ** get_address_of_U3CdeviceRotationU3Ek__BackingField_36() { return &___U3CdeviceRotationU3Ek__BackingField_36; }
	inline void set_U3CdeviceRotationU3Ek__BackingField_36(QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * value)
	{
		___U3CdeviceRotationU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdeviceRotationU3Ek__BackingField_36), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.QuaternionControl
struct QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5  : public InputControl_1_tBE5A9E3A18F75D1CB43DC5168B50CA5C78AE2B69
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<x>k__BackingField
	AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<y>k__BackingField
	AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<z>k__BackingField
	AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * ___U3CzU3Ek__BackingField_24;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.QuaternionControl::<w>k__BackingField
	AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * ___U3CwU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5, ___U3CwU3Ek__BackingField_25)); }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * get_U3CwU3Ek__BackingField_25() const { return ___U3CwU3Ek__BackingField_25; }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 ** get_address_of_U3CwU3Ek__BackingField_25() { return &___U3CwU3Ek__BackingField_25; }
	inline void set_U3CwU3Ek__BackingField_25(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * value)
	{
		___U3CwU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwU3Ek__BackingField_25), (void*)value);
	}
};


// UnityEngine.InputSystem.Controls.Vector3Control
struct Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423  : public InputControl_1_t42A0AA20C4BA515C3EBB7CB21E10E64F1D0654DE
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<x>k__BackingField
	AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * ___U3CxU3Ek__BackingField_22;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<y>k__BackingField
	AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * ___U3CyU3Ek__BackingField_23;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Controls.Vector3Control::<z>k__BackingField
	AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * ___U3CzU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CxU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423, ___U3CxU3Ek__BackingField_22)); }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * get_U3CxU3Ek__BackingField_22() const { return ___U3CxU3Ek__BackingField_22; }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 ** get_address_of_U3CxU3Ek__BackingField_22() { return &___U3CxU3Ek__BackingField_22; }
	inline void set_U3CxU3Ek__BackingField_22(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * value)
	{
		___U3CxU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423, ___U3CyU3Ek__BackingField_23)); }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * get_U3CyU3Ek__BackingField_23() const { return ___U3CyU3Ek__BackingField_23; }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 ** get_address_of_U3CyU3Ek__BackingField_23() { return &___U3CyU3Ek__BackingField_23; }
	inline void set_U3CyU3Ek__BackingField_23(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * value)
	{
		___U3CyU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423, ___U3CzU3Ek__BackingField_24)); }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * get_U3CzU3Ek__BackingField_24() const { return ___U3CzU3Ek__BackingField_24; }
	inline AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 ** get_address_of_U3CzU3Ek__BackingField_24() { return &___U3CzU3Ek__BackingField_24; }
	inline void set_U3CzU3Ek__BackingField_24(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4 * value)
	{
		___U3CzU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CzU3Ek__BackingField_24), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InputControl_GetChildControl_TisRuntimeObject_m0CA467D8FCE79A49EE21D8604F581543DB051435_gshared (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m4E56D6762DBAF4B85197189BE61C13DE30BA9EA0_gshared (TrackingSubsystem_4_t346381F1A8322029735E6CB60BE656844AC911E8 * __this, const RuntimeMethod* method);
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_mF969744E314332AC762279256CF288A3769ABC93_gshared (SubsystemDescriptorWithProvider_2_t4F631AC12A41E95D188968B1776F2A1F983B90A4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m495E6B5CCD50BDC48525BBF2A817EBED5A305233_gshared (TrackingSubsystem_4_t03AE7A9F3FCFC6AD533F1AC3F403168B8140649F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mFF3892B28340E6F3ED1F3DC251FF933173F496B6_gshared (TrackingSubsystem_4_tE9F5623D0E551591334872A367EFF28A72775EEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_m547D656ED6A22E04230EE777D2EB7A68BA51212F_gshared (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared (SubsystemProvider_1_tB5A0B737E782053A89719964DAF99F32E5CBFC46 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t4A177D2785B1022FAEDD19EC4B7D80529BEAFDAB * Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared (int32_t ___result0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.PlaneAlignment,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,UnityEngine.XR.ARSubsystems.PlaneClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___subsumedBy1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, int32_t ___classification8, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_subsumedById()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_center()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_extents_mEED7F74BBACA8EA90D43ED12EC9D10C9059118CD (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::get_alignment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::get_classification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A (intptr_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.BoundedPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Pose::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.BoundedPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_GetHashCode_m99D4D46A432C2E00A182A86788A750522BFBCAEF (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Pose::Equals(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline (const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::get_descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_inline (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::get_features()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_inline (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_GetHashCode_m1B74FC9C9B33BBED2192C1A47570C13A40008091 (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33 (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC (int32_t ___hash10, int32_t ___hash21, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.Configuration::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Configuration_GetHashCode_m1714C8505EE74B796DB7AF17A409448C385A83F2 (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::Equals(UnityEngine.XR.ARSubsystems.ConfigurationDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationDescriptor_Equals_m6908A703D5C6F693555FCC9A616D85E430012363 (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.Configuration::Equals(UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_Equals_m3EABF1A712E3AB8B1BCB70F71A4DA0B29BD3AB23 (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.Configuration::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_Equals_m7C598F62999ABC2566CDCD656FF0ACA11DBC9807 (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m829E6611B4E4B0E33E8E87902FDFCDAEC0F2B8A0_inline (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_capabilities()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigurationDescriptor_get_capabilities_mD48908AE629D6E78D84F355B59CF742ABFD7C649_inline (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_rank()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_get_rank_mF775801AAD4BC8E980682B569F676BD536BA78B8_inline (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::.ctor(System.IntPtr,UnityEngine.XR.ARSubsystems.Feature,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationDescriptor__ctor_m4EE8BAE7AF1CE6855C9C8B1AA541928A5450E8FA (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, intptr_t ___identifier0, uint64_t ___capabilities1, int32_t ___rank2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_m94C1C0E438A3B7E040B0A087FDDC0D4F90BABB08 (intptr_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::HexString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationDescriptor_HexString_m06E793AFE575A13CBC943EBFDCAB4BA290AAF8F3 (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, intptr_t ___ptr0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.FeatureExtensions::ToStringList(UnityEngine.XR.ARSubsystems.Feature,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FeatureExtensions_ToStringList_m1B8E6CA945AE2E060DB1D4DFA60CCD72AADC082D (uint64_t ___features0, String_t* ___separator1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationDescriptor_ToString_mF67E92AE3930DFD749F7186D49FFC600E2B197EE (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m18C3D10955CD71D976A5200FB0F5531F2F1F6BE1 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationDescriptor_Equals_m4123FDB2B2A6BDDCA3979394FD76CEEFAE534EDB (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationChooser__ctor_mDD8DB2D97E4DD5B6CC29809BBFDDDEA149A1150A (ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::LowestBit(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_LowestBit_mD88FDDA9224F7FB3B74A3EC59BB76C86B4923267 (uint64_t ___self0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputControl::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControl_FinishSetup_m186ADBB50014F257CE7E5614C484CB8B76479D31 (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.Vector3Control>(System.String)
inline Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * InputControl_GetChildControl_TisVector3Control_tADE778D5286B97C6E5622015537184D00B70C423_m9F0BB25C25D46A91E7A9835E8EAE6CDC920ABC51 (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * (*) (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m0CA467D8FCE79A49EE21D8604F581543DB051435_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_devicePosition_mB114C7E266482571036C8286D78E97610FE6DDA4_inline (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputControl::GetChildControl<UnityEngine.InputSystem.Controls.QuaternionControl>(System.String)
inline QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * InputControl_GetChildControl_TisQuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5_mF45CA641B692688646A6061E30A52C4D75C101DE (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	return ((  QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * (*) (InputControl_t3CDD1115017147EEC9D825834637D7700669C006 *, String_t*, const RuntimeMethod*))InputControl_GetChildControl_TisRuntimeObject_m0CA467D8FCE79A49EE21D8604F581543DB051435_gshared)(__this, ___path0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_deviceRotation_m2B589EBB6E15931FF98096FFE4B7FDBC768A9F12_inline (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_mAB5DFFAFD5DEF73904D1D0781BD2842BECCC23D3 (InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_mCF5A2D8E169AE770B379DCD8DE5229296453BD82 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m02E9A65274F198CF9266FDB496C74880155F9B94 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m11604D056548DE17CE3E26439850FA96C2ED1FBA (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m3426FC301C7541283DA4382EFAFDBDFD08358DAD (ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler_Dispose_mB6720C4212A51CBC86104AF46E081B1CB410BC1A (ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m219B741FAF6D36DB7B8CFDC588EA93677FCE174B_inline (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m136D4970BDCC7323020913A9B5303584AA105B34_inline (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mFE48F1D174A1F741AB0795C1164BF45BF37F86E6 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchor::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchor__ctor_mACC63A4EC7989920D75948D3A4385CA3EBFE581F (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  XRAnchor_get_trackableId_mE8C852BEAA9025FD1CB643F41836CA72C25E7B92_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRAnchor_get_pose_mD135777376B2898B0A151AD5AA8FD4BBD7C7C5FF_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRAnchor_get_trackingState_m2B3E621BA332B1E74CF8EC94FA8B18EDAF68F462_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_m47E36685E001BF3810BF6A45B8DF8128080DAEFB_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::get_sessionId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  XRAnchor_get_sessionId_m61DAD2C82C4D725E773BFAB2E8A8BE50EDEEC379_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method);
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7 (Guid_t * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRAnchor_GetHashCode_m3928C95D8DE59840CB82D9FD13EDEEAEA2A89376 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method);
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m602304DBC4842AB53670762A6DB52D30C3973258 (Guid_t * __this, Guid_t  ___g0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(UnityEngine.XR.ARSubsystems.XRAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_mBF63E483B756C84A0068727BDBEC29BBC5182F38 (TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_t5C7E2B8B7A9943DF8B9FF5B46FB5AFA71E9826F1 *, const RuntimeMethod*))TrackingSubsystem_4__ctor_m4E56D6762DBAF4B85197189BE61C13DE30BA9EA0_gshared)(__this, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline (SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>::get_provider()
inline Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_inline (SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2 * __this, const RuntimeMethod* method)
{
	return ((  Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * (*) (SubsystemWithProvider_3_tD91EB2F57F19DA2CDB9A5E0011978CA1EA351BA2 *, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  XRAnchor_get_defaultValue_m4E0B24D0D2E64DE1B2BE81F781410CFB6031B6CF_inline (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor__ctor_m5393EA2BCAFE2CB48EDD6DDCCD50C40FC7035331 (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688 (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * ___descriptor0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m1CF8865269978062A7763335B78C6D873D10F09E (SubsystemDescriptorWithProvider_2_t0A7F13BEDD4EC8DFDD5AEC7D5171B22F3D852CE5 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t0A7F13BEDD4EC8DFDD5AEC7D5171B22F3D852CE5 *, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_mF969744E314332AC762279256CF288A3769ABC93_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_mEC6863CDB21597618394D2ED4182A9ED3ACBF220_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m672B1F3CC7A12E8569D801F7C79538753C0D9C2D_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_mA453100A7A8FAB35FBE7154E63B5A17D518F41B6_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38_inline (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_m66B311A47D5E648C66011BA6F376723D0BAB98DE (TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_t4CF696722E0C05A2C0234E78E673F4F17EEC1C94 *, const RuntimeMethod*))TrackingSubsystem_4__ctor_m495E6B5CCD50BDC48525BBF2A817EBED5A305233_gshared)(__this, method);
}
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>::get_provider()
inline Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * SubsystemWithProvider_3_get_provider_mAA0B384C82E784EFEEE8ABCC29FCCB1AE4106ED3_inline (SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683 * __this, const RuntimeMethod* method)
{
	return ((  Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * (*) (SubsystemWithProvider_3_t2D48685843F3C8CD4AE71F1303F357DCAE9FD683 *, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  BoundedPlane_get_defaultValue_m0C1F8EA6D681C3333CF429425254F63E1BE99003_inline (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor__ctor_mC8788AC7F6940BA1E88AE0277C1D099DD0EEB935 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_mC9825ABADBFD661143DBD286E7A4203D29661704 (SubsystemDescriptorWithProvider_2_t389082A83361A00577FB12B1BFEFA4439DBEAA69 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t389082A83361A00577FB12B1BFEFA4439DBEAA69 *, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_mF969744E314332AC762279256CF288A3769ABC93_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  XRRaycast_get_trackableId_m58733DD621FACDF9F32633AA0247FDDE4B6F4EBE_inline (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRRaycast_get_pose_m62D623D6E37AE82B0E223804F034E604037E24E1_inline (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycast_get_trackingState_m8A926660A7D03F72E558198E760AE01936FB8DF0_inline (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycast::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Single,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycast__ctor_mCB8C71860ADB4EEEAECBB9D2FD6373FA7EE13A48 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, float ___distance4, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___hitTrackableId5, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycast::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycast_GetHashCode_m68040849E5282B2DAEE10DEC5F13B22E69A9EA36 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(UnityEngine.XR.ARSubsystems.XRRaycast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m155EE0BDA8E10977C499A22B2EE32D252A960535 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m808F58AFF56D3598C410DBB759CD48CBEBFBE553 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914 (float* __this, float ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_mEBA68D2AF3E32AF7F962362371B19DD06C4951AF (TrackingSubsystem_4_t87A57AE1E1117ED73BBD3B84DD595F36FA975077 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_t87A57AE1E1117ED73BBD3B84DD595F36FA975077 *, const RuntimeMethod*))TrackingSubsystem_4__ctor_mFF3892B28340E6F3ED1F3DC251FF933173F496B6_gshared)(__this, method);
}
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::get_provider()
inline Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * SubsystemWithProvider_3_get_provider_m080533A05983B6767F8B3470E127A772D0D59530_inline (SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E * __this, const RuntimeMethod* method)
{
	return ((  Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * (*) (SubsystemWithProvider_3_t6C72A4BB6DC4A9CC6B00E99D4A5EF1E1C9BBAF1E *, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0_inline (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m2185C8C50AB138A0C3B5165A92534E2E0D7D57A7 (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m44F60A7BB6F0282109ED44817703F6FDE0DAD8E7 (SubsystemDescriptorWithProvider_2_t0E1C52F3F099638F0EFF9E03352A814E50092E22 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t0E1C52F3F099638F0EFF9E03352A814E50092E22 *, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_mF969744E314332AC762279256CF288A3769ABC93_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_mD10EA0CD0E6F8FB9D499544B0DE27A5EBCED30C9_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConfigurationChooser__ctor_m01D5B274BA5A7C81A20C94A920681CAE8466A4BC (DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::.ctor()
inline void SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4 (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F *, const RuntimeMethod*))SubsystemWithProvider_3__ctor_m547D656ED6A22E04230EE777D2EB7A68BA51212F_gshared)(__this, method);
}
// !2 UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_provider()
inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_inline (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F * __this, const RuntimeMethod* method)
{
	return ((  Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * (*) (SubsystemWithProvider_3_t646DFCE31181130FB557E4AFA37198CF3170977F *, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mC3487128AC53B5697213AFF8B2F98F1C3288B3A7 (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m63E1420F5B2D7E40BDAAD6BC312979C25D61C6EE (SubsystemDescriptorWithProvider_2_tE9888364F17DF110619D7238068EB1EC98053AE5 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tE9888364F17DF110619D7238068EB1EC98053AE5 *, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_mF969744E314332AC762279256CF288A3769ABC93_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2_inline (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D_inline (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A_inline (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118_inline (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71 (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_mCCE320FCC4DE7EEF2FC1778BB15E422BAC190908 (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m57475F3E7F97539B697A4DC77122F934C321ECD0 (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m2501DC639F937DCBD2423619545AC556DE71F3B2 (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m01D74BEF4A53B620271579234011D2F6D0522598 (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m3070FB0F5EDD35A102DFE6DB270CB1423E80A059 (SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t302358330269847780327C2298A4FFA7D79AF2BF *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF (SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF (SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t7ACBE98539B067B19E2D5BCC2B852277F4A38875 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m23E4B1C1DC69FC295EAA04B5AC0ABB8BE40ABC9F (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, int32_t ___hash76, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m4772DECEBD5DFF6811D242285DE7B47DD5749CE4_gshared)(___result0, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66 (SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tFA56F133FD9BCE90A1C4C7D15FFE2571963D8DE4 *, const RuntimeMethod*))SubsystemProvider_1__ctor_mB62E93FA12EE8AA30CF2373596DCFC4661014EFC_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
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
// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  BoundedPlane_get_defaultValue_m0C1F8EA6D681C3333CF429425254F63E1BE99003 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BoundedPlane defaultValue => s_Default;
		IL2CPP_RUNTIME_CLASS_INIT(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_0 = ((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields*)il2cpp_codegen_static_fields_for(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var))->get_s_Default_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.PlaneAlignment,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,UnityEngine.XR.ARSubsystems.PlaneClassification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___subsumedBy1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, int32_t ___classification8, const RuntimeMethod* method)
{
	{
		// m_TrackableId = trackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___trackableId0;
		__this->set_m_TrackableId_1(L_0);
		// m_SubsumedById = subsumedBy;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_1 = ___subsumedBy1;
		__this->set_m_SubsumedById_2(L_1);
		// m_Pose = pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2 = ___pose2;
		__this->set_m_Pose_4(L_2);
		// m_Center = center;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___center3;
		__this->set_m_Center_3(L_3);
		// m_Size = size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___size4;
		__this->set_m_Size_5(L_4);
		// m_Alignment = alignment;
		int32_t L_5 = ___alignment5;
		__this->set_m_Alignment_6(L_5);
		// m_TrackingState = trackingState;
		int32_t L_6 = ___trackingState6;
		__this->set_m_TrackingState_7(L_6);
		// m_NativePtr = nativePtr;
		intptr_t L_7 = ___nativePtr7;
		__this->set_m_NativePtr_8((intptr_t)L_7);
		// m_Classification = classification;
		int32_t L_8 = ___classification8;
		__this->set_m_Classification_9(L_8);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___subsumedBy1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center3, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size4, int32_t ___alignment5, int32_t ___trackingState6, intptr_t ___nativePtr7, int32_t ___classification8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B(_thisAdjusted, ___trackableId0, ___subsumedBy1, ___pose2, ___center3, ___size4, ___alignment5, ___trackingState6, ___nativePtr7, ___classification8, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_TrackableId_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  _returnValue;
	_returnValue = BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::get_subsumedById()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId subsumedById => m_SubsumedById;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_SubsumedById_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  _returnValue;
	_returnValue = BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose => m_Pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  _returnValue;
	_returnValue = BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 center => m_Center;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Center_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_extents_mEED7F74BBACA8EA90D43ED12EC9D10C9059118CD (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 extents => m_Size * 0.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Size_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_0, (0.5f), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_extents_mEED7F74BBACA8EA90D43ED12EC9D10C9059118CD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = BoundedPlane_get_extents_mEED7F74BBACA8EA90D43ED12EC9D10C9059118CD(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 size => m_Size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Size_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::get_alignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public PlaneAlignment alignment => m_Alignment;
		int32_t L_0 = __this->get_m_Alignment_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->get_m_TrackingState_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_8();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::get_classification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public PlaneClassification classification => m_Classification;
		int32_t L_0 = __this->get_m_Classification_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.BoundedPlane::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7D10F5EBD63494DC1C7F8C9033E7A490800B3AF);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return string.Format(
		//     "Plane:\n\ttrackableId: {0}\n\tsubsumedById: {1}\n\tpose: {2}\n\tcenter: {3}\n\tsize: {4}\n\talignment: {5}\n\tclassification: {6}\n\ttrackingState: {7}\n\tnativePtr: {8:X16}",
		//     trackableId,
		//     subsumedById,
		//     pose,
		//     center,
		//     size,
		//     alignment,
		//     classification,
		//     trackingState,
		//     nativePtr.ToInt64());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2;
		L_2 = BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = L_2;
		RuntimeObject * L_4 = Box(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_1;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6;
		L_6 = BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_7 = L_6;
		RuntimeObject * L_8 = Box(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_5;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10;
		L_10 = BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_11 = L_10;
		RuntimeObject * L_12 = Box(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = L_9;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = L_14;
		RuntimeObject * L_16 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_13;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = L_18;
		RuntimeObject * L_20 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_20);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_21 = L_17;
		int32_t L_22;
		L_22 = BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_25 = L_21;
		int32_t L_26;
		L_26 = BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_28);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_29 = L_25;
		int32_t L_30;
		L_30 = BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		int32_t L_31 = L_30;
		RuntimeObject * L_32 = Box(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_32);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = L_29;
		intptr_t L_34;
		L_34 = BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_34;
		int64_t L_35;
		L_35 = IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A((intptr_t*)(&V_0), /*hidden argument*/NULL);
		int64_t L_36 = L_35;
		RuntimeObject * L_37 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_37);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_37);
		String_t* L_38;
		L_38 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralD7D10F5EBD63494DC1C7F8C9033E7A490800B3AF, L_33, /*hidden argument*/NULL);
		return L_38;
	}
}
IL2CPP_EXTERN_C  String_t* BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = BoundedPlane_ToString_m0A542F5D2CB72755643184989BE3B9E6899D731A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005 (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => (obj is BoundedPlane other) && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)UnBox(L_1, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var))));
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_2 = V_0;
		bool L_3;
		L_3 = BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	bool _returnValue;
	_returnValue = BoundedPlane_Equals_m5B2E8A0932BC0242B51091CDDFED85901156A005(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.BoundedPlane::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundedPlane_GetHashCode_m99D4D46A432C2E00A182A86788A750522BFBCAEF (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hashCode = m_TrackableId.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_1();
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_SubsumedById.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_2 = __this->get_address_of_m_SubsumedById_2();
		int32_t L_3;
		L_3 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_2, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_Pose.GetHashCode();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = __this->get_address_of_m_Pose_4();
		int32_t L_5;
		L_5 = Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_4, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_Center.GetHashCode();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_m_Center_3();
		int32_t L_7;
		L_7 = Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_6, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_Size.GetHashCode();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_m_Size_5();
		int32_t L_9;
		L_9 = Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_8, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_Alignment).GetHashCode();
		int32_t L_10 = __this->get_m_Alignment_6();
		V_0 = L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_Classification).GetHashCode();
		int32_t L_12 = __this->get_m_Classification_9();
		V_0 = L_12;
		int32_t L_13;
		L_13 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_TrackingState).GetHashCode();
		int32_t L_14 = __this->get_m_TrackingState_7();
		V_0 = L_14;
		int32_t L_15;
		L_15 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + m_NativePtr.GetHashCode();
		intptr_t* L_16 = __this->get_address_of_m_NativePtr_8();
		int32_t L_17;
		L_17 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_16, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13)), (int32_t)((int32_t)486187739))), (int32_t)L_15)), (int32_t)((int32_t)486187739))), (int32_t)L_17));
	}
}
IL2CPP_EXTERN_C  int32_t BoundedPlane_GetHashCode_m99D4D46A432C2E00A182A86788A750522BFBCAEF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BoundedPlane_GetHashCode_m99D4D46A432C2E00A182A86788A750522BFBCAEF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.BoundedPlane::Equals(UnityEngine.XR.ARSubsystems.BoundedPlane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_TrackableId.Equals(other.m_TrackableId) &&
		//     m_SubsumedById.Equals(other.m_SubsumedById) &&
		//     m_Pose.Equals(other.m_Pose) &&
		//     m_Center.Equals(other.m_Center) &&
		//     m_Size.Equals(other.m_Size) &&
		//     (m_Alignment == other.m_Alignment) &&
		//     (m_Classification == other.m_Classification) &&
		//     (m_TrackingState == other.m_TrackingState) &&
		//     (m_NativePtr == other.m_NativePtr);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_1();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_1 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = L_1.get_m_TrackableId_1();
		bool L_3;
		L_3 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_009e;
		}
	}
	{
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_4 = __this->get_address_of_m_SubsumedById_2();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_5 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6 = L_5.get_m_SubsumedById_2();
		bool L_7;
		L_7 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_009e;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_8 = __this->get_address_of_m_Pose_4();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_9 = ___other0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_10 = L_9.get_m_Pose_4();
		bool L_11;
		L_11 = Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_009e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_m_Center_3();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_13 = ___other0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = L_13.get_m_Center_3();
		bool L_15;
		L_15 = Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_m_Size_5();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_17 = ___other0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = L_17.get_m_Size_5();
		bool L_19;
		L_19 = Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_16, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_20 = __this->get_m_Alignment_6();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_21 = ___other0;
		int32_t L_22 = L_21.get_m_Alignment_6();
		if ((!(((uint32_t)L_20) == ((uint32_t)L_22))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_23 = __this->get_m_Classification_9();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_24 = ___other0;
		int32_t L_25 = L_24.get_m_Classification_9();
		if ((!(((uint32_t)L_23) == ((uint32_t)L_25))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_26 = __this->get_m_TrackingState_7();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_27 = ___other0;
		int32_t L_28 = L_27.get_m_TrackingState_7();
		if ((!(((uint32_t)L_26) == ((uint32_t)L_28))))
		{
			goto IL_009e;
		}
	}
	{
		intptr_t L_29 = __this->get_m_NativePtr_8();
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_30 = ___other0;
		intptr_t L_31 = L_30.get_m_NativePtr_8();
		bool L_32;
		L_32 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_29, (intptr_t)L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_009e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A_AdjustorThunk (RuntimeObject * __this, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * _thisAdjusted = reinterpret_cast<BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *>(__this + _offset);
	bool _returnValue;
	_returnValue = BoundedPlane_Equals_m3A984C969EC0ACE7B83F661C80AA82C54D455D1A(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.BoundedPlane::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundedPlane__cctor_m8E99A66F7A4052C7C0C7CE3077F4172F3E196E17 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly BoundedPlane s_Default = new BoundedPlane(
		//         TrackableId.invalidId,
		//         TrackableId.invalidId,
		//         Pose.identity,
		//         Vector2.zero,
		//         Vector2.zero,
		//         PlaneAlignment.None,
		//         TrackingState.None,
		//         IntPtr.Zero,
		//         PlaneClassification.None);
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0;
		L_0 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_1;
		L_1 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2;
		L_2 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_5;
		memset((&L_5), 0, sizeof(L_5));
		BoundedPlane__ctor_mDCFBC1B53B86B650BBB103C9FC25E7872CBF804B((&L_5), L_0, L_1, L_2, L_3, L_4, 0, 0, (intptr_t)(0), 0, /*hidden argument*/NULL);
		((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields*)il2cpp_codegen_static_fields_for(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var))->set_s_Default_0(L_5);
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
// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method)
{
	{
		// public ConfigurationDescriptor descriptor { get; private set; }
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_0 = __this->get_U3CdescriptorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * _thisAdjusted = reinterpret_cast<Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *>(__this + _offset);
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  _returnValue;
	_returnValue = Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::get_features()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method)
{
	{
		// public Feature features { get; private set; }
		uint64_t L_0 = __this->get_U3CfeaturesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * _thisAdjusted = reinterpret_cast<Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.Configuration::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Configuration_GetHashCode_m1714C8505EE74B796DB7AF17A409448C385A83F2 (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method)
{
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint64_t V_1 = 0;
	{
		// public override int GetHashCode() => HashCode.Combine(descriptor.GetHashCode(), features.GetHashCode());
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_0;
		L_0 = Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_inline((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = ConfigurationDescriptor_GetHashCode_m1B74FC9C9B33BBED2192C1A47570C13A40008091((ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)(&V_0), /*hidden argument*/NULL);
		uint64_t L_2;
		L_2 = Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_inline((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Configuration_GetHashCode_m1714C8505EE74B796DB7AF17A409448C385A83F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * _thisAdjusted = reinterpret_cast<Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Configuration_GetHashCode_m1714C8505EE74B796DB7AF17A409448C385A83F2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.Configuration::Equals(UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_Equals_m3EABF1A712E3AB8B1BCB70F71A4DA0B29BD3AB23 (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___other0, const RuntimeMethod* method)
{
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public bool Equals(Configuration other) => descriptor.Equals(other.descriptor) && (features == other.features);
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_0;
		L_0 = Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_inline((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_1;
		L_1 = Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_inline((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = ConfigurationDescriptor_Equals_m6908A703D5C6F693555FCC9A616D85E430012363((ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)(&V_0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		uint64_t L_3;
		L_3 = Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_inline((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)__this, /*hidden argument*/NULL);
		uint64_t L_4;
		L_4 = Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_inline((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int64_t)L_3) == ((int64_t)L_4))? 1 : 0);
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Configuration_Equals_m3EABF1A712E3AB8B1BCB70F71A4DA0B29BD3AB23_AdjustorThunk (RuntimeObject * __this, Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * _thisAdjusted = reinterpret_cast<Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Configuration_Equals_m3EABF1A712E3AB8B1BCB70F71A4DA0B29BD3AB23(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.Configuration::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Configuration_Equals_m7C598F62999ABC2566CDCD656FF0ACA11DBC9807 (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Configuration) && Equals((Configuration)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Configuration_Equals_m3EABF1A712E3AB8B1BCB70F71A4DA0B29BD3AB23((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)__this, ((*(Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)((Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *)UnBox(L_1, Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Configuration_Equals_m7C598F62999ABC2566CDCD656FF0ACA11DBC9807_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * _thisAdjusted = reinterpret_cast<Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Configuration_Equals_m7C598F62999ABC2566CDCD656FF0ACA11DBC9807(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationChooser__ctor_mDD8DB2D97E4DD5B6CC29809BBFDDDEA149A1150A (ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m829E6611B4E4B0E33E8E87902FDFCDAEC0F2B8A0 (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr identifier => m_Identifier;
		intptr_t L_0 = __this->get_m_Identifier_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t ConfigurationDescriptor_get_identifier_m829E6611B4E4B0E33E8E87902FDFCDAEC0F2B8A0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * _thisAdjusted = reinterpret_cast<ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = ConfigurationDescriptor_get_identifier_m829E6611B4E4B0E33E8E87902FDFCDAEC0F2B8A0_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_capabilities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ConfigurationDescriptor_get_capabilities_mD48908AE629D6E78D84F355B59CF742ABFD7C649 (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method)
{
	{
		// public Feature capabilities => m_Capabilities;
		uint64_t L_0 = __this->get_m_Capabilities_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t ConfigurationDescriptor_get_capabilities_mD48908AE629D6E78D84F355B59CF742ABFD7C649_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * _thisAdjusted = reinterpret_cast<ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = ConfigurationDescriptor_get_capabilities_mD48908AE629D6E78D84F355B59CF742ABFD7C649_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::get_rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_get_rank_mF775801AAD4BC8E980682B569F676BD536BA78B8 (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method)
{
	{
		// public int rank => m_Rank;
		int32_t L_0 = __this->get_m_Rank_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ConfigurationDescriptor_get_rank_mF775801AAD4BC8E980682B569F676BD536BA78B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * _thisAdjusted = reinterpret_cast<ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConfigurationDescriptor_get_rank_mF775801AAD4BC8E980682B569F676BD536BA78B8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::.ctor(System.IntPtr,UnityEngine.XR.ARSubsystems.Feature,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationDescriptor__ctor_m4EE8BAE7AF1CE6855C9C8B1AA541928A5450E8FA (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, intptr_t ___identifier0, uint64_t ___capabilities1, int32_t ___rank2, const RuntimeMethod* method)
{
	{
		// m_Identifier = identifier;
		intptr_t L_0 = ___identifier0;
		__this->set_m_Identifier_0((intptr_t)L_0);
		// m_Capabilities = capabilities;
		uint64_t L_1 = ___capabilities1;
		__this->set_m_Capabilities_1(L_1);
		// m_Rank = rank;
		int32_t L_2 = ___rank2;
		__this->set_m_Rank_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConfigurationDescriptor__ctor_m4EE8BAE7AF1CE6855C9C8B1AA541928A5450E8FA_AdjustorThunk (RuntimeObject * __this, intptr_t ___identifier0, uint64_t ___capabilities1, int32_t ___rank2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * _thisAdjusted = reinterpret_cast<ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *>(__this + _offset);
	ConfigurationDescriptor__ctor_m4EE8BAE7AF1CE6855C9C8B1AA541928A5450E8FA(_thisAdjusted, ___identifier0, ___capabilities1, ___rank2, method);
}
// System.String UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::HexString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationDescriptor_HexString_m06E793AFE575A13CBC943EBFDCAB4BA290AAF8F3 (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unsafe string HexString(IntPtr ptr) => sizeof(IntPtr) == 4 ? $"0x{ptr.ToInt32():x}" : $"0x{ptr.ToInt64():x}";
		uint32_t L_0 = sizeof(intptr_t);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0020;
		}
	}
	{
		int64_t L_1;
		L_1 = IntPtr_ToInt64_m521F809F5D9ECAF93E808CFFFE45F67620C7879A((intptr_t*)(&___ptr0), /*hidden argument*/NULL);
		int64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0020:
	{
		int32_t L_5;
		L_5 = IntPtr_ToInt32_m94C1C0E438A3B7E040B0A087FDDC0D4F90BABB08((intptr_t*)(&___ptr0), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral40F25DCEA3689A55267487C5F546C2AD0C2BB96B, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* ConfigurationDescriptor_HexString_m06E793AFE575A13CBC943EBFDCAB4BA290AAF8F3_AdjustorThunk (RuntimeObject * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * _thisAdjusted = reinterpret_cast<ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConfigurationDescriptor_HexString_m06E793AFE575A13CBC943EBFDCAB4BA290AAF8F3(_thisAdjusted, ___ptr0, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConfigurationDescriptor_ToString_mF67E92AE3930DFD749F7186D49FFC600E2B197EE (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF627CDA1D5403909B224DFB1DDF5D0F8E00F2EEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"(Identifier: {HexString(identifier)}, Rank: {rank}, Capabilities: {capabilities.ToStringList()})";
		intptr_t L_0;
		L_0 = ConfigurationDescriptor_get_identifier_m829E6611B4E4B0E33E8E87902FDFCDAEC0F2B8A0_inline((ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = ConfigurationDescriptor_HexString_m06E793AFE575A13CBC943EBFDCAB4BA290AAF8F3((ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)__this, (intptr_t)L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = ConfigurationDescriptor_get_rank_mF775801AAD4BC8E980682B569F676BD536BA78B8_inline((ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		uint64_t L_5;
		L_5 = ConfigurationDescriptor_get_capabilities_mD48908AE629D6E78D84F355B59CF742ABFD7C649_inline((ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)__this, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = FeatureExtensions_ToStringList_m1B8E6CA945AE2E060DB1D4DFA60CCD72AADC082D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralF627CDA1D5403909B224DFB1DDF5D0F8E00F2EEA, L_1, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* ConfigurationDescriptor_ToString_mF67E92AE3930DFD749F7186D49FFC600E2B197EE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * _thisAdjusted = reinterpret_cast<ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConfigurationDescriptor_ToString_mF67E92AE3930DFD749F7186D49FFC600E2B197EE(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_GetHashCode_m1B74FC9C9B33BBED2192C1A47570C13A40008091 (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		// public override int GetHashCode() => HashCode.Combine(m_Identifier.GetHashCode(), ((ulong)m_Capabilities).GetHashCode(), m_Rank.GetHashCode());
		intptr_t* L_0 = __this->get_address_of_m_Identifier_0();
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_0, /*hidden argument*/NULL);
		uint64_t L_2 = __this->get_m_Capabilities_1();
		V_0 = L_2;
		int32_t L_3;
		L_3 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)(&V_0), /*hidden argument*/NULL);
		int32_t* L_4 = __this->get_address_of_m_Rank_2();
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = HashCode_Combine_m18C3D10955CD71D976A5200FB0F5531F2F1F6BE1(L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t ConfigurationDescriptor_GetHashCode_m1B74FC9C9B33BBED2192C1A47570C13A40008091_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * _thisAdjusted = reinterpret_cast<ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConfigurationDescriptor_GetHashCode_m1B74FC9C9B33BBED2192C1A47570C13A40008091(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::Equals(UnityEngine.XR.ARSubsystems.ConfigurationDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationDescriptor_Equals_m6908A703D5C6F693555FCC9A616D85E430012363 (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___other0, const RuntimeMethod* method)
{
	{
		// (m_Identifier == other.m_Identifier) &&
		// (m_Capabilities == other.m_Capabilities) &&
		// (m_Rank == other.m_Rank);
		intptr_t L_0 = __this->get_m_Identifier_0();
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_1 = ___other0;
		intptr_t L_2 = L_1.get_m_Identifier_0();
		bool L_3;
		L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		uint64_t L_4 = __this->get_m_Capabilities_1();
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_5 = ___other0;
		uint64_t L_6 = L_5.get_m_Capabilities_1();
		if ((!(((uint64_t)L_4) == ((uint64_t)L_6))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = __this->get_m_Rank_2();
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_8 = ___other0;
		int32_t L_9 = L_8.get_m_Rank_2();
		return (bool)((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ConfigurationDescriptor_Equals_m6908A703D5C6F693555FCC9A616D85E430012363_AdjustorThunk (RuntimeObject * __this, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * _thisAdjusted = reinterpret_cast<ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ConfigurationDescriptor_Equals_m6908A703D5C6F693555FCC9A616D85E430012363(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurationDescriptor_Equals_m4123FDB2B2A6BDDCA3979394FD76CEEFAE534EDB (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is ConfigurationDescriptor) && Equals((ConfigurationDescriptor)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ConfigurationDescriptor_Equals_m6908A703D5C6F693555FCC9A616D85E430012363((ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)__this, ((*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)UnBox(L_1, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ConfigurationDescriptor_Equals_m4123FDB2B2A6BDDCA3979394FD76CEEFAE534EDB_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * _thisAdjusted = reinterpret_cast<ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ConfigurationDescriptor_Equals_m4123FDB2B2A6BDDCA3979394FD76CEEFAE534EDB(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConfigurationChooser__ctor_m01D5B274BA5A7C81A20C94A920681CAE8466A4BC (DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F * __this, const RuntimeMethod* method)
{
	{
		ConfigurationChooser__ctor_mDD8DB2D97E4DD5B6CC29809BBFDDDEA149A1150A(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::LowestBit(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_LowestBit_mD88FDDA9224F7FB3B74A3EC59BB76C86B4923267 (uint64_t ___self0, const RuntimeMethod* method)
{
	{
		// return self & (self ^ (self - 1));
		uint64_t L_0 = ___self0;
		uint64_t L_1 = ___self0;
		uint64_t L_2 = ___self0;
		return (uint64_t)(((int64_t)((int64_t)L_0&(int64_t)((int64_t)((int64_t)L_1^(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_2, (int64_t)((int64_t)((int64_t)1)))))))));
	}
}
// System.String UnityEngine.XR.ARSubsystems.FeatureExtensions::ToStringList(UnityEngine.XR.ARSubsystems.Feature,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FeatureExtensions_ToStringList_m1B8E6CA945AE2E060DB1D4DFA60CCD72AADC082D (uint64_t ___features0, String_t* ___separator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral068B9DAC1E2A8DA48FFC0F566F9C805099D13F1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EEB74DAF175D886E4EA5D5BB23B6E48993A80AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FBF1F3BF0E575F4D92649F1F5678267C887CF89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral132C67C31C67A73009E12AF0BF92B84B55B95E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158E95C298826281B51D5B4EE894BE864B7D1153);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1862DB4B99A6D2D4DDE2C775E5AC1AF7CD03A268);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB0DA5C0A0620735E866EA5BC9FCAA876BA5545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41D4ECEC72974BEA998FBA733A15A0EA3B7DF9B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49DE19A080E7D5ADFAE0565CAFC30E6F99EB7FFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B80EFD0BD00CE9A8E26DD1EA0F4B58964AF32CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BA2A4A16421FA9FAB2CAF2E4AFC91121F7BB4FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F57A13713CB116503D42E8DFD65A84DA07B33BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral772119CD0175AC1E1CADE4F75080F5F07B6BB1F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F623AA45815B8B51F227F5A19CB68E1BD42852E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8A8717ECC5E31F30A99C8547616828C8F428B66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9BA2974AED76FB92F26F69C6093F790414376FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA661F2F4F2AC2A4D1268C73A499D77CA7E0C476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC838375A805C8CCC6514E96BA13E150D629186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC127E2685E9BA6170311362A98135614A56E47AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA8A633C4C95F85CAB2C4D07CAFA53611912B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2316C6372C4914C9A07CD469B803A77534ADCF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD629B7D26A17486767CD11C705978B046E7819F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA1CD25788E7EE9FDEA55BBF0CEE5D1AD7F125CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE249513646B3CA3B2119CA7AD27370C9E9012B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE573BD7F9C4A38697EE4A429FA0C236D6C7038C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7538558415E1BD8F7A4C577BB457C0AD0F3C884);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1FF99A8F97A90CE3EB35AA1C7B40C1DDFC82A9B);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	uint64_t V_1 = 0;
	int64_t G_B6_0 = 0;
	int64_t G_B5_0 = 0;
	{
		// var names = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0342;
	}

IL_000b:
	{
		// var feature = features.LowestBit();
		uint64_t L_1 = ___features0;
		uint64_t L_2;
		L_2 = FeatureExtensions_LowestBit_mD88FDDA9224F7FB3B74A3EC59BB76C86B4923267(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		uint64_t L_3 = V_1;
		if ((!(((uint64_t)L_3) <= ((uint64_t)((int64_t)((int64_t)((int32_t)8192)))))))
		{
			goto IL_00e3;
		}
	}
	{
		uint64_t L_4 = V_1;
		if ((!(((uint64_t)L_4) <= ((uint64_t)((int64_t)((int64_t)((int32_t)128)))))))
		{
			goto IL_0088;
		}
	}
	{
		uint64_t L_5 = V_1;
		if ((!(((uint64_t)L_5) <= ((uint64_t)((int64_t)((int64_t)((int32_t)16)))))))
		{
			goto IL_0065;
		}
	}
	{
		uint64_t L_6 = V_1;
		int64_t L_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_6, (int64_t)((int64_t)((int64_t)1))));
		G_B5_0 = L_7;
		if ((!(((uint64_t)L_7) > ((uint64_t)((int64_t)((int64_t)3))))))
		{
			G_B6_0 = L_7;
			goto IL_0039;
		}
	}
	{
		goto IL_004f;
	}

IL_0039:
	{
		switch (((int32_t)((uint32_t)G_B6_0)))
		{
			case 0:
			{
				goto IL_01a2;
			}
			case 1:
			{
				goto IL_01b2;
			}
			case 2:
			{
				goto IL_0327;
			}
			case 3:
			{
				goto IL_01c2;
			}
		}
	}

IL_004f:
	{
		uint64_t L_8 = V_1;
		if ((((int64_t)L_8) == ((int64_t)((int64_t)((int64_t)8)))))
		{
			goto IL_01d2;
		}
	}
	{
		uint64_t L_9 = V_1;
		if ((((int64_t)L_9) == ((int64_t)((int64_t)((int64_t)((int32_t)16))))))
		{
			goto IL_01e2;
		}
	}
	{
		goto IL_0327;
	}

IL_0065:
	{
		uint64_t L_10 = V_1;
		if ((((int64_t)L_10) == ((int64_t)((int64_t)((int64_t)((int32_t)32))))))
		{
			goto IL_01f2;
		}
	}
	{
		uint64_t L_11 = V_1;
		if ((((int64_t)L_11) == ((int64_t)((int64_t)((int64_t)((int32_t)64))))))
		{
			goto IL_0202;
		}
	}
	{
		uint64_t L_12 = V_1;
		if ((((int64_t)L_12) == ((int64_t)((int64_t)((int64_t)((int32_t)128))))))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0327;
	}

IL_0088:
	{
		uint64_t L_13 = V_1;
		if ((!(((uint64_t)L_13) <= ((uint64_t)((int64_t)((int64_t)((int32_t)1024)))))))
		{
			goto IL_00ba;
		}
	}
	{
		uint64_t L_14 = V_1;
		if ((((int64_t)L_14) == ((int64_t)((int64_t)((int64_t)((int32_t)256))))))
		{
			goto IL_0222;
		}
	}
	{
		uint64_t L_15 = V_1;
		if ((((int64_t)L_15) == ((int64_t)((int64_t)((int64_t)((int32_t)512))))))
		{
			goto IL_0232;
		}
	}
	{
		uint64_t L_16 = V_1;
		if ((((int64_t)L_16) == ((int64_t)((int64_t)((int64_t)((int32_t)1024))))))
		{
			goto IL_0242;
		}
	}
	{
		goto IL_0327;
	}

IL_00ba:
	{
		uint64_t L_17 = V_1;
		if ((((int64_t)L_17) == ((int64_t)((int64_t)((int64_t)((int32_t)2048))))))
		{
			goto IL_0252;
		}
	}
	{
		uint64_t L_18 = V_1;
		if ((((int64_t)L_18) == ((int64_t)((int64_t)((int64_t)((int32_t)4096))))))
		{
			goto IL_0262;
		}
	}
	{
		uint64_t L_19 = V_1;
		if ((((int64_t)L_19) == ((int64_t)((int64_t)((int64_t)((int32_t)8192))))))
		{
			goto IL_0272;
		}
	}
	{
		goto IL_0327;
	}

IL_00e3:
	{
		uint64_t L_20 = V_1;
		if ((!(((uint64_t)L_20) <= ((uint64_t)((int64_t)((int64_t)((int32_t)524288)))))))
		{
			goto IL_0147;
		}
	}
	{
		uint64_t L_21 = V_1;
		if ((!(((uint64_t)L_21) <= ((uint64_t)((int64_t)((int64_t)((int32_t)65536)))))))
		{
			goto IL_011e;
		}
	}
	{
		uint64_t L_22 = V_1;
		if ((((int64_t)L_22) == ((int64_t)((int64_t)((int64_t)((int32_t)16384))))))
		{
			goto IL_0282;
		}
	}
	{
		uint64_t L_23 = V_1;
		if ((((int64_t)L_23) == ((int64_t)((int64_t)((int64_t)((int32_t)32768))))))
		{
			goto IL_0292;
		}
	}
	{
		uint64_t L_24 = V_1;
		if ((((int64_t)L_24) == ((int64_t)((int64_t)((int64_t)((int32_t)65536))))))
		{
			goto IL_02a2;
		}
	}
	{
		goto IL_0327;
	}

IL_011e:
	{
		uint64_t L_25 = V_1;
		if ((((int64_t)L_25) == ((int64_t)((int64_t)((int64_t)((int32_t)131072))))))
		{
			goto IL_02b2;
		}
	}
	{
		uint64_t L_26 = V_1;
		if ((((int64_t)L_26) == ((int64_t)((int64_t)((int64_t)((int32_t)262144))))))
		{
			goto IL_02bf;
		}
	}
	{
		uint64_t L_27 = V_1;
		if ((((int64_t)L_27) == ((int64_t)((int64_t)((int64_t)((int32_t)524288))))))
		{
			goto IL_02cc;
		}
	}
	{
		goto IL_0327;
	}

IL_0147:
	{
		uint64_t L_28 = V_1;
		if ((!(((uint64_t)L_28) <= ((uint64_t)((int64_t)((int64_t)((int32_t)4194304)))))))
		{
			goto IL_0179;
		}
	}
	{
		uint64_t L_29 = V_1;
		if ((((int64_t)L_29) == ((int64_t)((int64_t)((int64_t)((int32_t)1048576))))))
		{
			goto IL_02d9;
		}
	}
	{
		uint64_t L_30 = V_1;
		if ((((int64_t)L_30) == ((int64_t)((int64_t)((int64_t)((int32_t)2097152))))))
		{
			goto IL_02e6;
		}
	}
	{
		uint64_t L_31 = V_1;
		if ((((int64_t)L_31) == ((int64_t)((int64_t)((int64_t)((int32_t)4194304))))))
		{
			goto IL_02f3;
		}
	}
	{
		goto IL_0327;
	}

IL_0179:
	{
		uint64_t L_32 = V_1;
		if ((((int64_t)L_32) == ((int64_t)((int64_t)((int64_t)((int32_t)8388608))))))
		{
			goto IL_0300;
		}
	}
	{
		uint64_t L_33 = V_1;
		if ((((int64_t)L_33) == ((int64_t)((int64_t)((int64_t)((int32_t)16777216))))))
		{
			goto IL_030d;
		}
	}
	{
		uint64_t L_34 = V_1;
		if ((((int64_t)L_34) == ((int64_t)((int64_t)((int64_t)((int32_t)33554432))))))
		{
			goto IL_031a;
		}
	}
	{
		goto IL_0327;
	}

IL_01a2:
	{
		// names.Add("World Facing Camera");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = V_0;
		NullCheck(L_35);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_35, _stringLiteralAA661F2F4F2AC2A4D1268C73A499D77CA7E0C476, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_01b2:
	{
		// names.Add("User Facing Camera");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_36 = V_0;
		NullCheck(L_36);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_36, _stringLiteralD2316C6372C4914C9A07CD469B803A77534ADCF4, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_01c2:
	{
		// names.Add("Rotation Only");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_37 = V_0;
		NullCheck(L_37);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_37, _stringLiteralCEA8A633C4C95F85CAB2C4D07CAFA53611912B32, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_01d2:
	{
		// names.Add("Rotation and Orientation");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_38 = V_0;
		NullCheck(L_38);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_38, _stringLiteral0EEB74DAF175D886E4EA5D5BB23B6E48993A80AF, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_01e2:
	{
		// names.Add("Face Tracking");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_39 = V_0;
		NullCheck(L_39);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_39, _stringLiteralC127E2685E9BA6170311362A98135614A56E47AF, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_01f2:
	{
		// names.Add("Plane Tracking");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_40 = V_0;
		NullCheck(L_40);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_40, _stringLiteral1862DB4B99A6D2D4DDE2C775E5AC1AF7CD03A268, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0202:
	{
		// names.Add("Image Tracking");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_41 = V_0;
		NullCheck(L_41);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_41, _stringLiteral0FBF1F3BF0E575F4D92649F1F5678267C887CF89, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0212:
	{
		// names.Add("Object Tracking");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_42 = V_0;
		NullCheck(L_42);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_42, _stringLiteralA9BA2974AED76FB92F26F69C6093F790414376FA, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0222:
	{
		// names.Add("Environment Probes");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_43 = V_0;
		NullCheck(L_43);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_43, _stringLiteralBDC838375A805C8CCC6514E96BA13E150D629186, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0232:
	{
		// names.Add("2D Body Tracking");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_44 = V_0;
		NullCheck(L_44);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_44, _stringLiteralA8A8717ECC5E31F30A99C8547616828C8F428B66, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0242:
	{
		// names.Add("3D Body Tracking");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_45 = V_0;
		NullCheck(L_45);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_45, _stringLiteral5BA2A4A16421FA9FAB2CAF2E4AFC91121F7BB4FD, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0252:
	{
		// names.Add("3D Body Scale Estimation");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_46 = V_0;
		NullCheck(L_46);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_46, _stringLiteral772119CD0175AC1E1CADE4F75080F5F07B6BB1F9, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0262:
	{
		// names.Add("People Occlusion Stencil");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_47 = V_0;
		NullCheck(L_47);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_47, _stringLiteralE573BD7F9C4A38697EE4A429FA0C236D6C7038C4, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0272:
	{
		// names.Add("People Occlusion Depth");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_48 = V_0;
		NullCheck(L_48);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_48, _stringLiteralD629B7D26A17486767CD11C705978B046E7819F7, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0282:
	{
		// names.Add("Collaboration");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_49 = V_0;
		NullCheck(L_49);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_49, _stringLiteralF1FF99A8F97A90CE3EB35AA1C7B40C1DDFC82A9B, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0292:
	{
		// names.Add("Auto-Focus");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_50 = V_0;
		NullCheck(L_50);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_50, _stringLiteralDA1CD25788E7EE9FDEA55BBF0CEE5D1AD7F125CD, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_02a2:
	{
		// names.Add("Light Estimation (Ambient Intensity)");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_51 = V_0;
		NullCheck(L_51);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_51, _stringLiteral3AB0DA5C0A0620735E866EA5BC9FCAA876BA5545, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_02b2:
	{
		// names.Add("Light Estimation (Ambient Color)");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_52 = V_0;
		NullCheck(L_52);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_52, _stringLiteral068B9DAC1E2A8DA48FFC0F566F9C805099D13F1B, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_02bf:
	{
		// names.Add("Light Estimation (Spherical Harmonics)");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_53 = V_0;
		NullCheck(L_53);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_53, _stringLiteral6F57A13713CB116503D42E8DFD65A84DA07B33BB, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_02cc:
	{
		// names.Add("Light Estimation (Main Light Direction)");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_54 = V_0;
		NullCheck(L_54);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_54, _stringLiteral158E95C298826281B51D5B4EE894BE864B7D1153, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_02d9:
	{
		// names.Add("Light Estimation (Main Light Intensity)");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_55 = V_0;
		NullCheck(L_55);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_55, _stringLiteral132C67C31C67A73009E12AF0BF92B84B55B95E84, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_02e6:
	{
		// names.Add("Raycast");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_56 = V_0;
		NullCheck(L_56);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_56, _stringLiteralE249513646B3CA3B2119CA7AD27370C9E9012B74, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_02f3:
	{
		// names.Add("Meshing");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_57 = V_0;
		NullCheck(L_57);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_57, _stringLiteral7F623AA45815B8B51F227F5A19CB68E1BD42852E, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0300:
	{
		// names.Add("Mesh Classification");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_58 = V_0;
		NullCheck(L_58);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_58, _stringLiteral4B80EFD0BD00CE9A8E26DD1EA0F4B58964AF32CD, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_030d:
	{
		// names.Add("Point Cloud");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_59 = V_0;
		NullCheck(L_59);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_59, _stringLiteral49DE19A080E7D5ADFAE0565CAFC30E6F99EB7FFD, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_031a:
	{
		// names.Add("Environment Depth");
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_60 = V_0;
		NullCheck(L_60);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_60, _stringLiteralE7538558415E1BD8F7A4C577BB457C0AD0F3C884, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// break;
		goto IL_033a;
	}

IL_0327:
	{
		// names.Add(feature.ToString());
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_61 = V_0;
		RuntimeObject * L_62 = Box(Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_62);
		String_t* L_63;
		L_63 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_62);
		V_1 = *(uint64_t*)UnBox(L_62);
		NullCheck(L_61);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_61, L_63, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_033a:
	{
		// features &= (features - 1);
		uint64_t L_64 = ___features0;
		uint64_t L_65 = ___features0;
		___features0 = ((int64_t)((int64_t)L_64&(int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_65, (int64_t)((int64_t)((int64_t)1))))));
	}

IL_0342:
	{
		// while (features != 0)
		uint64_t L_66 = ___features0;
		if (L_66)
		{
			goto IL_000b;
		}
	}
	{
		// return names.Count > 0 ? string.Join(separator, names) : "(None)";
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_67, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_68) > ((int32_t)0)))
		{
			goto IL_0357;
		}
	}
	{
		return _stringLiteral41D4ECEC72974BEA998FBA733A15A0EA3B7DF9B1;
	}

IL_0357:
	{
		String_t* L_69 = ___separator1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_70 = V_0;
		String_t* L_71;
		L_71 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(L_69, L_70, /*hidden argument*/NULL);
		return L_71;
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
// UnityEngine.InputSystem.Controls.Vector3Control UnityEngine.XR.ARSubsystems.HandheldARInputDevice::get_devicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * HandheldARInputDevice_get_devicePosition_m619EF445D540C2ECF8318EE45D2AAB807613FCAB (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * L_0 = __this->get_U3CdevicePositionU3Ek__BackingField_35();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::set_devicePosition(UnityEngine.InputSystem.Controls.Vector3Control)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_devicePosition_mB114C7E266482571036C8286D78E97610FE6DDA4 (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_35(L_0);
		return;
	}
}
// UnityEngine.InputSystem.Controls.QuaternionControl UnityEngine.XR.ARSubsystems.HandheldARInputDevice::get_deviceRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * HandheldARInputDevice_get_deviceRotation_m86734B44EA96D307DBEF8A603E37577FFB908235 (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * L_0 = __this->get_U3CdeviceRotationU3Ek__BackingField_36();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::set_deviceRotation(UnityEngine.InputSystem.Controls.QuaternionControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_deviceRotation_m2B589EBB6E15931FF98096FFE4B7FDBC768A9F12 (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_36(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::FinishSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandheldARInputDevice_FinishSetup_m218149DF049917553E3080152EC7B1FCFB11876B (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisQuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5_mF45CA641B692688646A6061E30A52C4D75C101DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControl_GetChildControl_TisVector3Control_tADE778D5286B97C6E5622015537184D00B70C423_m9F0BB25C25D46A91E7A9835E8EAE6CDC920ABC51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.FinishSetup();
		InputControl_FinishSetup_m186ADBB50014F257CE7E5614C484CB8B76479D31(__this, /*hidden argument*/NULL);
		// devicePosition = GetChildControl<Vector3Control>("devicePosition");
		Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * L_0;
		L_0 = InputControl_GetChildControl_TisVector3Control_tADE778D5286B97C6E5622015537184D00B70C423_m9F0BB25C25D46A91E7A9835E8EAE6CDC920ABC51(__this, _stringLiteral335FF3A7EB83C5141B0A224AA6FF1E4BB3940BD4, /*hidden argument*/InputControl_GetChildControl_TisVector3Control_tADE778D5286B97C6E5622015537184D00B70C423_m9F0BB25C25D46A91E7A9835E8EAE6CDC920ABC51_RuntimeMethod_var);
		HandheldARInputDevice_set_devicePosition_mB114C7E266482571036C8286D78E97610FE6DDA4_inline(__this, L_0, /*hidden argument*/NULL);
		// deviceRotation = GetChildControl<QuaternionControl>("deviceRotation");
		QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * L_1;
		L_1 = InputControl_GetChildControl_TisQuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5_mF45CA641B692688646A6061E30A52C4D75C101DE(__this, _stringLiteralD01445F0360E2DE9E8979C8B0B4375041024C567, /*hidden argument*/InputControl_GetChildControl_TisQuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5_mF45CA641B692688646A6061E30A52C4D75C101DE_RuntimeMethod_var);
		HandheldARInputDevice_set_deviceRotation_m2B589EBB6E15931FF98096FFE4B7FDBC768A9F12_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.HandheldARInputDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandheldARInputDevice__ctor_m20340276B139CF2CF798FF001DEB79D95FC433F8 (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, const RuntimeMethod* method)
{
	{
		InputDevice__ctor_mAB5DFFAFD5DEF73904D1D0781BD2842BECCC23D3(__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC (int32_t ___hash10, int32_t ___hash21, const RuntimeMethod* method)
{
	{
		// return hash1 * 486187739 + hash2;
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)486187739))), (int32_t)L_1));
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// public static int ReferenceHash(object obj) => obj != null ? obj.GetHashCode() : 0;
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m18C3D10955CD71D976A5200FB0F5531F2F1F6BE1 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, const RuntimeMethod* method)
{
	{
		// public static int Combine(int hash1, int hash2, int hash3) => Combine(Combine(hash1, hash2), hash3);
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2;
		L_2 = HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC(L_0, L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___hash32;
		int32_t L_4;
		L_4 = HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_mCF5A2D8E169AE770B379DCD8DE5229296453BD82 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, const RuntimeMethod* method)
{
	{
		// public static int Combine(int hash1, int hash2, int hash3, int hash4) => Combine(Combine(hash1, hash2, hash3), hash4);
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2 = ___hash32;
		int32_t L_3;
		L_3 = HashCode_Combine_m18C3D10955CD71D976A5200FB0F5531F2F1F6BE1(L_0, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___hash43;
		int32_t L_5;
		L_5 = HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m02E9A65274F198CF9266FDB496C74880155F9B94 (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, const RuntimeMethod* method)
{
	{
		// public static int Combine(int hash1, int hash2, int hash3, int hash4, int hash5) => Combine(Combine(hash1, hash2, hash3, hash4), hash5);
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2 = ___hash32;
		int32_t L_3 = ___hash43;
		int32_t L_4;
		L_4 = HashCode_Combine_mCF5A2D8E169AE770B379DCD8DE5229296453BD82(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___hash54;
		int32_t L_6;
		L_6 = HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m11604D056548DE17CE3E26439850FA96C2ED1FBA (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, const RuntimeMethod* method)
{
	{
		// public static int Combine(int hash1, int hash2, int hash3, int hash4, int hash5, int hash6) => Combine(Combine(hash1, hash2, hash3, hash4, hash5), hash6);
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2 = ___hash32;
		int32_t L_3 = ___hash43;
		int32_t L_4 = ___hash54;
		int32_t L_5;
		L_5 = HashCode_Combine_m02E9A65274F198CF9266FDB496C74880155F9B94(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___hash65;
		int32_t L_7;
		L_7 = HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.HashCode::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_m23E4B1C1DC69FC295EAA04B5AC0ABB8BE40ABC9F (int32_t ___hash10, int32_t ___hash21, int32_t ___hash32, int32_t ___hash43, int32_t ___hash54, int32_t ___hash65, int32_t ___hash76, const RuntimeMethod* method)
{
	{
		// public static int Combine(int hash1, int hash2, int hash3, int hash4, int hash5, int hash6, int hash7) => Combine(Combine(hash1, hash2, hash3, hash4, hash5, hash6), hash7);
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		int32_t L_2 = ___hash32;
		int32_t L_3 = ___hash43;
		int32_t L_4 = ___hash54;
		int32_t L_5 = ___hash65;
		int32_t L_6;
		L_6 = HashCode_Combine_m11604D056548DE17CE3E26439850FA96C2ED1FBA(L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___hash76;
		int32_t L_8;
		L_8 = HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m3426FC301C7541283DA4382EFAFDBDFD08358DAD (ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ScopedProfiler__ctor_m3426FC301C7541283DA4382EFAFDBDFD08358DAD_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E * _thisAdjusted = reinterpret_cast<ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E *>(__this + _offset);
	ScopedProfiler__ctor_m3426FC301C7541283DA4382EFAFDBDFD08358DAD(_thisAdjusted, ___name0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler_Dispose_mB6720C4212A51CBC86104AF46E081B1CB410BC1A (ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ScopedProfiler_Dispose_mB6720C4212A51CBC86104AF46E081B1CB410BC1A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E * _thisAdjusted = reinterpret_cast<ScopedProfiler_t2D56ACC439533AC07E255065961834AAD04BE52E *>(__this + _offset);
	ScopedProfiler_Dispose_mB6720C4212A51CBC86104AF46E081B1CB410BC1A(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var))->get_s_InvalidId_1();
		return L_0;
	}
}
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m219B741FAF6D36DB7B8CFDC588EA93677FCE174B (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->get_m_SubId1_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t TrackableId_get_subId1_m219B741FAF6D36DB7B8CFDC588EA93677FCE174B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = TrackableId_get_subId1_m219B741FAF6D36DB7B8CFDC588EA93677FCE174B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m136D4970BDCC7323020913A9B5303584AA105B34 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->get_m_SubId2_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t TrackableId_get_subId2_m136D4970BDCC7323020913A9B5303584AA105B34_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = TrackableId_get_subId2_m136D4970BDCC7323020913A9B5303584AA105B34_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method)
{
	{
		// m_SubId1 = subId1;
		uint64_t L_0 = ___subId10;
		__this->set_m_SubId1_2(L_0);
		// m_SubId2 = subId2;
		uint64_t L_1 = ___subId21;
		__this->set_m_SubId2_3(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792_AdjustorThunk (RuntimeObject * __this, uint64_t ___subId10, uint64_t ___subId21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792(_thisAdjusted, ___subId10, ___subId21, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}-{1}",
		//     m_SubId1.ToString("X16"),
		//     m_SubId2.ToString("X16"));
		uint64_t* L_0 = __this->get_address_of_m_SubId1_2();
		String_t* L_1;
		L_1 = UInt64_ToString_mFE48F1D174A1F741AB0795C1164BF45BF37F86E6((uint64_t*)L_0, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_3();
		String_t* L_3;
		L_3 = UInt64_ToString_mFE48F1D174A1F741AB0795C1164BF45BF37F86E6((uint64_t*)L_2, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TrackableId_ToString_mCD45FD4FF5DF6DE30A38AD05D02CFA7B2B696BB1(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	{
		// public override int GetHashCode() => HashCode.Combine(m_SubId1.GetHashCode(), m_SubId2.GetHashCode());
		uint64_t* L_0 = __this->get_address_of_m_SubId1_2();
		int32_t L_1;
		L_1 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)L_0, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_3();
		int32_t L_3;
		L_3 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)L_2, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is TrackableId && Equals((TrackableId)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)__this, ((*(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)UnBox(L_1, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableId_Equals_mA542615B3B7AAD52AEBBEFBCE7E6987B2DE3849D(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___other0, const RuntimeMethod* method)
{
	{
		// public bool Equals(TrackableId other) => (m_SubId1 == other.m_SubId1) && (m_SubId2 == other.m_SubId2);
		uint64_t L_0 = __this->get_m_SubId1_2();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_1 = ___other0;
		uint64_t L_2 = L_1.get_m_SubId1_2();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = __this->get_m_SubId2_3();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_4 = ___other0;
		uint64_t L_5 = L_4.get_m_SubId2_3();
		return (bool)((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * _thisAdjusted = reinterpret_cast<TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Inequality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Inequality_mF705964FFBC6CF264E7C39999718135ED973D6B7 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___lhs0, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___rhs1, const RuntimeMethod* method)
{
	{
		// (lhs.m_SubId1 != rhs.m_SubId1) ||
		// (lhs.m_SubId2 != rhs.m_SubId2);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___lhs0;
		uint64_t L_1 = L_0.get_m_SubId1_2();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = ___rhs1;
		uint64_t L_3 = L_2.get_m_SubId1_2();
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_4 = ___lhs0;
		uint64_t L_5 = L_4.get_m_SubId2_3();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_6 = ___rhs1;
		uint64_t L_7 = L_6.get_m_SubId2_3();
		return (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__cctor_m1B22B00F74C0C62B97D7EAB4E9B17F55B2DE94E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Regex s_TrackableIdRegex = new Regex(@"^(?<part1>[a-fA-F\d]{16})-(?<part2>[a-fA-F\d]{16})$",
		//                                                      RegexOptions.Compiled|RegexOptions.CultureInvariant|RegexOptions.Singleline|RegexOptions.ExplicitCapture);
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4(L_0, _stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D, ((int32_t)540), /*hidden argument*/NULL);
		((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var))->set_s_TrackableIdRegex_0(L_0);
		// static TrackableId s_InvalidId = new TrackableId(0, 0);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableId__ctor_mB9B301A9CD03355A4E03A2B1A102B6B75F190792((&L_1), ((int64_t)((int64_t)0)), ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var))->set_s_InvalidId_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  XRAnchor_get_defaultValue_m4E0B24D0D2E64DE1B2BE81F781410CFB6031B6CF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRAnchor defaultValue => s_Default;
		IL2CPP_RUNTIME_CLASS_INIT(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_0 = ((XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields*)il2cpp_codegen_static_fields_for(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var))->get_s_Default_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchor::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchor__ctor_mACC63A4EC7989920D75948D3A4385CA3EBFE581F (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Id = trackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___trackableId0;
		__this->set_m_Id_1(L_0);
		// m_Pose = pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = ___pose1;
		__this->set_m_Pose_2(L_1);
		// m_TrackingState = trackingState;
		int32_t L_2 = ___trackingState2;
		__this->set_m_TrackingState_3(L_2);
		// m_NativePtr = nativePtr;
		intptr_t L_3 = ___nativePtr3;
		__this->set_m_NativePtr_4((intptr_t)L_3);
		// m_SessionId = Guid.Empty;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_4 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		__this->set_m_SessionId_5(L_4);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRAnchor__ctor_mACC63A4EC7989920D75948D3A4385CA3EBFE581F_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	XRAnchor__ctor_mACC63A4EC7989920D75948D3A4385CA3EBFE581F(_thisAdjusted, ___trackableId0, ___pose1, ___trackingState2, ___nativePtr3, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  XRAnchor_get_trackableId_mE8C852BEAA9025FD1CB643F41836CA72C25E7B92 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId => m_Id;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_Id_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  XRAnchor_get_trackableId_mE8C852BEAA9025FD1CB643F41836CA72C25E7B92_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  _returnValue;
	_returnValue = XRAnchor_get_trackableId_mE8C852BEAA9025FD1CB643F41836CA72C25E7B92_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRAnchor_get_pose_mD135777376B2898B0A151AD5AA8FD4BBD7C7C5FF (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose => m_Pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRAnchor_get_pose_mD135777376B2898B0A151AD5AA8FD4BBD7C7C5FF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  _returnValue;
	_returnValue = XRAnchor_get_pose_mD135777376B2898B0A151AD5AA8FD4BBD7C7C5FF_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRAnchor_get_trackingState_m2B3E621BA332B1E74CF8EC94FA8B18EDAF68F462 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->get_m_TrackingState_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRAnchor_get_trackingState_m2B3E621BA332B1E74CF8EC94FA8B18EDAF68F462_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRAnchor_get_trackingState_m2B3E621BA332B1E74CF8EC94FA8B18EDAF68F462_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_m47E36685E001BF3810BF6A45B8DF8128080DAEFB (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_4();
		return (intptr_t)L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t XRAnchor_get_nativePtr_m47E36685E001BF3810BF6A45B8DF8128080DAEFB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = XRAnchor_get_nativePtr_m47E36685E001BF3810BF6A45B8DF8128080DAEFB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  XRAnchor_get_sessionId_m61DAD2C82C4D725E773BFAB2E8A8BE50EDEEC379 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public Guid sessionId => m_SessionId;
		Guid_t  L_0 = __this->get_m_SessionId_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Guid_t  XRAnchor_get_sessionId_m61DAD2C82C4D725E773BFAB2E8A8BE50EDEEC379_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	Guid_t  _returnValue;
	_returnValue = XRAnchor_get_sessionId_m61DAD2C82C4D725E773BFAB2E8A8BE50EDEEC379_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRAnchor_GetHashCode_m3928C95D8DE59840CB82D9FD13EDEEAEA2A89376 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hashCode = m_Id.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_Id_1();
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_Pose.GetHashCode();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_2 = __this->get_address_of_m_Pose_2();
		int32_t L_3;
		L_3 = Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_2, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + ((int)m_TrackingState).GetHashCode();
		int32_t L_4 = __this->get_m_TrackingState_3();
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_NativePtr.GetHashCode();
		intptr_t* L_6 = __this->get_address_of_m_NativePtr_4();
		int32_t L_7;
		L_7 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_6, /*hidden argument*/NULL);
		// hashCode = hashCode * 486187739 + m_SessionId.GetHashCode();
		Guid_t * L_8 = __this->get_address_of_m_SessionId_5();
		int32_t L_9;
		L_9 = Guid_GetHashCode_mD32F5054E937C98B3D082594B3849808F1E92AE7((Guid_t *)L_8, /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9));
	}
}
IL2CPP_EXTERN_C  int32_t XRAnchor_GetHashCode_m3928C95D8DE59840CB82D9FD13EDEEAEA2A89376_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRAnchor_GetHashCode_m3928C95D8DE59840CB82D9FD13EDEEAEA2A89376(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(UnityEngine.XR.ARSubsystems.XRAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m_Id.Equals(other.m_Id) &&
		//     m_Pose.Equals(other.m_Pose) &&
		//     m_TrackingState == other.m_TrackingState &&
		//     m_NativePtr == other.m_NativePtr &&
		//     m_SessionId.Equals(other.m_SessionId);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_Id_1();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_1 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = L_1.get_m_Id_1();
		bool L_3;
		L_3 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = __this->get_address_of_m_Pose_2();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_5 = ___other0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = L_5.get_m_Pose_2();
		bool L_7;
		L_7 = Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_8 = __this->get_m_TrackingState_3();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_9 = ___other0;
		int32_t L_10 = L_9.get_m_TrackingState_3();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0059;
		}
	}
	{
		intptr_t L_11 = __this->get_m_NativePtr_4();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_12 = ___other0;
		intptr_t L_13 = L_12.get_m_NativePtr_4();
		bool L_14;
		L_14 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_11, (intptr_t)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		Guid_t * L_15 = __this->get_address_of_m_SessionId_5();
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_16 = ___other0;
		Guid_t  L_17 = L_16.get_m_SessionId_5();
		bool L_18;
		L_18 = Guid_Equals_m602304DBC4842AB53670762A6DB52D30C3973258((Guid_t *)L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0059:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B_AdjustorThunk (RuntimeObject * __this, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060 (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is XRAnchor && Equals((XRAnchor)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = XRAnchor_Equals_mE6AC873FF43B605D47F5AB76F0ADAD9A6EDEA25B((XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)__this, ((*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)((XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)UnBox(L_1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * _thisAdjusted = reinterpret_cast<XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRAnchor_Equals_m8C35DEBDDAC21262E3344152D76539DF1AF7F060(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchor__cctor_m101ABC03541DECF122E998C1C183D97FD34315F7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// static readonly XRAnchor s_Default = new XRAnchor
		// {
		//     m_Id = TrackableId.invalidId,
		//     m_Pose = Pose.identity,
		//     m_SessionId = Guid.Empty
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C ));
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0;
		L_0 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		(&V_0)->set_m_Id_1(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1;
		L_1 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		(&V_0)->set_m_Pose_2(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_2 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		(&V_0)->set_m_SessionId_5(L_2);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3 = V_0;
		((XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields*)il2cpp_codegen_static_fields_for(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var))->set_s_Default_0(L_3);
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
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystem__ctor_mB5F70C2E39B5EA531C05244611590F400365265A (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_mBF63E483B756C84A0068727BDBEC29BBC5182F38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRAnchorSubsystem()
		TrackingSubsystem_4__ctor_mBF63E483B756C84A0068727BDBEC29BBC5182F38(__this, /*hidden argument*/TrackingSubsystem_4__ctor_mBF63E483B756C84A0068727BDBEC29BBC5182F38_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor> UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  XRAnchorSubsystem_GetChanges_mA9E2E9974DB9E35A550FEE38B33356141E3AE5F7 (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!running)
		bool L_0;
		L_0 = SubsystemWithProvider_get_running_m42399652EC4AB466AFBAC9035FA77C1BD6C72406_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Can't call \"GetChanges\" without \"Start\"ing the anchor subsystem!");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9A65D560514A0DBAEA0BD813C4A25CD252C2D66)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRAnchorSubsystem_GetChanges_mA9E2E9974DB9E35A550FEE38B33356141E3AE5F7_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var changes = provider.GetChanges(XRAnchor.defaultValue, allocator);
		Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * L_2;
		L_2 = SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3;
		L_3 = XRAnchor_get_defaultValue_m4E0B24D0D2E64DE1B2BE81F781410CFB6031B6CF_inline(/*hidden argument*/NULL);
		int32_t L_4 = ___allocator0;
		NullCheck(L_2);
		TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B  L_5;
		L_5 = VirtFuncInvoker2< TrackableChanges_1_tF38314CFF715F232D6DA3415FD2F68CE504CFF9B , XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C , int32_t >::Invoke(8 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor> UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRAnchor,Unity.Collections.Allocator) */, L_2, L_3, L_4);
		// return changes;
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchorSubsystem_TryAddAnchor_m203DDF7401C08C01A9EBB555FBE2544119A2B3B3 (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.TryAddAnchor(pose, out anchor);
		Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_RuntimeMethod_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = ___pose0;
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_2 = ___anchor1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtFuncInvoker2< bool, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&) */, L_0, L_1, (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)L_2);
		return L_3;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::TryAttachAnchor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchorSubsystem_TryAttachAnchor_mC8678FEACC6D879F0156CEDE6E1FF69E8A1AAF55 (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableToAffix0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.TryAttachAnchor(trackableToAffix, pose, out anchor);
		Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_RuntimeMethod_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_1 = ___trackableToAffix0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_2 = ___pose1;
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_3 = ___anchor2;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtFuncInvoker3< bool, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A , XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * >::Invoke(10 /* System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryAttachAnchor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&) */, L_0, L_1, L_2, (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)L_3);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRAnchorSubsystem_TryRemoveAnchor_mA418EEBB09F89CDF93888A61F1681DE2DBA69799 (XRAnchorSubsystem_t625D9B76C590AB601CF85525DB9396BE84425AA7 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___anchorId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.TryRemoveAnchor(anchorId);
		Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_mBEE88C3ED3C5B88706A9904FAE0896E52B978DAC_RuntimeMethod_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_1 = ___anchorId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  >::Invoke(11 /* System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId) */, L_0, L_1);
		return L_2;
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
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38 (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_Create_m32C16A0DDC60ED2D374EFB884CF807E62B37C0A8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRAnchorSubsystemDescriptor(cinfo));
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_0 = ___cinfo0;
		XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * L_1 = (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B *)il2cpp_codegen_object_new(XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B_il2cpp_TypeInfo_var);
		XRAnchorSubsystemDescriptor__ctor_m5393EA2BCAFE2CB48EDD6DDCCD50C40FC7035331(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor__ctor_m5393EA2BCAFE2CB48EDD6DDCCD50C40FC7035331 (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m1CF8865269978062A7763335B78C6D873D10F09E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRAnchorSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_m1CF8865269978062A7763335B78C6D873D10F09E(__this, /*hidden argument*/SubsystemDescriptorWithProvider_2__ctor_m1CF8865269978062A7763335B78C6D873D10F09E_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_id_mEC6863CDB21597618394D2ED4182A9ED3ACBF220_inline(__this, L_0, /*hidden argument*/NULL);
		// providerType = cinfo.providerType;
		Type_t * L_1;
		L_1 = Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_providerType_m672B1F3CC7A12E8569D801F7C79538753C0D9C2D_inline(__this, L_1, /*hidden argument*/NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t * L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_mA453100A7A8FAB35FBE7154E63B5A17D518F41B6_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsTrackableAttachments = cinfo.supportsTrackableAttachments;
		bool L_3;
		L_3 = Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___cinfo0), /*hidden argument*/NULL);
		XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38_inline(__this, L_3, /*hidden argument*/NULL);
		// }
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mDD4F1B44F90E2F50D3C78601413F01D05990B20C (XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_m66B311A47D5E648C66011BA6F376723D0BAB98DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRPlaneSubsystem()
		TrackingSubsystem_4__ctor_m66B311A47D5E648C66011BA6F376723D0BAB98DE(__this, /*hidden argument*/TrackingSubsystem_4__ctor_m66B311A47D5E648C66011BA6F376723D0BAB98DE_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  XRPlaneSubsystem_GetChanges_m041C14703F9160E7C1A0C740F534D4881D9BA4EA (XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mAA0B384C82E784EFEEE8ABCC29FCCB1AE4106ED3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var changes = provider.GetChanges(BoundedPlane.defaultValue, allocator);
		Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mAA0B384C82E784EFEEE8ABCC29FCCB1AE4106ED3_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_mAA0B384C82E784EFEEE8ABCC29FCCB1AE4106ED3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_1;
		L_1 = BoundedPlane_get_defaultValue_m0C1F8EA6D681C3333CF429425254F63E1BE99003_inline(/*hidden argument*/NULL);
		int32_t L_2 = ___allocator0;
		NullCheck(L_0);
		TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717  L_3;
		L_3 = VirtFuncInvoker2< TrackableChanges_1_t8B0834EED4AC44A71FC9071BDA349BA9D8FE0717 , BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 , int32_t >::Invoke(9 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.BoundedPlane,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		// return changes;
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_GetBoundary_mE3A06B4C37DB403DC6E5DD45A7E30700C73B3CA3 (XRPlaneSubsystem_t7C76F9D2C993B0DC38F0A7CDCE745EA7C12417EE * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___boundary2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mAA0B384C82E784EFEEE8ABCC29FCCB1AE4106ED3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (allocator == Allocator.Temp)
		int32_t L_0 = ___allocator1;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		// throw new InvalidOperationException("Allocator.Temp is not supported. Use Allocator.TempJob if you wish to use a temporary allocator.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0040832A71810E092F962A5F9A66A6A1866CC7D1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRPlaneSubsystem_GetBoundary_mE3A06B4C37DB403DC6E5DD45A7E30700C73B3CA3_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (allocator == Allocator.None)
		int32_t L_2 = ___allocator1;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// throw new InvalidOperationException("Allocator.None is not a valid allocator.");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1889AF12D766B3A68EB9EE79FE4ECA560C23A4F5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRPlaneSubsystem_GetBoundary_mE3A06B4C37DB403DC6E5DD45A7E30700C73B3CA3_RuntimeMethod_var)));
	}

IL_001e:
	{
		// provider.GetBoundary(trackableId, allocator, ref boundary);
		Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * L_4;
		L_4 = SubsystemWithProvider_3_get_provider_mAA0B384C82E784EFEEE8ABCC29FCCB1AE4106ED3_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_mAA0B384C82E784EFEEE8ABCC29FCCB1AE4106ED3_RuntimeMethod_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_5 = ___trackableId0;
		int32_t L_6 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_7 = ___boundary2;
		NullCheck(L_4);
		VirtActionInvoker3< TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B , int32_t, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * >::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&) */, L_4, L_5, L_6, (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_7);
		// }
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
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsBoundaryVertices_m4345B5F3CA73C685A3F741C4EDFF6B69EEEB8431 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_mB69A44F54AB64DF4361D3C16AE48C2F1B474EA32 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var descriptor = new XRPlaneSubsystemDescriptor(cinfo);
		Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  L_0 = ___cinfo0;
		XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * L_1 = (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 *)il2cpp_codegen_object_new(XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483_il2cpp_TypeInfo_var);
		XRPlaneSubsystemDescriptor__ctor_mC8788AC7F6940BA1E88AE0277C1D099DD0EEB935(L_1, L_0, /*hidden argument*/NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(descriptor);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor__ctor_mC8788AC7F6940BA1E88AE0277C1D099DD0EEB935 (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_mC9825ABADBFD661143DBD286E7A4203D29661704_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRPlaneSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_mC9825ABADBFD661143DBD286E7A4203D29661704(__this, /*hidden argument*/SubsystemDescriptorWithProvider_2__ctor_mC9825ABADBFD661143DBD286E7A4203D29661704_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_id_mEC6863CDB21597618394D2ED4182A9ED3ACBF220_inline(__this, L_0, /*hidden argument*/NULL);
		// providerType = cinfo.providerType;
		Type_t * L_1;
		L_1 = Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_providerType_m672B1F3CC7A12E8569D801F7C79538753C0D9C2D_inline(__this, L_1, /*hidden argument*/NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t * L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_mA453100A7A8FAB35FBE7154E63B5A17D518F41B6_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsHorizontalPlaneDetection = cinfo.supportsHorizontalPlaneDetection;
		bool L_3;
		L_3 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D_inline(__this, L_3, /*hidden argument*/NULL);
		// supportsVerticalPlaneDetection = cinfo.supportsVerticalPlaneDetection;
		bool L_4;
		L_4 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2_inline(__this, L_4, /*hidden argument*/NULL);
		// supportsArbitraryPlaneDetection = cinfo.supportsArbitraryPlaneDetection;
		bool L_5;
		L_5 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0_inline(__this, L_5, /*hidden argument*/NULL);
		// supportsBoundaryVertices = cinfo.supportsBoundaryVertices;
		bool L_6;
		L_6 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747_inline(__this, L_6, /*hidden argument*/NULL);
		// supportsClassification = cinfo.supportsClassification;
		bool L_7;
		L_7 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A_inline(__this, L_7, /*hidden argument*/NULL);
		// }
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
// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycast defaultValue => s_Default;
		IL2CPP_RUNTIME_CLASS_INIT(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_0 = ((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var))->get_s_Default_0();
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  XRRaycast_get_trackableId_m58733DD621FACDF9F32633AA0247FDDE4B6F4EBE (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_TrackableId_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  XRRaycast_get_trackableId_m58733DD621FACDF9F32633AA0247FDDE4B6F4EBE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * _thisAdjusted = reinterpret_cast<XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *>(__this + _offset);
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  _returnValue;
	_returnValue = XRRaycast_get_trackableId_m58733DD621FACDF9F32633AA0247FDDE4B6F4EBE_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRRaycast_get_pose_m62D623D6E37AE82B0E223804F034E604037E24E1 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose => m_Pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRRaycast_get_pose_m62D623D6E37AE82B0E223804F034E604037E24E1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * _thisAdjusted = reinterpret_cast<XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *>(__this + _offset);
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  _returnValue;
	_returnValue = XRRaycast_get_pose_m62D623D6E37AE82B0E223804F034E604037E24E1_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycast_get_trackingState_m8A926660A7D03F72E558198E760AE01936FB8DF0 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->get_m_TrackingState_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycast_get_trackingState_m8A926660A7D03F72E558198E760AE01936FB8DF0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * _thisAdjusted = reinterpret_cast<XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycast_get_trackingState_m8A926660A7D03F72E558198E760AE01936FB8DF0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycast::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Single,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycast__ctor_mCB8C71860ADB4EEEAECBB9D2FD6373FA7EE13A48 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, float ___distance4, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___hitTrackableId5, const RuntimeMethod* method)
{
	{
		// m_TrackableId = trackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ___trackableId0;
		__this->set_m_TrackableId_1(L_0);
		// m_Pose = pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1 = ___pose1;
		__this->set_m_Pose_2(L_1);
		// m_TrackingState = trackingState;
		int32_t L_2 = ___trackingState2;
		__this->set_m_TrackingState_3(L_2);
		// m_NativePtr = nativePtr;
		intptr_t L_3 = ___nativePtr3;
		__this->set_m_NativePtr_4((intptr_t)L_3);
		// m_Distance = distance;
		float L_4 = ___distance4;
		__this->set_m_Distance_5(L_4);
		// m_HitTrackableId = hitTrackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_5 = ___hitTrackableId5;
		__this->set_m_HitTrackableId_6(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycast__ctor_mCB8C71860ADB4EEEAECBB9D2FD6373FA7EE13A48_AdjustorThunk (RuntimeObject * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, float ___distance4, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___hitTrackableId5, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * _thisAdjusted = reinterpret_cast<XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *>(__this + _offset);
	XRRaycast__ctor_mCB8C71860ADB4EEEAECBB9D2FD6373FA7EE13A48(_thisAdjusted, ___trackableId0, ___pose1, ___trackingState2, ___nativePtr3, ___distance4, ___hitTrackableId5, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycast::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycast_GetHashCode_m68040849E5282B2DAEE10DEC5F13B22E69A9EA36 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hash = m_TrackableId.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_1();
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, /*hidden argument*/NULL);
		// hash = hash * 486187739 + m_Pose.GetHashCode();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_2 = __this->get_address_of_m_Pose_2();
		int32_t L_3;
		L_3 = Pose_GetHashCode_mE1DD7FBCCB1C979B252F0B117276BA11CF4D2367((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_2, /*hidden argument*/NULL);
		// hash = hash * 486187739 + ((int)m_TrackingState).GetHashCode();
		int32_t L_4 = __this->get_m_TrackingState_3();
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + m_NativePtr.GetHashCode();
		intptr_t* L_6 = __this->get_address_of_m_NativePtr_4();
		int32_t L_7;
		L_7 = IntPtr_GetHashCode_m55E65FB52EFE7C0EBC3C28E66A5D7542F3B1D35D((intptr_t*)L_6, /*hidden argument*/NULL);
		// hash = hash * 486187739 + m_Distance.GetHashCode();
		float* L_8 = __this->get_address_of_m_Distance_5();
		int32_t L_9;
		L_9 = Single_GetHashCode_m7662E1812DDDBC85D464398740CFFC3588DFB2C9((float*)L_8, /*hidden argument*/NULL);
		// hash = hash * 486187739 + m_HitTrackableId.GetHashCode();
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_10 = __this->get_address_of_m_HitTrackableId_6();
		int32_t L_11;
		L_11 = TrackableId_GetHashCode_mFD297FC6DB40FB5B28C6E9B7A2CF2785D75C4E86((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_10, /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11));
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycast_GetHashCode_m68040849E5282B2DAEE10DEC5F13B22E69A9EA36_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * _thisAdjusted = reinterpret_cast<XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycast_GetHashCode_m68040849E5282B2DAEE10DEC5F13B22E69A9EA36(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m808F58AFF56D3598C410DBB759CD48CBEBFBE553 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is XRRaycast) && Equals((XRRaycast)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = XRRaycast_Equals_m155EE0BDA8E10977C499A22B2EE32D252A960535((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)__this, ((*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)UnBox(L_1, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycast_Equals_m808F58AFF56D3598C410DBB759CD48CBEBFBE553_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * _thisAdjusted = reinterpret_cast<XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycast_Equals_m808F58AFF56D3598C410DBB759CD48CBEBFBE553(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(UnityEngine.XR.ARSubsystems.XRRaycast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m155EE0BDA8E10977C499A22B2EE32D252A960535 (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___other0, const RuntimeMethod* method)
{
	{
		// m_TrackableId.Equals(other.m_TrackableId) &&
		// m_Pose.Equals(other.m_Pose) &&
		// (m_TrackingState == other.m_TrackingState) &&
		// (m_NativePtr == other.m_NativePtr) &&
		// m_HitTrackableId.Equals(other.m_HitTrackableId) &&
		// m_Distance.Equals(other.m_Distance);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_0 = __this->get_address_of_m_TrackableId_1();
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_1 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = L_1.get_m_TrackableId_1();
		bool L_3;
		L_3 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_4 = __this->get_address_of_m_Pose_2();
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_5 = ___other0;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = L_5.get_m_Pose_2();
		bool L_7;
		L_7 = Pose_Equals_mFAE0041090F2032B8FCE63A0F289DD206134BF15((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_8 = __this->get_m_TrackingState_3();
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_9 = ___other0;
		int32_t L_10 = L_9.get_m_TrackingState_3();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_006c;
		}
	}
	{
		intptr_t L_11 = __this->get_m_NativePtr_4();
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_12 = ___other0;
		intptr_t L_13 = L_12.get_m_NativePtr_4();
		bool L_14;
		L_14 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_11, (intptr_t)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * L_15 = __this->get_address_of_m_HitTrackableId_6();
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_16 = ___other0;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_17 = L_16.get_m_HitTrackableId_6();
		bool L_18;
		L_18 = TrackableId_Equals_m1DF35616359175E3D66DE18250E8CDA1E6462B06((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)L_15, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		float* L_19 = __this->get_address_of_m_Distance_5();
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_20 = ___other0;
		float L_21 = L_20.get_m_Distance_5();
		bool L_22;
		L_22 = Single_Equals_m298A3A849F30B9900813BE6DD98AE6810CDBE914((float*)L_19, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_006c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycast_Equals_m155EE0BDA8E10977C499A22B2EE32D252A960535_AdjustorThunk (RuntimeObject * __this, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * _thisAdjusted = reinterpret_cast<XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycast_Equals_m155EE0BDA8E10977C499A22B2EE32D252A960535(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycast::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycast__cctor_mF4E28BD54EAB27ED12CEBC7643C8A599E7D93562 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly XRRaycast s_Default = new XRRaycast(
		//     TrackableId.invalidId, Pose.identity, TrackingState.None, IntPtr.Zero, 0, TrackableId.invalidId);
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0;
		L_0 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_1;
		L_1 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2;
		L_2 = TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline(/*hidden argument*/NULL);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_3;
		memset((&L_3), 0, sizeof(L_3));
		XRRaycast__ctor_mCB8C71860ADB4EEEAECBB9D2FD6373FA7EE13A48((&L_3), L_0, L_1, 0, (intptr_t)(0), (0.0f), L_2, /*hidden argument*/NULL);
		((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var))->set_s_Default_0(L_3);
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
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_m73E44C9109F84F8DFB603F6E480200EF0A62A15B (XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_mEBA68D2AF3E32AF7F962362371B19DD06C4951AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRRaycastSubsystem()
		TrackingSubsystem_4__ctor_mEBA68D2AF3E32AF7F962362371B19DD06C4951AF(__this, /*hidden argument*/TrackingSubsystem_4__ctor_mEBA68D2AF3E32AF7F962362371B19DD06C4951AF_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  XRRaycastSubsystem_GetChanges_m6200FBDEEF32324D55A39BABCFDA4485152158D7 (XRRaycastSubsystem_t62FDAC9AA1BD44C4557AEE3FEF3D2FA24C71B6B8 * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m080533A05983B6767F8B3470E127A772D0D59530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var changes = provider.GetChanges(XRRaycast.defaultValue, allocator);
		Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m080533A05983B6767F8B3470E127A772D0D59530_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m080533A05983B6767F8B3470E127A772D0D59530_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_1;
		L_1 = XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0_inline(/*hidden argument*/NULL);
		int32_t L_2 = ___allocator0;
		NullCheck(L_0);
		TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  L_3;
		L_3 = VirtFuncInvoker2< TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 , XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 , int32_t >::Invoke(11 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		// return changes;
		return L_3;
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
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29 (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53 (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_mD10EA0CD0E6F8FB9D499544B0DE27A5EBCED30C9 (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackedRaycastsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_mD9A0FD5846AA09D7D7D32A1093566607D0082ABA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRRaycastSubsystemDescriptor(cinfo));
		Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  L_0 = ___cinfo0;
		XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * L_1 = (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C *)il2cpp_codegen_object_new(XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C_il2cpp_TypeInfo_var);
		XRRaycastSubsystemDescriptor__ctor_m2185C8C50AB138A0C3B5165A92534E2E0D7D57A7(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m2185C8C50AB138A0C3B5165A92534E2E0D7D57A7 (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m44F60A7BB6F0282109ED44817703F6FDE0DAD8E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRRaycastSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_m44F60A7BB6F0282109ED44817703F6FDE0DAD8E7(__this, /*hidden argument*/SubsystemDescriptorWithProvider_2__ctor_m44F60A7BB6F0282109ED44817703F6FDE0DAD8E7_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_id_mEC6863CDB21597618394D2ED4182A9ED3ACBF220_inline(__this, L_0, /*hidden argument*/NULL);
		// providerType = cinfo.providerType;
		Type_t * L_1;
		L_1 = Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_providerType_m672B1F3CC7A12E8569D801F7C79538753C0D9C2D_inline(__this, L_1, /*hidden argument*/NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t * L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_mA453100A7A8FAB35FBE7154E63B5A17D518F41B6_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsViewportBasedRaycast = cinfo.supportsViewportBasedRaycast;
		bool L_3;
		L_3 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29_inline(__this, L_3, /*hidden argument*/NULL);
		// supportsWorldBasedRaycast = cinfo.supportsWorldBasedRaycast;
		bool L_4;
		L_4 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B_inline(__this, L_4, /*hidden argument*/NULL);
		// supportedTrackableTypes = cinfo.supportedTrackableTypes;
		int32_t L_5;
		L_5 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53_inline(__this, L_5, /*hidden argument*/NULL);
		// supportsTrackedRaycasts = cinfo.supportsTrackedRaycasts;
		bool L_6;
		L_6 = Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___cinfo0), /*hidden argument*/NULL);
		XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_mD10EA0CD0E6F8FB9D499544B0DE27A5EBCED30C9_inline(__this, L_6, /*hidden argument*/NULL);
		// }
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m8485F39F339764D3FCA4FD0E1D77ADE16CAE1676 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigurationChooser m_DefaultConfigurationChooser = new DefaultConfigurationChooser();
		DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F * L_0 = (DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F *)il2cpp_codegen_object_new(DefaultConfigurationChooser_tC3488EB08C98156663D851D9F0F0AD9294D4613F_il2cpp_TypeInfo_var);
		DefaultConfigurationChooser__ctor_m01D5B274BA5A7C81A20C94A920681CAE8466A4BC(L_0, /*hidden argument*/NULL);
		__this->set_m_DefaultConfigurationChooser_4(L_0);
		// public XRSessionSubsystem()
		SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4(__this, /*hidden argument*/SubsystemWithProvider_3__ctor_mD3D1B91DF52028332010B72032C7E8388C99CEA4_RuntimeMethod_var);
		// m_ConfigurationChooser = m_DefaultConfigurationChooser;
		ConfigurationChooser_t0CCF856A226297A702F306A2217CF17D652E72C4 * L_1 = __this->get_m_DefaultConfigurationChooser_4();
		__this->set_m_ConfigurationChooser_5(L_1);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrackingState trackingState => provider.trackingState;
		Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NotTrackingReason notTrackingReason => provider.notTrackingReason;
		Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_inline(__this, /*hidden argument*/SubsystemWithProvider_3_get_provider_m6804A0C76FB5F7C9925F2153F33A7E44BBD95F0E_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(20 /* UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason() */, L_0);
		return L_1;
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2 (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m60DE0DD6782289BAD4D67D15E2361D1B7B71C262 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRSessionSubsystemDescriptor(cinfo));
		Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  L_0 = ___cinfo0;
		XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * L_1 = (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C *)il2cpp_codegen_object_new(XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C_il2cpp_TypeInfo_var);
		XRSessionSubsystemDescriptor__ctor_mC3487128AC53B5697213AFF8B2F98F1C3288B3A7(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mC3487128AC53B5697213AFF8B2F98F1C3288B3A7 (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m63E1420F5B2D7E40BDAAD6BC312979C25D61C6EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRSessionSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_m63E1420F5B2D7E40BDAAD6BC312979C25D61C6EE(__this, /*hidden argument*/SubsystemDescriptorWithProvider_2__ctor_m63E1420F5B2D7E40BDAAD6BC312979C25D61C6EE_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_id_mEC6863CDB21597618394D2ED4182A9ED3ACBF220_inline(__this, L_0, /*hidden argument*/NULL);
		// providerType = cinfo.providerType;
		Type_t * L_1;
		L_1 = Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_providerType_m672B1F3CC7A12E8569D801F7C79538753C0D9C2D_inline(__this, L_1, /*hidden argument*/NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t * L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_mA453100A7A8FAB35FBE7154E63B5A17D518F41B6_inline(__this, L_2, /*hidden argument*/NULL);
		// supportsInstall = cinfo.supportsInstall;
		bool L_3;
		L_3 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___cinfo0), /*hidden argument*/NULL);
		XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2_inline(__this, L_3, /*hidden argument*/NULL);
		// supportsMatchFrameRate = cinfo.supportsMatchFrameRate;
		bool L_4;
		L_4 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___cinfo0), /*hidden argument*/NULL);
		XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D_inline(__this, L_4, /*hidden argument*/NULL);
		// }
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
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method)
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->get_U3CscreenOrientationU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118 (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_U3CscreenDimensionsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *>(__this + _offset);
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  _returnValue;
	_returnValue = XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_mCCE320FCC4DE7EEF2FC1778BB15E422BAC190908 (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public override int GetHashCode() => HashCode.Combine(((int)screenOrientation).GetHashCode(), screenDimensions.GetHashCode());
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A_inline((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_0), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_2;
		L_2 = XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118_inline((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Vector2Int_GetHashCode_mB963D0B9A29E161BC4B73F97AEAF2F843FC8EF71((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = HashCode_Combine_m23C951F115303C9E040D18947821969B602863FC(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_GetHashCode_mCCE320FCC4DE7EEF2FC1778BB15E422BAC190908_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRSessionUpdateParams_GetHashCode_mCCE320FCC4DE7EEF2FC1778BB15E422BAC190908(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m2501DC639F937DCBD2423619545AC556DE71F3B2 (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is XRSessionUpdateParams) && Equals((XRSessionUpdateParams)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = XRSessionUpdateParams_Equals_m57475F3E7F97539B697A4DC77122F934C321ECD0((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)__this, ((*(XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)UnBox(L_1, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_m2501DC639F937DCBD2423619545AC556DE71F3B2_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRSessionUpdateParams_Equals_m2501DC639F937DCBD2423619545AC556DE71F3B2(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m01D74BEF4A53B620271579234011D2F6D0522598 (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"Screen Orientation: {screenOrientation}, Screen Dimensions: {screenDimensions}";
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A_inline((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ScreenOrientation_tDD9EF2729A0D580721770597532935B0A7ADE020_il2cpp_TypeInfo_var, &L_1);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		L_3 = XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118_inline((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)__this, /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4 = L_3;
		RuntimeObject * L_5 = Box(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* XRSessionUpdateParams_ToString_m01D74BEF4A53B620271579234011D2F6D0522598_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRSessionUpdateParams_ToString_m01D74BEF4A53B620271579234011D2F6D0522598(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m57475F3E7F97539B697A4DC77122F934C321ECD0 (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___other0, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// (screenOrientation == other.screenOrientation) &&
		// screenDimensions.Equals(other.screenDimensions);
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A_inline((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A_inline((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_2;
		L_2 = XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118_inline((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_3;
		L_3 = XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118_inline((XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *)(&___other0), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_m57475F3E7F97539B697A4DC77122F934C321ECD0_AdjustorThunk (RuntimeObject * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRSessionUpdateParams_Equals_m57475F3E7F97539B697A4DC77122F934C321ECD0(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryAddAnchor(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddAnchor_m8BAE08000E72193AE272504162CD3CAE9E2011D3 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose0, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor1, const RuntimeMethod* method)
{
	{
		// anchor = default(XRAnchor);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_0 = ___anchor1;
		il2cpp_codegen_initobj(L_0, sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryAttachAnchor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRAnchor&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAttachAnchor_mAAFB29BF47A06D1B7B5EA30849047CFC2E91072A (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableToAffix0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___anchor2, const RuntimeMethod* method)
{
	{
		// anchor = default(XRAnchor);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_0 = ___anchor2;
		il2cpp_codegen_initobj(L_0, sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C ));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::TryRemoveAnchor(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryRemoveAnchor_m21FBBF8C515908F05CF755B85B9643760E6BB2F7 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___anchorId0, const RuntimeMethod* method)
{
	{
		// public virtual bool TryRemoveAnchor(TrackableId anchorId) => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFE4941CFC3CA511BBD7C0A498BB2C74DE96FF498 (Provider_t9F286D20EB73EBBA4B6E7203C7A9051BE673C2E2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m3070FB0F5EDD35A102DFE6DB270CB1423E80A059_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m3070FB0F5EDD35A102DFE6DB270CB1423E80A059(__this, /*hidden argument*/SubsystemProvider_1__ctor_m3070FB0F5EDD35A102DFE6DB270CB1423E80A059_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_pinvoke(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_pinvoke_back(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke& marshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_pinvoke_cleanup(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_com(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_com_back(const Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com& marshaled, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshal_com_cleanup(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// int hash = HashCode.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// hash = 486187739 * hash + HashCode.ReferenceHash(providerType);
		int32_t L_2 = V_0;
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_3, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)L_2)), (int32_t)L_4));
		// hash = 486187739 * hash + HashCode.ReferenceHash(subsystemTypeOverride);
		int32_t L_5 = V_0;
		Type_t * L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)L_5)), (int32_t)L_7));
		// hash = 486187738 * hash + supportsTrackableAttachments.GetHashCode();
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10;
		L_10 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187738), (int32_t)L_8)), (int32_t)L_10));
		// return hash;
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mBBEF5C69D3B91763153EDE624C76AC428ECFABB1(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => (obj is Cinfo other) && Equals(other);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)UnBox(L_1, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7_il2cpp_TypeInfo_var))));
		Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  L_2 = V_0;
		bool L_3;
		L_3 = Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m8E52493318DDE5F675E85E0733F5F7CCDA3C8339(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8 (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___other0, const RuntimeMethod* method)
{
	{
		//                 return
		//                     String.Equals(id, other.id) &&
		// #if UNITY_2020_2_OR_NEWER
		//                     ReferenceEquals(providerType, other.providerType) &&
		//                     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//                     supportsTrackableAttachments == other.supportsTrackableAttachments; // NB: before 2020.2, this was excluded - just trying to keep from changing behavior
		String_t* L_0;
		L_0 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))))
		{
			goto IL_0042;
		}
	}
	{
		Type_t * L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		Type_t * L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_6))))
		{
			goto IL_0042;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)__this, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline((Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_0042:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8_AdjustorThunk (RuntimeObject * __this, Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * _thisAdjusted = reinterpret_cast<Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m07BCEC0FF4D8C2A43AE850689AC5AA4FC0603DE8(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___boundary2, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("Boundary vertices are not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_GetBoundary_mFEC076BA5F9EAEFB5CFD36A8A690CD6B9449A45A_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_requestedPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedPlaneDetectionMode_mBE4A83FB233470D747D0F6E6435062F0B076D787 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	{
		// get => PlaneDetectionMode.None;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::set_requestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedPlaneDetectionMode_m6F76C54F3DDC0811336F80D6CF40CBC64147DAD9 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// if (value != PlaneDetectionMode.None)
		int32_t L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Plane detection is not supported.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED9546C195BD4988B71713BD762B7E7F364227ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_requestedPlaneDetectionMode_m6F76C54F3DDC0811336F80D6CF40CBC64147DAD9_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_currentPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentPlaneDetectionMode_m6409F5A32746AC3BAB7876DEDF7A9CA5C27CDFF2 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	{
		// public virtual PlaneDetectionMode currentPlaneDetectionMode => PlaneDetectionMode.None;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mDEDB208301BBA3CC96FFF2DA6AC90F5D241CE524 (Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF(__this, /*hidden argument*/SubsystemProvider_1__ctor_mDB4B33AED139FADE39F8488116F811DA2F601EAF_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke_back(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_pinvoke_cleanup(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com_back(const Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshal_com_cleanup(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->get_U3CsupportsClassificationU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method)
{
	{
		//                 return
		//                     ReferenceEquals(id, other.id) &&
		// #if UNITY_2020_2_OR_NEWER
		//                     ReferenceEquals(providerType, other.providerType) &&
		//                     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		// #else
		//                     ReferenceEquals(subsystemImplementationType, other.subsystemImplementationType) &&
		// #endif
		//                     supportsHorizontalPlaneDetection == other.supportsHorizontalPlaneDetection &&
		//                     supportsVerticalPlaneDetection == other.supportsVerticalPlaneDetection &&
		//                     supportsArbitraryPlaneDetection == other.supportsArbitraryPlaneDetection &&
		//                     supportsClassification == other.supportsClassification &&
		//                     supportsBoundaryVertices == other.supportsBoundaryVertices;
		String_t* L_0;
		L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_2) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		Type_t * L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_6;
		L_6 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_7;
		L_7 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_8;
		L_8 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_9;
		L_9 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_10;
		L_10 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_12;
		L_12 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_13;
		L_13 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_14;
		L_14 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		bool L_15;
		L_15 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0079:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC_AdjustorThunk (RuntimeObject * __this, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m997D9E2FAF1A57953B2A2C95A4221C9EB82843BC((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, ((*(Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)UnBox(L_1, Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m38EB24520E9273465E918F9F14D72FCE8EE4EB8B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378 (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// int hashCode = HashCode.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(providerType);
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_2, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(subsystemTypeOverride);
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_4, /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsHorizontalPlaneDetection.GetHashCode();
		bool L_6;
		L_6 = Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsVerticalPlaneDetection.GetHashCode();
		bool L_8;
		L_8 = Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsArbitraryPlaneDetection.GetHashCode();
		bool L_10;
		L_10 = Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11;
		L_11 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsBoundaryVertices.GetHashCode();
		bool L_12;
		L_12 = Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hashCode = (hashCode * 486187739) + supportsClassification.GetHashCode();
		bool L_14;
		L_14 = Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline((Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *)__this, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15;
		L_15 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11)), (int32_t)((int32_t)486187739))), (int32_t)L_13)), (int32_t)((int32_t)486187739))), (int32_t)L_15));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * _thisAdjusted = reinterpret_cast<Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m219A4B64FB8A60D947BA345FBD65292065581378(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m005AB31948BB907D11D7E64C051F6C08D2B4BFF2 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m1C036AD27F8B1E3EA9AFB22880B84637CC6693B8 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m0A7220BD30B6E87681E5D63B89FA177E24A93FD5 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_m4EEED029510C7B0273678827530C882EDA5B314F (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint0, float ___estimatedDistance1, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___raycast2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_0 = ___raycast2;
		IL2CPP_RUNTIME_CLASS_INIT(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_1;
		L_1 = XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0_inline(/*hidden argument*/NULL);
		*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_m3C4F9E15B1849B074BEFF8426DBE71F3F1E93564 (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, float ___estimatedDistance1, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___raycast2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_0 = ___raycast2;
		IL2CPP_RUNTIME_CLASS_INIT(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_1;
		L_1 = XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0_inline(/*hidden argument*/NULL);
		*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_RemoveRaycast_m1C8BC761375BCA3E3F4077690EB8719DDDC2B71E (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId0, const RuntimeMethod* method)
{
	{
		// public virtual void RemoveRaycast(TrackableId trackableId) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  Provider_GetChanges_m7F79213AA617C8206739FFE806E196E7D5A4BDAF (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___defaultRaycast0, int32_t ___allocator1, const RuntimeMethod* method)
{
	TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual TrackableChanges<XRRaycast> GetChanges(XRRaycast defaultRaycast, Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3 ));
		TrackableChanges_1_t092C2BBB89690C350B949DDFFA9F551F85536ED3  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m58E4226B4157880E60C02C82B5FB24D9760EA94F (Provider_tF185BE0541D2066CD242583CEFE7709DD22DD227 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF(__this, /*hidden argument*/SubsystemProvider_1__ctor_m42AA349CD0B3CDE6407D1BA528122A6C6C8B22EF_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke_back(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_pinvoke_cleanup(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com_back(const Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshal_com_cleanup(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->get_U3CsupportedTrackableTypesU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackedRaycastsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackedRaycastsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		//             public override int GetHashCode() => HashCode.Combine(
		//                 HashCode.ReferenceHash(id),
		// #if UNITY_2020_2_OR_NEWER
		//                 HashCode.ReferenceHash(providerType),
		//                 HashCode.ReferenceHash(subsystemTypeOverride),
		// #else
		//                 HashCode.ReferenceHash(subsystemImplementationType),
		// #endif
		//                 supportsViewportBasedRaycast.GetHashCode(),
		//                 supportsWorldBasedRaycast.GetHashCode(),
		//                 ((int)supportedTrackableTypes).GetHashCode(),
		//                 supportsTrackedRaycasts.GetHashCode());
		String_t* L_0;
		L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_2, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		bool L_12;
		L_12 = Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = HashCode_Combine_m23E4B1C1DC69FC295EAA04B5AC0ABB8BE40ABC9F(L_1, L_3, L_5, L_7, L_9, L_11, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mE07F77F64788F12838A7D8A20E07DE366DDAEEEA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, ((*(Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)UnBox(L_1, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_mFDD42918C99F796C9737C544D9858098C0241716(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("XRRaycastSubsystemDescriptor:\nsupportsViewportBasedRaycast: {0}\nsupportsWorldBasedRaycast: {1}",
		//     supportsViewportBasedRaycast, supportsWorldBasedRaycast);
		bool L_0;
		L_0 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_ToString_m5E549199F8D40CF630BB8ED6B46EC5F51E580BEB(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146 (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method)
{
	{
		//                 return
		//                     String.Equals(id, other.id) &&
		// #if UNITY_2020_2_OR_NEWER
		//                     ReferenceEquals(providerType, other.providerType) &&
		//                     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		// #else
		//                     ReferenceEquals(subsystemImplementationType, other.subsystemImplementationType) &&
		// #endif
		//                     supportsViewportBasedRaycast == other.supportsViewportBasedRaycast &&
		//                     supportsWorldBasedRaycast == other.supportsWorldBasedRaycast &&
		//                     supportedTrackableTypes == other.supportedTrackableTypes;
		String_t* L_0;
		L_0 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))))
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		Type_t * L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_6))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_11;
		L_11 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)__this, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline((Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
	}

IL_0060:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146_AdjustorThunk (RuntimeObject * __this, Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * _thisAdjusted = reinterpret_cast<Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m96B4DD943D8AAA5D31B0B5BCD0EEC1F94E60F146(_thisAdjusted, ___other0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m2A20FC49495EFF34A01887ABF28338FD2511C97A (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public override void Start() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mC3937DB37B165BFDB925D51BDFB63DBAE14E5CE6 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public override void Stop() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_m44516D330A225A42401D9F850CAB45A1781656A7 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___updateParams0, const RuntimeMethod* method)
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams) { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_mC15A02B030984925D814C8CF68EB96D4BD268236 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F  ___updateParams0, Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0  ___configuration1, const RuntimeMethod* method)
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams, Configuration configuration) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedFeatures_mD37FD382547DA72EF30A32B33AB2660101B248D5 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual Feature requestedFeatures => Feature.None;
		return (uint64_t)(((int64_t)((int64_t)0)));
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedTrackingMode_mC88877D2BC7250D543457D640A20AE183EB9BFE5 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// get => Feature.None;
		return (uint64_t)(((int64_t)((int64_t)0)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedTrackingMode_mE84B329D9C903D6D47CBA2D11DF144EADB1D2345 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		// set {}
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_currentTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_currentTrackingMode_m597AC294BE6020DFD42DAE027B2E62D5906ABD34 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual Feature currentTrackingMode => Feature.None;
		return (uint64_t)(((int64_t)((int64_t)0)));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  Provider_GetConfigurationDescriptors_mDBC0CC4E857D4C838349D32ED2FBDFE75C3A5A39 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA ));
		NativeArray_1_tC9A9DFD8C5E8BBF71F83CBC0CCF7C4BC38E3A4CA  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m91FDA48A481008AB6F408823ACFA4E51B6710F17 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationPause_mDDA05F7C18D3B1E26F0B468CBC454557788D147B (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnApplicationPause() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationResume_m598667339799D80D929DEBBA5C197AC4C394C52A (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnApplicationResume() { }
		return;
	}
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Provider_get_nativePtr_m36BB948CA26F060AE9F9B5E77191B48605C5770B (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual IntPtr nativePtr => IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * Provider_GetAvailabilityAsync_m0C73C4907A03BA2F018EA2C0CE66C9C17423C6DD (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionAvailability>.CreateResolvedPromise(SessionAvailability.None);
		Promise_1_tB8B428F557CD6742430DB416C0B99C79CA1AA167 * L_0;
		L_0 = Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C(0, /*hidden argument*/Promise_1_CreateResolvedPromise_m5C98DBF8D42B75866FC1F8CFFBB38C8E9D36D97C_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m3E9021C49EADF2BE9853FD13A23650CE5237A2BF (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual TrackingState trackingState => TrackingState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_notTrackingReason_mD6C96A5620A1DD87BCB86710E9460A41C5B18F66 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual NotTrackingReason notTrackingReason => NotTrackingReason.Unsupported;
		return (int32_t)(6);
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Provider_get_sessionId_m28A8F75715D7469B0F555CAC2E9B7D71B68CAFCE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Guid sessionId => Guid.Empty;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateEnabled_m4EC0EF72F182CE2BBF27666D5750E46D54E797EB (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool matchFrameRateEnabled => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateRequested_m32C8D538076876248908EBA9F11F31D249894C37 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0 (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	{
		// throw new NotSupportedException("Querying the frame rate is not supported by this session subsystem.");
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_get_frameRate_mC445B76B58305DB89474EBF4A1EAC3DFBB8268D0_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m921D9E5D94AB32804689C972E36ECA2601BB2AAE (Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66(__this, /*hidden argument*/SubsystemProvider_1__ctor_mD86DEB0B4DF879B2C514AFA17DEACAA610EFDD66_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke_back(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_pinvoke_cleanup(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com_back(const Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshal_com_cleanup(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline(_thisAdjusted, ___value0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// int hash = HashCode.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_0, /*hidden argument*/NULL);
		// hash = hash * 486187739 + HashCode.ReferenceHash(providerType);
		Type_t * L_2;
		L_2 = Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_2, /*hidden argument*/NULL);
		// hash = hash * 486187739 + HashCode.ReferenceHash(subsystemTypeOverride);
		Type_t * L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = HashCode_ReferenceHash_mE6CC6EA3C87D9F040876D66CF582D6FF68FC359C(L_4, /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportsInstall.GetHashCode();
		bool L_6;
		L_6 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + supportsMatchFrameRate.GetHashCode();
		bool L_8;
		L_8 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(&V_0), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m52D192E832A52B87FB2F03DB84EB47EED7DCD48C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method)
{
	{
		//                 return
		//                     string.Equals(id, other.id) &&
		// #if UNITY_2020_2_OR_NEWER
		//                     ReferenceEquals(providerType, other.providerType) &&
		//                     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		// #else
		//                     ReferenceEquals(subsystemImplementationType, other.subsystemImplementationType) &&
		// #endif
		//                     supportsInstall == other.supportsInstall &&
		//                     supportsMatchFrameRate == other.supportsMatchFrameRate;
		String_t* L_0;
		L_0 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		Type_t * L_3;
		L_3 = Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		Type_t * L_4;
		L_4 = Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))))
		{
			goto IL_0051;
		}
	}
	{
		Type_t * L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		Type_t * L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_6))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, /*hidden argument*/NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
	}

IL_0051:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77_AdjustorThunk (RuntimeObject * __this, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78 (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is Cinfo && Equals((Cinfo)obj);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = Cinfo_Equals_m1C37149A7375CC94768E18102A1CB1AED3E3FF77((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)__this, ((*(Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)((Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *)UnBox(L_1, Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * _thisAdjusted = reinterpret_cast<Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A *>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m515E1A8509A7C1472469FD535B7CBE5D58E45A78(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_trackableId_m32943441D74DC226DC907A05B5B6C6EBBC70F95B_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_TrackableId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  BoundedPlane_get_subsumedById_mD61EFD7A91B5F290F63A1AE59153B75BB33B89CF_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId subsumedById => m_SubsumedById;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_SubsumedById_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  BoundedPlane_get_pose_m8302E13809156362584FA0AE137DD911D30665BA_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose => m_Pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_center_mA4667303D86B331F7EC5F278910145E7633EA973_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 center => m_Center;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Center_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoundedPlane_get_size_m204F4F37C0FB6F7294682D961B53F4F9639E3882_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 size => m_Size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_m_Size_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_alignment_m72B849B54224B1493DFF448BCF2AB8634751DC71_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public PlaneAlignment alignment => m_Alignment;
		int32_t L_0 = __this->get_m_Alignment_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_trackingState_mBF10ADD6DD969A0DA7FCC8299FFA56AEB9B837CA_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->get_m_TrackingState_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t BoundedPlane_get_nativePtr_m626921F0179BF37BC5F06C2587D298FB40F31FE9_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_8();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BoundedPlane_get_classification_m842651162BFE9633C414B16CD1D86FBBE86589A3_inline (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * __this, const RuntimeMethod* method)
{
	{
		// public PlaneClassification classification => m_Classification;
		int32_t L_0 = __this->get_m_Classification_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_m6E08A16717F2B9EE8B24EBA6B234A03098D5F05D_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___other0;
		float L_2 = L_1.get_x_0();
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___other0;
		float L_5 = L_4.get_y_1();
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  TrackableId_get_invalidId_m06B698EFFA7748E185299C72B5CEC1AA5B221F85_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = ((TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_il2cpp_TypeInfo_var))->get_s_InvalidId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  Configuration_get_descriptor_mD7539C193666CFFB9258CE40D88EB7DA3C48DDDA_inline (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method)
{
	{
		// public ConfigurationDescriptor descriptor { get; private set; }
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_0 = __this->get_U3CdescriptorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Configuration_get_features_m8F2353DC080AF51D657C4CBD8E9DB4DAEAB72B5A_inline (Configuration_t29C11C7E576D64F717543048BDA1EBCEF0CF60C0 * __this, const RuntimeMethod* method)
{
	{
		// public Feature features { get; private set; }
		uint64_t L_0 = __this->get_U3CfeaturesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConfigurationDescriptor_get_identifier_m829E6611B4E4B0E33E8E87902FDFCDAEC0F2B8A0_inline (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr identifier => m_Identifier;
		intptr_t L_0 = __this->get_m_Identifier_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConfigurationDescriptor_get_capabilities_mD48908AE629D6E78D84F355B59CF742ABFD7C649_inline (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method)
{
	{
		// public Feature capabilities => m_Capabilities;
		uint64_t L_0 = __this->get_m_Capabilities_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConfigurationDescriptor_get_rank_mF775801AAD4BC8E980682B569F676BD536BA78B8_inline (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * __this, const RuntimeMethod* method)
{
	{
		// public int rank => m_Rank;
		int32_t L_0 = __this->get_m_Rank_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_devicePosition_mB114C7E266482571036C8286D78E97610FE6DDA4_inline (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Control devicePosition { get; private set; }
		Vector3Control_tADE778D5286B97C6E5622015537184D00B70C423 * L_0 = ___value0;
		__this->set_U3CdevicePositionU3Ek__BackingField_35(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandheldARInputDevice_set_deviceRotation_m2B589EBB6E15931FF98096FFE4B7FDBC768A9F12_inline (HandheldARInputDevice_tDA83371435104E92F19A3E1B96D19A2F2CEC2321 * __this, QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * ___value0, const RuntimeMethod* method)
{
	{
		// public QuaternionControl deviceRotation { get; private set; }
		QuaternionControl_tB20AF817B98ED83982A6C539E34F03B3BDD7A7D5 * L_0 = ___value0;
		__this->set_U3CdeviceRotationU3Ek__BackingField_36(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m219B741FAF6D36DB7B8CFDC588EA93677FCE174B_inline (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->get_m_SubId1_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m136D4970BDCC7323020913A9B5303584AA105B34_inline (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * __this, const RuntimeMethod* method)
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->get_m_SubId2_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  XRAnchor_get_trackableId_mE8C852BEAA9025FD1CB643F41836CA72C25E7B92_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId => m_Id;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_Id_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRAnchor_get_pose_mD135777376B2898B0A151AD5AA8FD4BBD7C7C5FF_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose => m_Pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRAnchor_get_trackingState_m2B3E621BA332B1E74CF8EC94FA8B18EDAF68F462_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->get_m_TrackingState_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_m47E36685E001BF3810BF6A45B8DF8128080DAEFB_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->get_m_NativePtr_4();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t  XRAnchor_get_sessionId_m61DAD2C82C4D725E773BFAB2E8A8BE50EDEEC379_inline (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * __this, const RuntimeMethod* method)
{
	{
		// public Guid sessionId => m_SessionId;
		Guid_t  L_0 = __this->get_m_SessionId_5();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  XRAnchor_get_defaultValue_m4E0B24D0D2E64DE1B2BE81F781410CFB6031B6CF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRAnchor defaultValue => s_Default;
		IL2CPP_RUNTIME_CLASS_INIT(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var);
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_0 = ((XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields*)il2cpp_codegen_static_fields_for(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_il2cpp_TypeInfo_var))->get_s_Default_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m7C38252CE360F061914361192300AECA8CB5307B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_mEC6863CDB21597618394D2ED4182A9ED3ACBF220_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m6A1DFCD062C95265E8E1C6502D44D6C464B50EED_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m672B1F3CC7A12E8569D801F7C79538753C0D9C2D_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m169F49BB024275E13DF95C274191A675CC0F66B9_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_mA453100A7A8FAB35FBE7154E63B5A17D518F41B6_inline (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m13B6C9977641F3E284C69AA3554EBD19478538B8_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRAnchorSubsystemDescriptor_set_supportsTrackableAttachments_m11271C1EBC306EB3FDA99D24D45D88DB31DCCC38_inline (XRAnchorSubsystemDescriptor_t3BD7F9922EF5C04185D59349C76D625BC1E44E3B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  BoundedPlane_get_defaultValue_m0C1F8EA6D681C3333CF429425254F63E1BE99003_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BoundedPlane defaultValue => s_Default;
		IL2CPP_RUNTIME_CLASS_INIT(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var);
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_0 = ((BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields*)il2cpp_codegen_static_fields_for(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_il2cpp_TypeInfo_var))->get_s_Default_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m62022D2EE6912F0B1BDBCA687A4FC63321DE3F86_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m496CFFD5CAAF878266582DECEC5CDFB92A9C0A55_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_m67ACD12818B5C91D42707639EA205E13BB15171A_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_mBC3012C667106D47D9429F9C8001774038A38216_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m2BB45C7A44E14368A0FAEADA130A6F6158B1042D_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_m4E3BE200E11784D049B94A054F15E4C76D29D7C6_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m050259C60036A9B08459ED7BDFC06D24270927B2_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_mF6CB379C9781FE8B8473949DA99196508EF91DB5_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m2A4804EC8ED1137CB21F6589FBAE85CF01B1A5A0_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m5BA762B342FCF81EAE6E3645D3BAF04C1E8EAAD9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->get_U3CsupportsBoundaryVerticesU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_mDF9E00121A6509790D704D77FF0B863A99436747_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m0396A2A62F840D9E283402BFB3681A5CC19C810E_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->get_U3CsupportsClassificationU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_mA74FCEFD28F8CC7E1BB2E97E69DFA8E20BD0904A_inline (XRPlaneSubsystemDescriptor_t98B66B6D99804656DDDB45C9BDA61C2EE4EDB483 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  XRRaycast_get_trackableId_m58733DD621FACDF9F32633AA0247FDDE4B6F4EBE_inline (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_0 = __this->get_m_TrackableId_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRRaycast_get_pose_m62D623D6E37AE82B0E223804F034E604037E24E1_inline (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method)
{
	{
		// public Pose pose => m_Pose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_Pose_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycast_get_trackingState_m8A926660A7D03F72E558198E760AE01936FB8DF0_inline (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->get_m_TrackingState_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  XRRaycast_get_defaultValue_mC4E3CDC7E9F4C17F3708B82DCDA95FFD395C2BE0_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycast defaultValue => s_Default;
		IL2CPP_RUNTIME_CLASS_INIT(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var);
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_0 = ((XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_il2cpp_TypeInfo_var))->get_s_Default_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m9A34BB7AAEFCB43E1627AA047A68C058D730EDC4_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_m6AFB0E29047AF8A34F780EBACFC0CDDA44AAF50C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mCFC851E4227172E1E01130E60CC64F4B2FFC8C63_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_m76E31D4FF84E88050FE4E8B6C44FB6E4E71A5A3A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m573D624059387ECB8EAB5386DDA18F04A8B74A29_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m5242363FA90D64968F4ED236EC35973B7ABC180A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_mA63CC456D0FD28CD57DD2D0C3DEB3AC0DEA60C8B_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_m0DA573866D46012B650151C7538796542A3E2C70_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->get_U3CsupportedTrackableTypesU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_mAFC6D42C7EFE47219C8461162392E994364BBD53_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mB923DE37AE981FB26768CFF11B34A63F481A261A_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->get_U3CsupportsTrackedRaycastsU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_mD10EA0CD0E6F8FB9D499544B0DE27A5EBCED30C9_inline (XRRaycastSubsystemDescriptor_tB9891F63FC4871797BCD04DB7167142BE2049B2C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackedRaycastsU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mA521F604882D1F4C6FD30262F3E2C3B0609BFC55_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_providerType_mC64DDA0FD5E23FD53F7B9DAEAF4433487436835E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = __this->get_U3CproviderTypeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemTypeOverride_mFB0EAD46EF91216924D0509C72DF82ADA526B99D_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = __this->get_U3CsubsystemTypeOverrideU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m706A828C9AE61FF74DF4640D80E52148CDF4F3AD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_mE8D2939BADC8A5579685249EEA3C12617416CEF2_inline (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_m1E603F47BF0A28EE5E7377A28D9D2BB29BFD3B6F_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m9FB2B904E2E7E4EC51E2089C8DDE97463F4C031D_inline (XRSessionSubsystemDescriptor_tC45A49D1179090D5C6D3B3DC1DC31CAB5A627B1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m3200C056D5EF350333CBEC08C5BADCB3F9B3588A_inline (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method)
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->get_U3CscreenOrientationU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  XRSessionUpdateParams_get_screenDimensions_m68257DCBBAEB4090559AC18A180C8E54D02F5118_inline (XRSessionUpdateParams_t106E075C3B348969D6F3B634195F295CE47DB77F * __this, const RuntimeMethod* method)
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_0 = __this->get_U3CscreenDimensionsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m96F4F602CE85AFD675A8096AB9D5E2D4544382FF_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)__this, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&___other0), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCB169DF169C36D9D12651785DCBF71ABCC10FD9D_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m9E012FF4CD325826F838F663BAEE045C452A3C26_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mC525A48B08F8F826275950FFB61C780C4AEA6A6B_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m0B0516A50FFA22C3F60483E3498DC6BB1D460995_inline (Cinfo_tF42131D7F2B721976AAF20DD0240D9C46397F7F7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m940361693A3C925B2180733D87611B5FDF0357D7_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8B6A7EE025CCB9B5B5E26E6F4C779DFE09955744_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mBC4F1CC20B4DF3D551BAFC1C38245F457E262A58_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_mBC9B4572592B71328A96AF58DEB047528470C440_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_mFF310EF7B9F8D9C9F9689CF9D1D2BEDDFF93F9F0_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m70B1D6D27946FB12BF0D3D3AF8C6DC8DC3F399B9_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mC6F86EB28D38CC483AD8F9FD161013BDE3F4AFEF_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mA3B11D7CA4F960C89E729E5161AD7CC3211B933C_inline (Cinfo_tC49A76BF09DB3F926B17955E1B8D729DC9B272AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsClassificationU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m0CB4DA3E552ED7940FBA88D8EE3BB6379EA255D6_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m20992869A706183D7180A2030C84B5445DCF0BE3_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_mD5425E55455A21B7361B847FD6B78998AC70CD5B_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mCF77DEFDDC3931682A33A063DF2F25FFBF07B807_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m74BF70E612BCAFAD380C108700905E5B8C5425FA_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_mABC320F641164FC1DB2AB9DB3F1E075B6235A785_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_mD7575B5CAA4BB3652786E2AE2C1B94CF8BEB423C_inline (Cinfo_tAC330BB49E2D0C7E18C66AB4018927A6EC856E01 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackedRaycastsU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m05EE61C58E505A8F20DEA68862395341F1DAD3FD_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m9CB328CEF43BCE3E59F26A97D32AEE1D201F8787_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m6A2CAB13FAD54AB05458DC5DE1FAB5C651E9D656_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2BCF5FEFC25D812C3E7F00725B49AE02540B2F8E_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type providerType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CproviderTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m30FDD93193E0D694ABB33E184552AAF1A8AA36E6_inline (Cinfo_t2842A97DA95F40ECADDCA24A291B6114A3A5F71A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemTypeOverrideU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemWithProvider_3_get_provider_m1C17796ABB973D3A5F6B1C31B84298C076AA7E1B_gshared_inline (SubsystemWithProvider_3_t80ABC03E4A5E84C63AB7C26719F2C5CA1FAA7EC2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CproviderU3Ek__BackingField_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
