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

// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t0C35F0DCE6015E0E091D5C9AFCF75A946C5A4E88;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t317F2B173027D590854501BFA0E41816920EE28F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t561091444641AC7B44EEFBB90A36E158321A3C31;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_t52520472B990486B4E3DA929AE4EB9DF26BD8590;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t533AA0DD623EF78CE242E7474B4B2482635E2F5D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t974CC63BDD98419020A183479825699A07225CE5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_tE294F50171390B347357336F8D375ACEB362AA3A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>>
struct EventFunction_1_t9F1E81378E4ACFEAC41F80FBD8F4FA8165556153;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_t658A1A9246588CB4460AE8B7ADEDE88729B249D6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_tA8B1309E76417CA6B3E50B90F8B9172CAB88905F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler>
struct EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_t15D4190FFD4AB9C7E23B43771EAD9BFD5FCD88C0;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler>
struct EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler>
struct EventFunction_1_tBD3326500E9B7F046F5BAC6B46700DFC42C037C6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>
struct EventFunction_1_t097A48E1E05DE60C15E6F9A6ED53A1C193DCCA3C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>
struct EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler>
struct EventFunction_1_t1B703F528989FD998F130B2BA4C61FE4A07A14C1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler>
struct EventFunction_1_t5DDF018AF348B20C9801E5551D6AC4B7CF2BEE16;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>
struct EventFunction_1_tC2AD1C425F66B89ADD1B71E5721CC0B923AF1831;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>
struct EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler>
struct EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler>
struct EventFunction_1_tBD5A5BCCF2913A2D38DDE92D0C1D048D44953647;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>
struct EventFunction_1_t9BCE193E8DA6E4CF18C3B1D164C5081D5603049F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler>
struct EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler>
struct EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t47C46DE5317B27E52F483D254531A2D6A86BF927;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t03651600101A901771C241588D9401D9E466D779;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t92F237401150131C650E068132364E4714AFE903;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t529C10528E8778EC56BA0DF91EE52405B7929BA6;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t4DBF843B9E1A6950FB010155F4EFB24B47A6ACBE;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t3853A01CCDA8787C27D3B1FFFBE2DE139D4DBC49;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t22EE0774924EFE1A480794C676065D0D2F8F3EBE;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tA6E1A3FA2ECD99453B28C8A25EFA6C8D281F6E68;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider
struct IMixedRealityGazeProvider_t43BD2688368E8EA48A947A80E67647A9400A64C7;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t063D0EA483485B6D709977E7F4462E3731048173;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t7F468E3A82B378360F2E539D49C04182B3592E7F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t8D37FC8125ABE0DE1BDF3F57FD814936F450A632;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_tC811A6F178BDBEE2BF7C3E78611ABA4CBAB26F51;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t2525DC563441835D15BFEC09147969178627DBCA;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData
struct TeleportEventData_t5F2F1759D160D34A5D086D503268206F16CBA267;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker
struct SceneContentTracker_t7C42810F8B4D984B14C534F9480C5B78D94CCB52;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor
struct SceneLightingExecutor_t39456CD97F399C7EF772B4553D35565B0972E038;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
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
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


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

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::_matches
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;

public:
	inline static int32_t get_offset_of__regex_0() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____regex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_0() const { return ____regex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_0() { return &____regex_0; }
	inline void set__regex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_0), (void*)value);
	}

	inline static int32_t get_offset_of__matches_1() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____matches_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__matches_1() const { return ____matches_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__matches_1() { return &____matches_1; }
	inline void set__matches_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____matches_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_1), (void*)value);
	}

	inline static int32_t get_offset_of__done_2() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____done_2)); }
	inline bool get__done_2() const { return ____done_2; }
	inline bool* get_address_of__done_2() { return &____done_2; }
	inline void set__done_2(bool value)
	{
		____done_2 = value;
	}

	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____input_3)); }
	inline String_t* get__input_3() const { return ____input_3; }
	inline String_t** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(String_t* value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_3), (void*)value);
	}

	inline static int32_t get_offset_of__beginning_4() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____beginning_4)); }
	inline int32_t get__beginning_4() const { return ____beginning_4; }
	inline int32_t* get_address_of__beginning_4() { return &____beginning_4; }
	inline void set__beginning_4(int32_t value)
	{
		____beginning_4 = value;
	}

	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__startat_6() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____startat_6)); }
	inline int32_t get__startat_6() const { return ____startat_6; }
	inline int32_t* get_address_of__startat_6() { return &____startat_6; }
	inline void set__startat_6(int32_t value)
	{
		____startat_6 = value;
	}

	inline static int32_t get_offset_of__prevlen_7() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____prevlen_7)); }
	inline int32_t get__prevlen_7() const { return ____prevlen_7; }
	inline int32_t* get_address_of__prevlen_7() { return &____prevlen_7; }
	inline void set__prevlen_7(int32_t value)
	{
		____prevlen_7 = value;
	}
};

struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection::infinite
	int32_t ___infinite_8;

public:
	inline static int32_t get_offset_of_infinite_8() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields, ___infinite_8)); }
	inline int32_t get_infinite_8() const { return ___infinite_8; }
	inline int32_t* get_address_of_infinite_8() { return &___infinite_8; }
	inline void set_infinite_8(int32_t value)
	{
		___infinite_8 = value;
	}
};


// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
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


// System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 
{
public:
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};


// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalReturnKeys_4;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalExceptionKeys_5;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_4() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalReturnKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalReturnKeys_4() const { return ___InternalReturnKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalReturnKeys_4() { return &___InternalReturnKeys_4; }
	inline void set_InternalReturnKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalReturnKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalReturnKeys_4), (void*)value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_5() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalExceptionKeys_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalExceptionKeys_5() const { return ___InternalExceptionKeys_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalExceptionKeys_5() { return &___InternalExceptionKeys_5; }
	inline void set_InternalExceptionKeys_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalExceptionKeys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalExceptionKeys_5), (void*)value);
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

// Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) = 0;
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


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct DisplayType_tF4CE87AD8DD2BF0545BCB1C79302FC49AE01A80E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_tF4CE87AD8DD2BF0545BCB1C79302FC49AE01A80E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E  : public RuntimeObject
{
public:
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_lock
	RuntimeObject * ___m_lock_2;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_eventObj
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_eventObj_3;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_combinedState
	int32_t ___m_combinedState_4;

public:
	inline static int32_t get_offset_of_m_lock_2() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_lock_2)); }
	inline RuntimeObject * get_m_lock_2() const { return ___m_lock_2; }
	inline RuntimeObject ** get_address_of_m_lock_2() { return &___m_lock_2; }
	inline void set_m_lock_2(RuntimeObject * value)
	{
		___m_lock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lock_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventObj_3() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_eventObj_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_eventObj_3() const { return ___m_eventObj_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_eventObj_3() { return &___m_eventObj_3; }
	inline void set_m_eventObj_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_eventObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventObj_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_combinedState_4() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_combinedState_4)); }
	inline int32_t get_m_combinedState_4() const { return ___m_combinedState_4; }
	inline int32_t* get_address_of_m_combinedState_4() { return &___m_combinedState_4; }
	inline void set_m_combinedState_4(int32_t value)
	{
		___m_combinedState_4 = value;
	}
};

struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.ManualResetEventSlim::s_cancellationTokenCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCallback_14;

public:
	inline static int32_t get_offset_of_s_cancellationTokenCallback_14() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields, ___s_cancellationTokenCallback_14)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCallback_14() const { return ___s_cancellationTokenCallback_14; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCallback_14() { return &___s_cancellationTokenCallback_14; }
	inline void set_s_cancellationTokenCallback_14(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCallback_14), (void*)value);
	}
};


// Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
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


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
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
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) = 0;
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


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t91707B0D13DDC20C86CC09C61F754C534B74191E  : public BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t3853A01CCDA8787C27D3B1FFFBE2DE139D4DBC49 * ___dataProviders_17;

public:
	inline static int32_t get_offset_of_dataProviders_17() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t91707B0D13DDC20C86CC09C61F754C534B74191E, ___dataProviders_17)); }
	inline List_1_t3853A01CCDA8787C27D3B1FFFBE2DE139D4DBC49 * get_dataProviders_17() const { return ___dataProviders_17; }
	inline List_1_t3853A01CCDA8787C27D3B1FFFBE2DE139D4DBC49 ** get_address_of_dataProviders_17() { return &___dataProviders_17; }
	inline void set_dataProviders_17(List_1_t3853A01CCDA8787C27D3B1FFFBE2DE139D4DBC49 * value)
	{
		___dataProviders_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_17), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_t91707B0D13DDC20C86CC09C61F754C534B74191E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_19;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_18() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t91707B0D13DDC20C86CC09C61F754C534B74191E_StaticFields, ___UpdatePerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_18() const { return ___UpdatePerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_18() { return &___UpdatePerfMarker_18; }
	inline void set_UpdatePerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t91707B0D13DDC20C86CC09C61F754C534B74191E_StaticFields, ___LateUpdatePerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_19() const { return ___LateUpdatePerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_19() { return &___LateUpdatePerfMarker_19; }
	inline void set_LateUpdatePerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_19 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974  : public BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___diagnosticVisualizationParent_18;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t2525DC563441835D15BFEC09147969178627DBCA * ___visualProfiler_19;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_t7F468E3A82B378360F2E539D49C04182B3592E7F * ___diagnosticsSystemProfile_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_24;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_25;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t22EE0774924EFE1A480794C676065D0D2F8F3EBE * ___eventData_26;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_29;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_30;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_31;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_33;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_18() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___diagnosticVisualizationParent_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_diagnosticVisualizationParent_18() const { return ___diagnosticVisualizationParent_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_diagnosticVisualizationParent_18() { return &___diagnosticVisualizationParent_18; }
	inline void set_diagnosticVisualizationParent_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___diagnosticVisualizationParent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_18), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_19() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___visualProfiler_19)); }
	inline MixedRealityToolkitVisualProfiler_t2525DC563441835D15BFEC09147969178627DBCA * get_visualProfiler_19() const { return ___visualProfiler_19; }
	inline MixedRealityToolkitVisualProfiler_t2525DC563441835D15BFEC09147969178627DBCA ** get_address_of_visualProfiler_19() { return &___visualProfiler_19; }
	inline void set_visualProfiler_19(MixedRealityToolkitVisualProfiler_t2525DC563441835D15BFEC09147969178627DBCA * value)
	{
		___visualProfiler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_19), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_20() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___diagnosticsSystemProfile_20)); }
	inline MixedRealityDiagnosticsProfile_t7F468E3A82B378360F2E539D49C04182B3592E7F * get_diagnosticsSystemProfile_20() const { return ___diagnosticsSystemProfile_20; }
	inline MixedRealityDiagnosticsProfile_t7F468E3A82B378360F2E539D49C04182B3592E7F ** get_address_of_diagnosticsSystemProfile_20() { return &___diagnosticsSystemProfile_20; }
	inline void set_diagnosticsSystemProfile_20(MixedRealityDiagnosticsProfile_t7F468E3A82B378360F2E539D49C04182B3592E7F * value)
	{
		___diagnosticsSystemProfile_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_20), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___showDiagnostics_21)); }
	inline bool get_showDiagnostics_21() const { return ___showDiagnostics_21; }
	inline bool* get_address_of_showDiagnostics_21() { return &___showDiagnostics_21; }
	inline void set_showDiagnostics_21(bool value)
	{
		___showDiagnostics_21 = value;
	}

	inline static int32_t get_offset_of_showProfiler_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___showProfiler_22)); }
	inline bool get_showProfiler_22() const { return ___showProfiler_22; }
	inline bool* get_address_of_showProfiler_22() { return &___showProfiler_22; }
	inline void set_showProfiler_22(bool value)
	{
		___showProfiler_22 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___showFrameInfo_23)); }
	inline bool get_showFrameInfo_23() const { return ___showFrameInfo_23; }
	inline bool* get_address_of_showFrameInfo_23() { return &___showFrameInfo_23; }
	inline void set_showFrameInfo_23(bool value)
	{
		___showFrameInfo_23 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___showMemoryStats_24)); }
	inline bool get_showMemoryStats_24() const { return ___showMemoryStats_24; }
	inline bool* get_address_of_showMemoryStats_24() { return &___showMemoryStats_24; }
	inline void set_showMemoryStats_24(bool value)
	{
		___showMemoryStats_24 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___frameSampleRate_25)); }
	inline float get_frameSampleRate_25() const { return ___frameSampleRate_25; }
	inline float* get_address_of_frameSampleRate_25() { return &___frameSampleRate_25; }
	inline void set_frameSampleRate_25(float value)
	{
		___frameSampleRate_25 = value;
	}

	inline static int32_t get_offset_of_eventData_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___eventData_26)); }
	inline DiagnosticsEventData_t22EE0774924EFE1A480794C676065D0D2F8F3EBE * get_eventData_26() const { return ___eventData_26; }
	inline DiagnosticsEventData_t22EE0774924EFE1A480794C676065D0D2F8F3EBE ** get_address_of_eventData_26() { return &___eventData_26; }
	inline void set_eventData_26(DiagnosticsEventData_t22EE0774924EFE1A480794C676065D0D2F8F3EBE * value)
	{
		___eventData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_26), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_29() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___windowAnchor_29)); }
	inline int32_t get_windowAnchor_29() const { return ___windowAnchor_29; }
	inline int32_t* get_address_of_windowAnchor_29() { return &___windowAnchor_29; }
	inline void set_windowAnchor_29(int32_t value)
	{
		___windowAnchor_29 = value;
	}

	inline static int32_t get_offset_of_windowOffset_30() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___windowOffset_30)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_30() const { return ___windowOffset_30; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_30() { return &___windowOffset_30; }
	inline void set_windowOffset_30(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_30 = value;
	}

	inline static int32_t get_offset_of_windowScale_31() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___windowScale_31)); }
	inline float get_windowScale_31() const { return ___windowScale_31; }
	inline float* get_address_of_windowScale_31() { return &___windowScale_31; }
	inline void set_windowScale_31(float value)
	{
		___windowScale_31 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_32() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___windowFollowSpeed_32)); }
	inline float get_windowFollowSpeed_32() const { return ___windowFollowSpeed_32; }
	inline float* get_address_of_windowFollowSpeed_32() { return &___windowFollowSpeed_32; }
	inline void set_windowFollowSpeed_32(float value)
	{
		___windowFollowSpeed_32 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_33() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974, ___showProfilerDuringMRC_33)); }
	inline bool get_showProfilerDuringMRC_33() const { return ___showProfilerDuringMRC_33; }
	inline bool* get_address_of_showProfilerDuringMRC_33() { return &___showProfilerDuringMRC_33; }
	inline void set_showProfilerDuringMRC_33(bool value)
	{
		___showProfilerDuringMRC_33 = value;
	}
};

struct MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnDiagnosticsChangedPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_t15D4190FFD4AB9C7E23B43771EAD9BFD5FCD88C0 * ___OnDiagnosticsChanged_28;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChangedPerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974_StaticFields, ___OnDiagnosticsChangedPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnDiagnosticsChangedPerfMarker_27() const { return ___OnDiagnosticsChangedPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnDiagnosticsChangedPerfMarker_27() { return &___OnDiagnosticsChangedPerfMarker_27; }
	inline void set_OnDiagnosticsChangedPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnDiagnosticsChangedPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnDiagnosticsChanged_28() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974_StaticFields, ___OnDiagnosticsChanged_28)); }
	inline EventFunction_1_t15D4190FFD4AB9C7E23B43771EAD9BFD5FCD88C0 * get_OnDiagnosticsChanged_28() const { return ___OnDiagnosticsChanged_28; }
	inline EventFunction_1_t15D4190FFD4AB9C7E23B43771EAD9BFD5FCD88C0 ** get_address_of_OnDiagnosticsChanged_28() { return &___OnDiagnosticsChanged_28; }
	inline void set_OnDiagnosticsChanged_28(EventFunction_1_t15D4190FFD4AB9C7E23B43771EAD9BFD5FCD88C0 * value)
	{
		___OnDiagnosticsChanged_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_28), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467  : public BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpInProgress
	bool ___managerSceneOpInProgress_18;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::managerSceneOpProgress
	float ___managerSceneOpProgress_19;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneContentTracker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::contentTracker
	SceneContentTracker_t7C42810F8B4D984B14C534F9480C5B78D94CCB52 * ___contentTracker_20;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/SceneLightingExecutor Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::lightingExecutor
	SceneLightingExecutor_t39456CD97F399C7EF772B4553D35565B0972E038 * ___lightingExecutor_21;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_22;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillLoadContentU3Ek__BackingField_23;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentLoaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentLoadedU3Ek__BackingField_24;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadContent>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnWillUnloadContentU3Ek__BackingField_25;
	// System.Action`1<System.Collections.Generic.IEnumerable`1<System.String>> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnContentUnloaded>k__BackingField
	Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * ___U3COnContentUnloadedU3Ek__BackingField_26;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadLightingU3Ek__BackingField_27;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingLoadedU3Ek__BackingField_28;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadLighting>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadLightingU3Ek__BackingField_29;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnLightingUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnLightingUnloadedU3Ek__BackingField_30;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillLoadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillLoadSceneU3Ek__BackingField_31;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneLoaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneLoadedU3Ek__BackingField_32;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnWillUnloadScene>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnWillUnloadSceneU3Ek__BackingField_33;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<OnSceneUnloaded>k__BackingField
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___U3COnSceneUnloadedU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationInProgress>k__BackingField
	bool ___U3CSceneOperationInProgressU3Ek__BackingField_35;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SceneOperationProgress>k__BackingField
	float ___U3CSceneOperationProgressU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationInProgress>k__BackingField
	bool ___U3CLightingOperationInProgressU3Ek__BackingField_37;
	// System.Single Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<LightingOperationProgress>k__BackingField
	float ___U3CLightingOperationProgressU3Ek__BackingField_38;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<ActiveLightingScene>k__BackingField
	String_t* ___U3CActiveLightingSceneU3Ek__BackingField_39;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<WaitingToProceed>k__BackingField
	bool ___U3CWaitingToProceedU3Ek__BackingField_40;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_41;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_42;

public:
	inline static int32_t get_offset_of_managerSceneOpInProgress_18() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___managerSceneOpInProgress_18)); }
	inline bool get_managerSceneOpInProgress_18() const { return ___managerSceneOpInProgress_18; }
	inline bool* get_address_of_managerSceneOpInProgress_18() { return &___managerSceneOpInProgress_18; }
	inline void set_managerSceneOpInProgress_18(bool value)
	{
		___managerSceneOpInProgress_18 = value;
	}

	inline static int32_t get_offset_of_managerSceneOpProgress_19() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___managerSceneOpProgress_19)); }
	inline float get_managerSceneOpProgress_19() const { return ___managerSceneOpProgress_19; }
	inline float* get_address_of_managerSceneOpProgress_19() { return &___managerSceneOpProgress_19; }
	inline void set_managerSceneOpProgress_19(float value)
	{
		___managerSceneOpProgress_19 = value;
	}

	inline static int32_t get_offset_of_contentTracker_20() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___contentTracker_20)); }
	inline SceneContentTracker_t7C42810F8B4D984B14C534F9480C5B78D94CCB52 * get_contentTracker_20() const { return ___contentTracker_20; }
	inline SceneContentTracker_t7C42810F8B4D984B14C534F9480C5B78D94CCB52 ** get_address_of_contentTracker_20() { return &___contentTracker_20; }
	inline void set_contentTracker_20(SceneContentTracker_t7C42810F8B4D984B14C534F9480C5B78D94CCB52 * value)
	{
		___contentTracker_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentTracker_20), (void*)value);
	}

	inline static int32_t get_offset_of_lightingExecutor_21() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___lightingExecutor_21)); }
	inline SceneLightingExecutor_t39456CD97F399C7EF772B4553D35565B0972E038 * get_lightingExecutor_21() const { return ___lightingExecutor_21; }
	inline SceneLightingExecutor_t39456CD97F399C7EF772B4553D35565B0972E038 ** get_address_of_lightingExecutor_21() { return &___lightingExecutor_21; }
	inline void set_lightingExecutor_21(SceneLightingExecutor_t39456CD97F399C7EF772B4553D35565B0972E038 * value)
	{
		___lightingExecutor_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightingExecutor_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3CNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CNameU3Ek__BackingField_22() const { return ___U3CNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_22() { return &___U3CNameU3Ek__BackingField_22; }
	inline void set_U3CNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadContentU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnWillLoadContentU3Ek__BackingField_23)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillLoadContentU3Ek__BackingField_23() const { return ___U3COnWillLoadContentU3Ek__BackingField_23; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillLoadContentU3Ek__BackingField_23() { return &___U3COnWillLoadContentU3Ek__BackingField_23; }
	inline void set_U3COnWillLoadContentU3Ek__BackingField_23(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillLoadContentU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadContentU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentLoadedU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnContentLoadedU3Ek__BackingField_24)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentLoadedU3Ek__BackingField_24() const { return ___U3COnContentLoadedU3Ek__BackingField_24; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentLoadedU3Ek__BackingField_24() { return &___U3COnContentLoadedU3Ek__BackingField_24; }
	inline void set_U3COnContentLoadedU3Ek__BackingField_24(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentLoadedU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentLoadedU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadContentU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnWillUnloadContentU3Ek__BackingField_25)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnWillUnloadContentU3Ek__BackingField_25() const { return ___U3COnWillUnloadContentU3Ek__BackingField_25; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnWillUnloadContentU3Ek__BackingField_25() { return &___U3COnWillUnloadContentU3Ek__BackingField_25; }
	inline void set_U3COnWillUnloadContentU3Ek__BackingField_25(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnWillUnloadContentU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadContentU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnContentUnloadedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnContentUnloadedU3Ek__BackingField_26)); }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * get_U3COnContentUnloadedU3Ek__BackingField_26() const { return ___U3COnContentUnloadedU3Ek__BackingField_26; }
	inline Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 ** get_address_of_U3COnContentUnloadedU3Ek__BackingField_26() { return &___U3COnContentUnloadedU3Ek__BackingField_26; }
	inline void set_U3COnContentUnloadedU3Ek__BackingField_26(Action_1_t8B3FD6155D04E2C2D284B5C21B863CDC18E89439 * value)
	{
		___U3COnContentUnloadedU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnContentUnloadedU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadLightingU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnWillLoadLightingU3Ek__BackingField_27)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadLightingU3Ek__BackingField_27() const { return ___U3COnWillLoadLightingU3Ek__BackingField_27; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadLightingU3Ek__BackingField_27() { return &___U3COnWillLoadLightingU3Ek__BackingField_27; }
	inline void set_U3COnWillLoadLightingU3Ek__BackingField_27(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadLightingU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadLightingU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingLoadedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnLightingLoadedU3Ek__BackingField_28)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingLoadedU3Ek__BackingField_28() const { return ___U3COnLightingLoadedU3Ek__BackingField_28; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingLoadedU3Ek__BackingField_28() { return &___U3COnLightingLoadedU3Ek__BackingField_28; }
	inline void set_U3COnLightingLoadedU3Ek__BackingField_28(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingLoadedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingLoadedU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadLightingU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnWillUnloadLightingU3Ek__BackingField_29)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadLightingU3Ek__BackingField_29() const { return ___U3COnWillUnloadLightingU3Ek__BackingField_29; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadLightingU3Ek__BackingField_29() { return &___U3COnWillUnloadLightingU3Ek__BackingField_29; }
	inline void set_U3COnWillUnloadLightingU3Ek__BackingField_29(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadLightingU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadLightingU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnLightingUnloadedU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnLightingUnloadedU3Ek__BackingField_30)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnLightingUnloadedU3Ek__BackingField_30() const { return ___U3COnLightingUnloadedU3Ek__BackingField_30; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnLightingUnloadedU3Ek__BackingField_30() { return &___U3COnLightingUnloadedU3Ek__BackingField_30; }
	inline void set_U3COnLightingUnloadedU3Ek__BackingField_30(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnLightingUnloadedU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnLightingUnloadedU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillLoadSceneU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnWillLoadSceneU3Ek__BackingField_31)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillLoadSceneU3Ek__BackingField_31() const { return ___U3COnWillLoadSceneU3Ek__BackingField_31; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillLoadSceneU3Ek__BackingField_31() { return &___U3COnWillLoadSceneU3Ek__BackingField_31; }
	inline void set_U3COnWillLoadSceneU3Ek__BackingField_31(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillLoadSceneU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillLoadSceneU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneLoadedU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnSceneLoadedU3Ek__BackingField_32)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneLoadedU3Ek__BackingField_32() const { return ___U3COnSceneLoadedU3Ek__BackingField_32; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneLoadedU3Ek__BackingField_32() { return &___U3COnSceneLoadedU3Ek__BackingField_32; }
	inline void set_U3COnSceneLoadedU3Ek__BackingField_32(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneLoadedU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneLoadedU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnWillUnloadSceneU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnWillUnloadSceneU3Ek__BackingField_33)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnWillUnloadSceneU3Ek__BackingField_33() const { return ___U3COnWillUnloadSceneU3Ek__BackingField_33; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnWillUnloadSceneU3Ek__BackingField_33() { return &___U3COnWillUnloadSceneU3Ek__BackingField_33; }
	inline void set_U3COnWillUnloadSceneU3Ek__BackingField_33(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnWillUnloadSceneU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnWillUnloadSceneU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnSceneUnloadedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3COnSceneUnloadedU3Ek__BackingField_34)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_U3COnSceneUnloadedU3Ek__BackingField_34() const { return ___U3COnSceneUnloadedU3Ek__BackingField_34; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_U3COnSceneUnloadedU3Ek__BackingField_34() { return &___U3COnSceneUnloadedU3Ek__BackingField_34; }
	inline void set_U3COnSceneUnloadedU3Ek__BackingField_34(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___U3COnSceneUnloadedU3Ek__BackingField_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnSceneUnloadedU3Ek__BackingField_34), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneOperationInProgressU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3CSceneOperationInProgressU3Ek__BackingField_35)); }
	inline bool get_U3CSceneOperationInProgressU3Ek__BackingField_35() const { return ___U3CSceneOperationInProgressU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CSceneOperationInProgressU3Ek__BackingField_35() { return &___U3CSceneOperationInProgressU3Ek__BackingField_35; }
	inline void set_U3CSceneOperationInProgressU3Ek__BackingField_35(bool value)
	{
		___U3CSceneOperationInProgressU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CSceneOperationProgressU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3CSceneOperationProgressU3Ek__BackingField_36)); }
	inline float get_U3CSceneOperationProgressU3Ek__BackingField_36() const { return ___U3CSceneOperationProgressU3Ek__BackingField_36; }
	inline float* get_address_of_U3CSceneOperationProgressU3Ek__BackingField_36() { return &___U3CSceneOperationProgressU3Ek__BackingField_36; }
	inline void set_U3CSceneOperationProgressU3Ek__BackingField_36(float value)
	{
		___U3CSceneOperationProgressU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationInProgressU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3CLightingOperationInProgressU3Ek__BackingField_37)); }
	inline bool get_U3CLightingOperationInProgressU3Ek__BackingField_37() const { return ___U3CLightingOperationInProgressU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CLightingOperationInProgressU3Ek__BackingField_37() { return &___U3CLightingOperationInProgressU3Ek__BackingField_37; }
	inline void set_U3CLightingOperationInProgressU3Ek__BackingField_37(bool value)
	{
		___U3CLightingOperationInProgressU3Ek__BackingField_37 = value;
	}

	inline static int32_t get_offset_of_U3CLightingOperationProgressU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3CLightingOperationProgressU3Ek__BackingField_38)); }
	inline float get_U3CLightingOperationProgressU3Ek__BackingField_38() const { return ___U3CLightingOperationProgressU3Ek__BackingField_38; }
	inline float* get_address_of_U3CLightingOperationProgressU3Ek__BackingField_38() { return &___U3CLightingOperationProgressU3Ek__BackingField_38; }
	inline void set_U3CLightingOperationProgressU3Ek__BackingField_38(float value)
	{
		___U3CLightingOperationProgressU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CActiveLightingSceneU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3CActiveLightingSceneU3Ek__BackingField_39)); }
	inline String_t* get_U3CActiveLightingSceneU3Ek__BackingField_39() const { return ___U3CActiveLightingSceneU3Ek__BackingField_39; }
	inline String_t** get_address_of_U3CActiveLightingSceneU3Ek__BackingField_39() { return &___U3CActiveLightingSceneU3Ek__BackingField_39; }
	inline void set_U3CActiveLightingSceneU3Ek__BackingField_39(String_t* value)
	{
		___U3CActiveLightingSceneU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActiveLightingSceneU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CWaitingToProceedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3CWaitingToProceedU3Ek__BackingField_40)); }
	inline bool get_U3CWaitingToProceedU3Ek__BackingField_40() const { return ___U3CWaitingToProceedU3Ek__BackingField_40; }
	inline bool* get_address_of_U3CWaitingToProceedU3Ek__BackingField_40() { return &___U3CWaitingToProceedU3Ek__BackingField_40; }
	inline void set_U3CWaitingToProceedU3Ek__BackingField_40(bool value)
	{
		___U3CWaitingToProceedU3Ek__BackingField_40 = value;
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3CSourceIdU3Ek__BackingField_41)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_41() const { return ___U3CSourceIdU3Ek__BackingField_41; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_41() { return &___U3CSourceIdU3Ek__BackingField_41; }
	inline void set_U3CSourceIdU3Ek__BackingField_41(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467, ___U3CSourceNameU3Ek__BackingField_42)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_42() const { return ___U3CSourceNameU3Ek__BackingField_42; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_42() { return &___U3CSourceNameU3Ek__BackingField_42; }
	inline void set_U3CSourceNameU3Ek__BackingField_42(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_42), (void*)value);
	}
};

struct MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_43;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadNextContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadNextContentPerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadPrevContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadPrevContentPerfMarker_45;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentByTagPerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentByTagPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentByTagPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadContentPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::IsContentLoadedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsContentLoadedPerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetLightingScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetLightingScenePerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::SetManagerScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetManagerScenePerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::LoadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadScenesInternalPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::UnloadScenesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UnloadScenesInternalPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeLoadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeLoadedActionsPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillLoadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillLoadActionsPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeWillUnloadActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeWillUnloadActionsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::InvokeUnloadedActionsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___InvokeUnloadedActionsPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetScenePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetScenePerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem::GetLoadedContentScenesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetLoadedContentScenesPerfMarker_60;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_43() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___UpdatePerfMarker_43)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_43() const { return ___UpdatePerfMarker_43; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_43() { return &___UpdatePerfMarker_43; }
	inline void set_UpdatePerfMarker_43(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_43 = value;
	}

	inline static int32_t get_offset_of_LoadNextContentPerfMarker_44() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___LoadNextContentPerfMarker_44)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadNextContentPerfMarker_44() const { return ___LoadNextContentPerfMarker_44; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadNextContentPerfMarker_44() { return &___LoadNextContentPerfMarker_44; }
	inline void set_LoadNextContentPerfMarker_44(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadNextContentPerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_LoadPrevContentPerfMarker_45() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___LoadPrevContentPerfMarker_45)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadPrevContentPerfMarker_45() const { return ___LoadPrevContentPerfMarker_45; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadPrevContentPerfMarker_45() { return &___LoadPrevContentPerfMarker_45; }
	inline void set_LoadPrevContentPerfMarker_45(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadPrevContentPerfMarker_45 = value;
	}

	inline static int32_t get_offset_of_LoadContentByTagPerfMarker_46() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___LoadContentByTagPerfMarker_46)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentByTagPerfMarker_46() const { return ___LoadContentByTagPerfMarker_46; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentByTagPerfMarker_46() { return &___LoadContentByTagPerfMarker_46; }
	inline void set_LoadContentByTagPerfMarker_46(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentByTagPerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_UnloadContentByTagPerfMarker_47() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___UnloadContentByTagPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentByTagPerfMarker_47() const { return ___UnloadContentByTagPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentByTagPerfMarker_47() { return &___UnloadContentByTagPerfMarker_47; }
	inline void set_UnloadContentByTagPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentByTagPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_LoadContentPerfMarker_48() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___LoadContentPerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentPerfMarker_48() const { return ___LoadContentPerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentPerfMarker_48() { return &___LoadContentPerfMarker_48; }
	inline void set_LoadContentPerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_UnloadContentPerfMarker_49() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___UnloadContentPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadContentPerfMarker_49() const { return ___UnloadContentPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadContentPerfMarker_49() { return &___UnloadContentPerfMarker_49; }
	inline void set_UnloadContentPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadContentPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_IsContentLoadedPerfMarker_50() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___IsContentLoadedPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsContentLoadedPerfMarker_50() const { return ___IsContentLoadedPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsContentLoadedPerfMarker_50() { return &___IsContentLoadedPerfMarker_50; }
	inline void set_IsContentLoadedPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsContentLoadedPerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_SetLightingScenePerfMarker_51() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___SetLightingScenePerfMarker_51)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetLightingScenePerfMarker_51() const { return ___SetLightingScenePerfMarker_51; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetLightingScenePerfMarker_51() { return &___SetLightingScenePerfMarker_51; }
	inline void set_SetLightingScenePerfMarker_51(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetLightingScenePerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_SetManagerScenePerfMarker_52() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___SetManagerScenePerfMarker_52)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetManagerScenePerfMarker_52() const { return ___SetManagerScenePerfMarker_52; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetManagerScenePerfMarker_52() { return &___SetManagerScenePerfMarker_52; }
	inline void set_SetManagerScenePerfMarker_52(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetManagerScenePerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_LoadScenesInternalPerfMarker_53() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___LoadScenesInternalPerfMarker_53)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadScenesInternalPerfMarker_53() const { return ___LoadScenesInternalPerfMarker_53; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadScenesInternalPerfMarker_53() { return &___LoadScenesInternalPerfMarker_53; }
	inline void set_LoadScenesInternalPerfMarker_53(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadScenesInternalPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_UnloadScenesInternalPerfMarker_54() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___UnloadScenesInternalPerfMarker_54)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UnloadScenesInternalPerfMarker_54() const { return ___UnloadScenesInternalPerfMarker_54; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UnloadScenesInternalPerfMarker_54() { return &___UnloadScenesInternalPerfMarker_54; }
	inline void set_UnloadScenesInternalPerfMarker_54(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UnloadScenesInternalPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_InvokeLoadedActionsPerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___InvokeLoadedActionsPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeLoadedActionsPerfMarker_55() const { return ___InvokeLoadedActionsPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeLoadedActionsPerfMarker_55() { return &___InvokeLoadedActionsPerfMarker_55; }
	inline void set_InvokeLoadedActionsPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeLoadedActionsPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_InvokeWillLoadActionsPerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___InvokeWillLoadActionsPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillLoadActionsPerfMarker_56() const { return ___InvokeWillLoadActionsPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillLoadActionsPerfMarker_56() { return &___InvokeWillLoadActionsPerfMarker_56; }
	inline void set_InvokeWillLoadActionsPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillLoadActionsPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_InvokeWillUnloadActionsPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___InvokeWillUnloadActionsPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeWillUnloadActionsPerfMarker_57() const { return ___InvokeWillUnloadActionsPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeWillUnloadActionsPerfMarker_57() { return &___InvokeWillUnloadActionsPerfMarker_57; }
	inline void set_InvokeWillUnloadActionsPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeWillUnloadActionsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_InvokeUnloadedActionsPerfMarker_58() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___InvokeUnloadedActionsPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_InvokeUnloadedActionsPerfMarker_58() const { return ___InvokeUnloadedActionsPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_InvokeUnloadedActionsPerfMarker_58() { return &___InvokeUnloadedActionsPerfMarker_58; }
	inline void set_InvokeUnloadedActionsPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___InvokeUnloadedActionsPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_GetScenePerfMarker_59() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___GetScenePerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetScenePerfMarker_59() const { return ___GetScenePerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetScenePerfMarker_59() { return &___GetScenePerfMarker_59; }
	inline void set_GetScenePerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetScenePerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_GetLoadedContentScenesPerfMarker_60() { return static_cast<int32_t>(offsetof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_StaticFields, ___GetLoadedContentScenesPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetLoadedContentScenesPerfMarker_60() const { return ___GetLoadedContentScenesPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetLoadedContentScenesPerfMarker_60() { return &___GetLoadedContentScenesPerfMarker_60; }
	inline void set_GetLoadedContentScenesPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetLoadedContentScenesPerfMarker_60 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2  : public BaseCoreSystem_tC426C126FBF9D59913CCD51BF9FE4E5A2EB9ED3C
{
public:
	// Microsoft.MixedReality.Toolkit.Teleport.TeleportEventData Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportEventData
	TeleportEventData_t5F2F1759D160D34A5D086D503268206F16CBA267 * ___teleportEventData_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isTeleporting
	bool ___isTeleporting_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::isProcessingTeleportRequest
	bool ___isProcessingTeleportRequest_19;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::targetRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetRotation_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::eventSystemReference
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___eventSystemReference_22;
	// System.String Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_23;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::teleportDuration
	float ___teleportDuration_25;

public:
	inline static int32_t get_offset_of_teleportEventData_17() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2, ___teleportEventData_17)); }
	inline TeleportEventData_t5F2F1759D160D34A5D086D503268206F16CBA267 * get_teleportEventData_17() const { return ___teleportEventData_17; }
	inline TeleportEventData_t5F2F1759D160D34A5D086D503268206F16CBA267 ** get_address_of_teleportEventData_17() { return &___teleportEventData_17; }
	inline void set_teleportEventData_17(TeleportEventData_t5F2F1759D160D34A5D086D503268206F16CBA267 * value)
	{
		___teleportEventData_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportEventData_17), (void*)value);
	}

	inline static int32_t get_offset_of_isTeleporting_18() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2, ___isTeleporting_18)); }
	inline bool get_isTeleporting_18() const { return ___isTeleporting_18; }
	inline bool* get_address_of_isTeleporting_18() { return &___isTeleporting_18; }
	inline void set_isTeleporting_18(bool value)
	{
		___isTeleporting_18 = value;
	}

	inline static int32_t get_offset_of_isProcessingTeleportRequest_19() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2, ___isProcessingTeleportRequest_19)); }
	inline bool get_isProcessingTeleportRequest_19() const { return ___isProcessingTeleportRequest_19; }
	inline bool* get_address_of_isProcessingTeleportRequest_19() { return &___isProcessingTeleportRequest_19; }
	inline void set_isProcessingTeleportRequest_19(bool value)
	{
		___isProcessingTeleportRequest_19 = value;
	}

	inline static int32_t get_offset_of_targetPosition_20() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2, ___targetPosition_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_20() const { return ___targetPosition_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_20() { return &___targetPosition_20; }
	inline void set_targetPosition_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_20 = value;
	}

	inline static int32_t get_offset_of_targetRotation_21() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2, ___targetRotation_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetRotation_21() const { return ___targetRotation_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetRotation_21() { return &___targetRotation_21; }
	inline void set_targetRotation_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetRotation_21 = value;
	}

	inline static int32_t get_offset_of_eventSystemReference_22() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2, ___eventSystemReference_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_eventSystemReference_22() const { return ___eventSystemReference_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_eventSystemReference_22() { return &___eventSystemReference_22; }
	inline void set_eventSystemReference_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___eventSystemReference_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemReference_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2, ___U3CNameU3Ek__BackingField_23)); }
	inline String_t* get_U3CNameU3Ek__BackingField_23() const { return ___U3CNameU3Ek__BackingField_23; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_23() { return &___U3CNameU3Ek__BackingField_23; }
	inline void set_U3CNameU3Ek__BackingField_23(String_t* value)
	{
		___U3CNameU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_teleportDuration_25() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2, ___teleportDuration_25)); }
	inline float get_teleportDuration_25() const { return ___teleportDuration_25; }
	inline float* get_address_of_teleportDuration_25() { return &___teleportDuration_25; }
	inline void set_teleportDuration_25(float value)
	{
		___teleportDuration_25 = value;
	}
};

struct MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportRequestHandler
	EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * ___OnTeleportRequestHandler_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportRequestPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportRequestPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportStartedHandler
	EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * ___OnTeleportStartedHandler_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportStartedPerfMarker_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCompletedHandler
	EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * ___OnTeleportCompletedHandler_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportCompletePerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHandler> Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::OnTeleportCanceledHandler
	EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * ___OnTeleportCanceledHandler_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::RaiseTeleportCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseTeleportCanceledPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem::ProcessTeleportationRequestPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessTeleportationRequestPerfMarker_34;

public:
	inline static int32_t get_offset_of_HandleEventPerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___HandleEventPerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_24() const { return ___HandleEventPerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_24() { return &___HandleEventPerfMarker_24; }
	inline void set_HandleEventPerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_OnTeleportRequestHandler_26() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___OnTeleportRequestHandler_26)); }
	inline EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * get_OnTeleportRequestHandler_26() const { return ___OnTeleportRequestHandler_26; }
	inline EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 ** get_address_of_OnTeleportRequestHandler_26() { return &___OnTeleportRequestHandler_26; }
	inline void set_OnTeleportRequestHandler_26(EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * value)
	{
		___OnTeleportRequestHandler_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportRequestHandler_26), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportRequestPerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___RaiseTeleportRequestPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportRequestPerfMarker_27() const { return ___RaiseTeleportRequestPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportRequestPerfMarker_27() { return &___RaiseTeleportRequestPerfMarker_27; }
	inline void set_RaiseTeleportRequestPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportRequestPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnTeleportStartedHandler_28() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___OnTeleportStartedHandler_28)); }
	inline EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * get_OnTeleportStartedHandler_28() const { return ___OnTeleportStartedHandler_28; }
	inline EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 ** get_address_of_OnTeleportStartedHandler_28() { return &___OnTeleportStartedHandler_28; }
	inline void set_OnTeleportStartedHandler_28(EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * value)
	{
		___OnTeleportStartedHandler_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportStartedHandler_28), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportStartedPerfMarker_29() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___RaiseTeleportStartedPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportStartedPerfMarker_29() const { return ___RaiseTeleportStartedPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportStartedPerfMarker_29() { return &___RaiseTeleportStartedPerfMarker_29; }
	inline void set_RaiseTeleportStartedPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportStartedPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCompletedHandler_30() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___OnTeleportCompletedHandler_30)); }
	inline EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * get_OnTeleportCompletedHandler_30() const { return ___OnTeleportCompletedHandler_30; }
	inline EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 ** get_address_of_OnTeleportCompletedHandler_30() { return &___OnTeleportCompletedHandler_30; }
	inline void set_OnTeleportCompletedHandler_30(EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * value)
	{
		___OnTeleportCompletedHandler_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCompletedHandler_30), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportCompletePerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___RaiseTeleportCompletePerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportCompletePerfMarker_31() const { return ___RaiseTeleportCompletePerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportCompletePerfMarker_31() { return &___RaiseTeleportCompletePerfMarker_31; }
	inline void set_RaiseTeleportCompletePerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportCompletePerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCanceledHandler_32() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___OnTeleportCanceledHandler_32)); }
	inline EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * get_OnTeleportCanceledHandler_32() const { return ___OnTeleportCanceledHandler_32; }
	inline EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 ** get_address_of_OnTeleportCanceledHandler_32() { return &___OnTeleportCanceledHandler_32; }
	inline void set_OnTeleportCanceledHandler_32(EventFunction_1_t29136C6F75D457DAE560C24913EB072BA73FCEE1 * value)
	{
		___OnTeleportCanceledHandler_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTeleportCanceledHandler_32), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseTeleportCanceledPerfMarker_33() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___RaiseTeleportCanceledPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseTeleportCanceledPerfMarker_33() const { return ___RaiseTeleportCanceledPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseTeleportCanceledPerfMarker_33() { return &___RaiseTeleportCanceledPerfMarker_33; }
	inline void set_RaiseTeleportCanceledPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseTeleportCanceledPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_ProcessTeleportationRequestPerfMarker_34() { return static_cast<int32_t>(offsetof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_StaticFields, ___ProcessTeleportationRequestPerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessTeleportationRequestPerfMarker_34() const { return ___ProcessTeleportationRequestPerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessTeleportationRequestPerfMarker_34() { return &___ProcessTeleportationRequestPerfMarker_34; }
	inline void set_ProcessTeleportationRequestPerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessTeleportationRequestPerfMarker_34 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1  : public BaseDataProviderAccessCoreSystem_t91707B0D13DDC20C86CC09C61F754C534B74191E
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_21;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_25;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1, ___U3CNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CNameU3Ek__BackingField_20() const { return ___U3CNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_20() { return &___U3CNameU3Ek__BackingField_20; }
	inline void set_U3CNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1, ___U3CSourceIdU3Ek__BackingField_21)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_21() const { return ___U3CSourceIdU3Ek__BackingField_21; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_21() { return &___U3CSourceIdU3Ek__BackingField_21; }
	inline void set_U3CSourceIdU3Ek__BackingField_21(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1, ___U3CSourceNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_22() const { return ___U3CSourceNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_22() { return &___U3CSourceNameU3Ek__BackingField_22; }
	inline void set_U3CSourceNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_23() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1, ___currentDisplayType_23)); }
	inline int32_t get_currentDisplayType_23() const { return ___currentDisplayType_23; }
	inline int32_t* get_address_of_currentDisplayType_23() { return &___currentDisplayType_23; }
	inline void set_currentDisplayType_23(int32_t value)
	{
		___currentDisplayType_23 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1, ___cameraOpaqueLastFrame_24)); }
	inline bool get_cameraOpaqueLastFrame_24() const { return ___cameraOpaqueLastFrame_24; }
	inline bool* get_address_of_cameraOpaqueLastFrame_24() { return &___cameraOpaqueLastFrame_24; }
	inline void set_cameraOpaqueLastFrame_24(bool value)
	{
		___cameraOpaqueLastFrame_24 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1, ___useFallbackBehavior_25)); }
	inline bool get_useFallbackBehavior_25() const { return ___useFallbackBehavior_25; }
	inline bool* get_address_of_useFallbackBehavior_25() { return &___useFallbackBehavior_25; }
	inline void set_useFallbackBehavior_25(bool value)
	{
		___useFallbackBehavior_25 = value;
	}
};

struct MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForOpaquePerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForTransparentPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_StaticFields, ___ApplySettingsForOpaquePerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForOpaquePerfMarker_27() const { return ___ApplySettingsForOpaquePerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForOpaquePerfMarker_27() { return &___ApplySettingsForOpaquePerfMarker_27; }
	inline void set_ApplySettingsForOpaquePerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForOpaquePerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_StaticFields, ___ApplySettingsForTransparentPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForTransparentPerfMarker_28() const { return ___ApplySettingsForTransparentPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForTransparentPerfMarker_28() { return &___ApplySettingsForTransparentPerfMarker_28; }
	inline void set_ApplySettingsForTransparentPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForTransparentPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4  : public BaseDataProviderAccessCoreSystem_t91707B0D13DDC20C86CC09C61F754C534B74191E
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_21;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputEnabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputEnabled_22;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputDisabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputDisabled_23;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedInputSources>k__BackingField
	HashSet_1_t47C46DE5317B27E52F483D254531A2D6A86BF927 * ___U3CDetectedInputSourcesU3Ek__BackingField_24;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedControllers>k__BackingField
	HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * ___U3CDetectedControllersU3Ek__BackingField_25;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputSystemProfile
	MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468 * ___inputSystemProfile_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<GazeProvider>k__BackingField
	RuntimeObject* ___U3CGazeProviderU3Ek__BackingField_27;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<EyeGazeProvider>k__BackingField
	RuntimeObject* ___U3CEyeGazeProviderU3Ek__BackingField_28;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::modalInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___modalInputStack_29;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::fallbackInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___fallbackInputStack_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::disabledRefCount
	int32_t ___disabledRefCount_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::isInputModuleAdded
	bool ___isInputModuleAdded_32;
	// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceStateEventData
	SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * ___sourceStateEventData_33;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceTrackingEventData
	SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 * ___sourceTrackingEventData_34;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceVector2EventData
	SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D * ___sourceVector2EventData_35;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePositionEventData
	SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 * ___sourcePositionEventData_36;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceRotationEventData
	SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 * ___sourceRotationEventData_37;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePoseEventData
	SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD * ___sourcePoseEventData_38;
	// Microsoft.MixedReality.Toolkit.Input.FocusEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusEventData
	FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * ___focusEventData_39;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputEventData
	InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * ___inputEventData_40;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::pointerEventData
	MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * ___pointerEventData_41;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::floatInputEventData
	InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E * ___floatInputEventData_42;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::vector2InputEventData
	InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * ___vector2InputEventData_43;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::positionInputEventData
	InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * ___positionInputEventData_44;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::rotationInputEventData
	InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * ___rotationInputEventData_45;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::poseInputEventData
	InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * ___poseInputEventData_46;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::jointPoseInputEventData
	InputEventData_1_t03651600101A901771C241588D9401D9E466D779 * ___jointPoseInputEventData_47;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handMeshInputEventData
	InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 * ___handMeshInputEventData_48;
	// Microsoft.MixedReality.Toolkit.Input.SpeechEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::speechEventData
	SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * ___speechEventData_49;
	// Microsoft.MixedReality.Toolkit.Input.DictationEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::dictationEventData
	DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * ___dictationEventData_50;
	// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handTrackingInputEventData
	HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * ___handTrackingInputEventData_51;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<CurrentInputActionRulesProfile>k__BackingField
	MixedRealityInputActionRulesProfile_t8D37FC8125ABE0DE1BDF3F57FD814936F450A632 * ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModuleChecked
	bool ___inputModuleChecked_53;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModule
	MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * ___inputModule_54;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___U3CNameU3Ek__BackingField_21)); }
	inline String_t* get_U3CNameU3Ek__BackingField_21() const { return ___U3CNameU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_21() { return &___U3CNameU3Ek__BackingField_21; }
	inline void set_U3CNameU3Ek__BackingField_21(String_t* value)
	{
		___U3CNameU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_InputEnabled_22() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___InputEnabled_22)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputEnabled_22() const { return ___InputEnabled_22; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputEnabled_22() { return &___InputEnabled_22; }
	inline void set_InputEnabled_22(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputEnabled_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputEnabled_22), (void*)value);
	}

	inline static int32_t get_offset_of_InputDisabled_23() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___InputDisabled_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputDisabled_23() const { return ___InputDisabled_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputDisabled_23() { return &___InputDisabled_23; }
	inline void set_InputDisabled_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputDisabled_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDisabled_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedInputSourcesU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___U3CDetectedInputSourcesU3Ek__BackingField_24)); }
	inline HashSet_1_t47C46DE5317B27E52F483D254531A2D6A86BF927 * get_U3CDetectedInputSourcesU3Ek__BackingField_24() const { return ___U3CDetectedInputSourcesU3Ek__BackingField_24; }
	inline HashSet_1_t47C46DE5317B27E52F483D254531A2D6A86BF927 ** get_address_of_U3CDetectedInputSourcesU3Ek__BackingField_24() { return &___U3CDetectedInputSourcesU3Ek__BackingField_24; }
	inline void set_U3CDetectedInputSourcesU3Ek__BackingField_24(HashSet_1_t47C46DE5317B27E52F483D254531A2D6A86BF927 * value)
	{
		___U3CDetectedInputSourcesU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedInputSourcesU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedControllersU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___U3CDetectedControllersU3Ek__BackingField_25)); }
	inline HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * get_U3CDetectedControllersU3Ek__BackingField_25() const { return ___U3CDetectedControllersU3Ek__BackingField_25; }
	inline HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 ** get_address_of_U3CDetectedControllersU3Ek__BackingField_25() { return &___U3CDetectedControllersU3Ek__BackingField_25; }
	inline void set_U3CDetectedControllersU3Ek__BackingField_25(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * value)
	{
		___U3CDetectedControllersU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedControllersU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemProfile_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___inputSystemProfile_26)); }
	inline MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468 * get_inputSystemProfile_26() const { return ___inputSystemProfile_26; }
	inline MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468 ** get_address_of_inputSystemProfile_26() { return &___inputSystemProfile_26; }
	inline void set_inputSystemProfile_26(MixedRealityInputSystemProfile_t8953F9810B044477EC872A35C75975D83F3B5468 * value)
	{
		___inputSystemProfile_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeProviderU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___U3CGazeProviderU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CGazeProviderU3Ek__BackingField_27() const { return ___U3CGazeProviderU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CGazeProviderU3Ek__BackingField_27() { return &___U3CGazeProviderU3Ek__BackingField_27; }
	inline void set_U3CGazeProviderU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CGazeProviderU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeProviderU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEyeGazeProviderU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___U3CEyeGazeProviderU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEyeGazeProviderU3Ek__BackingField_28() const { return ___U3CEyeGazeProviderU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEyeGazeProviderU3Ek__BackingField_28() { return &___U3CEyeGazeProviderU3Ek__BackingField_28; }
	inline void set_U3CEyeGazeProviderU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEyeGazeProviderU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEyeGazeProviderU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_modalInputStack_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___modalInputStack_29)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_modalInputStack_29() const { return ___modalInputStack_29; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_modalInputStack_29() { return &___modalInputStack_29; }
	inline void set_modalInputStack_29(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___modalInputStack_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modalInputStack_29), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackInputStack_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___fallbackInputStack_30)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_fallbackInputStack_30() const { return ___fallbackInputStack_30; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_fallbackInputStack_30() { return &___fallbackInputStack_30; }
	inline void set_fallbackInputStack_30(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___fallbackInputStack_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackInputStack_30), (void*)value);
	}

	inline static int32_t get_offset_of_disabledRefCount_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___disabledRefCount_31)); }
	inline int32_t get_disabledRefCount_31() const { return ___disabledRefCount_31; }
	inline int32_t* get_address_of_disabledRefCount_31() { return &___disabledRefCount_31; }
	inline void set_disabledRefCount_31(int32_t value)
	{
		___disabledRefCount_31 = value;
	}

	inline static int32_t get_offset_of_isInputModuleAdded_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___isInputModuleAdded_32)); }
	inline bool get_isInputModuleAdded_32() const { return ___isInputModuleAdded_32; }
	inline bool* get_address_of_isInputModuleAdded_32() { return &___isInputModuleAdded_32; }
	inline void set_isInputModuleAdded_32(bool value)
	{
		___isInputModuleAdded_32 = value;
	}

	inline static int32_t get_offset_of_sourceStateEventData_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___sourceStateEventData_33)); }
	inline SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * get_sourceStateEventData_33() const { return ___sourceStateEventData_33; }
	inline SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A ** get_address_of_sourceStateEventData_33() { return &___sourceStateEventData_33; }
	inline void set_sourceStateEventData_33(SourceStateEventData_t69DA69CF3D8292B514A438C9AA3F1C0DA4A1F70A * value)
	{
		___sourceStateEventData_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceStateEventData_33), (void*)value);
	}

	inline static int32_t get_offset_of_sourceTrackingEventData_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___sourceTrackingEventData_34)); }
	inline SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 * get_sourceTrackingEventData_34() const { return ___sourceTrackingEventData_34; }
	inline SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 ** get_address_of_sourceTrackingEventData_34() { return &___sourceTrackingEventData_34; }
	inline void set_sourceTrackingEventData_34(SourcePoseEventData_1_t279FAFBF5A63CBB50D189E71E915323C055FDA22 * value)
	{
		___sourceTrackingEventData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceTrackingEventData_34), (void*)value);
	}

	inline static int32_t get_offset_of_sourceVector2EventData_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___sourceVector2EventData_35)); }
	inline SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D * get_sourceVector2EventData_35() const { return ___sourceVector2EventData_35; }
	inline SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D ** get_address_of_sourceVector2EventData_35() { return &___sourceVector2EventData_35; }
	inline void set_sourceVector2EventData_35(SourcePoseEventData_1_t80C46DBD53C9C9645B0164A3091F71C84CE7D25D * value)
	{
		___sourceVector2EventData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceVector2EventData_35), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePositionEventData_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___sourcePositionEventData_36)); }
	inline SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 * get_sourcePositionEventData_36() const { return ___sourcePositionEventData_36; }
	inline SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 ** get_address_of_sourcePositionEventData_36() { return &___sourcePositionEventData_36; }
	inline void set_sourcePositionEventData_36(SourcePoseEventData_1_t4CC18A361F416AEE6542A9B09E9D8FF174DF3CB0 * value)
	{
		___sourcePositionEventData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePositionEventData_36), (void*)value);
	}

	inline static int32_t get_offset_of_sourceRotationEventData_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___sourceRotationEventData_37)); }
	inline SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 * get_sourceRotationEventData_37() const { return ___sourceRotationEventData_37; }
	inline SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 ** get_address_of_sourceRotationEventData_37() { return &___sourceRotationEventData_37; }
	inline void set_sourceRotationEventData_37(SourcePoseEventData_1_tAC3DE05E45010F0569ABBE17F2C120F4E13518D2 * value)
	{
		___sourceRotationEventData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceRotationEventData_37), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePoseEventData_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___sourcePoseEventData_38)); }
	inline SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD * get_sourcePoseEventData_38() const { return ___sourcePoseEventData_38; }
	inline SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD ** get_address_of_sourcePoseEventData_38() { return &___sourcePoseEventData_38; }
	inline void set_sourcePoseEventData_38(SourcePoseEventData_1_tA97A232897516DFA3A41013CD2865BE9068B04BD * value)
	{
		___sourcePoseEventData_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePoseEventData_38), (void*)value);
	}

	inline static int32_t get_offset_of_focusEventData_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___focusEventData_39)); }
	inline FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * get_focusEventData_39() const { return ___focusEventData_39; }
	inline FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 ** get_address_of_focusEventData_39() { return &___focusEventData_39; }
	inline void set_focusEventData_39(FocusEventData_t9F3F2249C05BBF9D98A7BD4B12506BDC36E7F041 * value)
	{
		___focusEventData_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusEventData_39), (void*)value);
	}

	inline static int32_t get_offset_of_inputEventData_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___inputEventData_40)); }
	inline InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * get_inputEventData_40() const { return ___inputEventData_40; }
	inline InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 ** get_address_of_inputEventData_40() { return &___inputEventData_40; }
	inline void set_inputEventData_40(InputEventData_tB66CA0D8410460741CB7B94349FFFB49A7691DE7 * value)
	{
		___inputEventData_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEventData_40), (void*)value);
	}

	inline static int32_t get_offset_of_pointerEventData_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___pointerEventData_41)); }
	inline MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * get_pointerEventData_41() const { return ___pointerEventData_41; }
	inline MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 ** get_address_of_pointerEventData_41() { return &___pointerEventData_41; }
	inline void set_pointerEventData_41(MixedRealityPointerEventData_tAB2BBE5FC804ED0060813BEBC6D1866F3795E602 * value)
	{
		___pointerEventData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerEventData_41), (void*)value);
	}

	inline static int32_t get_offset_of_floatInputEventData_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___floatInputEventData_42)); }
	inline InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E * get_floatInputEventData_42() const { return ___floatInputEventData_42; }
	inline InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E ** get_address_of_floatInputEventData_42() { return &___floatInputEventData_42; }
	inline void set_floatInputEventData_42(InputEventData_1_t0537B6B07E4ABB5C85E144AF838FF76463759E3E * value)
	{
		___floatInputEventData_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatInputEventData_42), (void*)value);
	}

	inline static int32_t get_offset_of_vector2InputEventData_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___vector2InputEventData_43)); }
	inline InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * get_vector2InputEventData_43() const { return ___vector2InputEventData_43; }
	inline InputEventData_1_t92F237401150131C650E068132364E4714AFE903 ** get_address_of_vector2InputEventData_43() { return &___vector2InputEventData_43; }
	inline void set_vector2InputEventData_43(InputEventData_1_t92F237401150131C650E068132364E4714AFE903 * value)
	{
		___vector2InputEventData_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vector2InputEventData_43), (void*)value);
	}

	inline static int32_t get_offset_of_positionInputEventData_44() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___positionInputEventData_44)); }
	inline InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * get_positionInputEventData_44() const { return ___positionInputEventData_44; }
	inline InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 ** get_address_of_positionInputEventData_44() { return &___positionInputEventData_44; }
	inline void set_positionInputEventData_44(InputEventData_1_t62E6DA80533CB6FF5006FD3E02EB52A3FADFB900 * value)
	{
		___positionInputEventData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionInputEventData_44), (void*)value);
	}

	inline static int32_t get_offset_of_rotationInputEventData_45() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___rotationInputEventData_45)); }
	inline InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * get_rotationInputEventData_45() const { return ___rotationInputEventData_45; }
	inline InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 ** get_address_of_rotationInputEventData_45() { return &___rotationInputEventData_45; }
	inline void set_rotationInputEventData_45(InputEventData_1_tBE137B5127162FEBFFDFE7F6ED8BEE73A3969646 * value)
	{
		___rotationInputEventData_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationInputEventData_45), (void*)value);
	}

	inline static int32_t get_offset_of_poseInputEventData_46() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___poseInputEventData_46)); }
	inline InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * get_poseInputEventData_46() const { return ___poseInputEventData_46; }
	inline InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 ** get_address_of_poseInputEventData_46() { return &___poseInputEventData_46; }
	inline void set_poseInputEventData_46(InputEventData_1_tCC0938E22E808EE51312F8D480E225522F26CF28 * value)
	{
		___poseInputEventData_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poseInputEventData_46), (void*)value);
	}

	inline static int32_t get_offset_of_jointPoseInputEventData_47() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___jointPoseInputEventData_47)); }
	inline InputEventData_1_t03651600101A901771C241588D9401D9E466D779 * get_jointPoseInputEventData_47() const { return ___jointPoseInputEventData_47; }
	inline InputEventData_1_t03651600101A901771C241588D9401D9E466D779 ** get_address_of_jointPoseInputEventData_47() { return &___jointPoseInputEventData_47; }
	inline void set_jointPoseInputEventData_47(InputEventData_1_t03651600101A901771C241588D9401D9E466D779 * value)
	{
		___jointPoseInputEventData_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoseInputEventData_47), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshInputEventData_48() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___handMeshInputEventData_48)); }
	inline InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 * get_handMeshInputEventData_48() const { return ___handMeshInputEventData_48; }
	inline InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 ** get_address_of_handMeshInputEventData_48() { return &___handMeshInputEventData_48; }
	inline void set_handMeshInputEventData_48(InputEventData_1_tB79F7140EE0E13A566F61C25F0CBC35E52135A75 * value)
	{
		___handMeshInputEventData_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshInputEventData_48), (void*)value);
	}

	inline static int32_t get_offset_of_speechEventData_49() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___speechEventData_49)); }
	inline SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * get_speechEventData_49() const { return ___speechEventData_49; }
	inline SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 ** get_address_of_speechEventData_49() { return &___speechEventData_49; }
	inline void set_speechEventData_49(SpeechEventData_tF39C472B089E67439FD259C5939D8C0F60F66548 * value)
	{
		___speechEventData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEventData_49), (void*)value);
	}

	inline static int32_t get_offset_of_dictationEventData_50() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___dictationEventData_50)); }
	inline DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * get_dictationEventData_50() const { return ___dictationEventData_50; }
	inline DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 ** get_address_of_dictationEventData_50() { return &___dictationEventData_50; }
	inline void set_dictationEventData_50(DictationEventData_t8CFAB3BF256A7952C07C0CD8C7D4489905A1AC82 * value)
	{
		___dictationEventData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationEventData_50), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingInputEventData_51() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___handTrackingInputEventData_51)); }
	inline HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * get_handTrackingInputEventData_51() const { return ___handTrackingInputEventData_51; }
	inline HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 ** get_address_of_handTrackingInputEventData_51() { return &___handTrackingInputEventData_51; }
	inline void set_handTrackingInputEventData_51(HandTrackingInputEventData_t2CAF86D0E0AD87D5996CDB42C70A69861FFB5BF8 * value)
	{
		___handTrackingInputEventData_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingInputEventData_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52)); }
	inline MixedRealityInputActionRulesProfile_t8D37FC8125ABE0DE1BDF3F57FD814936F450A632 * get_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() const { return ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52; }
	inline MixedRealityInputActionRulesProfile_t8D37FC8125ABE0DE1BDF3F57FD814936F450A632 ** get_address_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() { return &___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52; }
	inline void set_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52(MixedRealityInputActionRulesProfile_t8D37FC8125ABE0DE1BDF3F57FD814936F450A632 * value)
	{
		___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_inputModuleChecked_53() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___inputModuleChecked_53)); }
	inline bool get_inputModuleChecked_53() const { return ___inputModuleChecked_53; }
	inline bool* get_address_of_inputModuleChecked_53() { return &___inputModuleChecked_53; }
	inline void set_inputModuleChecked_53(bool value)
	{
		___inputModuleChecked_53 = value;
	}

	inline static int32_t get_offset_of_inputModule_54() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4, ___inputModule_54)); }
	inline MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * get_inputModule_54() const { return ___inputModule_54; }
	inline MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 ** get_address_of_inputModule_54() { return &___inputModule_54; }
	inline void set_inputModule_54(MixedRealityInputModule_t574B111D4EE14DF45FD03659EB6D4FA1FCDB5F61 * value)
	{
		___inputModule_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputModule_54), (void*)value);
	}
};

struct MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ExecuteHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteHierarchyPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusChangedEventsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusChangedEventsPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusEventPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandlePointerEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandlePointerEventPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToGlobalListenersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToGlobalListenersPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToFallbackHandlersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToFallbackHandlersPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToObjectFocusedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToObjectFocusedPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchModalEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchModalEventPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_63;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceDetectedEventHandler
	EventFunction_1_tBD5A5BCCF2913A2D38DDE92D0C1D048D44953647 * ___OnSourceDetectedEventHandler_64;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceLostPerfMarker_65;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceLostEventHandler
	EventFunction_1_tBD5A5BCCF2913A2D38DDE92D0C1D048D44953647 * ___OnSourceLostEventHandler_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceTrackingStateChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceTrackingStateChangedPerfMarker_67;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceTrackingChangedEventHandler
	EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * ___OnSourceTrackingChangedEventHandler_68;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePositionChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePositionChangedPerfMarker_69;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseVector2ChangedEventHandler
	EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * ___OnSourcePoseVector2ChangedEventHandler_70;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePositionChangedEventHandler
	EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * ___OnSourcePositionChangedEventHandler_71;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceRotationChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceRotationChangedPerfMarker_72;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceRotationChangedEventHandler
	EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * ___OnSourceRotationChangedEventHandler_73;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePoseChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePoseChangedPerfMarker_74;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseChangedEventHandler
	EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * ___OnSourcePoseChangedEventHandler_75;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePreFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePreFocusChangedPerfMarker_76;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPreFocusChangedHandler
	EventFunction_1_tBD3326500E9B7F046F5BAC6B46700DFC42C037C6 * ___OnPreFocusChangedHandler_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusChangedPerfMarker_78;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusChangedHandler
	EventFunction_1_tBD3326500E9B7F046F5BAC6B46700DFC42C037C6 * ___OnFocusChangedHandler_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusEnterPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusEnterPerfMarker_80;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusEnterEventHandler
	EventFunction_1_t097A48E1E05DE60C15E6F9A6ED53A1C193DCCA3C * ___OnFocusEnterEventHandler_81;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusExitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusExitPerfMarker_82;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusExitEventHandler
	EventFunction_1_t097A48E1E05DE60C15E6F9A6ED53A1C193DCCA3C * ___OnFocusExitEventHandler_83;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDownEventHandler
	EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * ___OnPointerDownEventHandler_84;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDownPerfMarker_85;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDraggedEventHandler
	EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * ___OnPointerDraggedEventHandler_86;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDraggedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDraggedPerfMarker_87;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputClickedEventHandler
	EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * ___OnInputClickedEventHandler_88;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerClickedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerClickedPerfMarker_89;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerUpEventHandler
	EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * ___OnPointerUpEventHandler_90;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerUpPerfMarker_91;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownEventHandler
	EventFunction_1_tC2AD1C425F66B89ADD1B71E5721CC0B923AF1831 * ___OnInputDownEventHandler_92;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownWithActionEventHandler
	EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * ___OnInputDownWithActionEventHandler_93;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputDownPerfMarker_94;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpEventHandler
	EventFunction_1_tC2AD1C425F66B89ADD1B71E5721CC0B923AF1831 * ___OnInputUpEventHandler_95;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpWithActionEventHandler
	EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * ___OnInputUpWithActionEventHandler_96;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputUpPerfMarker_97;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFloatInputChanged
	EventFunction_1_t9F1E81378E4ACFEAC41F80FBD8F4FA8165556153 * ___OnFloatInputChanged_98;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFloatInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFloatInputChangedPerfMarker_99;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTwoDoFInputChanged
	EventFunction_1_t658A1A9246588CB4460AE8B7ADEDE88729B249D6 * ___OnTwoDoFInputChanged_100;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePositionInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePositionInputChangedPerfMarker_101;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPositionInputChanged
	EventFunction_1_tA8B1309E76417CA6B3E50B90F8B9172CAB88905F * ___OnPositionInputChanged_102;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnRotationInputChanged
	EventFunction_1_tE294F50171390B347357336F8D375ACEB362AA3A * ___OnRotationInputChanged_103;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseRotationInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseRotationInputChangedPerfMarker_104;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPoseInputChanged
	EventFunction_1_t974CC63BDD98419020A183479825699A07225CE5 * ___OnPoseInputChanged_105;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePoseInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePoseInputChangedPerfMarker_106;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStarted
	EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * ___OnGestureStarted_107;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStartedWithAction
	EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * ___OnGestureStartedWithAction_108;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureStartedPerfMarker_109;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureUpdated
	EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * ___OnGestureUpdated_110;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureUpdatedPerfMarker_111;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionUpdated
	EventFunction_1_t52520472B990486B4E3DA929AE4EB9DF26BD8590 * ___OnGestureVector2PositionUpdated_112;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionUpdated
	EventFunction_1_t533AA0DD623EF78CE242E7474B4B2482635E2F5D * ___OnGesturePositionUpdated_113;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationUpdated
	EventFunction_1_t561091444641AC7B44EEFBB90A36E158321A3C31 * ___OnGestureRotationUpdated_114;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseUpdated
	EventFunction_1_t317F2B173027D590854501BFA0E41816920EE28F * ___OnGesturePoseUpdated_115;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompleted
	EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * ___OnGestureCompleted_116;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompletedWithAction
	EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * ___OnGestureCompletedWithAction_117;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCompletedPerfMarker_118;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionCompleted
	EventFunction_1_t52520472B990486B4E3DA929AE4EB9DF26BD8590 * ___OnGestureVector2PositionCompleted_119;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionCompleted
	EventFunction_1_t533AA0DD623EF78CE242E7474B4B2482635E2F5D * ___OnGesturePositionCompleted_120;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationCompleted
	EventFunction_1_t561091444641AC7B44EEFBB90A36E158321A3C31 * ___OnGestureRotationCompleted_121;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseCompleted
	EventFunction_1_t317F2B173027D590854501BFA0E41816920EE28F * ___OnGesturePoseCompleted_122;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCanceled
	EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * ___OnGestureCanceled_123;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCanceledPerfMarker_124;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedEventHandler
	EventFunction_1_t9BCE193E8DA6E4CF18C3B1D164C5081D5603049F * ___OnSpeechKeywordRecognizedEventHandler_125;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedWithActionEventHandler
	EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * ___OnSpeechKeywordRecognizedWithActionEventHandler_126;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSpeechCommandRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSpeechCommandRecognizedPerfMarker_127;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationHypothesisEventHandler
	EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * ___OnDictationHypothesisEventHandler_128;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationHypothesisPerfMarker_129;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationResultEventHandler
	EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * ___OnDictationResultEventHandler_130;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationResultPerfMarker_131;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationCompleteEventHandler
	EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * ___OnDictationCompleteEventHandler_132;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationCompletePerfMarker_133;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationErrorEventHandler
	EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * ___OnDictationErrorEventHandler_134;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationErrorPerfMarker_135;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandJointsUpdatedEventHandler
	EventFunction_1_t1B703F528989FD998F130B2BA4C61FE4A07A14C1 * ___OnHandJointsUpdatedEventHandler_136;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandJointsUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandJointsUpdatedPerfMarker_137;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandMeshUpdatedEventHandler
	EventFunction_1_t5DDF018AF348B20C9801E5551D6AC4B7CF2BEE16 * ___OnHandMeshUpdatedEventHandler_138;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandMeshUpdatedPerfMarker_139;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchStartedEventHandler
	EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B * ___OnTouchStartedEventHandler_140;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchStartedPerfMarker_141;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchCompletedEventHandler
	EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B * ___OnTouchCompletedEventHandler_142;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchCompletedPerfMarker_143;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchUpdatedEventHandler
	EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B * ___OnTouchUpdatedEventHandler_144;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchUpdatedPerfMarker_145;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ProcessRulesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessRulesInternalPerfMarker_146;

public:
	inline static int32_t get_offset_of_ExecuteHierarchyPerfMarker_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___ExecuteHierarchyPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteHierarchyPerfMarker_20() const { return ___ExecuteHierarchyPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteHierarchyPerfMarker_20() { return &___ExecuteHierarchyPerfMarker_20; }
	inline void set_ExecuteHierarchyPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteHierarchyPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_HandleEventPerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___HandleEventPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_55() const { return ___HandleEventPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_55() { return &___HandleEventPerfMarker_55; }
	inline void set_HandleEventPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_HandleFocusChangedEventsPerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___HandleFocusChangedEventsPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusChangedEventsPerfMarker_56() const { return ___HandleFocusChangedEventsPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusChangedEventsPerfMarker_56() { return &___HandleFocusChangedEventsPerfMarker_56; }
	inline void set_HandleFocusChangedEventsPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusChangedEventsPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_HandleFocusEventPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___HandleFocusEventPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusEventPerfMarker_57() const { return ___HandleFocusEventPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusEventPerfMarker_57() { return &___HandleFocusEventPerfMarker_57; }
	inline void set_HandleFocusEventPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusEventPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_HandlePointerEventPerfMarker_58() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___HandlePointerEventPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandlePointerEventPerfMarker_58() const { return ___HandlePointerEventPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandlePointerEventPerfMarker_58() { return &___HandlePointerEventPerfMarker_58; }
	inline void set_HandlePointerEventPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandlePointerEventPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToGlobalListenersPerfMarker_59() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___DispatchEventToGlobalListenersPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToGlobalListenersPerfMarker_59() const { return ___DispatchEventToGlobalListenersPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToGlobalListenersPerfMarker_59() { return &___DispatchEventToGlobalListenersPerfMarker_59; }
	inline void set_DispatchEventToGlobalListenersPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToGlobalListenersPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToFallbackHandlersPerfMarker_60() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___DispatchEventToFallbackHandlersPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToFallbackHandlersPerfMarker_60() const { return ___DispatchEventToFallbackHandlersPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToFallbackHandlersPerfMarker_60() { return &___DispatchEventToFallbackHandlersPerfMarker_60; }
	inline void set_DispatchEventToFallbackHandlersPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToFallbackHandlersPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToObjectFocusedPerfMarker_61() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___DispatchEventToObjectFocusedPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToObjectFocusedPerfMarker_61() const { return ___DispatchEventToObjectFocusedPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToObjectFocusedPerfMarker_61() { return &___DispatchEventToObjectFocusedPerfMarker_61; }
	inline void set_DispatchEventToObjectFocusedPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToObjectFocusedPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_DispatchModalEventPerfMarker_62() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___DispatchModalEventPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchModalEventPerfMarker_62() const { return ___DispatchModalEventPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchModalEventPerfMarker_62() { return &___DispatchModalEventPerfMarker_62; }
	inline void set_DispatchModalEventPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchModalEventPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_63() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseSourceDetectedPerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_63() const { return ___RaiseSourceDetectedPerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_63() { return &___RaiseSourceDetectedPerfMarker_63; }
	inline void set_RaiseSourceDetectedPerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedEventHandler_64() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnSourceDetectedEventHandler_64)); }
	inline EventFunction_1_tBD5A5BCCF2913A2D38DDE92D0C1D048D44953647 * get_OnSourceDetectedEventHandler_64() const { return ___OnSourceDetectedEventHandler_64; }
	inline EventFunction_1_tBD5A5BCCF2913A2D38DDE92D0C1D048D44953647 ** get_address_of_OnSourceDetectedEventHandler_64() { return &___OnSourceDetectedEventHandler_64; }
	inline void set_OnSourceDetectedEventHandler_64(EventFunction_1_tBD5A5BCCF2913A2D38DDE92D0C1D048D44953647 * value)
	{
		___OnSourceDetectedEventHandler_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceDetectedEventHandler_64), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceLostPerfMarker_65() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseSourceLostPerfMarker_65)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceLostPerfMarker_65() const { return ___RaiseSourceLostPerfMarker_65; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceLostPerfMarker_65() { return &___RaiseSourceLostPerfMarker_65; }
	inline void set_RaiseSourceLostPerfMarker_65(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceLostPerfMarker_65 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostEventHandler_66() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnSourceLostEventHandler_66)); }
	inline EventFunction_1_tBD5A5BCCF2913A2D38DDE92D0C1D048D44953647 * get_OnSourceLostEventHandler_66() const { return ___OnSourceLostEventHandler_66; }
	inline EventFunction_1_tBD5A5BCCF2913A2D38DDE92D0C1D048D44953647 ** get_address_of_OnSourceLostEventHandler_66() { return &___OnSourceLostEventHandler_66; }
	inline void set_OnSourceLostEventHandler_66(EventFunction_1_tBD5A5BCCF2913A2D38DDE92D0C1D048D44953647 * value)
	{
		___OnSourceLostEventHandler_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceLostEventHandler_66), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceTrackingStateChangedPerfMarker_67() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseSourceTrackingStateChangedPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceTrackingStateChangedPerfMarker_67() const { return ___RaiseSourceTrackingStateChangedPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceTrackingStateChangedPerfMarker_67() { return &___RaiseSourceTrackingStateChangedPerfMarker_67; }
	inline void set_RaiseSourceTrackingStateChangedPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceTrackingStateChangedPerfMarker_67 = value;
	}

	inline static int32_t get_offset_of_OnSourceTrackingChangedEventHandler_68() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnSourceTrackingChangedEventHandler_68)); }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * get_OnSourceTrackingChangedEventHandler_68() const { return ___OnSourceTrackingChangedEventHandler_68; }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 ** get_address_of_OnSourceTrackingChangedEventHandler_68() { return &___OnSourceTrackingChangedEventHandler_68; }
	inline void set_OnSourceTrackingChangedEventHandler_68(EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * value)
	{
		___OnSourceTrackingChangedEventHandler_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceTrackingChangedEventHandler_68), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePositionChangedPerfMarker_69() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseSourcePositionChangedPerfMarker_69)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePositionChangedPerfMarker_69() const { return ___RaiseSourcePositionChangedPerfMarker_69; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePositionChangedPerfMarker_69() { return &___RaiseSourcePositionChangedPerfMarker_69; }
	inline void set_RaiseSourcePositionChangedPerfMarker_69(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePositionChangedPerfMarker_69 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseVector2ChangedEventHandler_70() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnSourcePoseVector2ChangedEventHandler_70)); }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * get_OnSourcePoseVector2ChangedEventHandler_70() const { return ___OnSourcePoseVector2ChangedEventHandler_70; }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 ** get_address_of_OnSourcePoseVector2ChangedEventHandler_70() { return &___OnSourcePoseVector2ChangedEventHandler_70; }
	inline void set_OnSourcePoseVector2ChangedEventHandler_70(EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * value)
	{
		___OnSourcePoseVector2ChangedEventHandler_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseVector2ChangedEventHandler_70), (void*)value);
	}

	inline static int32_t get_offset_of_OnSourcePositionChangedEventHandler_71() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnSourcePositionChangedEventHandler_71)); }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * get_OnSourcePositionChangedEventHandler_71() const { return ___OnSourcePositionChangedEventHandler_71; }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 ** get_address_of_OnSourcePositionChangedEventHandler_71() { return &___OnSourcePositionChangedEventHandler_71; }
	inline void set_OnSourcePositionChangedEventHandler_71(EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * value)
	{
		___OnSourcePositionChangedEventHandler_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePositionChangedEventHandler_71), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceRotationChangedPerfMarker_72() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseSourceRotationChangedPerfMarker_72)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceRotationChangedPerfMarker_72() const { return ___RaiseSourceRotationChangedPerfMarker_72; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceRotationChangedPerfMarker_72() { return &___RaiseSourceRotationChangedPerfMarker_72; }
	inline void set_RaiseSourceRotationChangedPerfMarker_72(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceRotationChangedPerfMarker_72 = value;
	}

	inline static int32_t get_offset_of_OnSourceRotationChangedEventHandler_73() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnSourceRotationChangedEventHandler_73)); }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * get_OnSourceRotationChangedEventHandler_73() const { return ___OnSourceRotationChangedEventHandler_73; }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 ** get_address_of_OnSourceRotationChangedEventHandler_73() { return &___OnSourceRotationChangedEventHandler_73; }
	inline void set_OnSourceRotationChangedEventHandler_73(EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * value)
	{
		___OnSourceRotationChangedEventHandler_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceRotationChangedEventHandler_73), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePoseChangedPerfMarker_74() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseSourcePoseChangedPerfMarker_74)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePoseChangedPerfMarker_74() const { return ___RaiseSourcePoseChangedPerfMarker_74; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePoseChangedPerfMarker_74() { return &___RaiseSourcePoseChangedPerfMarker_74; }
	inline void set_RaiseSourcePoseChangedPerfMarker_74(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePoseChangedPerfMarker_74 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseChangedEventHandler_75() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnSourcePoseChangedEventHandler_75)); }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * get_OnSourcePoseChangedEventHandler_75() const { return ___OnSourcePoseChangedEventHandler_75; }
	inline EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 ** get_address_of_OnSourcePoseChangedEventHandler_75() { return &___OnSourcePoseChangedEventHandler_75; }
	inline void set_OnSourcePoseChangedEventHandler_75(EventFunction_1_tD8611F4001EB83F8FF842E32D7287A44D1B84CF8 * value)
	{
		___OnSourcePoseChangedEventHandler_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseChangedEventHandler_75), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePreFocusChangedPerfMarker_76() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaisePreFocusChangedPerfMarker_76)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePreFocusChangedPerfMarker_76() const { return ___RaisePreFocusChangedPerfMarker_76; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePreFocusChangedPerfMarker_76() { return &___RaisePreFocusChangedPerfMarker_76; }
	inline void set_RaisePreFocusChangedPerfMarker_76(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePreFocusChangedPerfMarker_76 = value;
	}

	inline static int32_t get_offset_of_OnPreFocusChangedHandler_77() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnPreFocusChangedHandler_77)); }
	inline EventFunction_1_tBD3326500E9B7F046F5BAC6B46700DFC42C037C6 * get_OnPreFocusChangedHandler_77() const { return ___OnPreFocusChangedHandler_77; }
	inline EventFunction_1_tBD3326500E9B7F046F5BAC6B46700DFC42C037C6 ** get_address_of_OnPreFocusChangedHandler_77() { return &___OnPreFocusChangedHandler_77; }
	inline void set_OnPreFocusChangedHandler_77(EventFunction_1_tBD3326500E9B7F046F5BAC6B46700DFC42C037C6 * value)
	{
		___OnPreFocusChangedHandler_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreFocusChangedHandler_77), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusChangedPerfMarker_78() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseFocusChangedPerfMarker_78)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusChangedPerfMarker_78() const { return ___RaiseFocusChangedPerfMarker_78; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusChangedPerfMarker_78() { return &___RaiseFocusChangedPerfMarker_78; }
	inline void set_RaiseFocusChangedPerfMarker_78(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusChangedPerfMarker_78 = value;
	}

	inline static int32_t get_offset_of_OnFocusChangedHandler_79() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnFocusChangedHandler_79)); }
	inline EventFunction_1_tBD3326500E9B7F046F5BAC6B46700DFC42C037C6 * get_OnFocusChangedHandler_79() const { return ___OnFocusChangedHandler_79; }
	inline EventFunction_1_tBD3326500E9B7F046F5BAC6B46700DFC42C037C6 ** get_address_of_OnFocusChangedHandler_79() { return &___OnFocusChangedHandler_79; }
	inline void set_OnFocusChangedHandler_79(EventFunction_1_tBD3326500E9B7F046F5BAC6B46700DFC42C037C6 * value)
	{
		___OnFocusChangedHandler_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusChangedHandler_79), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusEnterPerfMarker_80() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseFocusEnterPerfMarker_80)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusEnterPerfMarker_80() const { return ___RaiseFocusEnterPerfMarker_80; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusEnterPerfMarker_80() { return &___RaiseFocusEnterPerfMarker_80; }
	inline void set_RaiseFocusEnterPerfMarker_80(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusEnterPerfMarker_80 = value;
	}

	inline static int32_t get_offset_of_OnFocusEnterEventHandler_81() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnFocusEnterEventHandler_81)); }
	inline EventFunction_1_t097A48E1E05DE60C15E6F9A6ED53A1C193DCCA3C * get_OnFocusEnterEventHandler_81() const { return ___OnFocusEnterEventHandler_81; }
	inline EventFunction_1_t097A48E1E05DE60C15E6F9A6ED53A1C193DCCA3C ** get_address_of_OnFocusEnterEventHandler_81() { return &___OnFocusEnterEventHandler_81; }
	inline void set_OnFocusEnterEventHandler_81(EventFunction_1_t097A48E1E05DE60C15E6F9A6ED53A1C193DCCA3C * value)
	{
		___OnFocusEnterEventHandler_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusEnterEventHandler_81), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusExitPerfMarker_82() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseFocusExitPerfMarker_82)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusExitPerfMarker_82() const { return ___RaiseFocusExitPerfMarker_82; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusExitPerfMarker_82() { return &___RaiseFocusExitPerfMarker_82; }
	inline void set_RaiseFocusExitPerfMarker_82(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusExitPerfMarker_82 = value;
	}

	inline static int32_t get_offset_of_OnFocusExitEventHandler_83() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnFocusExitEventHandler_83)); }
	inline EventFunction_1_t097A48E1E05DE60C15E6F9A6ED53A1C193DCCA3C * get_OnFocusExitEventHandler_83() const { return ___OnFocusExitEventHandler_83; }
	inline EventFunction_1_t097A48E1E05DE60C15E6F9A6ED53A1C193DCCA3C ** get_address_of_OnFocusExitEventHandler_83() { return &___OnFocusExitEventHandler_83; }
	inline void set_OnFocusExitEventHandler_83(EventFunction_1_t097A48E1E05DE60C15E6F9A6ED53A1C193DCCA3C * value)
	{
		___OnFocusExitEventHandler_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusExitEventHandler_83), (void*)value);
	}

	inline static int32_t get_offset_of_OnPointerDownEventHandler_84() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnPointerDownEventHandler_84)); }
	inline EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * get_OnPointerDownEventHandler_84() const { return ___OnPointerDownEventHandler_84; }
	inline EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 ** get_address_of_OnPointerDownEventHandler_84() { return &___OnPointerDownEventHandler_84; }
	inline void set_OnPointerDownEventHandler_84(EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * value)
	{
		___OnPointerDownEventHandler_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDownEventHandler_84), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDownPerfMarker_85() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaisePointerDownPerfMarker_85)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDownPerfMarker_85() const { return ___RaisePointerDownPerfMarker_85; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDownPerfMarker_85() { return &___RaisePointerDownPerfMarker_85; }
	inline void set_RaisePointerDownPerfMarker_85(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDownPerfMarker_85 = value;
	}

	inline static int32_t get_offset_of_OnPointerDraggedEventHandler_86() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnPointerDraggedEventHandler_86)); }
	inline EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * get_OnPointerDraggedEventHandler_86() const { return ___OnPointerDraggedEventHandler_86; }
	inline EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 ** get_address_of_OnPointerDraggedEventHandler_86() { return &___OnPointerDraggedEventHandler_86; }
	inline void set_OnPointerDraggedEventHandler_86(EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * value)
	{
		___OnPointerDraggedEventHandler_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDraggedEventHandler_86), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDraggedPerfMarker_87() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaisePointerDraggedPerfMarker_87)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDraggedPerfMarker_87() const { return ___RaisePointerDraggedPerfMarker_87; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDraggedPerfMarker_87() { return &___RaisePointerDraggedPerfMarker_87; }
	inline void set_RaisePointerDraggedPerfMarker_87(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDraggedPerfMarker_87 = value;
	}

	inline static int32_t get_offset_of_OnInputClickedEventHandler_88() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnInputClickedEventHandler_88)); }
	inline EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * get_OnInputClickedEventHandler_88() const { return ___OnInputClickedEventHandler_88; }
	inline EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 ** get_address_of_OnInputClickedEventHandler_88() { return &___OnInputClickedEventHandler_88; }
	inline void set_OnInputClickedEventHandler_88(EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * value)
	{
		___OnInputClickedEventHandler_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputClickedEventHandler_88), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerClickedPerfMarker_89() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaisePointerClickedPerfMarker_89)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerClickedPerfMarker_89() const { return ___RaisePointerClickedPerfMarker_89; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerClickedPerfMarker_89() { return &___RaisePointerClickedPerfMarker_89; }
	inline void set_RaisePointerClickedPerfMarker_89(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerClickedPerfMarker_89 = value;
	}

	inline static int32_t get_offset_of_OnPointerUpEventHandler_90() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnPointerUpEventHandler_90)); }
	inline EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * get_OnPointerUpEventHandler_90() const { return ___OnPointerUpEventHandler_90; }
	inline EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 ** get_address_of_OnPointerUpEventHandler_90() { return &___OnPointerUpEventHandler_90; }
	inline void set_OnPointerUpEventHandler_90(EventFunction_1_tE9DF7AB63705D170FC4D7E0ECCEBB33624172894 * value)
	{
		___OnPointerUpEventHandler_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerUpEventHandler_90), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerUpPerfMarker_91() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaisePointerUpPerfMarker_91)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerUpPerfMarker_91() const { return ___RaisePointerUpPerfMarker_91; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerUpPerfMarker_91() { return &___RaisePointerUpPerfMarker_91; }
	inline void set_RaisePointerUpPerfMarker_91(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerUpPerfMarker_91 = value;
	}

	inline static int32_t get_offset_of_OnInputDownEventHandler_92() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnInputDownEventHandler_92)); }
	inline EventFunction_1_tC2AD1C425F66B89ADD1B71E5721CC0B923AF1831 * get_OnInputDownEventHandler_92() const { return ___OnInputDownEventHandler_92; }
	inline EventFunction_1_tC2AD1C425F66B89ADD1B71E5721CC0B923AF1831 ** get_address_of_OnInputDownEventHandler_92() { return &___OnInputDownEventHandler_92; }
	inline void set_OnInputDownEventHandler_92(EventFunction_1_tC2AD1C425F66B89ADD1B71E5721CC0B923AF1831 * value)
	{
		___OnInputDownEventHandler_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownEventHandler_92), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputDownWithActionEventHandler_93() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnInputDownWithActionEventHandler_93)); }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * get_OnInputDownWithActionEventHandler_93() const { return ___OnInputDownWithActionEventHandler_93; }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 ** get_address_of_OnInputDownWithActionEventHandler_93() { return &___OnInputDownWithActionEventHandler_93; }
	inline void set_OnInputDownWithActionEventHandler_93(EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * value)
	{
		___OnInputDownWithActionEventHandler_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownWithActionEventHandler_93), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputDownPerfMarker_94() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseOnInputDownPerfMarker_94)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputDownPerfMarker_94() const { return ___RaiseOnInputDownPerfMarker_94; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputDownPerfMarker_94() { return &___RaiseOnInputDownPerfMarker_94; }
	inline void set_RaiseOnInputDownPerfMarker_94(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputDownPerfMarker_94 = value;
	}

	inline static int32_t get_offset_of_OnInputUpEventHandler_95() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnInputUpEventHandler_95)); }
	inline EventFunction_1_tC2AD1C425F66B89ADD1B71E5721CC0B923AF1831 * get_OnInputUpEventHandler_95() const { return ___OnInputUpEventHandler_95; }
	inline EventFunction_1_tC2AD1C425F66B89ADD1B71E5721CC0B923AF1831 ** get_address_of_OnInputUpEventHandler_95() { return &___OnInputUpEventHandler_95; }
	inline void set_OnInputUpEventHandler_95(EventFunction_1_tC2AD1C425F66B89ADD1B71E5721CC0B923AF1831 * value)
	{
		___OnInputUpEventHandler_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpEventHandler_95), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputUpWithActionEventHandler_96() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnInputUpWithActionEventHandler_96)); }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * get_OnInputUpWithActionEventHandler_96() const { return ___OnInputUpWithActionEventHandler_96; }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 ** get_address_of_OnInputUpWithActionEventHandler_96() { return &___OnInputUpWithActionEventHandler_96; }
	inline void set_OnInputUpWithActionEventHandler_96(EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * value)
	{
		___OnInputUpWithActionEventHandler_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpWithActionEventHandler_96), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputUpPerfMarker_97() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseOnInputUpPerfMarker_97)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputUpPerfMarker_97() const { return ___RaiseOnInputUpPerfMarker_97; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputUpPerfMarker_97() { return &___RaiseOnInputUpPerfMarker_97; }
	inline void set_RaiseOnInputUpPerfMarker_97(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputUpPerfMarker_97 = value;
	}

	inline static int32_t get_offset_of_OnFloatInputChanged_98() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnFloatInputChanged_98)); }
	inline EventFunction_1_t9F1E81378E4ACFEAC41F80FBD8F4FA8165556153 * get_OnFloatInputChanged_98() const { return ___OnFloatInputChanged_98; }
	inline EventFunction_1_t9F1E81378E4ACFEAC41F80FBD8F4FA8165556153 ** get_address_of_OnFloatInputChanged_98() { return &___OnFloatInputChanged_98; }
	inline void set_OnFloatInputChanged_98(EventFunction_1_t9F1E81378E4ACFEAC41F80FBD8F4FA8165556153 * value)
	{
		___OnFloatInputChanged_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFloatInputChanged_98), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFloatInputChangedPerfMarker_99() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseFloatInputChangedPerfMarker_99)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFloatInputChangedPerfMarker_99() const { return ___RaiseFloatInputChangedPerfMarker_99; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFloatInputChangedPerfMarker_99() { return &___RaiseFloatInputChangedPerfMarker_99; }
	inline void set_RaiseFloatInputChangedPerfMarker_99(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFloatInputChangedPerfMarker_99 = value;
	}

	inline static int32_t get_offset_of_OnTwoDoFInputChanged_100() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnTwoDoFInputChanged_100)); }
	inline EventFunction_1_t658A1A9246588CB4460AE8B7ADEDE88729B249D6 * get_OnTwoDoFInputChanged_100() const { return ___OnTwoDoFInputChanged_100; }
	inline EventFunction_1_t658A1A9246588CB4460AE8B7ADEDE88729B249D6 ** get_address_of_OnTwoDoFInputChanged_100() { return &___OnTwoDoFInputChanged_100; }
	inline void set_OnTwoDoFInputChanged_100(EventFunction_1_t658A1A9246588CB4460AE8B7ADEDE88729B249D6 * value)
	{
		___OnTwoDoFInputChanged_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTwoDoFInputChanged_100), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePositionInputChangedPerfMarker_101() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaisePositionInputChangedPerfMarker_101)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePositionInputChangedPerfMarker_101() const { return ___RaisePositionInputChangedPerfMarker_101; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePositionInputChangedPerfMarker_101() { return &___RaisePositionInputChangedPerfMarker_101; }
	inline void set_RaisePositionInputChangedPerfMarker_101(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePositionInputChangedPerfMarker_101 = value;
	}

	inline static int32_t get_offset_of_OnPositionInputChanged_102() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnPositionInputChanged_102)); }
	inline EventFunction_1_tA8B1309E76417CA6B3E50B90F8B9172CAB88905F * get_OnPositionInputChanged_102() const { return ___OnPositionInputChanged_102; }
	inline EventFunction_1_tA8B1309E76417CA6B3E50B90F8B9172CAB88905F ** get_address_of_OnPositionInputChanged_102() { return &___OnPositionInputChanged_102; }
	inline void set_OnPositionInputChanged_102(EventFunction_1_tA8B1309E76417CA6B3E50B90F8B9172CAB88905F * value)
	{
		___OnPositionInputChanged_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionInputChanged_102), (void*)value);
	}

	inline static int32_t get_offset_of_OnRotationInputChanged_103() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnRotationInputChanged_103)); }
	inline EventFunction_1_tE294F50171390B347357336F8D375ACEB362AA3A * get_OnRotationInputChanged_103() const { return ___OnRotationInputChanged_103; }
	inline EventFunction_1_tE294F50171390B347357336F8D375ACEB362AA3A ** get_address_of_OnRotationInputChanged_103() { return &___OnRotationInputChanged_103; }
	inline void set_OnRotationInputChanged_103(EventFunction_1_tE294F50171390B347357336F8D375ACEB362AA3A * value)
	{
		___OnRotationInputChanged_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRotationInputChanged_103), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseRotationInputChangedPerfMarker_104() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseRotationInputChangedPerfMarker_104)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseRotationInputChangedPerfMarker_104() const { return ___RaiseRotationInputChangedPerfMarker_104; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseRotationInputChangedPerfMarker_104() { return &___RaiseRotationInputChangedPerfMarker_104; }
	inline void set_RaiseRotationInputChangedPerfMarker_104(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseRotationInputChangedPerfMarker_104 = value;
	}

	inline static int32_t get_offset_of_OnPoseInputChanged_105() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnPoseInputChanged_105)); }
	inline EventFunction_1_t974CC63BDD98419020A183479825699A07225CE5 * get_OnPoseInputChanged_105() const { return ___OnPoseInputChanged_105; }
	inline EventFunction_1_t974CC63BDD98419020A183479825699A07225CE5 ** get_address_of_OnPoseInputChanged_105() { return &___OnPoseInputChanged_105; }
	inline void set_OnPoseInputChanged_105(EventFunction_1_t974CC63BDD98419020A183479825699A07225CE5 * value)
	{
		___OnPoseInputChanged_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPoseInputChanged_105), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePoseInputChangedPerfMarker_106() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaisePoseInputChangedPerfMarker_106)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePoseInputChangedPerfMarker_106() const { return ___RaisePoseInputChangedPerfMarker_106; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePoseInputChangedPerfMarker_106() { return &___RaisePoseInputChangedPerfMarker_106; }
	inline void set_RaisePoseInputChangedPerfMarker_106(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePoseInputChangedPerfMarker_106 = value;
	}

	inline static int32_t get_offset_of_OnGestureStarted_107() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureStarted_107)); }
	inline EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * get_OnGestureStarted_107() const { return ___OnGestureStarted_107; }
	inline EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B ** get_address_of_OnGestureStarted_107() { return &___OnGestureStarted_107; }
	inline void set_OnGestureStarted_107(EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * value)
	{
		___OnGestureStarted_107 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStarted_107), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureStartedWithAction_108() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureStartedWithAction_108)); }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * get_OnGestureStartedWithAction_108() const { return ___OnGestureStartedWithAction_108; }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 ** get_address_of_OnGestureStartedWithAction_108() { return &___OnGestureStartedWithAction_108; }
	inline void set_OnGestureStartedWithAction_108(EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * value)
	{
		___OnGestureStartedWithAction_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStartedWithAction_108), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureStartedPerfMarker_109() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseGestureStartedPerfMarker_109)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureStartedPerfMarker_109() const { return ___RaiseGestureStartedPerfMarker_109; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureStartedPerfMarker_109() { return &___RaiseGestureStartedPerfMarker_109; }
	inline void set_RaiseGestureStartedPerfMarker_109(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureStartedPerfMarker_109 = value;
	}

	inline static int32_t get_offset_of_OnGestureUpdated_110() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureUpdated_110)); }
	inline EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * get_OnGestureUpdated_110() const { return ___OnGestureUpdated_110; }
	inline EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B ** get_address_of_OnGestureUpdated_110() { return &___OnGestureUpdated_110; }
	inline void set_OnGestureUpdated_110(EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * value)
	{
		___OnGestureUpdated_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureUpdated_110), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureUpdatedPerfMarker_111() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseGestureUpdatedPerfMarker_111)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureUpdatedPerfMarker_111() const { return ___RaiseGestureUpdatedPerfMarker_111; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureUpdatedPerfMarker_111() { return &___RaiseGestureUpdatedPerfMarker_111; }
	inline void set_RaiseGestureUpdatedPerfMarker_111(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureUpdatedPerfMarker_111 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionUpdated_112() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureVector2PositionUpdated_112)); }
	inline EventFunction_1_t52520472B990486B4E3DA929AE4EB9DF26BD8590 * get_OnGestureVector2PositionUpdated_112() const { return ___OnGestureVector2PositionUpdated_112; }
	inline EventFunction_1_t52520472B990486B4E3DA929AE4EB9DF26BD8590 ** get_address_of_OnGestureVector2PositionUpdated_112() { return &___OnGestureVector2PositionUpdated_112; }
	inline void set_OnGestureVector2PositionUpdated_112(EventFunction_1_t52520472B990486B4E3DA929AE4EB9DF26BD8590 * value)
	{
		___OnGestureVector2PositionUpdated_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionUpdated_112), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionUpdated_113() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGesturePositionUpdated_113)); }
	inline EventFunction_1_t533AA0DD623EF78CE242E7474B4B2482635E2F5D * get_OnGesturePositionUpdated_113() const { return ___OnGesturePositionUpdated_113; }
	inline EventFunction_1_t533AA0DD623EF78CE242E7474B4B2482635E2F5D ** get_address_of_OnGesturePositionUpdated_113() { return &___OnGesturePositionUpdated_113; }
	inline void set_OnGesturePositionUpdated_113(EventFunction_1_t533AA0DD623EF78CE242E7474B4B2482635E2F5D * value)
	{
		___OnGesturePositionUpdated_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionUpdated_113), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationUpdated_114() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureRotationUpdated_114)); }
	inline EventFunction_1_t561091444641AC7B44EEFBB90A36E158321A3C31 * get_OnGestureRotationUpdated_114() const { return ___OnGestureRotationUpdated_114; }
	inline EventFunction_1_t561091444641AC7B44EEFBB90A36E158321A3C31 ** get_address_of_OnGestureRotationUpdated_114() { return &___OnGestureRotationUpdated_114; }
	inline void set_OnGestureRotationUpdated_114(EventFunction_1_t561091444641AC7B44EEFBB90A36E158321A3C31 * value)
	{
		___OnGestureRotationUpdated_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationUpdated_114), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseUpdated_115() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGesturePoseUpdated_115)); }
	inline EventFunction_1_t317F2B173027D590854501BFA0E41816920EE28F * get_OnGesturePoseUpdated_115() const { return ___OnGesturePoseUpdated_115; }
	inline EventFunction_1_t317F2B173027D590854501BFA0E41816920EE28F ** get_address_of_OnGesturePoseUpdated_115() { return &___OnGesturePoseUpdated_115; }
	inline void set_OnGesturePoseUpdated_115(EventFunction_1_t317F2B173027D590854501BFA0E41816920EE28F * value)
	{
		___OnGesturePoseUpdated_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseUpdated_115), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompleted_116() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureCompleted_116)); }
	inline EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * get_OnGestureCompleted_116() const { return ___OnGestureCompleted_116; }
	inline EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B ** get_address_of_OnGestureCompleted_116() { return &___OnGestureCompleted_116; }
	inline void set_OnGestureCompleted_116(EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * value)
	{
		___OnGestureCompleted_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompleted_116), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompletedWithAction_117() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureCompletedWithAction_117)); }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * get_OnGestureCompletedWithAction_117() const { return ___OnGestureCompletedWithAction_117; }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 ** get_address_of_OnGestureCompletedWithAction_117() { return &___OnGestureCompletedWithAction_117; }
	inline void set_OnGestureCompletedWithAction_117(EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * value)
	{
		___OnGestureCompletedWithAction_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompletedWithAction_117), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCompletedPerfMarker_118() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseGestureCompletedPerfMarker_118)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCompletedPerfMarker_118() const { return ___RaiseGestureCompletedPerfMarker_118; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCompletedPerfMarker_118() { return &___RaiseGestureCompletedPerfMarker_118; }
	inline void set_RaiseGestureCompletedPerfMarker_118(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCompletedPerfMarker_118 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionCompleted_119() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureVector2PositionCompleted_119)); }
	inline EventFunction_1_t52520472B990486B4E3DA929AE4EB9DF26BD8590 * get_OnGestureVector2PositionCompleted_119() const { return ___OnGestureVector2PositionCompleted_119; }
	inline EventFunction_1_t52520472B990486B4E3DA929AE4EB9DF26BD8590 ** get_address_of_OnGestureVector2PositionCompleted_119() { return &___OnGestureVector2PositionCompleted_119; }
	inline void set_OnGestureVector2PositionCompleted_119(EventFunction_1_t52520472B990486B4E3DA929AE4EB9DF26BD8590 * value)
	{
		___OnGestureVector2PositionCompleted_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionCompleted_119), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionCompleted_120() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGesturePositionCompleted_120)); }
	inline EventFunction_1_t533AA0DD623EF78CE242E7474B4B2482635E2F5D * get_OnGesturePositionCompleted_120() const { return ___OnGesturePositionCompleted_120; }
	inline EventFunction_1_t533AA0DD623EF78CE242E7474B4B2482635E2F5D ** get_address_of_OnGesturePositionCompleted_120() { return &___OnGesturePositionCompleted_120; }
	inline void set_OnGesturePositionCompleted_120(EventFunction_1_t533AA0DD623EF78CE242E7474B4B2482635E2F5D * value)
	{
		___OnGesturePositionCompleted_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionCompleted_120), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationCompleted_121() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureRotationCompleted_121)); }
	inline EventFunction_1_t561091444641AC7B44EEFBB90A36E158321A3C31 * get_OnGestureRotationCompleted_121() const { return ___OnGestureRotationCompleted_121; }
	inline EventFunction_1_t561091444641AC7B44EEFBB90A36E158321A3C31 ** get_address_of_OnGestureRotationCompleted_121() { return &___OnGestureRotationCompleted_121; }
	inline void set_OnGestureRotationCompleted_121(EventFunction_1_t561091444641AC7B44EEFBB90A36E158321A3C31 * value)
	{
		___OnGestureRotationCompleted_121 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationCompleted_121), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseCompleted_122() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGesturePoseCompleted_122)); }
	inline EventFunction_1_t317F2B173027D590854501BFA0E41816920EE28F * get_OnGesturePoseCompleted_122() const { return ___OnGesturePoseCompleted_122; }
	inline EventFunction_1_t317F2B173027D590854501BFA0E41816920EE28F ** get_address_of_OnGesturePoseCompleted_122() { return &___OnGesturePoseCompleted_122; }
	inline void set_OnGesturePoseCompleted_122(EventFunction_1_t317F2B173027D590854501BFA0E41816920EE28F * value)
	{
		___OnGesturePoseCompleted_122 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseCompleted_122), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCanceled_123() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnGestureCanceled_123)); }
	inline EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * get_OnGestureCanceled_123() const { return ___OnGestureCanceled_123; }
	inline EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B ** get_address_of_OnGestureCanceled_123() { return &___OnGestureCanceled_123; }
	inline void set_OnGestureCanceled_123(EventFunction_1_t5DAEF59F074C194B5A06A9181F30F52105858A9B * value)
	{
		___OnGestureCanceled_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCanceled_123), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCanceledPerfMarker_124() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseGestureCanceledPerfMarker_124)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCanceledPerfMarker_124() const { return ___RaiseGestureCanceledPerfMarker_124; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCanceledPerfMarker_124() { return &___RaiseGestureCanceledPerfMarker_124; }
	inline void set_RaiseGestureCanceledPerfMarker_124(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCanceledPerfMarker_124 = value;
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedEventHandler_125() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnSpeechKeywordRecognizedEventHandler_125)); }
	inline EventFunction_1_t9BCE193E8DA6E4CF18C3B1D164C5081D5603049F * get_OnSpeechKeywordRecognizedEventHandler_125() const { return ___OnSpeechKeywordRecognizedEventHandler_125; }
	inline EventFunction_1_t9BCE193E8DA6E4CF18C3B1D164C5081D5603049F ** get_address_of_OnSpeechKeywordRecognizedEventHandler_125() { return &___OnSpeechKeywordRecognizedEventHandler_125; }
	inline void set_OnSpeechKeywordRecognizedEventHandler_125(EventFunction_1_t9BCE193E8DA6E4CF18C3B1D164C5081D5603049F * value)
	{
		___OnSpeechKeywordRecognizedEventHandler_125 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedEventHandler_125), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedWithActionEventHandler_126() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnSpeechKeywordRecognizedWithActionEventHandler_126)); }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * get_OnSpeechKeywordRecognizedWithActionEventHandler_126() const { return ___OnSpeechKeywordRecognizedWithActionEventHandler_126; }
	inline EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 ** get_address_of_OnSpeechKeywordRecognizedWithActionEventHandler_126() { return &___OnSpeechKeywordRecognizedWithActionEventHandler_126; }
	inline void set_OnSpeechKeywordRecognizedWithActionEventHandler_126(EventFunction_1_tB923C69938EDB18B667A4967D9C75FA576BBAC90 * value)
	{
		___OnSpeechKeywordRecognizedWithActionEventHandler_126 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedWithActionEventHandler_126), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSpeechCommandRecognizedPerfMarker_127() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseSpeechCommandRecognizedPerfMarker_127)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSpeechCommandRecognizedPerfMarker_127() const { return ___RaiseSpeechCommandRecognizedPerfMarker_127; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSpeechCommandRecognizedPerfMarker_127() { return &___RaiseSpeechCommandRecognizedPerfMarker_127; }
	inline void set_RaiseSpeechCommandRecognizedPerfMarker_127(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSpeechCommandRecognizedPerfMarker_127 = value;
	}

	inline static int32_t get_offset_of_OnDictationHypothesisEventHandler_128() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnDictationHypothesisEventHandler_128)); }
	inline EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * get_OnDictationHypothesisEventHandler_128() const { return ___OnDictationHypothesisEventHandler_128; }
	inline EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC ** get_address_of_OnDictationHypothesisEventHandler_128() { return &___OnDictationHypothesisEventHandler_128; }
	inline void set_OnDictationHypothesisEventHandler_128(EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * value)
	{
		___OnDictationHypothesisEventHandler_128 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationHypothesisEventHandler_128), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationHypothesisPerfMarker_129() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseDictationHypothesisPerfMarker_129)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationHypothesisPerfMarker_129() const { return ___RaiseDictationHypothesisPerfMarker_129; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationHypothesisPerfMarker_129() { return &___RaiseDictationHypothesisPerfMarker_129; }
	inline void set_RaiseDictationHypothesisPerfMarker_129(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationHypothesisPerfMarker_129 = value;
	}

	inline static int32_t get_offset_of_OnDictationResultEventHandler_130() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnDictationResultEventHandler_130)); }
	inline EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * get_OnDictationResultEventHandler_130() const { return ___OnDictationResultEventHandler_130; }
	inline EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC ** get_address_of_OnDictationResultEventHandler_130() { return &___OnDictationResultEventHandler_130; }
	inline void set_OnDictationResultEventHandler_130(EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * value)
	{
		___OnDictationResultEventHandler_130 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationResultEventHandler_130), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationResultPerfMarker_131() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseDictationResultPerfMarker_131)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationResultPerfMarker_131() const { return ___RaiseDictationResultPerfMarker_131; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationResultPerfMarker_131() { return &___RaiseDictationResultPerfMarker_131; }
	inline void set_RaiseDictationResultPerfMarker_131(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationResultPerfMarker_131 = value;
	}

	inline static int32_t get_offset_of_OnDictationCompleteEventHandler_132() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnDictationCompleteEventHandler_132)); }
	inline EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * get_OnDictationCompleteEventHandler_132() const { return ___OnDictationCompleteEventHandler_132; }
	inline EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC ** get_address_of_OnDictationCompleteEventHandler_132() { return &___OnDictationCompleteEventHandler_132; }
	inline void set_OnDictationCompleteEventHandler_132(EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * value)
	{
		___OnDictationCompleteEventHandler_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationCompleteEventHandler_132), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationCompletePerfMarker_133() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseDictationCompletePerfMarker_133)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationCompletePerfMarker_133() const { return ___RaiseDictationCompletePerfMarker_133; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationCompletePerfMarker_133() { return &___RaiseDictationCompletePerfMarker_133; }
	inline void set_RaiseDictationCompletePerfMarker_133(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationCompletePerfMarker_133 = value;
	}

	inline static int32_t get_offset_of_OnDictationErrorEventHandler_134() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnDictationErrorEventHandler_134)); }
	inline EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * get_OnDictationErrorEventHandler_134() const { return ___OnDictationErrorEventHandler_134; }
	inline EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC ** get_address_of_OnDictationErrorEventHandler_134() { return &___OnDictationErrorEventHandler_134; }
	inline void set_OnDictationErrorEventHandler_134(EventFunction_1_t4AF326C83F32E7C20665D240AAE1C79AFBD48CEC * value)
	{
		___OnDictationErrorEventHandler_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationErrorEventHandler_134), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationErrorPerfMarker_135() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseDictationErrorPerfMarker_135)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationErrorPerfMarker_135() const { return ___RaiseDictationErrorPerfMarker_135; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationErrorPerfMarker_135() { return &___RaiseDictationErrorPerfMarker_135; }
	inline void set_RaiseDictationErrorPerfMarker_135(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationErrorPerfMarker_135 = value;
	}

	inline static int32_t get_offset_of_OnHandJointsUpdatedEventHandler_136() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnHandJointsUpdatedEventHandler_136)); }
	inline EventFunction_1_t1B703F528989FD998F130B2BA4C61FE4A07A14C1 * get_OnHandJointsUpdatedEventHandler_136() const { return ___OnHandJointsUpdatedEventHandler_136; }
	inline EventFunction_1_t1B703F528989FD998F130B2BA4C61FE4A07A14C1 ** get_address_of_OnHandJointsUpdatedEventHandler_136() { return &___OnHandJointsUpdatedEventHandler_136; }
	inline void set_OnHandJointsUpdatedEventHandler_136(EventFunction_1_t1B703F528989FD998F130B2BA4C61FE4A07A14C1 * value)
	{
		___OnHandJointsUpdatedEventHandler_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandJointsUpdatedEventHandler_136), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandJointsUpdatedPerfMarker_137() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseHandJointsUpdatedPerfMarker_137)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandJointsUpdatedPerfMarker_137() const { return ___RaiseHandJointsUpdatedPerfMarker_137; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandJointsUpdatedPerfMarker_137() { return &___RaiseHandJointsUpdatedPerfMarker_137; }
	inline void set_RaiseHandJointsUpdatedPerfMarker_137(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandJointsUpdatedPerfMarker_137 = value;
	}

	inline static int32_t get_offset_of_OnHandMeshUpdatedEventHandler_138() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnHandMeshUpdatedEventHandler_138)); }
	inline EventFunction_1_t5DDF018AF348B20C9801E5551D6AC4B7CF2BEE16 * get_OnHandMeshUpdatedEventHandler_138() const { return ___OnHandMeshUpdatedEventHandler_138; }
	inline EventFunction_1_t5DDF018AF348B20C9801E5551D6AC4B7CF2BEE16 ** get_address_of_OnHandMeshUpdatedEventHandler_138() { return &___OnHandMeshUpdatedEventHandler_138; }
	inline void set_OnHandMeshUpdatedEventHandler_138(EventFunction_1_t5DDF018AF348B20C9801E5551D6AC4B7CF2BEE16 * value)
	{
		___OnHandMeshUpdatedEventHandler_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandMeshUpdatedEventHandler_138), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandMeshUpdatedPerfMarker_139() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseHandMeshUpdatedPerfMarker_139)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandMeshUpdatedPerfMarker_139() const { return ___RaiseHandMeshUpdatedPerfMarker_139; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandMeshUpdatedPerfMarker_139() { return &___RaiseHandMeshUpdatedPerfMarker_139; }
	inline void set_RaiseHandMeshUpdatedPerfMarker_139(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandMeshUpdatedPerfMarker_139 = value;
	}

	inline static int32_t get_offset_of_OnTouchStartedEventHandler_140() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnTouchStartedEventHandler_140)); }
	inline EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B * get_OnTouchStartedEventHandler_140() const { return ___OnTouchStartedEventHandler_140; }
	inline EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B ** get_address_of_OnTouchStartedEventHandler_140() { return &___OnTouchStartedEventHandler_140; }
	inline void set_OnTouchStartedEventHandler_140(EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B * value)
	{
		___OnTouchStartedEventHandler_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchStartedEventHandler_140), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchStartedPerfMarker_141() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseOnTouchStartedPerfMarker_141)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchStartedPerfMarker_141() const { return ___RaiseOnTouchStartedPerfMarker_141; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchStartedPerfMarker_141() { return &___RaiseOnTouchStartedPerfMarker_141; }
	inline void set_RaiseOnTouchStartedPerfMarker_141(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchStartedPerfMarker_141 = value;
	}

	inline static int32_t get_offset_of_OnTouchCompletedEventHandler_142() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnTouchCompletedEventHandler_142)); }
	inline EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B * get_OnTouchCompletedEventHandler_142() const { return ___OnTouchCompletedEventHandler_142; }
	inline EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B ** get_address_of_OnTouchCompletedEventHandler_142() { return &___OnTouchCompletedEventHandler_142; }
	inline void set_OnTouchCompletedEventHandler_142(EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B * value)
	{
		___OnTouchCompletedEventHandler_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchCompletedEventHandler_142), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchCompletedPerfMarker_143() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseOnTouchCompletedPerfMarker_143)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchCompletedPerfMarker_143() const { return ___RaiseOnTouchCompletedPerfMarker_143; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchCompletedPerfMarker_143() { return &___RaiseOnTouchCompletedPerfMarker_143; }
	inline void set_RaiseOnTouchCompletedPerfMarker_143(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchCompletedPerfMarker_143 = value;
	}

	inline static int32_t get_offset_of_OnTouchUpdatedEventHandler_144() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___OnTouchUpdatedEventHandler_144)); }
	inline EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B * get_OnTouchUpdatedEventHandler_144() const { return ___OnTouchUpdatedEventHandler_144; }
	inline EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B ** get_address_of_OnTouchUpdatedEventHandler_144() { return &___OnTouchUpdatedEventHandler_144; }
	inline void set_OnTouchUpdatedEventHandler_144(EventFunction_1_tF4B7FEB4A7D66EDC98D2CC6271A52FA15C00F11B * value)
	{
		___OnTouchUpdatedEventHandler_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchUpdatedEventHandler_144), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchUpdatedPerfMarker_145() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___RaiseOnTouchUpdatedPerfMarker_145)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchUpdatedPerfMarker_145() const { return ___RaiseOnTouchUpdatedPerfMarker_145; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchUpdatedPerfMarker_145() { return &___RaiseOnTouchUpdatedPerfMarker_145; }
	inline void set_RaiseOnTouchUpdatedPerfMarker_145(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchUpdatedPerfMarker_145 = value;
	}

	inline static int32_t get_offset_of_ProcessRulesInternalPerfMarker_146() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_StaticFields, ___ProcessRulesInternalPerfMarker_146)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessRulesInternalPerfMarker_146() const { return ___ProcessRulesInternalPerfMarker_146; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessRulesInternalPerfMarker_146() { return &___ProcessRulesInternalPerfMarker_146; }
	inline void set_ProcessRulesInternalPerfMarker_146(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessRulesInternalPerfMarker_146 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB  : public BaseDataProviderAccessCoreSystem_t91707B0D13DDC20C86CC09C61F754C534B74191E
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93 * ___meshEventData_21;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spatialAwarenessObjectParent_22;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_23;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_tC811A6F178BDBEE2BF7C3E78611ABA4CBAB26F51 * ___spatialAwarenessSystemProfile_24;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB, ___U3CNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CNameU3Ek__BackingField_20() const { return ___U3CNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_20() { return &___U3CNameU3Ek__BackingField_20; }
	inline void set_U3CNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_meshEventData_21() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB, ___meshEventData_21)); }
	inline MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93 * get_meshEventData_21() const { return ___meshEventData_21; }
	inline MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93 ** get_address_of_meshEventData_21() { return &___meshEventData_21; }
	inline void set_meshEventData_21(MixedRealitySpatialAwarenessEventData_1_t52471E1F5529D3B3EF10184C0F0B9FA41E137B93 * value)
	{
		___meshEventData_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_21), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_22() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB, ___spatialAwarenessObjectParent_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spatialAwarenessObjectParent_22() const { return ___spatialAwarenessObjectParent_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spatialAwarenessObjectParent_22() { return &___spatialAwarenessObjectParent_22; }
	inline void set_spatialAwarenessObjectParent_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spatialAwarenessObjectParent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessObjectParent_22), (void*)value);
	}

	inline static int32_t get_offset_of_nextSourceId_23() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB, ___nextSourceId_23)); }
	inline uint32_t get_nextSourceId_23() const { return ___nextSourceId_23; }
	inline uint32_t* get_address_of_nextSourceId_23() { return &___nextSourceId_23; }
	inline void set_nextSourceId_23(uint32_t value)
	{
		___nextSourceId_23 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_24() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB, ___spatialAwarenessSystemProfile_24)); }
	inline MixedRealitySpatialAwarenessSystemProfile_tC811A6F178BDBEE2BF7C3E78611ABA4CBAB26F51 * get_spatialAwarenessSystemProfile_24() const { return ___spatialAwarenessSystemProfile_24; }
	inline MixedRealitySpatialAwarenessSystemProfile_tC811A6F178BDBEE2BF7C3E78611ABA4CBAB26F51 ** get_address_of_spatialAwarenessSystemProfile_24() { return &___spatialAwarenessSystemProfile_24; }
	inline void set_spatialAwarenessSystemProfile_24(MixedRealitySpatialAwarenessSystemProfile_tC811A6F178BDBEE2BF7C3E78611ABA4CBAB26F51 * value)
	{
		___spatialAwarenessSystemProfile_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemProfile_24), (void*)value);
	}
};

struct MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserversPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserversTPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserverPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetObserverTPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProvidersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetDataProvidersPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProviderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetDataProviderPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumeObserversPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumeObserversTPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumeObserverPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendObserversPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendObserversTPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendObserverPerfMarker_36;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_37;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsTPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsTPerfMarker_38;

public:
	inline static int32_t get_offset_of_GetObserversPerfMarker_25() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___GetObserversPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserversPerfMarker_25() const { return ___GetObserversPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserversPerfMarker_25() { return &___GetObserversPerfMarker_25; }
	inline void set_GetObserversPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserversPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_GetObserversTPerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___GetObserversTPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserversTPerfMarker_26() const { return ___GetObserversTPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserversTPerfMarker_26() { return &___GetObserversTPerfMarker_26; }
	inline void set_GetObserversTPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserversTPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetObserverPerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___GetObserverPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserverPerfMarker_27() const { return ___GetObserverPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserverPerfMarker_27() { return &___GetObserverPerfMarker_27; }
	inline void set_GetObserverPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserverPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_GetObserverTPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___GetObserverTPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetObserverTPerfMarker_28() const { return ___GetObserverTPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetObserverTPerfMarker_28() { return &___GetObserverTPerfMarker_28; }
	inline void set_GetObserverTPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetObserverTPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_GetDataProvidersPerfMarker_29() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___GetDataProvidersPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetDataProvidersPerfMarker_29() const { return ___GetDataProvidersPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetDataProvidersPerfMarker_29() { return &___GetDataProvidersPerfMarker_29; }
	inline void set_GetDataProvidersPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetDataProvidersPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_GetDataProviderPerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___GetDataProviderPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetDataProviderPerfMarker_30() const { return ___GetDataProviderPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetDataProviderPerfMarker_30() { return &___GetDataProviderPerfMarker_30; }
	inline void set_GetDataProviderPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetDataProviderPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___ResumeObserversPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumeObserversPerfMarker_31() const { return ___ResumeObserversPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumeObserversPerfMarker_31() { return &___ResumeObserversPerfMarker_31; }
	inline void set_ResumeObserversPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumeObserversPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversTPerfMarker_32() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___ResumeObserversTPerfMarker_32)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumeObserversTPerfMarker_32() const { return ___ResumeObserversTPerfMarker_32; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumeObserversTPerfMarker_32() { return &___ResumeObserversTPerfMarker_32; }
	inline void set_ResumeObserversTPerfMarker_32(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumeObserversTPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_ResumeObserverPerfMarker_33() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___ResumeObserverPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumeObserverPerfMarker_33() const { return ___ResumeObserverPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumeObserverPerfMarker_33() { return &___ResumeObserverPerfMarker_33; }
	inline void set_ResumeObserverPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumeObserverPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversPerfMarker_34() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___SuspendObserversPerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendObserversPerfMarker_34() const { return ___SuspendObserversPerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendObserversPerfMarker_34() { return &___SuspendObserversPerfMarker_34; }
	inline void set_SuspendObserversPerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendObserversPerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversTPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___SuspendObserversTPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendObserversTPerfMarker_35() const { return ___SuspendObserversTPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendObserversTPerfMarker_35() { return &___SuspendObserversTPerfMarker_35; }
	inline void set_SuspendObserversTPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendObserversTPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_SuspendObserverPerfMarker_36() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___SuspendObserverPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendObserverPerfMarker_36() const { return ___SuspendObserverPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendObserverPerfMarker_36() { return &___SuspendObserverPerfMarker_36; }
	inline void set_SuspendObserverPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendObserverPerfMarker_36 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_37() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___ClearObservationsPerfMarker_37)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_37() const { return ___ClearObservationsPerfMarker_37; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_37() { return &___ClearObservationsPerfMarker_37; }
	inline void set_ClearObservationsPerfMarker_37(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_37 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsTPerfMarker_38() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_StaticFields, ___ClearObservationsTPerfMarker_38)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsTPerfMarker_38() const { return ___ClearObservationsTPerfMarker_38; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsTPerfMarker_38() { return &___ClearObservationsTPerfMarker_38; }
	inline void set_ClearObservationsTPerfMarker_38(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsTPerfMarker_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);


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

// COM Callable Wrapper for System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>, IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92*>(this);
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
		interfaceIds[0] = IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>, IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2*>(this);
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
		interfaceIds[0] = IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 *>(UnBox(GetManagedObjectInline(), Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>, IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4*>(this);
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
		interfaceIds[0] = IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID;
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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 *>(UnBox(GetManagedObjectInline(), Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var));
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityCameraSystem_tDA3062082AE7D8CE4F8A67DE680CD4862F78E5C1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityDiagnosticsSystem_t73EC12142C379E96867086A8316AF2FF0DD3D974_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInputSystem_t4E97F073859651E91C425017C46BCC86DF79C9A4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealitySceneSystem_t42BB6AB367BEC887B27D6C9395CBFCEABF049467_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealitySpatialAwarenessSystem_t443E5565569DBE08546D96ACB9F24C3679A6C6CB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Teleport.MixedRealityTeleportSystem
struct MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityTeleportSystem_t0FBA2BE1FBD9EE4349EAA2B9A6FDA7A1E50A9EE2_ComCallableWrapper(obj));
}
