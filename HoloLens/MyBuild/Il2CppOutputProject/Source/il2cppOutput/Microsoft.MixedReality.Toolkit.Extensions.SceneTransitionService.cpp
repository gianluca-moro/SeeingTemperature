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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct Dictionary_2_t68D1D690E7B058B97EEBD820C9BD417ABACAF284;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>
struct IEnumerable_1_t7D3CE49DEF7BDC88D95900E58AB06872FDE59009;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>
struct IEnumerable_1_t1CEFC4032D36100FE58999A10DFB02F5139BC4AF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Func`1<System.Threading.Tasks.Task>>
struct IEnumerator_1_tD259C605C945E5BABB034B4C2221351E85AFF5F6;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t0D2AD10C2920FAFDD8B691EB7E2FEC462AE564C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct KeyCollection_t23B231EEDC18B42A11BDE4E3C10CD0F9AA7EE85A;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct List_1_t6D5F1E0167E316A2DE5CD26D074913C3653BFAE8;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_t653022B4EDCE73F282430E1A396635798D309409;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit>
struct List_1_tC2AC174619D6CF51C5CF5DF1713602D416BD9BF6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct ValueCollection_tEC81F68C6AEF4DB381ED6CAEFC6D8CD082550466;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>[]
struct EntryU5BU5D_t6AE74B7B30A3980DBADB2FF99EBB3BF11D6ABDB1;
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad
struct CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader
struct ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem
struct IMixedRealitySceneSystem_t5AF6F0C009989EDB2195A421ABB977C8E90A2BCE;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t063D0EA483485B6D709977E7F4462E3731048173;
// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator
struct IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ISceneTransitionService
struct ISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene
struct LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_t563FB3885F4333951CFA248274965D4C77AE700E;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService
struct SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96;
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile
struct SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFaderState_t448B8DA0C518B15E3396D600E27F3743BB77CAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1CEFC4032D36100FE58999A10DFB02F5139BC4AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7D3CE49DEF7BDC88D95900E58AB06872FDE59009_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tCF7FF5B0C2C3C1ED84EA8B53C00513836CEE6A9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD259C605C945E5BABB034B4C2221351E85AFF5F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySceneSystem_t5AF6F0C009989EDB2195A421ABB977C8E90A2BCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral31458AD0C0AF1F61C0D182621815EEB4ACF048D6;
IL2CPP_EXTERN_C String_t* _stringLiteral36EE8A5FF4009B845B66EC1D63E1466DC691A26E;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4455AB79907F48883B90E43E3480CC3C4C7EF749;
IL2CPP_EXTERN_C String_t* _stringLiteral4543A8A600AAF621D5B283482F0136C2F216FF62;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral52C2722348A269EDA43E9964574EB943B39E2844;
IL2CPP_EXTERN_C String_t* _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C;
IL2CPP_EXTERN_C String_t* _stringLiteral5DBBB5B60942F49C9A9831F4529E22F250F35879;
IL2CPP_EXTERN_C String_t* _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8;
IL2CPP_EXTERN_C String_t* _stringLiteral6188E7230D6EC2CB653C4B636C9EB4E43FA23E5B;
IL2CPP_EXTERN_C String_t* _stringLiteral6724DF02A625A1E61DB0254B283AEA48BABAA8FC;
IL2CPP_EXTERN_C String_t* _stringLiteral6BD6FA6FBD0F285B5107F463210EB588E48F051A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C57382736310A2BDC33273D5EF4504D36B34FA7;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69;
IL2CPP_EXTERN_C String_t* _stringLiteral7D9D651ABAA01519787B90DCB20837985F76598E;
IL2CPP_EXTERN_C String_t* _stringLiteral812B93C972F83E269C898CB9FEF20AD1ADA64217;
IL2CPP_EXTERN_C String_t* _stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312;
IL2CPP_EXTERN_C String_t* _stringLiteral8828DDA20B74971CEC31D21BD2E54441F8B587BE;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB26CEBCA8FFC34185115D39A399721D995EB25;
IL2CPP_EXTERN_C String_t* _stringLiteral940FB1761904743E250EFA2AF7552DF6EB59FE94;
IL2CPP_EXTERN_C String_t* _stringLiteral9DC2BD27F33C54867CE2E685D22F354136FB41AD;
IL2CPP_EXTERN_C String_t* _stringLiteralA2003866100759F536E30A6F22A78916CFC09236;
IL2CPP_EXTERN_C String_t* _stringLiteralA646770488C9DBF9573CE4990692B59630579657;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB85BD2A90D444EDBD4F18BEBB782A0CA3E1B6F7A;
IL2CPP_EXTERN_C String_t* _stringLiteralB9A37D35927E80BED3DDCD4E0A2C8E638956590F;
IL2CPP_EXTERN_C String_t* _stringLiteralBE3AB133E10294E2E9B74FE908DA018B2506B0F2;
IL2CPP_EXTERN_C String_t* _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5;
IL2CPP_EXTERN_C String_t* _stringLiteralD334F0506ACE2EC5CCBC7E868FCA093C85B446A2;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A3B911B8B657663E66DA058B2F981A6805D3F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE5121B082D242C1BD514B12BF0C187A5993C5215;
IL2CPP_EXTERN_C String_t* _stringLiteralF85263F579BDEEADCEC89CFCDB0C3F6C51D186BF;
IL2CPP_EXTERN_C String_t* _stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m1ABA22349B46155FA5F75D284BA02A3AF93D120F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_m2DF719DC41FBD051C24A7260444B8CD2E5B8ED42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m5B3B3D3510735BB8795C3ADD1B9CB5EFBEDA4B28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m9FE61AFAD371F84762D2CCB9A0E5B68CFB782EB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m7EEAAE9CBF0661D1078040B71154F2B3EAEBCECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mCDF45005C4B36C3B1F46163D92AB223FF3AE0D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m58302774903C7E146380D2FFCB465DC2C01496A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m3AE4D96EE7FC6300E0DFD04D8F78860A23A6E1E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_mB69DEEB7CA5294E6FD3B8AF0AAF843C370D06545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_mDCD8A0270B772974746AEFCDAA6CE9658F9F76C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63D4BF8D3EEE3A9C21CDBA479BCF92CB440CEECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_mBFA4E478398672D97B501AA418F2AF2BD331BFE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m400194C5C80E95F960A3D3BF720B26BCB72F13F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m270F38A2150563822FB24524DA634BEB1DC662ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_mF8438164C13E3F5D02271E5F4F36A5F48505589B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m20B6B2D6977D2C4A6861906E58E03ED4FF5E426B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_m24418EEAC4404A8D408B7A76C9EC032F71DAD71E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_m0B0001B60FEFBF3C74645ECAB054D9F24D8AE0A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m7ABB7596066A3384D4927DC9F3E81A06E7A37E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m3AA19905B6D134C47711B31897123A630B46FEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63BA39AC4ABFEBB0048C4BB326015E8A5B09AB0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mB0033147BF23C863602FD8794811E793CBAD4B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m39536ED3283E9A0B3FE8ACF503D935FA1B2E0F6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_mF33716648EF752B76D78FABCEC98C647517AC338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m17E3E66F7C3BB2DB7ECCC458C9758AAFC4E5C7FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mD48A5BC2A420B1643E40CDACB1C525EC8193EDE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m83A25832C81F1439FC305678A94B1B95E322A8AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0CA474F9B4BA5D724ADB0BF8924BAD706FB81E38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mF443B74D760D8CDB447615AF4BC29A1657CC1954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoadContentScene_U3CLoadContentU3Eb__5_0_m388CEBC0873C4D5DF640F6ABE1F4BE9DD7378386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MixedRealityToolkit_GetService_TisISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5_m5D56C586272E1736F9BB0597EE10E2208160D19E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneTransitionService_CreateCameraFader_mE349B65791F79E9F089A616E90E553F5033E1E12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneTransitionService_CreateDefaultProgressIndicator_mB59917573AA6FA94D70BD668662921DE23D54673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneTransitionService_GatherFadeTargetCameras_mFD79836B0AF86D79B7AFD5229F146A53BD0C26CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoSceneTransitionU3Ed__52_MoveNext_mCB3B13164BF1753105FB2E806519AF71ACFF9CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;

struct Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922;
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t815A3968B96CBAAAB20DA4BDE17876D9143FE348 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6AE74B7B30A3980DBADB2FF99EBB3BF11D6ABDB1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t23B231EEDC18B42A11BDE4E3C10CD0F9AA7EE85A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ___entries_1)); }
	inline EntryU5BU5D_t6AE74B7B30A3980DBADB2FF99EBB3BF11D6ABDB1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6AE74B7B30A3980DBADB2FF99EBB3BF11D6ABDB1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6AE74B7B30A3980DBADB2FF99EBB3BF11D6ABDB1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ___keys_7)); }
	inline KeyCollection_t23B231EEDC18B42A11BDE4E3C10CD0F9AA7EE85A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t23B231EEDC18B42A11BDE4E3C10CD0F9AA7EE85A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t23B231EEDC18B42A11BDE4E3C10CD0F9AA7EE85A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ___values_8)); }
	inline ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_t653022B4EDCE73F282430E1A396635798D309409  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409, ____items_1)); }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* get__items_1() const { return ____items_1; }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t653022B4EDCE73F282430E1A396635798D309409_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t653022B4EDCE73F282430E1A396635798D309409_StaticFields, ____emptyArray_5)); }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC, ___dictionary_0)); }
	inline Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken
struct SceneActivationToken_t1163703C3A4D546161C0A38ED8F0F8606FC40076  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::<ReadyToProceed>k__BackingField
	bool ___U3CReadyToProceedU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken::<AllowSceneActivation>k__BackingField
	bool ___U3CAllowSceneActivationU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CReadyToProceedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SceneActivationToken_t1163703C3A4D546161C0A38ED8F0F8606FC40076, ___U3CReadyToProceedU3Ek__BackingField_0)); }
	inline bool get_U3CReadyToProceedU3Ek__BackingField_0() const { return ___U3CReadyToProceedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CReadyToProceedU3Ek__BackingField_0() { return &___U3CReadyToProceedU3Ek__BackingField_0; }
	inline void set_U3CReadyToProceedU3Ek__BackingField_0(bool value)
	{
		___U3CReadyToProceedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAllowSceneActivationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SceneActivationToken_t1163703C3A4D546161C0A38ED8F0F8606FC40076, ___U3CAllowSceneActivationU3Ek__BackingField_1)); }
	inline bool get_U3CAllowSceneActivationU3Ek__BackingField_1() const { return ___U3CAllowSceneActivationU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CAllowSceneActivationU3Ek__BackingField_1() { return &___U3CAllowSceneActivationU3Ek__BackingField_1; }
	inline void set_U3CAllowSceneActivationU3Ek__BackingField_1(bool value)
	{
		___U3CAllowSceneActivationU3Ek__BackingField_1 = value;
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


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceMappings_2), (void*)value);
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
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


// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA__padding[1];
	};

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
struct Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2 
{
public:
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad::Renderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___Renderer_0;
	// UnityEngine.MaterialPropertyBlock Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad::PropertyBlock
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___PropertyBlock_1;

public:
	inline static int32_t get_offset_of_Renderer_0() { return static_cast<int32_t>(offsetof(Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2, ___Renderer_0)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_Renderer_0() const { return ___Renderer_0; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_Renderer_0() { return &___Renderer_0; }
	inline void set_Renderer_0(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___Renderer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Renderer_0), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyBlock_1() { return static_cast<int32_t>(offsetof(Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2, ___PropertyBlock_1)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_PropertyBlock_1() const { return ___PropertyBlock_1; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_PropertyBlock_1() { return &___PropertyBlock_1; }
	inline void set_PropertyBlock_1(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___PropertyBlock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyBlock_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
struct Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshaled_pinvoke
{
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___Renderer_0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___PropertyBlock_1;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
struct Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshaled_com
{
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___Renderer_0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___PropertyBlock_1;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE__padding[1];
	};

public:
};

struct YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields
{
public:
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___s_sendOrPostCallbackRunAction_1;

public:
	inline static int32_t get_offset_of_s_waitCallbackRunAction_0() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_waitCallbackRunAction_0)); }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * get_s_waitCallbackRunAction_0() const { return ___s_waitCallbackRunAction_0; }
	inline WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 ** get_address_of_s_waitCallbackRunAction_0() { return &___s_waitCallbackRunAction_0; }
	inline void set_s_waitCallbackRunAction_0(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * value)
	{
		___s_waitCallbackRunAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_waitCallbackRunAction_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_sendOrPostCallbackRunAction_1() { return static_cast<int32_t>(offsetof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_StaticFields, ___s_sendOrPostCallbackRunAction_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_s_sendOrPostCallbackRunAction_1() const { return ___s_sendOrPostCallbackRunAction_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_s_sendOrPostCallbackRunAction_1() { return &___s_sendOrPostCallbackRunAction_1; }
	inline void set_s_sendOrPostCallbackRunAction_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___s_sendOrPostCallbackRunAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_sendOrPostCallbackRunAction_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA, ___dictionary_0)); }
	inline Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA, ___currentValue_3)); }
	inline Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  get_currentValue_3() const { return ___currentValue_3; }
	inline Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2 * get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___Renderer_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___PropertyBlock_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>
struct Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5, ___dictionary_0)); }
	inline Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5, ___currentValue_3)); }
	inline Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  get_currentValue_3() const { return ___currentValue_3; }
	inline Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2 * get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___Renderer_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentValue_3))->___PropertyBlock_1), (void*)NULL);
		#endif
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


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState
struct CameraFaderState_t448B8DA0C518B15E3396D600E27F3743BB77CAFB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFaderState_t448B8DA0C518B15E3396D600E27F3743BB77CAFB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets
struct CameraFaderTargets_t817A2F61F77E29F70F755FA51911A8D213824476 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFaderTargets_t817A2F61F77E29F70F755FA51911A8D213824476, ___value___2)); }
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

// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
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

// UnityEngine.PrimitiveType
struct PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState
struct ProgressIndicatorState_t59770AB4D99B08B644D0CA7716405A93B7D058D5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProgressIndicatorState_t59770AB4D99B08B644D0CA7716405A93B7D058D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderMode
struct RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF, ___value___2)); }
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
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


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad
struct CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::quads
	Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * ___quads_3;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::fadeOutColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fadeOutColor_4;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::fadeInColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fadeInColor_5;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::currentColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___currentColor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::quadMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___quadMaterial_7;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::quadMaterialTemplate
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___quadMaterialTemplate_8;

public:
	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B, ___U3CStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CStateU3Ek__BackingField_2() const { return ___U3CStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_2() { return &___U3CStateU3Ek__BackingField_2; }
	inline void set_U3CStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CStateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_quads_3() { return static_cast<int32_t>(offsetof(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B, ___quads_3)); }
	inline Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * get_quads_3() const { return ___quads_3; }
	inline Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC ** get_address_of_quads_3() { return &___quads_3; }
	inline void set_quads_3(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * value)
	{
		___quads_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quads_3), (void*)value);
	}

	inline static int32_t get_offset_of_fadeOutColor_4() { return static_cast<int32_t>(offsetof(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B, ___fadeOutColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fadeOutColor_4() const { return ___fadeOutColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fadeOutColor_4() { return &___fadeOutColor_4; }
	inline void set_fadeOutColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fadeOutColor_4 = value;
	}

	inline static int32_t get_offset_of_fadeInColor_5() { return static_cast<int32_t>(offsetof(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B, ___fadeInColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fadeInColor_5() const { return ___fadeInColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fadeInColor_5() { return &___fadeInColor_5; }
	inline void set_fadeInColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fadeInColor_5 = value;
	}

	inline static int32_t get_offset_of_currentColor_6() { return static_cast<int32_t>(offsetof(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B, ___currentColor_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_currentColor_6() const { return ___currentColor_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_currentColor_6() { return &___currentColor_6; }
	inline void set_currentColor_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___currentColor_6 = value;
	}

	inline static int32_t get_offset_of_quadMaterial_7() { return static_cast<int32_t>(offsetof(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B, ___quadMaterial_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_quadMaterial_7() const { return ___quadMaterial_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_quadMaterial_7() { return &___quadMaterial_7; }
	inline void set_quadMaterial_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___quadMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quadMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of_quadMaterialTemplate_8() { return static_cast<int32_t>(offsetof(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B, ___quadMaterialTemplate_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_quadMaterialTemplate_8() const { return ___quadMaterialTemplate_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_quadMaterialTemplate_8() { return &___quadMaterialTemplate_8; }
	inline void set_quadMaterialTemplate_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___quadMaterialTemplate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quadMaterialTemplate_8), (void*)value);
	}
};

struct CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::FadeOutAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeOutAsyncPerfMarker_9;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::FadeInAsyncPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeInAsyncPerfMarker_10;

public:
	inline static int32_t get_offset_of_FadeOutAsyncPerfMarker_9() { return static_cast<int32_t>(offsetof(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_StaticFields, ___FadeOutAsyncPerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeOutAsyncPerfMarker_9() const { return ___FadeOutAsyncPerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeOutAsyncPerfMarker_9() { return &___FadeOutAsyncPerfMarker_9; }
	inline void set_FadeOutAsyncPerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeOutAsyncPerfMarker_9 = value;
	}

	inline static int32_t get_offset_of_FadeInAsyncPerfMarker_10() { return static_cast<int32_t>(offsetof(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_StaticFields, ___FadeInAsyncPerfMarker_10)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeInAsyncPerfMarker_10() const { return ___FadeInAsyncPerfMarker_10; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeInAsyncPerfMarker_10() { return &___FadeInAsyncPerfMarker_10; }
	inline void set_FadeInAsyncPerfMarker_10(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeInAsyncPerfMarker_10 = value;
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

// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Name
	String_t* ___Name_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Path
	String_t* ___Path_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Included
	bool ___Included_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::BuildIndex
	int32_t ___BuildIndex_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Tag
	String_t* ___Tag_5;
	// UnityEngine.Object Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___Asset_6;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F, ___Path_2)); }
	inline String_t* get_Path_2() const { return ___Path_2; }
	inline String_t** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(String_t* value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_Included_3() { return static_cast<int32_t>(offsetof(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F, ___Included_3)); }
	inline bool get_Included_3() const { return ___Included_3; }
	inline bool* get_address_of_Included_3() { return &___Included_3; }
	inline void set_Included_3(bool value)
	{
		___Included_3 = value;
	}

	inline static int32_t get_offset_of_BuildIndex_4() { return static_cast<int32_t>(offsetof(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F, ___BuildIndex_4)); }
	inline int32_t get_BuildIndex_4() const { return ___BuildIndex_4; }
	inline int32_t* get_address_of_BuildIndex_4() { return &___BuildIndex_4; }
	inline void set_BuildIndex_4(int32_t value)
	{
		___BuildIndex_4 = value;
	}

	inline static int32_t get_offset_of_Tag_5() { return static_cast<int32_t>(offsetof(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F, ___Tag_5)); }
	inline String_t* get_Tag_5() const { return ___Tag_5; }
	inline String_t** get_address_of_Tag_5() { return &___Tag_5; }
	inline void set_Tag_5(String_t* value)
	{
		___Tag_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tag_5), (void*)value);
	}

	inline static int32_t get_offset_of_Asset_6() { return static_cast<int32_t>(offsetof(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F, ___Asset_6)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_Asset_6() const { return ___Asset_6; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_Asset_6() { return &___Asset_6; }
	inline void set_Asset_6(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___Asset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Asset_6), (void*)value);
	}
};

struct SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::empty
	SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_StaticFields, ___empty_0)); }
	inline SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  get_empty_0() const { return ___empty_0; }
	inline SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F * get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Asset_6), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_marshaled_pinvoke
{
	char* ___Name_1;
	char* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	char* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___Asset_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_marshaled_com
{
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	Il2CppChar* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___Asset_6;
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

// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3  : public MulticastDelegate_t
{
public:

public:
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


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService
struct SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96  : public BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<UseFadeColor>k__BackingField
	bool ___U3CUseFadeColorU3Ek__BackingField_11;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeColor>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CFadeColorU3Ek__BackingField_12;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeInTime>k__BackingField
	float ___U3CFadeInTimeU3Ek__BackingField_13;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeOutTime>k__BackingField
	float ___U3CFadeOutTimeU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<FadeTargets>k__BackingField
	int32_t ___U3CFadeTargetsU3Ek__BackingField_15;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<OnTransitionStarted>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTransitionStartedU3Ek__BackingField_16;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<OnTransitionCompleted>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTransitionCompletedU3Ek__BackingField_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<TransitionInProgress>k__BackingField
	bool ___U3CTransitionInProgressU3Ek__BackingField_18;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::<TransitionProgress>k__BackingField
	float ___U3CTransitionProgressU3Ek__BackingField_19;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::sceneTransitionServiceProfile
	SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * ___sceneTransitionServiceProfile_20;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::progressIndicatorObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___progressIndicatorObject_21;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::defaultProgressIndicator
	RuntimeObject* ___defaultProgressIndicator_22;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::cameraFader
	RuntimeObject* ___cameraFader_23;
	// System.Collections.Generic.List`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::customFadeTargetCameras
	List_1_t653022B4EDCE73F282430E1A396635798D309409 * ___customFadeTargetCameras_24;

public:
	inline static int32_t get_offset_of_U3CUseFadeColorU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___U3CUseFadeColorU3Ek__BackingField_11)); }
	inline bool get_U3CUseFadeColorU3Ek__BackingField_11() const { return ___U3CUseFadeColorU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CUseFadeColorU3Ek__BackingField_11() { return &___U3CUseFadeColorU3Ek__BackingField_11; }
	inline void set_U3CUseFadeColorU3Ek__BackingField_11(bool value)
	{
		___U3CUseFadeColorU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CFadeColorU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___U3CFadeColorU3Ek__BackingField_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CFadeColorU3Ek__BackingField_12() const { return ___U3CFadeColorU3Ek__BackingField_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CFadeColorU3Ek__BackingField_12() { return &___U3CFadeColorU3Ek__BackingField_12; }
	inline void set_U3CFadeColorU3Ek__BackingField_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CFadeColorU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CFadeInTimeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___U3CFadeInTimeU3Ek__BackingField_13)); }
	inline float get_U3CFadeInTimeU3Ek__BackingField_13() const { return ___U3CFadeInTimeU3Ek__BackingField_13; }
	inline float* get_address_of_U3CFadeInTimeU3Ek__BackingField_13() { return &___U3CFadeInTimeU3Ek__BackingField_13; }
	inline void set_U3CFadeInTimeU3Ek__BackingField_13(float value)
	{
		___U3CFadeInTimeU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CFadeOutTimeU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___U3CFadeOutTimeU3Ek__BackingField_14)); }
	inline float get_U3CFadeOutTimeU3Ek__BackingField_14() const { return ___U3CFadeOutTimeU3Ek__BackingField_14; }
	inline float* get_address_of_U3CFadeOutTimeU3Ek__BackingField_14() { return &___U3CFadeOutTimeU3Ek__BackingField_14; }
	inline void set_U3CFadeOutTimeU3Ek__BackingField_14(float value)
	{
		___U3CFadeOutTimeU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CFadeTargetsU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___U3CFadeTargetsU3Ek__BackingField_15)); }
	inline int32_t get_U3CFadeTargetsU3Ek__BackingField_15() const { return ___U3CFadeTargetsU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CFadeTargetsU3Ek__BackingField_15() { return &___U3CFadeTargetsU3Ek__BackingField_15; }
	inline void set_U3CFadeTargetsU3Ek__BackingField_15(int32_t value)
	{
		___U3CFadeTargetsU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3COnTransitionStartedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___U3COnTransitionStartedU3Ek__BackingField_16)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTransitionStartedU3Ek__BackingField_16() const { return ___U3COnTransitionStartedU3Ek__BackingField_16; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTransitionStartedU3Ek__BackingField_16() { return &___U3COnTransitionStartedU3Ek__BackingField_16; }
	inline void set_U3COnTransitionStartedU3Ek__BackingField_16(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTransitionStartedU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTransitionStartedU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTransitionCompletedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___U3COnTransitionCompletedU3Ek__BackingField_17)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTransitionCompletedU3Ek__BackingField_17() const { return ___U3COnTransitionCompletedU3Ek__BackingField_17; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTransitionCompletedU3Ek__BackingField_17() { return &___U3COnTransitionCompletedU3Ek__BackingField_17; }
	inline void set_U3COnTransitionCompletedU3Ek__BackingField_17(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTransitionCompletedU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTransitionCompletedU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTransitionInProgressU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___U3CTransitionInProgressU3Ek__BackingField_18)); }
	inline bool get_U3CTransitionInProgressU3Ek__BackingField_18() const { return ___U3CTransitionInProgressU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CTransitionInProgressU3Ek__BackingField_18() { return &___U3CTransitionInProgressU3Ek__BackingField_18; }
	inline void set_U3CTransitionInProgressU3Ek__BackingField_18(bool value)
	{
		___U3CTransitionInProgressU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CTransitionProgressU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___U3CTransitionProgressU3Ek__BackingField_19)); }
	inline float get_U3CTransitionProgressU3Ek__BackingField_19() const { return ___U3CTransitionProgressU3Ek__BackingField_19; }
	inline float* get_address_of_U3CTransitionProgressU3Ek__BackingField_19() { return &___U3CTransitionProgressU3Ek__BackingField_19; }
	inline void set_U3CTransitionProgressU3Ek__BackingField_19(float value)
	{
		___U3CTransitionProgressU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_sceneTransitionServiceProfile_20() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___sceneTransitionServiceProfile_20)); }
	inline SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * get_sceneTransitionServiceProfile_20() const { return ___sceneTransitionServiceProfile_20; }
	inline SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C ** get_address_of_sceneTransitionServiceProfile_20() { return &___sceneTransitionServiceProfile_20; }
	inline void set_sceneTransitionServiceProfile_20(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * value)
	{
		___sceneTransitionServiceProfile_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneTransitionServiceProfile_20), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicatorObject_21() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___progressIndicatorObject_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_progressIndicatorObject_21() const { return ___progressIndicatorObject_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_progressIndicatorObject_21() { return &___progressIndicatorObject_21; }
	inline void set_progressIndicatorObject_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___progressIndicatorObject_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicatorObject_21), (void*)value);
	}

	inline static int32_t get_offset_of_defaultProgressIndicator_22() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___defaultProgressIndicator_22)); }
	inline RuntimeObject* get_defaultProgressIndicator_22() const { return ___defaultProgressIndicator_22; }
	inline RuntimeObject** get_address_of_defaultProgressIndicator_22() { return &___defaultProgressIndicator_22; }
	inline void set_defaultProgressIndicator_22(RuntimeObject* value)
	{
		___defaultProgressIndicator_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultProgressIndicator_22), (void*)value);
	}

	inline static int32_t get_offset_of_cameraFader_23() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___cameraFader_23)); }
	inline RuntimeObject* get_cameraFader_23() const { return ___cameraFader_23; }
	inline RuntimeObject** get_address_of_cameraFader_23() { return &___cameraFader_23; }
	inline void set_cameraFader_23(RuntimeObject* value)
	{
		___cameraFader_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraFader_23), (void*)value);
	}

	inline static int32_t get_offset_of_customFadeTargetCameras_24() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96, ___customFadeTargetCameras_24)); }
	inline List_1_t653022B4EDCE73F282430E1A396635798D309409 * get_customFadeTargetCameras_24() const { return ___customFadeTargetCameras_24; }
	inline List_1_t653022B4EDCE73F282430E1A396635798D309409 ** get_address_of_customFadeTargetCameras_24() { return &___customFadeTargetCameras_24; }
	inline void set_customFadeTargetCameras_24(List_1_t653022B4EDCE73F282430E1A396635798D309409 * value)
	{
		___customFadeTargetCameras_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customFadeTargetCameras_24), (void*)value);
	}
};

struct SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransitionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DoSceneTransitionPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeOutPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeOutPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeInPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___FadeInPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::ShowDefaultProgressIndicatorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ShowDefaultProgressIndicatorPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::HideProgressIndicatorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HideProgressIndicatorPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::GatherFadeTargetCamerasPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GatherFadeTargetCamerasPerfMarker_30;

public:
	inline static int32_t get_offset_of_DoSceneTransitionPerfMarker_25() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields, ___DoSceneTransitionPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DoSceneTransitionPerfMarker_25() const { return ___DoSceneTransitionPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DoSceneTransitionPerfMarker_25() { return &___DoSceneTransitionPerfMarker_25; }
	inline void set_DoSceneTransitionPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DoSceneTransitionPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_FadeOutPerfMarker_26() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields, ___FadeOutPerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeOutPerfMarker_26() const { return ___FadeOutPerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeOutPerfMarker_26() { return &___FadeOutPerfMarker_26; }
	inline void set_FadeOutPerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeOutPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_FadeInPerfMarker_27() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields, ___FadeInPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_FadeInPerfMarker_27() const { return ___FadeInPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_FadeInPerfMarker_27() { return &___FadeInPerfMarker_27; }
	inline void set_FadeInPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___FadeInPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_ShowDefaultProgressIndicatorPerfMarker_28() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields, ___ShowDefaultProgressIndicatorPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ShowDefaultProgressIndicatorPerfMarker_28() const { return ___ShowDefaultProgressIndicatorPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ShowDefaultProgressIndicatorPerfMarker_28() { return &___ShowDefaultProgressIndicatorPerfMarker_28; }
	inline void set_ShowDefaultProgressIndicatorPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ShowDefaultProgressIndicatorPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_HideProgressIndicatorPerfMarker_29() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields, ___HideProgressIndicatorPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HideProgressIndicatorPerfMarker_29() const { return ___HideProgressIndicatorPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HideProgressIndicatorPerfMarker_29() { return &___HideProgressIndicatorPerfMarker_29; }
	inline void set_HideProgressIndicatorPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HideProgressIndicatorPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_GatherFadeTargetCamerasPerfMarker_30() { return static_cast<int32_t>(offsetof(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields, ___GatherFadeTargetCamerasPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GatherFadeTargetCamerasPerfMarker_30() const { return ___GatherFadeTargetCamerasPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GatherFadeTargetCamerasPerfMarker_30() { return &___GatherFadeTargetCamerasPerfMarker_30; }
	inline void set_GatherFadeTargetCamerasPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GatherFadeTargetCamerasPerfMarker_30 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17
struct U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>4__this
	CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * ___U3CU3E4__this_2;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_3;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<fadeAmount>5__3
	float ___U3CfadeAmountU3E5__3_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753, ___U3CU3E4__this_2)); }
	inline CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753, ___U3CU3E7__wrap1_3)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_3 = value;
	}

	inline static int32_t get_offset_of_U3CfadeAmountU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753, ___U3CfadeAmountU3E5__3_4)); }
	inline float get_U3CfadeAmountU3E5__3_4() const { return ___U3CfadeAmountU3E5__3_4; }
	inline float* get_address_of_U3CfadeAmountU3E5__3_4() { return &___U3CfadeAmountU3E5__3_4; }
	inline void set_U3CfadeAmountU3E5__3_4(float value)
	{
		___U3CfadeAmountU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753, ___U3CU3Eu__1_5)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15
struct U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>4__this
	CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * ___U3CU3E4__this_2;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_3;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::targets
	RuntimeObject* ___targets_4;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_5;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<fadeAmount>5__3
	float ___U3CfadeAmountU3E5__3_6;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD, ___U3CU3E4__this_2)); }
	inline CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD, ___color_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_3() const { return ___color_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_targets_4() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD, ___targets_4)); }
	inline RuntimeObject* get_targets_4() const { return ___targets_4; }
	inline RuntimeObject** get_address_of_targets_4() { return &___targets_4; }
	inline void set_targets_4(RuntimeObject* value)
	{
		___targets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD, ___U3CU3E7__wrap1_5)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_5 = value;
	}

	inline static int32_t get_offset_of_U3CfadeAmountU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD, ___U3CfadeAmountU3E5__3_6)); }
	inline float get_U3CfadeAmountU3E5__3_6() const { return ___U3CfadeAmountU3E5__3_6; }
	inline float* get_address_of_U3CfadeAmountU3E5__3_6() { return &___U3CfadeAmountU3E5__3_6; }
	inline void set_U3CfadeAmountU3E5__3_6(float value)
	{
		___U3CfadeAmountU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_7() { return static_cast<int32_t>(offsetof(U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD, ___U3CU3Eu__1_7)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_7() const { return ___U3CU3Eu__1_7; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_7() { return &___U3CU3Eu__1_7; }
	inline void set_U3CU3Eu__1_7(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48
struct U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::<>4__this
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * ___U3CU3E4__this_2;
	// System.Func`1<System.Threading.Tasks.Task> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::sceneOperation
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOperation_3;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::progressIndicator
	RuntimeObject* ___progressIndicator_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOperation_3() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07, ___sceneOperation_3)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_sceneOperation_3() const { return ___sceneOperation_3; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_sceneOperation_3() { return &___sceneOperation_3; }
	inline void set_sceneOperation_3(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___sceneOperation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOperation_3), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicator_4() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07, ___progressIndicator_4)); }
	inline RuntimeObject* get_progressIndicator_4() const { return ___progressIndicator_4; }
	inline RuntimeObject** get_address_of_progressIndicator_4() { return &___progressIndicator_4; }
	inline void set_progressIndicator_4(RuntimeObject* value)
	{
		___progressIndicator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicator_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49
struct U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::<>4__this
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * ___U3CU3E4__this_2;
	// System.Func`1<System.Threading.Tasks.Task> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::sceneOp1
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOp1_3;
	// System.Func`1<System.Threading.Tasks.Task> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::sceneOp2
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOp2_4;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::progressIndicator
	RuntimeObject* ___progressIndicator_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOp1_3() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7, ___sceneOp1_3)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_sceneOp1_3() const { return ___sceneOp1_3; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_sceneOp1_3() { return &___sceneOp1_3; }
	inline void set_sceneOp1_3(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___sceneOp1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOp1_3), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOp2_4() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7, ___sceneOp2_4)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_sceneOp2_4() const { return ___sceneOp2_4; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_sceneOp2_4() { return &___sceneOp2_4; }
	inline void set_sceneOp2_4(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___sceneOp2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOp2_4), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicator_5() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7, ___progressIndicator_5)); }
	inline RuntimeObject* get_progressIndicator_5() const { return ___progressIndicator_5; }
	inline RuntimeObject** get_address_of_progressIndicator_5() { return &___progressIndicator_5; }
	inline void set_progressIndicator_5(RuntimeObject* value)
	{
		___progressIndicator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicator_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50
struct U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::<>4__this
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::sceneOperations
	RuntimeObject* ___sceneOperations_3;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::progressIndicator
	RuntimeObject* ___progressIndicator_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOperations_3() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7, ___sceneOperations_3)); }
	inline RuntimeObject* get_sceneOperations_3() const { return ___sceneOperations_3; }
	inline RuntimeObject** get_address_of_sceneOperations_3() { return &___sceneOperations_3; }
	inline void set_sceneOperations_3(RuntimeObject* value)
	{
		___sceneOperations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOperations_3), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicator_4() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7, ___progressIndicator_4)); }
	inline RuntimeObject* get_progressIndicator_4() const { return ___progressIndicator_4; }
	inline RuntimeObject** get_address_of_progressIndicator_4() { return &___progressIndicator_4; }
	inline void set_progressIndicator_4(RuntimeObject* value)
	{
		___progressIndicator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicator_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52
struct U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::fadeOutTime
	float ___fadeOutTime_2;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::fadeInTime
	float ___fadeInTime_3;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>4__this
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * ___U3CU3E4__this_4;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::progressIndicator
	RuntimeObject* ___progressIndicator_5;
	// System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::sceneOperations
	RuntimeObject* ___sceneOperations_6;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_7;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_8;
	// System.Collections.Generic.IEnumerator`1<System.Func`1<System.Threading.Tasks.Task>> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_fadeOutTime_2() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___fadeOutTime_2)); }
	inline float get_fadeOutTime_2() const { return ___fadeOutTime_2; }
	inline float* get_address_of_fadeOutTime_2() { return &___fadeOutTime_2; }
	inline void set_fadeOutTime_2(float value)
	{
		___fadeOutTime_2 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_3() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___fadeInTime_3)); }
	inline float get_fadeInTime_3() const { return ___fadeInTime_3; }
	inline float* get_address_of_fadeInTime_3() { return &___fadeInTime_3; }
	inline void set_fadeInTime_3(float value)
	{
		___fadeInTime_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___U3CU3E4__this_4)); }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicator_5() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___progressIndicator_5)); }
	inline RuntimeObject* get_progressIndicator_5() const { return ___progressIndicator_5; }
	inline RuntimeObject** get_address_of_progressIndicator_5() { return &___progressIndicator_5; }
	inline void set_progressIndicator_5(RuntimeObject* value)
	{
		___progressIndicator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicator_5), (void*)value);
	}

	inline static int32_t get_offset_of_sceneOperations_6() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___sceneOperations_6)); }
	inline RuntimeObject* get_sceneOperations_6() const { return ___sceneOperations_6; }
	inline RuntimeObject** get_address_of_sceneOperations_6() { return &___sceneOperations_6; }
	inline void set_sceneOperations_6(RuntimeObject* value)
	{
		___sceneOperations_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneOperations_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___U3CU3E7__wrap1_7)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_9() { return static_cast<int32_t>(offsetof(U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7, ___U3CU3E7__wrap2_9)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_9() const { return ___U3CU3E7__wrap2_9; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_9() { return &___U3CU3E7__wrap2_9; }
	inline void set_U3CU3E7__wrap2_9(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55
struct U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::<>4__this
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59
struct U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>4__this
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::fadeInTime
	float ___fadeInTime_3;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeInTime_3() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14, ___fadeInTime_3)); }
	inline float get_fadeInTime_3() const { return ___fadeInTime_3; }
	inline float* get_address_of_fadeInTime_3() { return &___fadeInTime_3; }
	inline void set_fadeInTime_3(float value)
	{
		___fadeInTime_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14, ___U3CU3E7__wrap1_4)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14, ___U3CU3Eu__1_5)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54
struct U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::<>4__this
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57
struct U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>4__this
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::fadeOutTime
	float ___fadeOutTime_3;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_4;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeOutTime_3() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23, ___fadeOutTime_3)); }
	inline float get_fadeOutTime_3() const { return ___fadeOutTime_3; }
	inline float* get_address_of_fadeOutTime_3() { return &___fadeOutTime_3; }
	inline void set_fadeOutTime_3(float value)
	{
		___fadeOutTime_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23, ___U3CU3E7__wrap1_4)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23, ___U3CU3Eu__1_5)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63
struct U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>4__this
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * ___U3CU3E4__this_2;
	// Unity.Profiling.ProfilerMarker/AutoScope Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>7__wrap1
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ___U3CU3E7__wrap1_3;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>u__1
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8, ___U3CU3E4__this_2)); }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8, ___U3CU3E7__wrap1_3)); }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  value)
	{
		___U3CU3E7__wrap1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8, ___U3CU3Eu__1_4)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
	}
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


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile
struct SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C  : public BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::useDefaultProgressIndicator
	bool ___useDefaultProgressIndicator_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::defaultProgressIndicatorPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___defaultProgressIndicatorPrefab_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::useFadeColor
	bool ___useFadeColor_7;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::fadeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fadeColor_8;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::fadeOutTime
	float ___fadeOutTime_9;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::fadeInTime
	float ___fadeInTime_10;
	// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::fadeTargets
	int32_t ___fadeTargets_11;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::cameraFaderType
	SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * ___cameraFaderType_12;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::cameraFaderMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___cameraFaderMaterial_13;

public:
	inline static int32_t get_offset_of_useDefaultProgressIndicator_5() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C, ___useDefaultProgressIndicator_5)); }
	inline bool get_useDefaultProgressIndicator_5() const { return ___useDefaultProgressIndicator_5; }
	inline bool* get_address_of_useDefaultProgressIndicator_5() { return &___useDefaultProgressIndicator_5; }
	inline void set_useDefaultProgressIndicator_5(bool value)
	{
		___useDefaultProgressIndicator_5 = value;
	}

	inline static int32_t get_offset_of_defaultProgressIndicatorPrefab_6() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C, ___defaultProgressIndicatorPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_defaultProgressIndicatorPrefab_6() const { return ___defaultProgressIndicatorPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_defaultProgressIndicatorPrefab_6() { return &___defaultProgressIndicatorPrefab_6; }
	inline void set_defaultProgressIndicatorPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___defaultProgressIndicatorPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultProgressIndicatorPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_useFadeColor_7() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C, ___useFadeColor_7)); }
	inline bool get_useFadeColor_7() const { return ___useFadeColor_7; }
	inline bool* get_address_of_useFadeColor_7() { return &___useFadeColor_7; }
	inline void set_useFadeColor_7(bool value)
	{
		___useFadeColor_7 = value;
	}

	inline static int32_t get_offset_of_fadeColor_8() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C, ___fadeColor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_fadeColor_8() const { return ___fadeColor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_fadeColor_8() { return &___fadeColor_8; }
	inline void set_fadeColor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___fadeColor_8 = value;
	}

	inline static int32_t get_offset_of_fadeOutTime_9() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C, ___fadeOutTime_9)); }
	inline float get_fadeOutTime_9() const { return ___fadeOutTime_9; }
	inline float* get_address_of_fadeOutTime_9() { return &___fadeOutTime_9; }
	inline void set_fadeOutTime_9(float value)
	{
		___fadeOutTime_9 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_10() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C, ___fadeInTime_10)); }
	inline float get_fadeInTime_10() const { return ___fadeInTime_10; }
	inline float* get_address_of_fadeInTime_10() { return &___fadeInTime_10; }
	inline void set_fadeInTime_10(float value)
	{
		___fadeInTime_10 = value;
	}

	inline static int32_t get_offset_of_fadeTargets_11() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C, ___fadeTargets_11)); }
	inline int32_t get_fadeTargets_11() const { return ___fadeTargets_11; }
	inline int32_t* get_address_of_fadeTargets_11() { return &___fadeTargets_11; }
	inline void set_fadeTargets_11(int32_t value)
	{
		___fadeTargets_11 = value;
	}

	inline static int32_t get_offset_of_cameraFaderType_12() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C, ___cameraFaderType_12)); }
	inline SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * get_cameraFaderType_12() const { return ___cameraFaderType_12; }
	inline SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A ** get_address_of_cameraFaderType_12() { return &___cameraFaderType_12; }
	inline void set_cameraFaderType_12(SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * value)
	{
		___cameraFaderType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraFaderType_12), (void*)value);
	}

	inline static int32_t get_offset_of_cameraFaderMaterial_13() { return static_cast<int32_t>(offsetof(SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C, ___cameraFaderMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_cameraFaderMaterial_13() const { return ___cameraFaderMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_cameraFaderMaterial_13() { return &___cameraFaderMaterial_13; }
	inline void set_cameraFaderMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___cameraFaderMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraFaderMaterial_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene
struct LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SceneManagement.LoadSceneMode Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::loadSceneMode
	int32_t ___loadSceneMode_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::contentScene
	SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  ___contentScene_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::loadOnStartup
	bool ___loadOnStartup_6;

public:
	inline static int32_t get_offset_of_loadSceneMode_4() { return static_cast<int32_t>(offsetof(LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F, ___loadSceneMode_4)); }
	inline int32_t get_loadSceneMode_4() const { return ___loadSceneMode_4; }
	inline int32_t* get_address_of_loadSceneMode_4() { return &___loadSceneMode_4; }
	inline void set_loadSceneMode_4(int32_t value)
	{
		___loadSceneMode_4 = value;
	}

	inline static int32_t get_offset_of_contentScene_5() { return static_cast<int32_t>(offsetof(LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F, ___contentScene_5)); }
	inline SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  get_contentScene_5() const { return ___contentScene_5; }
	inline SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F * get_address_of_contentScene_5() { return &___contentScene_5; }
	inline void set_contentScene_5(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  value)
	{
		___contentScene_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___contentScene_5))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___contentScene_5))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___contentScene_5))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___contentScene_5))->___Asset_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_loadOnStartup_6() { return static_cast<int32_t>(offsetof(LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F, ___loadOnStartup_6)); }
	inline bool get_loadOnStartup_6() const { return ___loadOnStartup_6; }
	inline bool* get_address_of_loadOnStartup_6() { return &___loadOnStartup_6; }
	inline void set_loadOnStartup_6(bool value)
	{
		___loadOnStartup_6 = value;
	}
};

struct LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::LoadContentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LoadContentPerfMarker_7;

public:
	inline static int32_t get_offset_of_LoadContentPerfMarker_7() { return static_cast<int32_t>(offsetof(LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_StaticFields, ___LoadContentPerfMarker_7)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LoadContentPerfMarker_7() const { return ___LoadContentPerfMarker_7; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LoadContentPerfMarker_7() { return &___LoadContentPerfMarker_7; }
	inline void set_LoadContentPerfMarker_7(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LoadContentPerfMarker_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::<IsProfileSwitching>k__BackingField
	bool ___U3CIsProfileSwitchingU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_t563FB3885F4333951CFA248274965D4C77AE700E * ___activeProfile_9;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newProfile
	MixedRealityToolkitConfigurationProfile_t563FB3885F4333951CFA248274965D4C77AE700E * ___newProfile_10;

public:
	inline static int32_t get_offset_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627, ___U3CIsProfileSwitchingU3Ek__BackingField_8)); }
	inline bool get_U3CIsProfileSwitchingU3Ek__BackingField_8() const { return ___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return &___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline void set_U3CIsProfileSwitchingU3Ek__BackingField_8(bool value)
	{
		___U3CIsProfileSwitchingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_activeProfile_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627, ___activeProfile_9)); }
	inline MixedRealityToolkitConfigurationProfile_t563FB3885F4333951CFA248274965D4C77AE700E * get_activeProfile_9() const { return ___activeProfile_9; }
	inline MixedRealityToolkitConfigurationProfile_t563FB3885F4333951CFA248274965D4C77AE700E ** get_address_of_activeProfile_9() { return &___activeProfile_9; }
	inline void set_activeProfile_9(MixedRealityToolkitConfigurationProfile_t563FB3885F4333951CFA248274965D4C77AE700E * value)
	{
		___activeProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_newProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627, ___newProfile_10)); }
	inline MixedRealityToolkitConfigurationProfile_t563FB3885F4333951CFA248274965D4C77AE700E * get_newProfile_10() const { return ___newProfile_10; }
	inline MixedRealityToolkitConfigurationProfile_t563FB3885F4333951CFA248274965D4C77AE700E ** get_address_of_newProfile_10() { return &___newProfile_10; }
	inline void set_newProfile_10(MixedRealityToolkitConfigurationProfile_t563FB3885F4333951CFA248274965D4C77AE700E * value)
	{
		___newProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newProfile_10), (void*)value);
	}
};

struct MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isInitializing
	bool ___isInitializing_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::internalShutdown
	bool ___internalShutdown_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeSystems
	Dictionary_2_t68D1D690E7B058B97EEBD820C9BD417ABACAF284 * ___activeSystems_11;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::registeredMixedRealityServices
	List_1_t6D5F1E0167E316A2DE5CD26D074913C3653BFAE8 * ___registeredMixedRealityServices_12;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeInstance
	MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 * ___activeInstance_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newInstanceBeingInitialized
	bool ___newInstanceBeingInitialized_14;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::toolkitInstances
	List_1_tC2AC174619D6CF51C5CF5DF1713602D416BD9BF6 * ___toolkitInstances_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::UpdateAllServicesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateAllServicesPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::LateUpdateAllServicesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdateAllServicesPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesInOrderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteOnAllServicesInOrderPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesReverseOrderPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteOnAllServicesReverseOrderPerfMarker_21;

public:
	inline static int32_t get_offset_of_isInitializing_4() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___isInitializing_4)); }
	inline bool get_isInitializing_4() const { return ___isInitializing_4; }
	inline bool* get_address_of_isInitializing_4() { return &___isInitializing_4; }
	inline void set_isInitializing_4(bool value)
	{
		___isInitializing_4 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuitting_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___isApplicationQuitting_5)); }
	inline bool get_isApplicationQuitting_5() const { return ___isApplicationQuitting_5; }
	inline bool* get_address_of_isApplicationQuitting_5() { return &___isApplicationQuitting_5; }
	inline void set_isApplicationQuitting_5(bool value)
	{
		___isApplicationQuitting_5 = value;
	}

	inline static int32_t get_offset_of_internalShutdown_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___internalShutdown_6)); }
	inline bool get_internalShutdown_6() const { return ___internalShutdown_6; }
	inline bool* get_address_of_internalShutdown_6() { return &___internalShutdown_6; }
	inline void set_internalShutdown_6(bool value)
	{
		___internalShutdown_6 = value;
	}

	inline static int32_t get_offset_of_activeSystems_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___activeSystems_11)); }
	inline Dictionary_2_t68D1D690E7B058B97EEBD820C9BD417ABACAF284 * get_activeSystems_11() const { return ___activeSystems_11; }
	inline Dictionary_2_t68D1D690E7B058B97EEBD820C9BD417ABACAF284 ** get_address_of_activeSystems_11() { return &___activeSystems_11; }
	inline void set_activeSystems_11(Dictionary_2_t68D1D690E7B058B97EEBD820C9BD417ABACAF284 * value)
	{
		___activeSystems_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeSystems_11), (void*)value);
	}

	inline static int32_t get_offset_of_registeredMixedRealityServices_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___registeredMixedRealityServices_12)); }
	inline List_1_t6D5F1E0167E316A2DE5CD26D074913C3653BFAE8 * get_registeredMixedRealityServices_12() const { return ___registeredMixedRealityServices_12; }
	inline List_1_t6D5F1E0167E316A2DE5CD26D074913C3653BFAE8 ** get_address_of_registeredMixedRealityServices_12() { return &___registeredMixedRealityServices_12; }
	inline void set_registeredMixedRealityServices_12(List_1_t6D5F1E0167E316A2DE5CD26D074913C3653BFAE8 * value)
	{
		___registeredMixedRealityServices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredMixedRealityServices_12), (void*)value);
	}

	inline static int32_t get_offset_of_activeInstance_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___activeInstance_13)); }
	inline MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 * get_activeInstance_13() const { return ___activeInstance_13; }
	inline MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 ** get_address_of_activeInstance_13() { return &___activeInstance_13; }
	inline void set_activeInstance_13(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 * value)
	{
		___activeInstance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeInstance_13), (void*)value);
	}

	inline static int32_t get_offset_of_newInstanceBeingInitialized_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___newInstanceBeingInitialized_14)); }
	inline bool get_newInstanceBeingInitialized_14() const { return ___newInstanceBeingInitialized_14; }
	inline bool* get_address_of_newInstanceBeingInitialized_14() { return &___newInstanceBeingInitialized_14; }
	inline void set_newInstanceBeingInitialized_14(bool value)
	{
		___newInstanceBeingInitialized_14 = value;
	}

	inline static int32_t get_offset_of_toolkitInstances_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___toolkitInstances_17)); }
	inline List_1_tC2AC174619D6CF51C5CF5DF1713602D416BD9BF6 * get_toolkitInstances_17() const { return ___toolkitInstances_17; }
	inline List_1_tC2AC174619D6CF51C5CF5DF1713602D416BD9BF6 ** get_address_of_toolkitInstances_17() { return &___toolkitInstances_17; }
	inline void set_toolkitInstances_17(List_1_tC2AC174619D6CF51C5CF5DF1713602D416BD9BF6 * value)
	{
		___toolkitInstances_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolkitInstances_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateAllServicesPerfMarker_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___UpdateAllServicesPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateAllServicesPerfMarker_18() const { return ___UpdateAllServicesPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateAllServicesPerfMarker_18() { return &___UpdateAllServicesPerfMarker_18; }
	inline void set_UpdateAllServicesPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateAllServicesPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdateAllServicesPerfMarker_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___LateUpdateAllServicesPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdateAllServicesPerfMarker_19() const { return ___LateUpdateAllServicesPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdateAllServicesPerfMarker_19() { return &___LateUpdateAllServicesPerfMarker_19; }
	inline void set_LateUpdateAllServicesPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdateAllServicesPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___ExecuteOnAllServicesInOrderPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteOnAllServicesInOrderPerfMarker_20() const { return ___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return &___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline void set_ExecuteOnAllServicesInOrderPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteOnAllServicesInOrderPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields, ___ExecuteOnAllServicesReverseOrderPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteOnAllServicesReverseOrderPerfMarker_21() const { return ___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return &___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline void set_ExecuteOnAllServicesReverseOrderPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteOnAllServicesReverseOrderPerfMarker_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * m_Items[1];

public:
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * m_Items[1];

public:
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Func`1<System.Threading.Tasks.Task>[]
struct Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * m_Items[1];

public:
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63BA39AC4ABFEBB0048C4BB326015E8A5B09AB0C_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_m0B0001B60FEFBF3C74645ECAB054D9F24D8AE0A1_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * ___stateMachine0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tEC81F68C6AEF4DB381ED6CAEFC6D8CD082550466 * Dictionary_2_get_Values_mACBF5C4011EA323401647515007C14429200FFBD_gshared (Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5  ValueCollection_GetEnumerator_mAF01B5B9461A022AA94AD831DAA9CCCDA1D20520_gshared (ValueCollection_tEC81F68C6AEF4DB381ED6CAEFC6D8CD082550466 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  Enumerator_get_Current_m61F8E0FDFAC08B99E7BFAA84E0F3DF870A386244_gshared_inline (Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3EFDBAFDB7E1484B0021A990E38E694D3E688C81_gshared (Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m808CCE0316894D7CA691B579E0A4345239E64B6C_gshared (Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m5EE992E607F61C107C7FE6BCF76CB89E61FA37AD_gshared (Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4B718F79AC56ECF725173CADD6C4BC54F05F2476_gshared (Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.MixedRealityToolkit::GetService<System.Object>(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MixedRealityToolkit_GetService_TisRuntimeObject_m5E2BB75096C9A0473ED05B6627907F030BF25451_gshared (MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 * __this, String_t* ___name0, bool ___showLogs1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m270F38A2150563822FB24524DA634BEB1DC662ED_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_mF8438164C13E3F5D02271E5F4F36A5F48505589B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m20B6B2D6977D2C4A6861906E58E03ED4FF5E426B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_m24418EEAC4404A8D408B7A76C9EC032F71DAD71E_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mB0033147BF23C863602FD8794811E793CBAD4B15_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m7ABB7596066A3384D4927DC9F3E81A06E7A37E7B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m39536ED3283E9A0B3FE8ACF503D935FA1B2E0F6A_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m3AA19905B6D134C47711B31897123A630B46FEF7_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_mF33716648EF752B76D78FABCEC98C647517AC338_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * ___stateMachine0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB2554C8398E718228A858B686CBD3C13F5E74A67_gshared (Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_mB69DEEB7CA5294E6FD3B8AF0AAF843C370D06545_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFC6001D7CC0150418C9851534A5F06AAA61D5350_gshared (Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDDBB91A26E06CFCDD490788405EFBD89094826D0_gshared (Dictionary_2_t49801BDE730AB719DCD0053B8A921010E01386EA * __this, RuntimeObject * ___key0, Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63D4BF8D3EEE3A9C21CDBA479BCF92CB440CEECD_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m1ABA22349B46155FA5F75D284BA02A3AF93D120F_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_m2DF719DC41FBD051C24A7260444B8CD2E5B8ED42_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m5B3B3D3510735BB8795C3ADD1B9CB5EFBEDA4B28_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m9FE61AFAD371F84762D2CCB9A0E5B68CFB782EB0_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_mDCD8A0270B772974746AEFCDAA6CE9658F9F76C2_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m7EEAAE9CBF0661D1078040B71154F2B3EAEBCECA_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mCDF45005C4B36C3B1F46163D92AB223FF3AE0D42_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_mBFA4E478398672D97B501AA418F2AF2BD331BFE2_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m58302774903C7E146380D2FFCB465DC2C01496A2_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m400194C5C80E95F960A3D3BF720B26BCB72F13F6_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m3AE4D96EE7FC6300E0DFD04D8F78860A23A6E1E5_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * ___stateMachine1, const RuntimeMethod* method);

// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_CameraFaderMaterial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneTransitionServiceProfile_get_CameraFaderMaterial_mA264B126539A6102131128157DCD449969DE79E0_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63BA39AC4ABFEBB0048C4BB326015E8A5B09AB0C (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63BA39AC4ABFEBB0048C4BB326015E8A5B09AB0C_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_m0B0001B60FEFBF3C74645ECAB054D9F24D8AE0A1 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_m0B0001B60FEFBF3C74645ECAB054D9F24D8AE0A1_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::DestroyQuads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_DestroyQuads_mE120911A2B565B10725CF99864C8BB000FB61C0E (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Values()
inline ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC * Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442 (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC * (*) (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC *, const RuntimeMethod*))Dictionary_2_get_Values_mACBF5C4011EA323401647515007C14429200FFBD_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::GetEnumerator()
inline Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA  ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807 (ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA  (*) (ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC *, const RuntimeMethod*))ValueCollection_GetEnumerator_mAF01B5B9461A022AA94AD831DAA9CCCDA1D20520_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Current()
inline Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_inline (Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA * __this, const RuntimeMethod* method)
{
	return ((  Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  (*) (Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *, const RuntimeMethod*))Enumerator_get_Current_m61F8E0FDFAC08B99E7BFAA84E0F3DF870A386244_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.GameObjectExtensions::DestroyGameObject(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_DestroyGameObject_mC4459185F75BD707FD6E061B5548DAE1EEEC7AF6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, float ___t1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::MoveNext()
inline bool Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1 (Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *, const RuntimeMethod*))Enumerator_MoveNext_m3EFDBAFDB7E1484B0021A990E38E694D3E688C81_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Dispose()
inline void Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF (Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *, const RuntimeMethod*))Enumerator_Dispose_m808CCE0316894D7CA691B579E0A4345239E64B6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Clear()
inline void Dictionary_2_Clear_mD48A5BC2A420B1643E40CDACB1C525EC8193EDE8 (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC *, const RuntimeMethod*))Dictionary_2_Clear_m5EE992E607F61C107C7FE6BCF76CB89E61FA37AD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::.ctor()
inline void Dictionary_2__ctor_m0CA474F9B4BA5D724ADB0BF8924BAD706FB81E38 (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC *, const RuntimeMethod*))Dictionary_2__ctor_m4B718F79AC56ECF725173CADD6C4BC54F05F2476_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::LoadContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene_LoadContent_m3C33DB477FC0D0B44D815D5685DF4C9976E94270 (LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 * MixedRealityToolkit_get_Instance_mD70A03BB0F9306F94C4847A0EC672C0B0F2BB3EE_inline (const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.MixedRealityToolkit::GetService<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ISceneTransitionService>(System.String,System.Boolean)
inline RuntimeObject* MixedRealityToolkit_GetService_TisISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5_m5D56C586272E1736F9BB0597EE10E2208160D19E (MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 * __this, String_t* ___name0, bool ___showLogs1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 *, String_t*, bool, const RuntimeMethod*))MixedRealityToolkit_GetService_TisRuntimeObject_m5E2BB75096C9A0473ED05B6627907F030BF25451_gshared)(__this, ___name0, ___showLogs1, method);
}
// System.Void System.Func`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562 (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::get_Empty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  SceneInfo_get_Empty_mCEB9889D9803A3DF1D19A10FD7C35D5063105562_inline (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem Microsoft.MixedReality.Toolkit.CoreServices::get_SceneSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_SceneSystem_mEF34631FE20C594B7E22983C351B4370765FB7DD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService__ctor_mCF65016ABCA6D0CE0A5C9C284AA61E1D0CC3372E (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_mFE834D9716EBD99F3A6C2E967254C050D737D79D_inline (BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::.ctor()
inline void List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070 (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_mBB2B18F97FC1E174461F532AB58AB9977C570E45 (BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m261B81A4AE4E88A0D0C5A2045FD42A945FD28C43 (BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_UseFadeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseFadeColor_mBFA35F1421F6379A9A0CE416E0F4A08C36BE7207_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_UseFadeColor(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_UseFadeColor_m357AEBD1778B3C8CD6F06CB28C2B1AE17C07725D_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionServiceProfile_get_FadeColor_mC82240C1E9464ED8422F0F7E441829596DED06CD_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeColor_m982ADC6D6A318F8C03BEC88C548B714C4B3EE366_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeInTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeInTime_mD15E5263ABC41832FE8423348D56947CFB13453D_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeInTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeInTime_mC2A31A1246C2B2527A95DD69B3B19CE39A91E7BD_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeOutTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeOutTime_m942D58D06B7AE4E988DBAF52B0435FFF1E32DCC7_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeOutTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeOutTime_m4F83A5687AFFF42ADB2A776E4588C86BF3688C26_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeTargets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneTransitionServiceProfile_get_FadeTargets_m4E74C2340AA208E02477C74E853A72E4ECA4C94C_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeTargets(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeTargets_m331C63893539A2239DC2F514083F6C70405B7E95_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_IsSceneSystemEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityToolkit_get_IsSceneSystemEnabled_mC594644D1AD9B21B72E2023F0958D638CB31654D (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m80614B8112BBB26CDEC36BC93AB52FECA4D46734 (BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CleanUpDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CleanUpDefaultProgressIndicator_m953E9DF593D20A53982A58F810E93CFBE8D2F8F2 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CleanUpCameraFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CleanUpCameraFader_m057DA1BECC8CADB6561345C363B1A1926B8C7A34 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Destroy_m77037FB7CD7724EA69BF7A86475830FDA937F6D8 (BaseService_t3710CF014246E4E8254BDC0393D786308B3D18CC * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m270F38A2150563822FB24524DA634BEB1DC662ED (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m270F38A2150563822FB24524DA634BEB1DC662ED_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_mF8438164C13E3F5D02271E5F4F36A5F48505589B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_mF8438164C13E3F5D02271E5F4F36A5F48505589B_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m20B6B2D6977D2C4A6861906E58E03ED4FF5E426B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m20B6B2D6977D2C4A6861906E58E03ED4FF5E426B_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_m24418EEAC4404A8D408B7A76C9EC032F71DAD71E (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_m24418EEAC4404A8D408B7A76C9EC032F71DAD71E_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Clear()
inline void List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mB0033147BF23C863602FD8794811E793CBAD4B15 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mB0033147BF23C863602FD8794811E793CBAD4B15_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m7ABB7596066A3384D4927DC9F3E81A06E7A37E7B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m7ABB7596066A3384D4927DC9F3E81A06E7A37E7B_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m39536ED3283E9A0B3FE8ACF503D935FA1B2E0F6A (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m39536ED3283E9A0B3FE8ACF503D935FA1B2E0F6A_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m3AA19905B6D134C47711B31897123A630B46FEF7 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m3AA19905B6D134C47711B31897123A630B46FEF7_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CreateDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CreateDefaultProgressIndicator_mB59917573AA6FA94D70BD668662921DE23D54673 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_mF33716648EF752B76D78FABCEC98C647517AC338 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_mF33716648EF752B76D78FABCEC98C647517AC338_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeTargets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneTransitionService_get_FadeTargets_m1666298FE0BB1FA5A485177B6A6B746E732896F8_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Camera>()
inline CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1 (const RuntimeMethod* method)
{
	return ((  CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m59038EC9065B131E53ADC161CAE0D72F4C5F5DD5 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Camera>::Add(!0)
inline void List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7 (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Canvas>()
inline CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38 (const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Camera>::get_Count()
inline int32_t List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_inline (List_1_t653022B4EDCE73F282430E1A396635798D309409 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t653022B4EDCE73F282430E1A396635798D309409 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_DefaultProgressIndicatorPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mD115DCA2DD2259424B12DABF8E948618793756C9_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___type0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_CameraFaderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * SceneTransitionServiceProfile_get_CameraFaderType_mCB146807D62B5D2876981119914E801CD9D829B7_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m2445AA154BE01049B725B11E92E5CB349BBE2472_inline (SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mF709430A064018C3B2A996A5F7950053A00EC14C (BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::get_Count()
inline int32_t Dictionary_2_get_Count_mF443B74D760D8CDB447615AF4BC29A1657CC1954 (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC *, const RuntimeMethod*))Dictionary_2_get_Count_mB2554C8398E718228A858B686CBD3C13F5E74A67_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraFaderQuad_get_State_m942D7EBC1AD102C0401D947E0466306FDB94209D_inline (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::set_State(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFaderQuad_set_State_m2F80338033CB8EC442E800A40C05231485F30F51_inline (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetColor_m640E72ABA9086F3F9278C114C1072AD2BED89F48 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B (const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8 (YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_mB69DEEB7CA5294E6FD3B8AF0AAF843C370D06545 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_mB69DEEB7CA5294E6FD3B8AF0AAF843C370D06545_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAsyncU3Ed__17_MoveNext_mBFA77EC90C1FFCB8085875623BA704C48A765A61 (U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAsyncU3Ed__17_SetStateMachine_mAC4E403A10A7DD9579A5CEB79A1B919A6E545084 (U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___keyword0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m508CAE1A82C2688E92491BBDEE4F5A00089BCD4B (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m83A25832C81F1439FC305678A94B1B95E322A8AD (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, const RuntimeMethod*))Dictionary_2_ContainsKey_mFC6001D7CC0150418C9851534A5F06AAA61D5350_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad>::Add(!0,!1)
inline void Dictionary_2_Add_m17E3E66F7C3BB2DB7ECCC458C9758AAFC4E5C7FF (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___key0, Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2 , const RuntimeMethod*))Dictionary_2_Add_mDDBB91A26E06CFCDD490788405EFBD89094826D0_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63D4BF8D3EEE3A9C21CDBA479BCF92CB440CEECD (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63D4BF8D3EEE3A9C21CDBA479BCF92CB440CEECD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutAsyncU3Ed__15_MoveNext_m7C8317F5EEE918E0FF337234E51E3644047D44A6 (U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutAsyncU3Ed__15_SetStateMachine_m88FC9DE444811EE440FD7786EA7A1D6212827EC0 (U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeOutTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeOutTime_mDCA81B63DEEE85A629214075DCDCFAAA20FAAF6F_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeInTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeInTime_m49F448CB09628E93BF35C3923125F88C017F30D1_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>,System.Single,System.Single,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_mEF1A5BA808F68672D7BCC885CE0447835C98474C (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, RuntimeObject* ___sceneOperations0, float ___fadeOutTime1, float ___fadeInTime2, RuntimeObject* ___progressIndicator3, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m1ABA22349B46155FA5F75D284BA02A3AF93D120F (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m1ABA22349B46155FA5F75D284BA02A3AF93D120F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__48_MoveNext_m2BA331629B3626DA2CDDC4094C7D77B21502E0AD (U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__48_SetStateMachine_m08D17BB58705F1D3CAC2A2A8098A92A928D5F634 (U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_m2DF719DC41FBD051C24A7260444B8CD2E5B8ED42 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_m2DF719DC41FBD051C24A7260444B8CD2E5B8ED42_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__49_MoveNext_mFF41379806944AE9B846200B0DE91AD179CC1A7D (U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__49_SetStateMachine_mC51B9F74BBFD8BC1B32255AADF38658EA37A9E63 (U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m5B3B3D3510735BB8795C3ADD1B9CB5EFBEDA4B28 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m5B3B3D3510735BB8795C3ADD1B9CB5EFBEDA4B28_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__50_MoveNext_m5C29EF8C9FC3EA485AA12D745297A3126BC85140 (U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__50_SetStateMachine_mEEA9E138D43C51CD2BD9C577BE5E7CAE05ABE0AF (U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_TransitionInProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionService_get_TransitionInProgress_mD59A09D7B95FD36F3428F03BBBB91A8BE59830C5_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_TransitionInProgress(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_TransitionInProgress_mDBA9DC5EFE6C8D328CD4905EAE3EC001CB6FECAC_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, bool ___value0, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_OnTransitionStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionStarted_m42E106EEB2770371537627C66BD02DE809C919B8_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_UseDefaultProgressIndicator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseDefaultProgressIndicator_mF7336A45DF16ACB461C9C42B2AE7361F610A2ED4_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_UseFadeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionService_get_UseFadeColor_mAA360ED87D8D8EAEC1D35EDBA8AF65FFAABF8E28_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeOut_m30294B2042A2AF075106C3354EB227F348609AC7 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___fadeOutTime0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Func`1<System.Threading.Tasks.Task>::Invoke()
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * __this, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeIn_m27054E0BF676A5009D504981A64D1322CA4A34D9 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___fadeInTime0, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_OnTransitionCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionCompleted_m29EB555017B7882854622EF2C9867753CE3BBE1C_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__52_MoveNext_mCB3B13164BF1753105FB2E806519AF71ACFF9CAF (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__52_SetStateMachine_mE54C3B6995543DA73F6A5CB7D5497B8D21388EB9 (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m9FE61AFAD371F84762D2CCB9A0E5B68CFB782EB0 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m9FE61AFAD371F84762D2CCB9A0E5B68CFB782EB0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__55_MoveNext_mFD5DF507B27B17DBAB6B59CC39972CD03609A988 (U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__55_SetStateMachine_m42966E007BDBAE94AB51210F84DE249F264B0C3D (U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CreateCameraFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CreateCameraFader_mE349B65791F79E9F089A616E90E553F5033E1E12 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_mDCD8A0270B772974746AEFCDAA6CE9658F9F76C2 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_mDCD8A0270B772974746AEFCDAA6CE9658F9F76C2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionService_get_FadeColor_mC4DC26D7D0525FF2BD8D04ACC1EC22CD86A83CF2_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::GatherFadeTargetCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t653022B4EDCE73F282430E1A396635798D309409 * SceneTransitionService_GatherFadeTargetCameras_mFD79836B0AF86D79B7AFD5229F146A53BD0C26CF (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m7EEAAE9CBF0661D1078040B71154F2B3EAEBCECA (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m7EEAAE9CBF0661D1078040B71154F2B3EAEBCECA_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__59_MoveNext_mE27AFBC92B147C4FC67F7DD59903E5B1B508A914 (U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__59_SetStateMachine_m375ACFF39DF5D01AE3A71C6266F83A1A2F9AB23F (U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mCDF45005C4B36C3B1F46163D92AB223FF3AE0D42 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mCDF45005C4B36C3B1F46163D92AB223FF3AE0D42_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__54_MoveNext_m7A85160979DB1AA3793936834B23FE2A595027C7 (U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__54_SetStateMachine_mC10E2ED358EB0D299821A940B07613C48D28FD5D (U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_mBFA4E478398672D97B501AA418F2AF2BD331BFE2 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_mBFA4E478398672D97B501AA418F2AF2BD331BFE2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m58302774903C7E146380D2FFCB465DC2C01496A2 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m58302774903C7E146380D2FFCB465DC2C01496A2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__57_MoveNext_m778C0AA0A00AD19FD86DD9897069DB349DB1CB73 (U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__57_SetStateMachine_m9DBD0B12CD651FE787836AFC0761C02C0521F793 (U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m400194C5C80E95F960A3D3BF720B26BCB72F13F6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m400194C5C80E95F960A3D3BF720B26BCB72F13F6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m3AE4D96EE7FC6300E0DFD04D8F78860A23A6E1E5 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m3AE4D96EE7FC6300E0DFD04D8F78860A23A6E1E5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideProgressIndicatorU3Ed__63_MoveNext_mBFF327B69B95D6E2F647E0BE77DC5D117D0C29FC (U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideProgressIndicatorU3Ed__63_SetStateMachine_m27FAE878FB203F573B794CF1B2B82895BC518323 (U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraFaderQuad_get_State_m942D7EBC1AD102C0401D947E0466306FDB94209D (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::set_State(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_set_State_m2F80338033CB8EC442E800A40C05231485F30F51 (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public CameraFaderState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::Initialize(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_Initialize_mFEFE0C3ABED2114055CB96160F51C2D424025BD7 (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * ___profile0, const RuntimeMethod* method)
{
	{
		// quadMaterialTemplate = profile.CameraFaderMaterial;
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_0 = ___profile0;
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = SceneTransitionServiceProfile_get_CameraFaderMaterial_mA264B126539A6102131128157DCD449969DE79E0_inline(L_0, /*hidden argument*/NULL);
		__this->set_quadMaterialTemplate_8(L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::FadeOutAsync(System.Single,UnityEngine.Color,System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CameraFaderQuad_FadeOutAsync_mB9CC1380033B97FA193A3912D7CCC6214FEE63D4 (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, float ___fadeOutTime0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, RuntimeObject* ___targets2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63BA39AC4ABFEBB0048C4BB326015E8A5B09AB0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___color1;
		(&V_0)->set_color_3(L_0);
		RuntimeObject* L_1 = ___targets2;
		(&V_0)->set_targets_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2;
		L_2 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD  L_3 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63BA39AC4ABFEBB0048C4BB326015E8A5B09AB0C((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63BA39AC4ABFEBB0048C4BB326015E8A5B09AB0C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::FadeInAsync(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CameraFaderQuad_FadeInAsync_m4C763D0B9FDB4616FD5DA110F29EE4D6FE6B4A2D (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, float ___fadeInTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_m0B0001B60FEFBF3C74645ECAB054D9F24D8AE0A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_m0B0001B60FEFBF3C74645ECAB054D9F24D8AE0A1((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_m0B0001B60FEFBF3C74645ECAB054D9F24D8AE0A1_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_OnDestroy_mBDEAE336EBFF4AB7A2DF5770DC1FC6B5F4E00A56 (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, const RuntimeMethod* method)
{
	{
		// DestroyQuads();
		CameraFaderQuad_DestroyQuads_mE120911A2B565B10725CF99864C8BB000FB61C0E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::DestroyQuads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad_DestroyQuads_mE120911A2B565B10725CF99864C8BB000FB61C0E (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mD48A5BC2A420B1643E40CDACB1C525EC8193EDE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Quad quad in quads.Values)
		Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * L_0 = __this->get_quads_3();
		NullCheck(L_0);
		ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC * L_1;
		L_1 = Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442(L_0, /*hidden argument*/Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA  L_2;
		L_2 = ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807(L_1, /*hidden argument*/ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0013:
		{
			// foreach (Quad quad in quads.Values)
			Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_3;
			L_3 = Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_inline((Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_RuntimeMethod_var);
			V_1 = L_3;
			// if (quad.Renderer != null)
			Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_4 = V_1;
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_5 = L_4.get_Renderer_0();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_003e;
			}
		}

IL_0029:
		{
			// GameObjectExtensions.DestroyGameObject(quad.Renderer.gameObject);
			Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_7 = V_1;
			Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_8 = L_7.get_Renderer_0();
			NullCheck(L_8);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
			L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
			GameObjectExtensions_DestroyGameObject_mC4459185F75BD707FD6E061B5548DAE1EEEC7AF6(L_9, (0.0f), /*hidden argument*/NULL);
		}

IL_003e:
		{
			// foreach (Quad quad in quads.Values)
			bool L_10;
			L_10 = Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1((Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0013;
			}
		}

IL_0047:
		{
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF((Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
		// quads.Clear();
		Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * L_11 = __this->get_quads_3();
		NullCheck(L_11);
		Dictionary_2_Clear_mD48A5BC2A420B1643E40CDACB1C525EC8193EDE8(L_11, /*hidden argument*/Dictionary_2_Clear_mD48A5BC2A420B1643E40CDACB1C525EC8193EDE8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad__ctor_m999676E3D233808ADB28C347B3FB63E7834D1BAD (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0CA474F9B4BA5D724ADB0BF8924BAD706FB81E38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<Camera, Quad> quads = new Dictionary<Camera, Quad>();
		Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * L_0 = (Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC *)il2cpp_codegen_object_new(Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0CA474F9B4BA5D724ADB0BF8924BAD706FB81E38(L_0, /*hidden argument*/Dictionary_2__ctor_m0CA474F9B4BA5D724ADB0BF8924BAD706FB81E38_RuntimeMethod_var);
		__this->set_quads_3(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFaderQuad__cctor_m6203EEE8BCA39E2C5A1206E32C3D98D1A2ECAED2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DBBB5B60942F49C9A9831F4529E22F250F35879);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE3AB133E10294E2E9B74FE908DA018B2506B0F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker FadeOutAsyncPerfMarker = new ProfilerMarker("[MRTK] CameraFaderQuad.FadeOutAsync");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral5DBBB5B60942F49C9A9831F4529E22F250F35879, /*hidden argument*/NULL);
		((CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_StaticFields*)il2cpp_codegen_static_fields_for(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var))->set_FadeOutAsyncPerfMarker_9(L_0);
		// private static readonly ProfilerMarker FadeInAsyncPerfMarker = new ProfilerMarker("[MRTK] CameraFaderQuad.FadeInAsync");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralBE3AB133E10294E2E9B74FE908DA018B2506B0F2, /*hidden argument*/NULL);
		((CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_StaticFields*)il2cpp_codegen_static_fields_for(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var))->set_FadeInAsyncPerfMarker_10(L_1);
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene_Start_m48A28AACDD879FDCBD50AE6C5249D3C98678FEB1 (LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F * __this, const RuntimeMethod* method)
{
	{
		// if (loadOnStartup)
		bool L_0 = __this->get_loadOnStartup_6();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// LoadContent();
		LoadContentScene_LoadContent_m3C33DB477FC0D0B44D815D5685DF4C9976E94270(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::LoadContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene_LoadContent_m3C33DB477FC0D0B44D815D5685DF4C9976E94270 (LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadContentScene_U3CLoadContentU3Eb__5_0_m388CEBC0873C4D5DF640F6ABE1F4BE9DD7378386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_GetService_TisISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5_m5D56C586272E1736F9BB0597EE10E2208160D19E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (LoadContentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_StaticFields*)il2cpp_codegen_static_fields_for(LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_il2cpp_TypeInfo_var))->get_LoadContentPerfMarker_7();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// ISceneTransitionService transitions = MixedRealityToolkit.Instance.GetService<ISceneTransitionService>();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_il2cpp_TypeInfo_var);
			MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 * L_2;
			L_2 = MixedRealityToolkit_get_Instance_mD70A03BB0F9306F94C4847A0EC672C0B0F2BB3EE_inline(/*hidden argument*/NULL);
			NullCheck(L_2);
			RuntimeObject* L_3;
			L_3 = MixedRealityToolkit_GetService_TisISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5_m5D56C586272E1736F9BB0597EE10E2208160D19E(L_2, (String_t*)NULL, (bool)1, /*hidden argument*/MixedRealityToolkit_GetService_TisISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5_m5D56C586272E1736F9BB0597EE10E2208160D19E_RuntimeMethod_var);
			V_2 = L_3;
			// if (transitions.TransitionInProgress)
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			bool L_5;
			L_5 = InterfaceFuncInvoker0< bool >::Invoke(14 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ISceneTransitionService::get_TransitionInProgress() */, ISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5_il2cpp_TypeInfo_var, L_4);
			if (!L_5)
			{
				goto IL_0025;
			}
		}

IL_0023:
		{
			// return;
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}

IL_0025:
		{
			// transitions.DoSceneTransition(() => CoreServices.SceneSystem.LoadContent(contentScene.Name, loadSceneMode));
			RuntimeObject* L_6 = V_2;
			Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_7 = (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)il2cpp_codegen_object_new(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3_il2cpp_TypeInfo_var);
			Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562(L_7, __this, (intptr_t)((intptr_t)LoadContentScene_U3CLoadContentU3Eb__5_0_m388CEBC0873C4D5DF640F6ABE1F4BE9DD7378386_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1D5A4EA26730C44D2B031D9B88C5CD68A24F3562_RuntimeMethod_var);
			NullCheck(L_6);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
			L_8 = InterfaceFuncInvoker2< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, RuntimeObject* >::Invoke(19 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ISceneTransitionService::DoSceneTransition(System.Func`1<System.Threading.Tasks.Task>,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator) */, ISceneTransitionService_t93043C53187021056EEBA6B7ABBD223D1B8710C5_il2cpp_TypeInfo_var, L_6, L_7, (RuntimeObject*)NULL);
			// }
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene__ctor_m89B70AECA8F905F454A9EA730615714363FBE44E (LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private SceneInfo contentScene = SceneInfo.Empty;
		IL2CPP_RUNTIME_CLASS_INIT(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_il2cpp_TypeInfo_var);
		SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  L_0;
		L_0 = SceneInfo_get_Empty_mCEB9889D9803A3DF1D19A10FD7C35D5063105562_inline(/*hidden argument*/NULL);
		__this->set_contentScene_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadContentScene__cctor_mC682AB50DB7803DD683B982F3A451459FDAFA153 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB26CEBCA8FFC34185115D39A399721D995EB25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker LoadContentPerfMarker = new ProfilerMarker("[MRTK] LoadContentScene.LoadContent");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral8EB26CEBCA8FFC34185115D39A399721D995EB25, /*hidden argument*/NULL);
		((LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_StaticFields*)il2cpp_codegen_static_fields_for(LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F_il2cpp_TypeInfo_var))->set_LoadContentPerfMarker_7(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.LoadContentScene::<LoadContent>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * LoadContentScene_U3CLoadContentU3Eb__5_0_m388CEBC0873C4D5DF640F6ABE1F4BE9DD7378386 (LoadContentScene_t176C52DB7AC85071663BCAECD63B2766AE832D4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySceneSystem_t5AF6F0C009989EDB2195A421ABB977C8E90A2BCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transitions.DoSceneTransition(() => CoreServices.SceneSystem.LoadContent(contentScene.Name, loadSceneMode));
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_SceneSystem_mEF34631FE20C594B7E22983C351B4370765FB7DD(/*hidden argument*/NULL);
		SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F * L_1 = __this->get_address_of_contentScene_5();
		String_t* L_2 = L_1->get_Name_1();
		int32_t L_3 = __this->get_loadSceneMode_4();
		NullCheck(L_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = InterfaceFuncInvoker3< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, String_t*, int32_t, SceneActivationToken_t1163703C3A4D546161C0A38ED8F0F8606FC40076 * >::Invoke(35 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SceneSystem.IMixedRealitySceneSystem::LoadContent(System.String,UnityEngine.SceneManagement.LoadSceneMode,Microsoft.MixedReality.Toolkit.SceneSystem.SceneActivationToken) */, IMixedRealitySceneSystem_t5AF6F0C009989EDB2195A421ABB977C8E90A2BCE_il2cpp_TypeInfo_var, L_0, L_2, L_3, (SceneActivationToken_t1163703C3A4D546161C0A38ED8F0F8606FC40076 *)NULL);
		return L_4;
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService__ctor_m13B3499C03DF061D13EF2DF7F9BF628D20E6B327 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, RuntimeObject* ___registrar0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile) : this(name, priority, profile)
		String_t* L_0 = ___name1;
		uint32_t L_1 = ___priority2;
		BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * L_2 = ___profile3;
		SceneTransitionService__ctor_mCF65016ABCA6D0CE0A5C9C284AA61E1D0CC3372E(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_3 = ___registrar0;
		BaseExtensionService_set_Registrar_mFE834D9716EBD99F3A6C2E967254C050D737D79D_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService__ctor_mCF65016ABCA6D0CE0A5C9C284AA61E1D0CC3372E (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Camera> customFadeTargetCameras = new List<Camera>();
		List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_0 = (List_1_t653022B4EDCE73F282430E1A396635798D309409 *)il2cpp_codegen_object_new(List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var);
		List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070(L_0, /*hidden argument*/List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var);
		__this->set_customFadeTargetCameras_24(L_0);
		// BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_1 = ___name0;
		uint32_t L_2 = ___priority1;
		BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * L_3 = ___profile2;
		BaseExtensionService__ctor_mBB2B18F97FC1E174461F532AB58AB9977C570E45(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// sceneTransitionServiceProfile = profile as SceneTransitionServiceProfile;
		BaseMixedRealityProfile_tDD3537C312563219B4031A946DD3EAA3819BB37D * L_4 = ___profile2;
		__this->set_sceneTransitionServiceProfile_20(((SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C *)IsInstClass((RuntimeObject*)L_4, SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_UseFadeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTransitionService_get_UseFadeColor_mAA360ED87D8D8EAEC1D35EDBA8AF65FFAABF8E28 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor { get; set; }
		bool L_0 = __this->get_U3CUseFadeColorU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_UseFadeColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_UseFadeColor_m357AEBD1778B3C8CD6F06CB28C2B1AE17C07725D (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUseFadeColorU3Ek__BackingField_11(L_0);
		return;
	}
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionService_get_FadeColor_mC4DC26D7D0525FF2BD8D04ACC1EC22CD86A83CF2 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public Color FadeColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_U3CFadeColorU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeColor_m982ADC6D6A318F8C03BEC88C548B714C4B3EE366 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// public Color FadeColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_U3CFadeColorU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeInTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeInTime_m49F448CB09628E93BF35C3923125F88C017F30D1 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeInTime { get; set; }
		float L_0 = __this->get_U3CFadeInTimeU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeInTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeInTime_mC2A31A1246C2B2527A95DD69B3B19CE39A91E7BD (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FadeInTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFadeInTimeU3Ek__BackingField_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeOutTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeOutTime_mDCA81B63DEEE85A629214075DCDCFAAA20FAAF6F (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime { get; set; }
		float L_0 = __this->get_U3CFadeOutTimeU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeOutTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeOutTime_m4F83A5687AFFF42ADB2A776E4588C86BF3688C26 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFadeOutTimeU3Ek__BackingField_14(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_FadeTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneTransitionService_get_FadeTargets_m1666298FE0BB1FA5A485177B6A6B746E732896F8 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets { get; set; }
		int32_t L_0 = __this->get_U3CFadeTargetsU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_FadeTargets(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeTargets_m331C63893539A2239DC2F514083F6C70405B7E95 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFadeTargetsU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_OnTransitionStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionStarted_m42E106EEB2770371537627C66BD02DE809C919B8 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionStarted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTransitionStartedU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_OnTransitionStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_OnTransitionStarted_m124ACE3374C8754B9DA1F7B52CF161C3E8D168EA (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionStarted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnTransitionStartedU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_OnTransitionCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionCompleted_m29EB555017B7882854622EF2C9867753CE3BBE1C (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionCompleted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTransitionCompletedU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_OnTransitionCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_OnTransitionCompleted_mCEEC01A0A57B64B113ECB77C51407F859E3431F7 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionCompleted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnTransitionCompletedU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_TransitionInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTransitionService_get_TransitionInProgress_mD59A09D7B95FD36F3428F03BBBB91A8BE59830C5 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public bool TransitionInProgress { get; set; }
		bool L_0 = __this->get_U3CTransitionInProgressU3Ek__BackingField_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_TransitionInProgress(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_TransitionInProgress_mDBA9DC5EFE6C8D328CD4905EAE3EC001CB6FECAC (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TransitionInProgress { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CTransitionInProgressU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::get_TransitionProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionService_get_TransitionProgress_m40F7CF06C22651EB2C3ACF288C9071CFE912BFDB (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public float TransitionProgress { get; set; }
		float L_0 = __this->get_U3CTransitionProgressU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::set_TransitionProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_set_TransitionProgress_mAB63896165F5DE56B5AAA3E8901F339AE74144EE (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float TransitionProgress { get; set; }
		float L_0 = ___value0;
		__this->set_U3CTransitionProgressU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_Initialize_m74A39F47A8B33EFCFB2EEBE80A5A3E4270360AAB (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_m261B81A4AE4E88A0D0C5A2045FD42A945FD28C43(__this, /*hidden argument*/NULL);
		// UseFadeColor = sceneTransitionServiceProfile.UseFadeColor;
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_0 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_0);
		bool L_1;
		L_1 = SceneTransitionServiceProfile_get_UseFadeColor_mBFA35F1421F6379A9A0CE416E0F4A08C36BE7207_inline(L_0, /*hidden argument*/NULL);
		SceneTransitionService_set_UseFadeColor_m357AEBD1778B3C8CD6F06CB28C2B1AE17C07725D_inline(__this, L_1, /*hidden argument*/NULL);
		// FadeColor = sceneTransitionServiceProfile.FadeColor;
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_2 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_2);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = SceneTransitionServiceProfile_get_FadeColor_mC82240C1E9464ED8422F0F7E441829596DED06CD_inline(L_2, /*hidden argument*/NULL);
		SceneTransitionService_set_FadeColor_m982ADC6D6A318F8C03BEC88C548B714C4B3EE366_inline(__this, L_3, /*hidden argument*/NULL);
		// FadeInTime = sceneTransitionServiceProfile.FadeInTime;
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_4 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_4);
		float L_5;
		L_5 = SceneTransitionServiceProfile_get_FadeInTime_mD15E5263ABC41832FE8423348D56947CFB13453D_inline(L_4, /*hidden argument*/NULL);
		SceneTransitionService_set_FadeInTime_mC2A31A1246C2B2527A95DD69B3B19CE39A91E7BD_inline(__this, L_5, /*hidden argument*/NULL);
		// FadeOutTime = sceneTransitionServiceProfile.FadeOutTime;
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_6 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_6);
		float L_7;
		L_7 = SceneTransitionServiceProfile_get_FadeOutTime_m942D58D06B7AE4E988DBAF52B0435FFF1E32DCC7_inline(L_6, /*hidden argument*/NULL);
		SceneTransitionService_set_FadeOutTime_m4F83A5687AFFF42ADB2A776E4588C86BF3688C26_inline(__this, L_7, /*hidden argument*/NULL);
		// FadeTargets = sceneTransitionServiceProfile.FadeTargets;
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_8 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SceneTransitionServiceProfile_get_FadeTargets_m4E74C2340AA208E02477C74E853A72E4ECA4C94C_inline(L_8, /*hidden argument*/NULL);
		SceneTransitionService_set_FadeTargets_m331C63893539A2239DC2F514083F6C70405B7E95_inline(__this, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_Enable_m742B0517109BABB7D8B9ED9F651F3A90608506F6 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2003866100759F536E30A6F22A78916CFC09236);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!MixedRealityToolkit.IsSceneSystemEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = MixedRealityToolkit_get_IsSceneSystemEnabled_mC594644D1AD9B21B72E2023F0958D638CB31654D(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// Debug.LogError("This extension requires an active IMixedRealitySceneService.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralA2003866100759F536E30A6F22A78916CFC09236, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// base.Enable();
		BaseService_Enable_m80614B8112BBB26CDEC36BC93AB52FECA4D46734(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_Destroy_mC65186B93BF5C55F3AE189336879FEEF1C5E8E05 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// CleanUpDefaultProgressIndicator();
		SceneTransitionService_CleanUpDefaultProgressIndicator_m953E9DF593D20A53982A58F810E93CFBE8D2F8F2(__this, /*hidden argument*/NULL);
		// CleanUpCameraFader();
		SceneTransitionService_CleanUpCameraFader_m057DA1BECC8CADB6561345C363B1A1926B8C7A34(__this, /*hidden argument*/NULL);
		// base.Destroy();
		BaseService_Destroy_m77037FB7CD7724EA69BF7A86475830FDA937F6D8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Func`1<System.Threading.Tasks.Task>,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_m3C0A3865A6BA3806DEC6236DE1EB8213BE6389C7 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOperation0, RuntimeObject* ___progressIndicator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m270F38A2150563822FB24524DA634BEB1DC662ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_0 = ___sceneOperation0;
		(&V_0)->set_sceneOperation_3(L_0);
		RuntimeObject* L_1 = ___progressIndicator1;
		(&V_0)->set_progressIndicator_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2;
		L_2 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07  L_3 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m270F38A2150563822FB24524DA634BEB1DC662ED((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m270F38A2150563822FB24524DA634BEB1DC662ED_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Func`1<System.Threading.Tasks.Task>,System.Func`1<System.Threading.Tasks.Task>,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_mBD0ECEA3F4D006472D064612756CB61BB16C0DBF (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOp10, Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___sceneOp21, RuntimeObject* ___progressIndicator2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_mF8438164C13E3F5D02271E5F4F36A5F48505589B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_0 = ___sceneOp10;
		(&V_0)->set_sceneOp1_3(L_0);
		Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_1 = ___sceneOp21;
		(&V_0)->set_sceneOp2_4(L_1);
		RuntimeObject* L_2 = ___progressIndicator2;
		(&V_0)->set_progressIndicator_5(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7  L_4 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_mF8438164C13E3F5D02271E5F4F36A5F48505589B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_mF8438164C13E3F5D02271E5F4F36A5F48505589B_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_6 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_m0BC8F9A9EA5EFA0032960C297848F4B37DA60B80 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, RuntimeObject* ___sceneOperations0, RuntimeObject* ___progressIndicator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m20B6B2D6977D2C4A6861906E58E03ED4FF5E426B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		RuntimeObject* L_0 = ___sceneOperations0;
		(&V_0)->set_sceneOperations_3(L_0);
		RuntimeObject* L_1 = ___progressIndicator1;
		(&V_0)->set_progressIndicator_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2;
		L_2 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7  L_3 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m20B6B2D6977D2C4A6861906E58E03ED4FF5E426B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m20B6B2D6977D2C4A6861906E58E03ED4FF5E426B_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::DoSceneTransition(System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>,System.Single,System.Single,Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_DoSceneTransition_mEF1A5BA808F68672D7BCC885CE0447835C98474C (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, RuntimeObject* ___sceneOperations0, float ___fadeOutTime1, float ___fadeInTime2, RuntimeObject* ___progressIndicator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_m24418EEAC4404A8D408B7A76C9EC032F71DAD71E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_4(__this);
		RuntimeObject* L_0 = ___sceneOperations0;
		(&V_0)->set_sceneOperations_6(L_0);
		float L_1 = ___fadeOutTime1;
		(&V_0)->set_fadeOutTime_2(L_1);
		float L_2 = ___fadeInTime2;
		(&V_0)->set_fadeInTime_3(L_2);
		RuntimeObject* L_3 = ___progressIndicator3;
		(&V_0)->set_progressIndicator_5(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_4;
		L_4 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_4);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7  L_5 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_6 = L_5.get_U3CU3Et__builder_1();
		V_1 = L_6;
		AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_m24418EEAC4404A8D408B7A76C9EC032F71DAD71E((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_m24418EEAC4404A8D408B7A76C9EC032F71DAD71E_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_7 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
		L_8 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::SetCustomFadeTargetCameras(System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_SetCustomFadeTargetCameras_mAA88CF75DB6D9D77B2D2407490B51ECEEF1A0D6D (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, RuntimeObject* ___customFadeTargetCameras0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.customFadeTargetCameras.Clear();
		List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_0 = __this->get_customFadeTargetCameras_24();
		NullCheck(L_0);
		List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B(L_0, /*hidden argument*/List_1_Clear_m639FF66F3E16E132E6B323366123C4DEAFBB548B_RuntimeMethod_var);
		// this.customFadeTargetCameras.AddRange(customFadeTargetCameras);
		List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_1 = __this->get_customFadeTargetCameras_24();
		RuntimeObject* L_2 = ___customFadeTargetCameras0;
		NullCheck(L_1);
		List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF(L_1, L_2, /*hidden argument*/List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeOut_mC8B5D3D381BEC2F4159371BB2ABC34C6B8087591 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mB0033147BF23C863602FD8794811E793CBAD4B15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mB0033147BF23C863602FD8794811E793CBAD4B15((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mB0033147BF23C863602FD8794811E793CBAD4B15_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeIn_m5055E658B1CA090EF6630766346CF0874EF13563 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m7ABB7596066A3384D4927DC9F3E81A06E7A37E7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m7ABB7596066A3384D4927DC9F3E81A06E7A37E7B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m7ABB7596066A3384D4927DC9F3E81A06E7A37E7B_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeOut(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeOut_m30294B2042A2AF075106C3354EB227F348609AC7 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___fadeOutTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m39536ED3283E9A0B3FE8ACF503D935FA1B2E0F6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		float L_0 = ___fadeOutTime0;
		(&V_0)->set_fadeOutTime_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m39536ED3283E9A0B3FE8ACF503D935FA1B2E0F6A((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m39536ED3283E9A0B3FE8ACF503D935FA1B2E0F6A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::FadeIn(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_FadeIn_m27054E0BF676A5009D504981A64D1322CA4A34D9 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___fadeInTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m3AA19905B6D134C47711B31897123A630B46FEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		float L_0 = ___fadeInTime0;
		(&V_0)->set_fadeInTime_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_1;
		L_1 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14  L_2 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m3AA19905B6D134C47711B31897123A630B46FEF7((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m3AA19905B6D134C47711B31897123A630B46FEF7_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::ShowDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * SceneTransitionService_ShowDefaultProgressIndicator_mE4EC406315C5AC9C3C15D95091304A02596129D6 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (ShowDefaultProgressIndicatorPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->get_ShowDefaultProgressIndicatorPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// CreateDefaultProgressIndicator();
			SceneTransitionService_CreateDefaultProgressIndicator_mB59917573AA6FA94D70BD668662921DE23D54673(__this, /*hidden argument*/NULL);
			// switch (defaultProgressIndicator.State)
			RuntimeObject* L_2 = __this->get_defaultProgressIndicator_22();
			NullCheck(L_2);
			int32_t L_3;
			L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_2);
			V_2 = L_3;
			int32_t L_4 = V_2;
			switch (L_4)
			{
				case 0:
				{
					goto IL_0038;
				}
				case 1:
				{
					goto IL_0052;
				}
				case 2:
				{
					goto IL_0052;
				}
				case 3:
				{
					goto IL_0046;
				}
			}
		}

IL_0036:
		{
			goto IL_0046;
		}

IL_0038:
		{
			// defaultProgressIndicator.OpenAsync();
			RuntimeObject* L_5 = __this->get_defaultProgressIndicator_22();
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_5);
			// break;
			goto IL_0052;
		}

IL_0046:
		{
			// defaultProgressIndicator.OpenAsync();
			RuntimeObject* L_7 = __this->get_defaultProgressIndicator_22();
			NullCheck(L_7);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
			L_8 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_7);
		}

IL_0052:
		{
			// return defaultProgressIndicator.MainTransform;
			RuntimeObject* L_9 = __this->get_defaultProgressIndicator_22();
			NullCheck(L_9);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
			L_10 = InterfaceFuncInvoker0< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_MainTransform() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_9);
			V_3 = L_10;
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_3;
		return L_11;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::HideProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SceneTransitionService_HideProgressIndicator_mAE83053D890A70FA72322990EC0407ABDC1050E2 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_mF33716648EF752B76D78FABCEC98C647517AC338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_mF33716648EF752B76D78FABCEC98C647517AC338((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_mF33716648EF752B76D78FABCEC98C647517AC338_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::SetProgressMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_SetProgressMessage_mC5A9501B3D643908A0D1CEA42A9BD190B2E8DD93 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultProgressIndicator == null)
		RuntimeObject* L_0 = __this->get_defaultProgressIndicator_22();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogWarning("Progress Indicator has not been launched. Taking no action.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// defaultProgressIndicator.Message = message;
		RuntimeObject* L_1 = __this->get_defaultProgressIndicator_22();
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::SetProgressValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_SetProgressValue_m3BCE18DB5F382A4F6F370E4B82B8ABCF169A491D (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___progress0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultProgressIndicator == null)
		RuntimeObject* L_0 = __this->get_defaultProgressIndicator_22();
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Debug.LogWarning("Progress Indicator has not been launched. Taking no action.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral81852CEFB8E88AEF06AD93EFD4AD80348EDED312, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// defaultProgressIndicator.Progress = progress;
		RuntimeObject* L_1 = __this->get_defaultProgressIndicator_22();
		float L_2 = ___progress0;
		NullCheck(L_1);
		InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Progress(System.Single) */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Camera> Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::GatherFadeTargetCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t653022B4EDCE73F282430E1A396635798D309409 * SceneTransitionService_GatherFadeTargetCameras_mFD79836B0AF86D79B7AFD5229F146A53BD0C26CF (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_t653022B4EDCE73F282430E1A396635798D309409 * V_2 = NULL;
	int32_t V_3 = 0;
	CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* V_4 = NULL;
	int32_t V_5 = 0;
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * V_6 = NULL;
	int32_t V_7 = 0;
	List_1_t653022B4EDCE73F282430E1A396635798D309409 * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (GatherFadeTargetCamerasPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->get_GatherFadeTargetCamerasPerfMarker_30();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// List<Camera> targetCameras = new List<Camera>();
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_2 = (List_1_t653022B4EDCE73F282430E1A396635798D309409 *)il2cpp_codegen_object_new(List_1_t653022B4EDCE73F282430E1A396635798D309409_il2cpp_TypeInfo_var);
			List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070(L_2, /*hidden argument*/List_1__ctor_m74EEF198C737FDFCED8769ABFD739ABBC9116070_RuntimeMethod_var);
			V_2 = L_2;
			// switch (FadeTargets)
			int32_t L_3;
			L_3 = SceneTransitionService_get_FadeTargets_m1666298FE0BB1FA5A485177B6A6B746E732896F8_inline(__this, /*hidden argument*/NULL);
			V_3 = L_3;
			int32_t L_4 = V_3;
			switch (L_4)
			{
				case 0:
				{
					goto IL_0046;
				}
				case 1:
				{
					goto IL_0053;
				}
				case 2:
				{
					goto IL_0036;
				}
				case 3:
				{
					goto IL_00a6;
				}
			}
		}

IL_0031:
		{
			goto IL_00ca;
		}

IL_0036:
		{
			// targetCameras.AddRange(GameObject.FindObjectsOfType<Camera>());
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_5 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001* L_6;
			L_6 = Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1(/*hidden argument*/Object_FindObjectsOfType_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mC55BE8C73A55B2398CB2C20AA96459DFB6F1FCE1_RuntimeMethod_var);
			NullCheck(L_5);
			List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF(L_5, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
			// break;
			goto IL_00ca;
		}

IL_0046:
		{
			// targetCameras.Add(CameraCache.Main);
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_7 = V_2;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
			L_8 = CameraCache_get_Main_m59038EC9065B131E53ADC161CAE0D72F4C5F5DD5(/*hidden argument*/NULL);
			NullCheck(L_7);
			List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7(L_7, L_8, /*hidden argument*/List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7_RuntimeMethod_var);
			// break;
			goto IL_00ca;
		}

IL_0053:
		{
			// foreach (Canvas canvas in GameObject.FindObjectsOfType<Canvas>())
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_9;
			L_9 = Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38(/*hidden argument*/Object_FindObjectsOfType_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mE367AB133A26DA125A1E60158473C8DF02581A38_RuntimeMethod_var);
			V_4 = L_9;
			V_5 = 0;
			goto IL_009c;
		}

IL_005f:
		{
			// foreach (Canvas canvas in GameObject.FindObjectsOfType<Canvas>())
			CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_10 = V_4;
			int32_t L_11 = V_5;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			V_6 = L_13;
			// switch (canvas.renderMode)
			Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_14 = V_6;
			NullCheck(L_14);
			int32_t L_15;
			L_15 = Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D(L_14, /*hidden argument*/NULL);
			V_7 = L_15;
			int32_t L_16 = V_7;
			if (!L_16)
			{
				goto IL_0096;
			}
		}

IL_0073:
		{
			int32_t L_17 = V_7;
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1))) <= ((uint32_t)1))))
			{
				goto IL_0096;
			}
		}

IL_007a:
		{
			// if (canvas.worldCamera != null)
			Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_18 = V_6;
			NullCheck(L_18);
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
			L_19 = Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_20;
			L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_0096;
			}
		}

IL_0089:
		{
			// targetCameras.Add(canvas.worldCamera);
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_21 = V_2;
			Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_22 = V_6;
			NullCheck(L_22);
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_23;
			L_23 = Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51(L_22, /*hidden argument*/NULL);
			NullCheck(L_21);
			List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7(L_21, L_23, /*hidden argument*/List_1_Add_m5B457832A4D4C94E86A39767276F999140B677B7_RuntimeMethod_var);
		}

IL_0096:
		{
			int32_t L_24 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_009c:
		{
			// foreach (Canvas canvas in GameObject.FindObjectsOfType<Canvas>())
			int32_t L_25 = V_5;
			CanvasU5BU5D_tDD7B86FC4D93626690EB20E44D75AC253F04A5CF* L_26 = V_4;
			NullCheck(L_26);
			if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
			{
				goto IL_005f;
			}
		}

IL_00a4:
		{
			// break;
			goto IL_00ca;
		}

IL_00a6:
		{
			// if (customFadeTargetCameras.Count == 0)
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_27 = __this->get_customFadeTargetCameras_24();
			NullCheck(L_27);
			int32_t L_28;
			L_28 = List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_inline(L_27, /*hidden argument*/List_1_get_Count_m8FB149686794063D5004BAB8D71F1C150777F04D_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_00be;
			}
		}

IL_00b3:
		{
			// throw new Exception("Attempting to fade custom target cameras but none were supplied. Use SetCustomFadeCameras prior to calling TransitionToScene.");
			Exception_t * L_29 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6188E7230D6EC2CB653C4B636C9EB4E43FA23E5B)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneTransitionService_GatherFadeTargetCameras_mFD79836B0AF86D79B7AFD5229F146A53BD0C26CF_RuntimeMethod_var)));
		}

IL_00be:
		{
			// targetCameras.AddRange(customFadeTargetCameras);
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_30 = V_2;
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_31 = __this->get_customFadeTargetCameras_24();
			NullCheck(L_30);
			List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF(L_30, L_31, /*hidden argument*/List_1_AddRange_m28392D52AC9E4C794A9712D1693D07F29A633DAF_RuntimeMethod_var);
		}

IL_00ca:
		{
			// return targetCameras;
			List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_32 = V_2;
			V_8 = L_32;
			IL2CPP_LEAVE(0xDD, FINALLY_00cf);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cf;
	}

FINALLY_00cf:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(207)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(207)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
	}

IL_00dd:
	{
		// }
		List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_33 = V_8;
		return L_33;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CreateDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CreateDefaultProgressIndicator_mB59917573AA6FA94D70BD668662921DE23D54673 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultProgressIndicator != null)
		RuntimeObject* L_0 = __this->get_defaultProgressIndicator_22();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (sceneTransitionServiceProfile.DefaultProgressIndicatorPrefab == null)
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_1 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mD115DCA2DD2259424B12DABF8E948618793756C9_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new Exception("No progress indicator prefab found in profile.");
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BD6FA6FBD0F285B5107F463210EB588E48F051A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneTransitionService_CreateDefaultProgressIndicator_mB59917573AA6FA94D70BD668662921DE23D54673_RuntimeMethod_var)));
	}

IL_0027:
	{
		// progressIndicatorObject = GameObject.Instantiate(sceneTransitionServiceProfile.DefaultProgressIndicatorPrefab);
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_5 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mD115DCA2DD2259424B12DABF8E948618793756C9_inline(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		__this->set_progressIndicatorObject_21(L_7);
		// defaultProgressIndicator = (IProgressIndicator)progressIndicatorObject.GetComponent(typeof(IProgressIndicator));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_progressIndicatorObject_21();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_11;
		L_11 = GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473(L_8, L_10, /*hidden argument*/NULL);
		__this->set_defaultProgressIndicator_22(((RuntimeObject*)Castclass((RuntimeObject*)L_11, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var)));
		// if (defaultProgressIndicator == null)
		RuntimeObject* L_12 = __this->get_defaultProgressIndicator_22();
		if (L_12)
		{
			goto IL_0070;
		}
	}
	{
		// throw new Exception("Progress indicator prefab doesn't have a script implementing IProgressIndicator.");
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral812B93C972F83E269C898CB9FEF20AD1ADA64217)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneTransitionService_CreateDefaultProgressIndicator_mB59917573AA6FA94D70BD668662921DE23D54673_RuntimeMethod_var)));
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CleanUpDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CleanUpDefaultProgressIndicator_m953E9DF593D20A53982A58F810E93CFBE8D2F8F2 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (progressIndicatorObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_progressIndicatorObject_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// GameObjectExtensions.DestroyGameObject(progressIndicatorObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_progressIndicatorObject_21();
		GameObjectExtensions_DestroyGameObject_mC4459185F75BD707FD6E061B5548DAE1EEEC7AF6(L_2, (0.0f), /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CreateCameraFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CreateCameraFader_mE349B65791F79E9F089A616E90E553F5033E1E12 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Type_t * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// if (cameraFader != null)
		RuntimeObject* L_0 = __this->get_cameraFader_23();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// cameraFader = (ICameraFader)Activator.CreateInstance(sceneTransitionServiceProfile.CameraFaderType.Type);
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_1 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_1);
		SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * L_2;
		L_2 = SceneTransitionServiceProfile_get_CameraFaderType_mCB146807D62B5D2876981119914E801CD9D829B7_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = SystemType_get_Type_m2445AA154BE01049B725B11E92E5CB349BBE2472_inline(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4;
		L_4 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_3, /*hidden argument*/NULL);
		__this->set_cameraFader_23(((RuntimeObject*)Castclass((RuntimeObject*)L_4, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var)));
		// cameraFader.Initialize(sceneTransitionServiceProfile);
		RuntimeObject* L_5 = __this->get_cameraFader_23();
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_6 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_5);
		InterfaceActionInvoker1< SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::Initialize(Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile) */, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var, L_5, L_6);
		// if (cameraFader == null)
		RuntimeObject* L_7 = __this->get_cameraFader_23();
		if (L_7)
		{
			goto IL_006e;
		}
	}
	{
		// throw new Exception("Couldn't create camera fader of type " + sceneTransitionServiceProfile.CameraFaderType.Type);
		SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_8 = __this->get_sceneTransitionServiceProfile_20();
		NullCheck(L_8);
		SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * L_9;
		L_9 = SceneTransitionServiceProfile_get_CameraFaderType_mCB146807D62B5D2876981119914E801CD9D829B7_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = SystemType_get_Type_m2445AA154BE01049B725B11E92E5CB349BBE2472_inline(L_9, /*hidden argument*/NULL);
		Type_t * L_11 = L_10;
		G_B4_0 = L_11;
		G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB85BD2A90D444EDBD4F18BEBB782A0CA3E1B6F7A));
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB85BD2A90D444EDBD4F18BEBB782A0CA3E1B6F7A));
			goto IL_005e;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_0063;
	}

IL_005e:
	{
		NullCheck(G_B5_0);
		String_t* L_12;
		L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
	}

IL_0063:
	{
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SceneTransitionService_CreateCameraFader_mE349B65791F79E9F089A616E90E553F5033E1E12_RuntimeMethod_var)));
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::CleanUpCameraFader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService_CleanUpCameraFader_m057DA1BECC8CADB6561345C363B1A1926B8C7A34 (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cameraFader != null)
		RuntimeObject* L_0 = __this->get_cameraFader_23();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// cameraFader.OnDestroy();
		RuntimeObject* L_1 = __this->get_cameraFader_23();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::OnDestroy() */, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var, L_1);
		// cameraFader = null;
		__this->set_cameraFader_23((RuntimeObject*)NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionService__cctor_m7A5C7962801DEB04F750438EB11293C1E8AE56FB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31458AD0C0AF1F61C0D182621815EEB4ACF048D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4455AB79907F48883B90E43E3480CC3C4C7EF749);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4543A8A600AAF621D5B283482F0136C2F216FF62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8828DDA20B74971CEC31D21BD2E54441F8B587BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A3B911B8B657663E66DA058B2F981A6805D3F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5121B082D242C1BD514B12BF0C187A5993C5215);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker DoSceneTransitionPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.DoSceneTransition");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral31458AD0C0AF1F61C0D182621815EEB4ACF048D6, /*hidden argument*/NULL);
		((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->set_DoSceneTransitionPerfMarker_25(L_0);
		// private static readonly ProfilerMarker FadeOutPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.FadeOut");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral4455AB79907F48883B90E43E3480CC3C4C7EF749, /*hidden argument*/NULL);
		((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->set_FadeOutPerfMarker_26(L_1);
		// private static readonly ProfilerMarker FadeInPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.FadeIn");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteralE5121B082D242C1BD514B12BF0C187A5993C5215, /*hidden argument*/NULL);
		((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->set_FadeInPerfMarker_27(L_2);
		// private static readonly ProfilerMarker ShowDefaultProgressIndicatorPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.ShowDefaultProgressIndicator");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral4543A8A600AAF621D5B283482F0136C2F216FF62, /*hidden argument*/NULL);
		((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->set_ShowDefaultProgressIndicatorPerfMarker_28(L_3);
		// private static readonly ProfilerMarker HideProgressIndicatorPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.HideProgressIndicator");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_4;
		memset((&L_4), 0, sizeof(L_4));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_4), _stringLiteral8828DDA20B74971CEC31D21BD2E54441F8B587BE, /*hidden argument*/NULL);
		((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->set_HideProgressIndicatorPerfMarker_29(L_4);
		// private static readonly ProfilerMarker GatherFadeTargetCamerasPerfMarker = new ProfilerMarker("[MRTK] SceneTransitionService.GatherFrameTargetCameras");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_5;
		memset((&L_5), 0, sizeof(L_5));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_5), _stringLiteralD7A3B911B8B657663E66DA058B2F981A6805D3F1, /*hidden argument*/NULL);
		((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->set_GatherFadeTargetCamerasPerfMarker_30(L_5);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_UseDefaultProgressIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseDefaultProgressIndicator_mF7336A45DF16ACB461C9C42B2AE7361F610A2ED4 (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public bool UseDefaultProgressIndicator => useDefaultProgressIndicator;
		bool L_0 = __this->get_useDefaultProgressIndicator_5();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_DefaultProgressIndicatorPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mD115DCA2DD2259424B12DABF8E948618793756C9 (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public GameObject DefaultProgressIndicatorPrefab => defaultProgressIndicatorPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_defaultProgressIndicatorPrefab_6();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_CameraFaderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * SceneTransitionServiceProfile_get_CameraFaderType_mCB146807D62B5D2876981119914E801CD9D829B7 (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public SystemType CameraFaderType => cameraFaderType;
		SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * L_0 = __this->get_cameraFaderType_12();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_UseFadeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseFadeColor_mBFA35F1421F6379A9A0CE416E0F4A08C36BE7207 (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor => useFadeColor;
		bool L_0 = __this->get_useFadeColor_7();
		return L_0;
	}
}
// UnityEngine.Color Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionServiceProfile_get_FadeColor_mC82240C1E9464ED8422F0F7E441829596DED06CD (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public Color FadeColor => fadeColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_fadeColor_8();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeOutTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeOutTime_m942D58D06B7AE4E988DBAF52B0435FFF1E32DCC7 (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime => fadeOutTime;
		float L_0 = __this->get_fadeOutTime_9();
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeInTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeInTime_mD15E5263ABC41832FE8423348D56947CFB13453D (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public float FadeInTime => fadeInTime;
		float L_0 = __this->get_fadeInTime_10();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderTargets Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_FadeTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneTransitionServiceProfile_get_FadeTargets_m4E74C2340AA208E02477C74E853A72E4ECA4C94C (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets => fadeTargets;
		int32_t L_0 = __this->get_fadeTargets_11();
		return L_0;
	}
}
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::get_CameraFaderMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneTransitionServiceProfile_get_CameraFaderMaterial_mA264B126539A6102131128157DCD449969DE79E0 (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public Material CameraFaderMaterial => cameraFaderMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_cameraFaderMaterial_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneTransitionServiceProfile__ctor_mE50AC38D5A4E1D8A4127D5B0705FA6630CF188E3 (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// private bool useDefaultProgressIndicator = true;
		__this->set_useDefaultProgressIndicator_5((bool)1);
		// private bool useFadeColor = true;
		__this->set_useFadeColor_7((bool)1);
		// private Color fadeColor = Color.black;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_fadeColor_8(L_0);
		// private float fadeOutTime = 1f;
		__this->set_fadeOutTime_9((1.0f));
		// private float fadeInTime = 0.5f;
		__this->set_fadeInTime_10((0.5f));
		BaseMixedRealityProfile__ctor_mF709430A064018C3B2A996A5F7950053A00EC14C(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAsyncU3Ed__17_MoveNext_mBFA77EC90C1FFCB8085875623BA704C48A765A61 (U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_mB69DEEB7CA5294E6FD3B8AF0AAF843C370D06545_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderState_t448B8DA0C518B15E3396D600E27F3743BB77CAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mF443B74D760D8CDB447615AF4BC29A1657CC1954_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36EE8A5FF4009B845B66EC1D63E1466DC691A26E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6724DF02A625A1E61DB0254B283AEA48BABAA8FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  V_5;
	memset((&V_5), 0, sizeof(V_5));
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0025;
			}
		}

IL_0012:
		{
			// using (FadeInAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_StaticFields*)il2cpp_codegen_static_fields_for(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var))->get_FadeInAsyncPerfMarker_10();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3(L_4);
		}

IL_0025:
		{
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0176;
				}
			}

IL_002c:
			{
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_01e7;
				}
			}

IL_0033:
			{
				// if (quads.Count == 0)
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_7 = V_1;
				NullCheck(L_7);
				Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * L_8 = L_7->get_quads_3();
				NullCheck(L_8);
				int32_t L_9;
				L_9 = Dictionary_2_get_Count_mF443B74D760D8CDB447615AF4BC29A1657CC1954(L_8, /*hidden argument*/Dictionary_2_get_Count_mF443B74D760D8CDB447615AF4BC29A1657CC1954_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_004f;
				}
			}

IL_0040:
			{
				// Debug.LogError("No camera targets found - are you trying to fade in before you've faded out?");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral36EE8A5FF4009B845B66EC1D63E1466DC691A26E, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x257, FINALLY_021a);
			}

IL_004f:
			{
				// switch (State)
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_10 = V_1;
				NullCheck(L_10);
				int32_t L_11;
				L_11 = CameraFaderQuad_get_State_m942D7EBC1AD102C0401D947E0466306FDB94209D_inline(L_10, /*hidden argument*/NULL);
				if ((((int32_t)L_11) == ((int32_t)2)))
				{
					goto IL_0080;
				}
			}

IL_0058:
			{
				// Debug.LogWarning("Can't fade in in state " + State + " - not proceeding.");
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_12 = V_1;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = CameraFaderQuad_get_State_m942D7EBC1AD102C0401D947E0466306FDB94209D_inline(L_12, /*hidden argument*/NULL);
				V_3 = L_13;
				RuntimeObject * L_14 = Box(CameraFaderState_t448B8DA0C518B15E3396D600E27F3743BB77CAFB_il2cpp_TypeInfo_var, (&V_3));
				NullCheck(L_14);
				String_t* L_15;
				L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
				V_3 = *(int32_t*)UnBox(L_14);
				String_t* L_16;
				L_16 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral6724DF02A625A1E61DB0254B283AEA48BABAA8FC, L_15, _stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_16, /*hidden argument*/NULL);
			}

IL_0080:
			{
				// State = CameraFaderState.FadingIn;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_17 = V_1;
				NullCheck(L_17);
				CameraFaderQuad_set_State_m2F80338033CB8EC442E800A40C05231485F30F51_inline(L_17, 1, /*hidden argument*/NULL);
				// float fadeAmount = 0;
				__this->set_U3CfadeAmountU3E5__3_4((0.0f));
				goto IL_019a;
			}

IL_0097:
			{
				// fadeAmount += Time.unscaledDeltaTime;
				float L_18 = __this->get_U3CfadeAmountU3E5__3_4();
				float L_19;
				L_19 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
				__this->set_U3CfadeAmountU3E5__3_4(((float)il2cpp_codegen_add((float)L_18, (float)L_19)));
				// currentColor = Color.Lerp(fadeOutColor, fadeInColor, fadeAmount);
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_20 = V_1;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_21 = V_1;
				NullCheck(L_21);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = L_21->get_fadeOutColor_4();
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_23 = V_1;
				NullCheck(L_23);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = L_23->get_fadeInColor_5();
				float L_25 = __this->get_U3CfadeAmountU3E5__3_4();
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
				L_26 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_22, L_24, L_25, /*hidden argument*/NULL);
				NullCheck(L_20);
				L_20->set_currentColor_6(L_26);
				// foreach (Quad quad in quads.Values)
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_27 = V_1;
				NullCheck(L_27);
				Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * L_28 = L_27->get_quads_3();
				NullCheck(L_28);
				ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC * L_29;
				L_29 = Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442(L_28, /*hidden argument*/Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442_RuntimeMethod_var);
				NullCheck(L_29);
				Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA  L_30;
				L_30 = ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807(L_29, /*hidden argument*/ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807_RuntimeMethod_var);
				V_4 = L_30;
			}

IL_00d8:
			try
			{ // begin try (depth: 3)
				{
					goto IL_011c;
				}

IL_00da:
				{
					// foreach (Quad quad in quads.Values)
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_31;
					L_31 = Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_inline((Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *)(&V_4), /*hidden argument*/Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_RuntimeMethod_var);
					V_5 = L_31;
					// if (quad.Renderer == null)
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_32 = V_5;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_33 = L_32.get_Renderer_0();
					IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
					bool L_34;
					L_34 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
					if (L_34)
					{
						goto IL_011c;
					}
				}

IL_00f2:
				{
					// quad.PropertyBlock.SetColor(QuadMaterialColorName, currentColor);
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_35 = V_5;
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_36 = L_35.get_PropertyBlock_1();
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_37 = V_1;
					NullCheck(L_37);
					Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38 = L_37->get_currentColor_6();
					NullCheck(L_36);
					MaterialPropertyBlock_SetColor_m640E72ABA9086F3F9278C114C1072AD2BED89F48(L_36, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_38, /*hidden argument*/NULL);
					// quad.Renderer.SetPropertyBlock(quad.PropertyBlock);
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_39 = V_5;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_40 = L_39.get_Renderer_0();
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_41 = V_5;
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_42 = L_41.get_PropertyBlock_1();
					NullCheck(L_40);
					Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A(L_40, L_42, /*hidden argument*/NULL);
				}

IL_011c:
				{
					// foreach (Quad quad in quads.Values)
					bool L_43;
					L_43 = Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1((Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1_RuntimeMethod_var);
					if (L_43)
					{
						goto IL_00da;
					}
				}

IL_0125:
				{
					IL2CPP_LEAVE(0x139, FINALLY_0127);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0127;
			}

FINALLY_0127:
			{ // begin finally (depth: 3)
				{
					int32_t L_44 = V_0;
					if ((((int32_t)L_44) >= ((int32_t)0)))
					{
						goto IL_0138;
					}
				}

IL_012b:
				{
					Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF((Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *)(&V_4), /*hidden argument*/Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF_RuntimeMethod_var);
				}

IL_0138:
				{
					IL2CPP_END_FINALLY(295)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(295)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x139, IL_0139)
			}

IL_0139:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_45;
				L_45 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_7 = L_45;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_46;
				L_46 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_7), /*hidden argument*/NULL);
				V_6 = L_46;
				bool L_47;
				L_47 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), /*hidden argument*/NULL);
				if (L_47)
				{
					goto IL_0193;
				}
			}

IL_0152:
			{
				int32_t L_48 = 0;
				V_0 = L_48;
				__this->set_U3CU3E1__state_0(L_48);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_49 = V_6;
				__this->set_U3CU3Eu__1_5(L_49);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_50 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_mB69DEEB7CA5294E6FD3B8AF0AAF843C370D06545((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_50, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), (U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_mB69DEEB7CA5294E6FD3B8AF0AAF843C370D06545_RuntimeMethod_var);
				IL2CPP_LEAVE(0x26A, FINALLY_021a);
			}

IL_0176:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_51 = __this->get_U3CU3Eu__1_5();
				V_6 = L_51;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_52 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_52, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->set_U3CU3E1__state_0(L_53);
			}

IL_0193:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), /*hidden argument*/NULL);
			}

IL_019a:
			{
				// while (fadeAmount < 1)
				float L_54 = __this->get_U3CfadeAmountU3E5__3_4();
				if ((((float)L_54) < ((float)(1.0f))))
				{
					goto IL_0097;
				}
			}

IL_01aa:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_55;
				L_55 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_7 = L_55;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_56;
				L_56 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_7), /*hidden argument*/NULL);
				V_6 = L_56;
				bool L_57;
				L_57 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), /*hidden argument*/NULL);
				if (L_57)
				{
					goto IL_0204;
				}
			}

IL_01c3:
			{
				int32_t L_58 = 1;
				V_0 = L_58;
				__this->set_U3CU3E1__state_0(L_58);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_59 = V_6;
				__this->set_U3CU3Eu__1_5(L_59);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_60 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_mB69DEEB7CA5294E6FD3B8AF0AAF843C370D06545((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_60, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), (U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753_mB69DEEB7CA5294E6FD3B8AF0AAF843C370D06545_RuntimeMethod_var);
				IL2CPP_LEAVE(0x26A, FINALLY_021a);
			}

IL_01e7:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_61 = __this->get_U3CU3Eu__1_5();
				V_6 = L_61;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_62 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_62, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_63 = (-1);
				V_0 = L_63;
				__this->set_U3CU3E1__state_0(L_63);
			}

IL_0204:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_6), /*hidden argument*/NULL);
				// DestroyQuads();
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_64 = V_1;
				NullCheck(L_64);
				CameraFaderQuad_DestroyQuads_mE120911A2B565B10725CF99864C8BB000FB61C0E(L_64, /*hidden argument*/NULL);
				// State = CameraFaderState.Clear;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_65 = V_1;
				NullCheck(L_65);
				CameraFaderQuad_set_State_m2F80338033CB8EC442E800A40C05231485F30F51_inline(L_65, 0, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x230, FINALLY_021a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_021a;
		}

FINALLY_021a:
		{ // begin finally (depth: 2)
			{
				int32_t L_66 = V_0;
				if ((((int32_t)L_66) >= ((int32_t)0)))
				{
					goto IL_022f;
				}
			}

IL_021e:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_67 = __this->get_address_of_U3CU3E7__wrap1_3();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_67, /*hidden argument*/NULL);
			}

IL_022f:
			{
				IL2CPP_END_FINALLY(538)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(538)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x257, IL_0257)
			IL2CPP_JUMP_TBL(0x26A, IL_026a)
			IL2CPP_JUMP_TBL(0x230, IL_0230)
		}

IL_0230:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_68 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_68, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0257;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_023e;
		}
		throw e;
	}

CATCH_023e:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_69 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_70 = V_8;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_69, L_70, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_026a;
	} // end catch (depth: 1)

IL_0257:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_71 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_71, /*hidden argument*/NULL);
	}

IL_026a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeInAsyncU3Ed__17_MoveNext_mBFA77EC90C1FFCB8085875623BA704C48A765A61_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * _thisAdjusted = reinterpret_cast<U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 *>(__this + _offset);
	U3CFadeInAsyncU3Ed__17_MoveNext_mBFA77EC90C1FFCB8085875623BA704C48A765A61(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeInAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAsyncU3Ed__17_SetStateMachine_mAC4E403A10A7DD9579A5CEB79A1B919A6E545084 (U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeInAsyncU3Ed__17_SetStateMachine_mAC4E403A10A7DD9579A5CEB79A1B919A6E545084_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 * _thisAdjusted = reinterpret_cast<U3CFadeInAsyncU3Ed__17_t4788BE107DACA197162F32C4BE5DD2D30BADD753 *>(__this + _offset);
	U3CFadeInAsyncU3Ed__17_SetStateMachine_mAC4E403A10A7DD9579A5CEB79A1B919A6E545084(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutAsyncU3Ed__15_MoveNext_m7C8317F5EEE918E0FF337234E51E3644047D44A6 (U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63D4BF8D3EEE3A9C21CDBA479BCF92CB440CEECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFaderState_t448B8DA0C518B15E3396D600E27F3743BB77CAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m17E3E66F7C3BB2DB7ECCC458C9758AAFC4E5C7FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m83A25832C81F1439FC305678A94B1B95E322A8AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1CEFC4032D36100FE58999A10DFB02F5139BC4AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tCF7FF5B0C2C3C1ED84EA8B53C00513836CEE6A9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA646770488C9DBF9573CE4990692B59630579657);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD334F0506ACE2EC5CCBC7E868FCA093C85B446A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF85263F579BDEEADCEC89CFCDB0C3F6C51D186BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_5 = NULL;
	Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  V_9;
	memset((&V_9), 0, sizeof(V_9));
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_10;
	memset((&V_10), 0, sizeof(V_10));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t * V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 10> __leave_targets;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B21_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B20_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B22_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0025;
			}
		}

IL_0012:
		{
			// using (FadeOutAsyncPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_StaticFields*)il2cpp_codegen_static_fields_for(CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B_il2cpp_TypeInfo_var))->get_FadeOutAsyncPerfMarker_9();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_5(L_4);
		}

IL_0025:
		{
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0411;
				}
			}

IL_002c:
			{
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_047f;
				}
			}

IL_0033:
			{
				// switch (State)
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_7 = V_1;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = CameraFaderQuad_get_State_m942D7EBC1AD102C0401D947E0466306FDB94209D_inline(L_7, /*hidden argument*/NULL);
				if (!L_8)
				{
					goto IL_0068;
				}
			}

IL_003b:
			{
				// Debug.LogWarning("Can't fade out in state " + State + " - not proceeding.");
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_9 = V_1;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = CameraFaderQuad_get_State_m942D7EBC1AD102C0401D947E0466306FDB94209D_inline(L_9, /*hidden argument*/NULL);
				V_3 = L_10;
				RuntimeObject * L_11 = Box(CameraFaderState_t448B8DA0C518B15E3396D600E27F3743BB77CAFB_il2cpp_TypeInfo_var, (&V_3));
				NullCheck(L_11);
				String_t* L_12;
				L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
				V_3 = *(int32_t*)UnBox(L_11);
				String_t* L_13;
				L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD334F0506ACE2EC5CCBC7E868FCA093C85B446A2, L_12, _stringLiteralF9B85756D83C9C00267EE9160CB7C68B84C2F439, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_13, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x4E9, FINALLY_04ac);
			}

IL_0068:
			{
				// State = CameraFaderState.FadingOut;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_14 = V_1;
				NullCheck(L_14);
				CameraFaderQuad_set_State_m2F80338033CB8EC442E800A40C05231485F30F51_inline(L_14, 3, /*hidden argument*/NULL);
				// fadeOutColor = color;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_15 = V_1;
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = __this->get_color_3();
				NullCheck(L_15);
				L_15->set_fadeOutColor_4(L_16);
				// fadeInColor = fadeOutColor;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_17 = V_1;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_18 = V_1;
				NullCheck(L_18);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19 = L_18->get_fadeOutColor_4();
				NullCheck(L_17);
				L_17->set_fadeInColor_5(L_19);
				// fadeInColor.a = 0;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_20 = V_1;
				NullCheck(L_20);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_21 = L_20->get_address_of_fadeInColor_5();
				L_21->set_a_3((0.0f));
				// if (fadeOutColor.a < 1)
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_22 = V_1;
				NullCheck(L_22);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_23 = L_22->get_address_of_fadeOutColor_4();
				float L_24 = L_23->get_a_3();
				if ((!(((float)L_24) < ((float)(1.0f)))))
				{
					goto IL_00b3;
				}
			}

IL_00a9:
			{
				// Debug.LogWarning("Target color is not fully opaque.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralA646770488C9DBF9573CE4990692B59630579657, /*hidden argument*/NULL);
			}

IL_00b3:
			{
				// if (quadMaterial == null)
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_25 = V_1;
				NullCheck(L_25);
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = L_25->get_quadMaterial_7();
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_27;
				L_27 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				if (!L_27)
				{
					goto IL_0198;
				}
			}

IL_00c4:
			try
			{ // begin try (depth: 3)
				{
					// if (quadMaterialTemplate != null)
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_28 = V_1;
					NullCheck(L_28);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = L_28->get_quadMaterialTemplate_8();
					IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
					bool L_30;
					L_30 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
					if (!L_30)
					{
						goto IL_00e8;
					}
				}

IL_00d2:
				{
					// quadMaterial = new Material(quadMaterialTemplate);
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_31 = V_1;
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_32 = V_1;
					NullCheck(L_32);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = L_32->get_quadMaterialTemplate_8();
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
					Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_34, L_33, /*hidden argument*/NULL);
					NullCheck(L_31);
					L_31->set_quadMaterial_7(L_34);
					// }
					goto IL_0182;
				}

IL_00e8:
				{
					// quadMaterial = new Material(Shader.Find(QuadMaterialShaderName));
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_35 = V_1;
					Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_36;
					L_36 = Shader_Find_m596EC6EBDCA8C9D5D86E2410A319928C1E8E6B5A(_stringLiteralF85263F579BDEEADCEC89CFCDB0C3F6C51D186BF, /*hidden argument*/NULL);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_37 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
					Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_37, L_36, /*hidden argument*/NULL);
					NullCheck(L_35);
					L_35->set_quadMaterial_7(L_37);
					// quadMaterial.SetInt("_Mode", 2);
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_38 = V_1;
					NullCheck(L_38);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39 = L_38->get_quadMaterial_7();
					NullCheck(L_39);
					Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_39, _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69, 2, /*hidden argument*/NULL);
					// quadMaterial.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_40 = V_1;
					NullCheck(L_40);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_41 = L_40->get_quadMaterial_7();
					NullCheck(L_41);
					Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_41, _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 5, /*hidden argument*/NULL);
					// quadMaterial.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_42 = V_1;
					NullCheck(L_42);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_43 = L_42->get_quadMaterial_7();
					NullCheck(L_43);
					Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_43, _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, ((int32_t)10), /*hidden argument*/NULL);
					// quadMaterial.SetInt("_ZWrite", 0);
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_44 = V_1;
					NullCheck(L_44);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_45 = L_44->get_quadMaterial_7();
					NullCheck(L_45);
					Material_SetInt_m15D944E498726C9BB3A60A41DAAA45000F570F87(L_45, _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 0, /*hidden argument*/NULL);
					// quadMaterial.DisableKeyword("_ALPHATEST_ON");
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_46 = V_1;
					NullCheck(L_46);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_47 = L_46->get_quadMaterial_7();
					NullCheck(L_47);
					Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_47, _stringLiteralCBCD3D866AF896F9B010A0FEE7F961DBC91A08C5, /*hidden argument*/NULL);
					// quadMaterial.EnableKeyword("_ALPHABLEND_ON");
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_48 = V_1;
					NullCheck(L_48);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_49 = L_48->get_quadMaterial_7();
					NullCheck(L_49);
					Material_EnableKeyword_mBD03896F11814C3EF67F73A414DC66D5B577171D(L_49, _stringLiteral52CBE4A5A42509939BB9DB58A4B9A2C9BBA81C1C, /*hidden argument*/NULL);
					// quadMaterial.DisableKeyword("_ALPHAPREMULTIPLY_ON");
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_50 = V_1;
					NullCheck(L_50);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_51 = L_50->get_quadMaterial_7();
					NullCheck(L_51);
					Material_DisableKeyword_mD43BE3ED8D792B7242F5487ADC074DF2A5A1BD18(L_51, _stringLiteral61304A4D1A7F7C3C856F975F251F1F79885933C8, /*hidden argument*/NULL);
					// quadMaterial.renderQueue = 3000;
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_52 = V_1;
					NullCheck(L_52);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_53 = L_52->get_quadMaterial_7();
					NullCheck(L_53);
					Material_set_renderQueue_m239F950307B3B71DC41AF02F9030DD0A80A3A201(L_53, ((int32_t)3000), /*hidden argument*/NULL);
				}

IL_0182:
				{
					// }
					goto IL_0198;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0184;
				}
				throw e;
			}

CATCH_0184:
			{ // begin catch(System.Exception)
				// Debug.LogError("Error when trying to create quad material in CameraFaderQuad");
				IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
				Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D9D651ABAA01519787B90DCB20837985F76598E)), /*hidden argument*/NULL);
				// Debug.LogException(e);
				Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
				// return;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				IL2CPP_LEAVE(0x4E9, FINALLY_04ac);
			} // end catch (depth: 3)

IL_0198:
			{
				// quadMaterial.enableInstancing = true;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_54 = V_1;
				NullCheck(L_54);
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_55 = L_54->get_quadMaterial_7();
				NullCheck(L_55);
				Material_set_enableInstancing_m508CAE1A82C2688E92491BBDEE4F5A00089BCD4B(L_55, (bool)1, /*hidden argument*/NULL);
				// quadMaterial.SetColor(QuadMaterialColorName, currentColor);
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_56 = V_1;
				NullCheck(L_56);
				Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_57 = L_56->get_quadMaterial_7();
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_58 = V_1;
				NullCheck(L_58);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_59 = L_58->get_currentColor_6();
				NullCheck(L_57);
				Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_57, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_59, /*hidden argument*/NULL);
				// foreach (Camera camera in targets)
				RuntimeObject* L_60 = __this->get_targets_4();
				NullCheck(L_60);
				RuntimeObject* L_61;
				L_61 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>::GetEnumerator() */, IEnumerable_1_t1CEFC4032D36100FE58999A10DFB02F5139BC4AF_il2cpp_TypeInfo_var, L_60);
				V_4 = L_61;
			}

IL_01c7:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0304;
				}

IL_01cc:
				{
					// foreach (Camera camera in targets)
					RuntimeObject* L_62 = V_4;
					NullCheck(L_62);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_63;
					L_63 = InterfaceFuncInvoker0< Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>::get_Current() */, IEnumerator_1_tCF7FF5B0C2C3C1ED84EA8B53C00513836CEE6A9B_il2cpp_TypeInfo_var, L_62);
					V_5 = L_63;
					// if (quads.ContainsKey(camera))
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_64 = V_1;
					NullCheck(L_64);
					Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * L_65 = L_64->get_quads_3();
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_66 = V_5;
					NullCheck(L_65);
					bool L_67;
					L_67 = Dictionary_2_ContainsKey_m83A25832C81F1439FC305678A94B1B95E322A8AD(L_65, L_66, /*hidden argument*/Dictionary_2_ContainsKey_m83A25832C81F1439FC305678A94B1B95E322A8AD_RuntimeMethod_var);
					if (L_67)
					{
						goto IL_0304;
					}
				}

IL_01e7:
				{
					// Quad quad = new Quad();
					il2cpp_codegen_initobj((&V_6), sizeof(Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2 ));
					// quad.PropertyBlock = new MaterialPropertyBlock();
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_68 = (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
					MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8(L_68, /*hidden argument*/NULL);
					(&V_6)->set_PropertyBlock_1(L_68);
					// quad.Renderer = GameObject.CreatePrimitive(PrimitiveType.Quad).GetComponent<Renderer>();
					GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
					L_69 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(5, /*hidden argument*/NULL);
					NullCheck(L_69);
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_70;
					L_70 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_69, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
					(&V_6)->set_Renderer_0(L_70);
					// quad.Renderer.sharedMaterial = quadMaterial;
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_71 = V_6;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_72 = L_71.get_Renderer_0();
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_73 = V_1;
					NullCheck(L_73);
					Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_74 = L_73->get_quadMaterial_7();
					NullCheck(L_72);
					Renderer_set_sharedMaterial_m1E66766F93E95F692C3C9C2C09AFD795B156678B(L_72, L_74, /*hidden argument*/NULL);
					// quad.Renderer.transform.parent = camera.transform;
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_75 = V_6;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_76 = L_75.get_Renderer_0();
					NullCheck(L_76);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
					L_77 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_76, /*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_78 = V_5;
					NullCheck(L_78);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
					L_79 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_78, /*hidden argument*/NULL);
					NullCheck(L_77);
					Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_77, L_79, /*hidden argument*/NULL);
					// quad.Renderer.transform.localScale = camera.orthographic ? Vector3.one * camera.orthographicSize : Vector3.one * camera.fieldOfView;
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_80 = V_6;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_81 = L_80.get_Renderer_0();
					NullCheck(L_81);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
					L_82 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_81, /*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_83 = V_5;
					NullCheck(L_83);
					bool L_84;
					L_84 = Camera_get_orthographic_m3DE9A7705E2B4926BBFD2D6798D97B931B5B5550(L_83, /*hidden argument*/NULL);
					G_B20_0 = L_82;
					if (L_84)
					{
						G_B21_0 = L_82;
						goto IL_025f;
					}
				}

IL_024c:
				{
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
					L_85 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_86 = V_5;
					NullCheck(L_86);
					float L_87;
					L_87 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_86, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
					L_88 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_85, L_87, /*hidden argument*/NULL);
					G_B22_0 = L_88;
					G_B22_1 = G_B20_0;
					goto IL_0270;
				}

IL_025f:
				{
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
					L_89 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_90 = V_5;
					NullCheck(L_90);
					float L_91;
					L_91 = Camera_get_orthographicSize_m970DC87D428A71EDF30F9ED7D0E76E08B1BE4EFE(L_90, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
					L_92 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_89, L_91, /*hidden argument*/NULL);
					G_B22_0 = L_92;
					G_B22_1 = G_B21_0;
				}

IL_0270:
				{
					NullCheck(G_B22_1);
					Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(G_B22_1, G_B22_0, /*hidden argument*/NULL);
					// quad.Renderer.transform.localPosition = Vector3.forward * camera.nearClipPlane * 1.01f;
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_93 = V_6;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_94 = L_93.get_Renderer_0();
					NullCheck(L_94);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
					L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_94, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
					L_96 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_97 = V_5;
					NullCheck(L_97);
					float L_98;
					L_98 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_97, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
					L_99 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_96, L_98, /*hidden argument*/NULL);
					Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
					L_100 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_99, (1.00999999f), /*hidden argument*/NULL);
					NullCheck(L_95);
					Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_95, L_100, /*hidden argument*/NULL);
					// quad.Renderer.transform.localRotation = Quaternion.identity;
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_101 = V_6;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_102 = L_101.get_Renderer_0();
					NullCheck(L_102);
					Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_103;
					L_103 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_102, /*hidden argument*/NULL);
					Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_104;
					L_104 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
					NullCheck(L_103);
					Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_103, L_104, /*hidden argument*/NULL);
					// for (int layer = 0; layer < 32; layer++)
					V_7 = 0;
					goto IL_02ef;
				}

IL_02bc:
				{
					// if (camera.cullingMask == (camera.cullingMask | (1 << layer)))
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_105 = V_5;
					NullCheck(L_105);
					int32_t L_106;
					L_106 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_105, /*hidden argument*/NULL);
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_107 = V_5;
					NullCheck(L_107);
					int32_t L_108;
					L_108 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_107, /*hidden argument*/NULL);
					int32_t L_109 = V_7;
					if ((!(((uint32_t)L_106) == ((uint32_t)((int32_t)((int32_t)L_108|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_109&(int32_t)((int32_t)31)))))))))))
					{
						goto IL_02e9;
					}
				}

IL_02d4:
				{
					// quad.Renderer.gameObject.layer = layer;
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_110 = V_6;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_111 = L_110.get_Renderer_0();
					NullCheck(L_111);
					GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112;
					L_112 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_111, /*hidden argument*/NULL);
					int32_t L_113 = V_7;
					NullCheck(L_112);
					GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_112, L_113, /*hidden argument*/NULL);
					// break;
					goto IL_02f5;
				}

IL_02e9:
				{
					// for (int layer = 0; layer < 32; layer++)
					int32_t L_114 = V_7;
					V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)1));
				}

IL_02ef:
				{
					// for (int layer = 0; layer < 32; layer++)
					int32_t L_115 = V_7;
					if ((((int32_t)L_115) < ((int32_t)((int32_t)32))))
					{
						goto IL_02bc;
					}
				}

IL_02f5:
				{
					// quads.Add(camera, quad);
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_116 = V_1;
					NullCheck(L_116);
					Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * L_117 = L_116->get_quads_3();
					Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_118 = V_5;
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_119 = V_6;
					NullCheck(L_117);
					Dictionary_2_Add_m17E3E66F7C3BB2DB7ECCC458C9758AAFC4E5C7FF(L_117, L_118, L_119, /*hidden argument*/Dictionary_2_Add_m17E3E66F7C3BB2DB7ECCC458C9758AAFC4E5C7FF_RuntimeMethod_var);
				}

IL_0304:
				{
					// foreach (Camera camera in targets)
					RuntimeObject* L_120 = V_4;
					NullCheck(L_120);
					bool L_121;
					L_121 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_120);
					if (L_121)
					{
						goto IL_01cc;
					}
				}

IL_0310:
				{
					IL2CPP_LEAVE(0x322, FINALLY_0312);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0312;
			}

FINALLY_0312:
			{ // begin finally (depth: 3)
				{
					int32_t L_122 = V_0;
					if ((((int32_t)L_122) >= ((int32_t)0)))
					{
						goto IL_0321;
					}
				}

IL_0316:
				{
					RuntimeObject* L_123 = V_4;
					if (!L_123)
					{
						goto IL_0321;
					}
				}

IL_031a:
				{
					RuntimeObject* L_124 = V_4;
					NullCheck(L_124);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_124);
				}

IL_0321:
				{
					IL2CPP_END_FINALLY(786)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(786)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x322, IL_0322)
			}

IL_0322:
			{
				// float fadeAmount = 0;
				__this->set_U3CfadeAmountU3E5__3_6((0.0f));
				goto IL_0435;
			}

IL_0332:
			{
				// fadeAmount += Time.unscaledDeltaTime;
				float L_125 = __this->get_U3CfadeAmountU3E5__3_6();
				float L_126;
				L_126 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
				__this->set_U3CfadeAmountU3E5__3_6(((float)il2cpp_codegen_add((float)L_125, (float)L_126)));
				// currentColor = Color.Lerp(fadeInColor, fadeOutColor, fadeAmount);
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_127 = V_1;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_128 = V_1;
				NullCheck(L_128);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_129 = L_128->get_fadeInColor_5();
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_130 = V_1;
				NullCheck(L_130);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_131 = L_130->get_fadeOutColor_4();
				float L_132 = __this->get_U3CfadeAmountU3E5__3_6();
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_133;
				L_133 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_129, L_131, L_132, /*hidden argument*/NULL);
				NullCheck(L_127);
				L_127->set_currentColor_6(L_133);
				// foreach (Quad quad in quads.Values)
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_134 = V_1;
				NullCheck(L_134);
				Dictionary_2_tF4CF1919C0D42836CDD5AECF9AB9C534DA755BCC * L_135 = L_134->get_quads_3();
				NullCheck(L_135);
				ValueCollection_t1DA2048676D2AC02921B81EE6D26153FA8C70DBC * L_136;
				L_136 = Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442(L_135, /*hidden argument*/Dictionary_2_get_Values_m6CDA54B969DE5F15AB70D6A91F1689DCAA96F442_RuntimeMethod_var);
				NullCheck(L_136);
				Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA  L_137;
				L_137 = ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807(L_136, /*hidden argument*/ValueCollection_GetEnumerator_mD808D4D158CDD32CBB319D8B8EA499C474F02807_RuntimeMethod_var);
				V_8 = L_137;
			}

IL_0373:
			try
			{ // begin try (depth: 3)
				{
					goto IL_03b7;
				}

IL_0375:
				{
					// foreach (Quad quad in quads.Values)
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_138;
					L_138 = Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_inline((Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *)(&V_8), /*hidden argument*/Enumerator_get_Current_m9356D30595663707FD2445D2AE9ECF26174C1A8C_RuntimeMethod_var);
					V_9 = L_138;
					// if (quad.Renderer == null)
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_139 = V_9;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_140 = L_139.get_Renderer_0();
					IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
					bool L_141;
					L_141 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_140, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
					if (L_141)
					{
						goto IL_03b7;
					}
				}

IL_038d:
				{
					// quad.PropertyBlock.SetColor(QuadMaterialColorName, currentColor);
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_142 = V_9;
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_143 = L_142.get_PropertyBlock_1();
					CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_144 = V_1;
					NullCheck(L_144);
					Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_145 = L_144->get_currentColor_6();
					NullCheck(L_143);
					MaterialPropertyBlock_SetColor_m640E72ABA9086F3F9278C114C1072AD2BED89F48(L_143, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_145, /*hidden argument*/NULL);
					// quad.Renderer.SetPropertyBlock(quad.PropertyBlock);
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_146 = V_9;
					Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_147 = L_146.get_Renderer_0();
					Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_148 = V_9;
					MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_149 = L_148.get_PropertyBlock_1();
					NullCheck(L_147);
					Renderer_SetPropertyBlock_m3F0E4E98D8274A1396AEBA8456AFA4036DCA7B7A(L_147, L_149, /*hidden argument*/NULL);
				}

IL_03b7:
				{
					// foreach (Quad quad in quads.Values)
					bool L_150;
					L_150 = Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1((Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *)(&V_8), /*hidden argument*/Enumerator_MoveNext_mE139CB916F872C060D9C970EBBCF2FA33B439AE1_RuntimeMethod_var);
					if (L_150)
					{
						goto IL_0375;
					}
				}

IL_03c0:
				{
					IL2CPP_LEAVE(0x3D4, FINALLY_03c2);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_03c2;
			}

FINALLY_03c2:
			{ // begin finally (depth: 3)
				{
					int32_t L_151 = V_0;
					if ((((int32_t)L_151) >= ((int32_t)0)))
					{
						goto IL_03d3;
					}
				}

IL_03c6:
				{
					Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF((Enumerator_t901B3F7792CBB5AF7A50ED7F4434D92C643235FA *)(&V_8), /*hidden argument*/Enumerator_Dispose_m4E74BD9F52D09144EC46520D17CDFECE4CB294CF_RuntimeMethod_var);
				}

IL_03d3:
				{
					IL2CPP_END_FINALLY(962)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(962)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x3D4, IL_03d4)
			}

IL_03d4:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_152;
				L_152 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_11 = L_152;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_153;
				L_153 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_11), /*hidden argument*/NULL);
				V_10 = L_153;
				bool L_154;
				L_154 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_10), /*hidden argument*/NULL);
				if (L_154)
				{
					goto IL_042e;
				}
			}

IL_03ed:
			{
				int32_t L_155 = 0;
				V_0 = L_155;
				__this->set_U3CU3E1__state_0(L_155);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_156 = V_10;
				__this->set_U3CU3Eu__1_7(L_156);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_157 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63D4BF8D3EEE3A9C21CDBA479BCF92CB440CEECD((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_157, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_10), (U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63D4BF8D3EEE3A9C21CDBA479BCF92CB440CEECD_RuntimeMethod_var);
				IL2CPP_LEAVE(0x4FC, FINALLY_04ac);
			}

IL_0411:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_158 = __this->get_U3CU3Eu__1_7();
				V_10 = L_158;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_159 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_159, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_160 = (-1);
				V_0 = L_160;
				__this->set_U3CU3E1__state_0(L_160);
			}

IL_042e:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_10), /*hidden argument*/NULL);
			}

IL_0435:
			{
				// while (fadeAmount < 1)
				float L_161 = __this->get_U3CfadeAmountU3E5__3_6();
				if ((((float)L_161) < ((float)(1.0f))))
				{
					goto IL_0332;
				}
			}

IL_0445:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_162;
				L_162 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_11 = L_162;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_163;
				L_163 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_11), /*hidden argument*/NULL);
				V_10 = L_163;
				bool L_164;
				L_164 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_10), /*hidden argument*/NULL);
				if (L_164)
				{
					goto IL_049c;
				}
			}

IL_045e:
			{
				int32_t L_165 = 1;
				V_0 = L_165;
				__this->set_U3CU3E1__state_0(L_165);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_166 = V_10;
				__this->set_U3CU3Eu__1_7(L_166);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_167 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63D4BF8D3EEE3A9C21CDBA479BCF92CB440CEECD((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_167, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_10), (U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD_m63D4BF8D3EEE3A9C21CDBA479BCF92CB440CEECD_RuntimeMethod_var);
				IL2CPP_LEAVE(0x4FC, FINALLY_04ac);
			}

IL_047f:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_168 = __this->get_U3CU3Eu__1_7();
				V_10 = L_168;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_169 = __this->get_address_of_U3CU3Eu__1_7();
				il2cpp_codegen_initobj(L_169, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_170 = (-1);
				V_0 = L_170;
				__this->set_U3CU3E1__state_0(L_170);
			}

IL_049c:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_10), /*hidden argument*/NULL);
				// State = CameraFaderState.Opaque;
				CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * L_171 = V_1;
				NullCheck(L_171);
				CameraFaderQuad_set_State_m2F80338033CB8EC442E800A40C05231485F30F51_inline(L_171, 2, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x4C2, FINALLY_04ac);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_04ac;
		}

FINALLY_04ac:
		{ // begin finally (depth: 2)
			{
				int32_t L_172 = V_0;
				if ((((int32_t)L_172) >= ((int32_t)0)))
				{
					goto IL_04c1;
				}
			}

IL_04b0:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_173 = __this->get_address_of_U3CU3E7__wrap1_5();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_173, /*hidden argument*/NULL);
			}

IL_04c1:
			{
				IL2CPP_END_FINALLY(1196)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(1196)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x4E9, IL_04e9)
			IL2CPP_JUMP_TBL(0x4FC, IL_04fc)
			IL2CPP_JUMP_TBL(0x4C2, IL_04c2)
		}

IL_04c2:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_174 = __this->get_address_of_U3CU3E7__wrap1_5();
			il2cpp_codegen_initobj(L_174, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_04e9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_04d0;
		}
		throw e;
	}

CATCH_04d0:
	{ // begin catch(System.Exception)
		V_12 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_175 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_176 = V_12;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_175, L_176, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_04fc;
	} // end catch (depth: 1)

IL_04e9:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_177 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_177, /*hidden argument*/NULL);
	}

IL_04fc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeOutAsyncU3Ed__15_MoveNext_m7C8317F5EEE918E0FF337234E51E3644047D44A6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * _thisAdjusted = reinterpret_cast<U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD *>(__this + _offset);
	U3CFadeOutAsyncU3Ed__15_MoveNext_m7C8317F5EEE918E0FF337234E51E3644047D44A6(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/<FadeOutAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutAsyncU3Ed__15_SetStateMachine_m88FC9DE444811EE440FD7786EA7A1D6212827EC0 (U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeOutAsyncU3Ed__15_SetStateMachine_m88FC9DE444811EE440FD7786EA7A1D6212827EC0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD * _thisAdjusted = reinterpret_cast<U3CFadeOutAsyncU3Ed__15_t138DDF312499FD602665C2AB69361A2E3E4A0EFD *>(__this + _offset);
	U3CFadeOutAsyncU3Ed__15_SetStateMachine_m88FC9DE444811EE440FD7786EA7A1D6212827EC0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
IL2CPP_EXTERN_C void Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshal_pinvoke(const Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2& unmarshaled, Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'Quad': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
IL2CPP_EXTERN_C void Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshal_pinvoke_back(const Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshaled_pinvoke& marshaled, Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2& unmarshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'Quad': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
IL2CPP_EXTERN_C void Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshal_pinvoke_cleanup(Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
IL2CPP_EXTERN_C void Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshal_com(const Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2& unmarshaled, Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshaled_com& marshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'Quad': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
IL2CPP_EXTERN_C void Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshal_com_back(const Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshaled_com& marshaled, Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2& unmarshaled)
{
	Exception_t* ___Renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Renderer' of type 'Quad': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Renderer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderQuad/Quad
IL2CPP_EXTERN_C void Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshal_com_cleanup(Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__48_MoveNext_m2BA331629B3626DA2CDDC4094C7D77B21502E0AD (U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m1ABA22349B46155FA5F75D284BA02A3AF93D120F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0067;
			}
		}

IL_0011:
		{
			// await DoSceneTransition(new Func<Task>[] { sceneOperation }, FadeOutTime, FadeInTime, progressIndicator);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_3 = V_1;
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_4 = (Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922*)(Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922*)SZArrayNew(Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var, (uint32_t)1);
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_5 = L_4;
			Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_6 = __this->get_sceneOperation_3();
			NullCheck(L_5);
			ArrayElementTypeCheck (L_5, L_6);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)L_6);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_7 = V_1;
			NullCheck(L_7);
			float L_8;
			L_8 = SceneTransitionService_get_FadeOutTime_mDCA81B63DEEE85A629214075DCDCFAAA20FAAF6F_inline(L_7, /*hidden argument*/NULL);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_9 = V_1;
			NullCheck(L_9);
			float L_10;
			L_10 = SceneTransitionService_get_FadeInTime_m49F448CB09628E93BF35C3923125F88C017F30D1_inline(L_9, /*hidden argument*/NULL);
			RuntimeObject* L_11 = __this->get_progressIndicator_4();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_12;
			L_12 = SceneTransitionService_DoSceneTransition_mEF1A5BA808F68672D7BCC885CE0447835C98474C(L_3, (RuntimeObject*)(RuntimeObject*)L_5, L_8, L_10, L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13;
			L_13 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_0083;
			}
		}

IL_0047:
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16 = V_2;
			__this->set_U3CU3Eu__1_5(L_16);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m1ABA22349B46155FA5F75D284BA02A3AF93D120F((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07_m1ABA22349B46155FA5F75D284BA02A3AF93D120F_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0067:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_18 = __this->get_U3CU3Eu__1_5();
			V_2 = L_18;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_19 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
		}

IL_0083:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_00a3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008c;
		}
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_23, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDoSceneTransitionU3Ed__48_MoveNext_m2BA331629B3626DA2CDDC4094C7D77B21502E0AD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * _thisAdjusted = reinterpret_cast<U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 *>(__this + _offset);
	U3CDoSceneTransitionU3Ed__48_MoveNext_m2BA331629B3626DA2CDDC4094C7D77B21502E0AD(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__48::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__48_SetStateMachine_m08D17BB58705F1D3CAC2A2A8098A92A928D5F634 (U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDoSceneTransitionU3Ed__48_SetStateMachine_m08D17BB58705F1D3CAC2A2A8098A92A928D5F634_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 * _thisAdjusted = reinterpret_cast<U3CDoSceneTransitionU3Ed__48_t78183A33B908912EEB16EE64CD1D397FB3D8FE07 *>(__this + _offset);
	U3CDoSceneTransitionU3Ed__48_SetStateMachine_m08D17BB58705F1D3CAC2A2A8098A92A928D5F634(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__49_MoveNext_mFF41379806944AE9B846200B0DE91AD179CC1A7D (U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_m2DF719DC41FBD051C24A7260444B8CD2E5B8ED42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0070;
			}
		}

IL_0011:
		{
			// await DoSceneTransition(new Func<Task>[] { sceneOp1, sceneOp2 }, FadeOutTime, FadeInTime, progressIndicator);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_3 = V_1;
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_4 = (Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922*)(Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922*)SZArrayNew(Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922_il2cpp_TypeInfo_var, (uint32_t)2);
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_5 = L_4;
			Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_6 = __this->get_sceneOp1_3();
			NullCheck(L_5);
			ArrayElementTypeCheck (L_5, L_6);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)L_6);
			Func_1U5BU5D_tC8C836685B57D98A62C1CAB8F14A1261EB3E4922* L_7 = L_5;
			Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_8 = __this->get_sceneOp2_4();
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_8);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *)L_8);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_9 = V_1;
			NullCheck(L_9);
			float L_10;
			L_10 = SceneTransitionService_get_FadeOutTime_mDCA81B63DEEE85A629214075DCDCFAAA20FAAF6F_inline(L_9, /*hidden argument*/NULL);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_11 = V_1;
			NullCheck(L_11);
			float L_12;
			L_12 = SceneTransitionService_get_FadeInTime_m49F448CB09628E93BF35C3923125F88C017F30D1_inline(L_11, /*hidden argument*/NULL);
			RuntimeObject* L_13 = __this->get_progressIndicator_5();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14;
			L_14 = SceneTransitionService_DoSceneTransition_mEF1A5BA808F68672D7BCC885CE0447835C98474C(L_3, (RuntimeObject*)(RuntimeObject*)L_7, L_10, L_12, L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15;
			L_15 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_14, /*hidden argument*/NULL);
			V_2 = L_15;
			bool L_16;
			L_16 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_16)
			{
				goto IL_008c;
			}
		}

IL_0050:
		{
			int32_t L_17 = 0;
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_18 = V_2;
			__this->set_U3CU3Eu__1_6(L_18);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_m2DF719DC41FBD051C24A7260444B8CD2E5B8ED42((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7_m2DF719DC41FBD051C24A7260444B8CD2E5B8ED42_RuntimeMethod_var);
			goto IL_00bf;
		}

IL_0070:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_20 = __this->get_U3CU3Eu__1_6();
			V_2 = L_20;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_21 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_21, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_22 = (-1);
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
		}

IL_008c:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_00ac;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0095;
		}
		throw e;
	}

CATCH_0095:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_24 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bf;
	} // end catch (depth: 1)

IL_00ac:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_25, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDoSceneTransitionU3Ed__49_MoveNext_mFF41379806944AE9B846200B0DE91AD179CC1A7D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * _thisAdjusted = reinterpret_cast<U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 *>(__this + _offset);
	U3CDoSceneTransitionU3Ed__49_MoveNext_mFF41379806944AE9B846200B0DE91AD179CC1A7D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__49_SetStateMachine_mC51B9F74BBFD8BC1B32255AADF38658EA37A9E63 (U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDoSceneTransitionU3Ed__49_SetStateMachine_mC51B9F74BBFD8BC1B32255AADF38658EA37A9E63_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 * _thisAdjusted = reinterpret_cast<U3CDoSceneTransitionU3Ed__49_t9D4ED46093E254A0E96190C3D2F98A8E5D1EF9F7 *>(__this + _offset);
	U3CDoSceneTransitionU3Ed__49_SetStateMachine_mC51B9F74BBFD8BC1B32255AADF38658EA37A9E63(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__50_MoveNext_m5C29EF8C9FC3EA485AA12D745297A3126BC85140 (U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m5B3B3D3510735BB8795C3ADD1B9CB5EFBEDA4B28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005e;
			}
		}

IL_0011:
		{
			// await DoSceneTransition(sceneOperations, FadeOutTime, FadeInTime, progressIndicator);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_3 = V_1;
			RuntimeObject* L_4 = __this->get_sceneOperations_3();
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_5 = V_1;
			NullCheck(L_5);
			float L_6;
			L_6 = SceneTransitionService_get_FadeOutTime_mDCA81B63DEEE85A629214075DCDCFAAA20FAAF6F_inline(L_5, /*hidden argument*/NULL);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_7 = V_1;
			NullCheck(L_7);
			float L_8;
			L_8 = SceneTransitionService_get_FadeInTime_m49F448CB09628E93BF35C3923125F88C017F30D1_inline(L_7, /*hidden argument*/NULL);
			RuntimeObject* L_9 = __this->get_progressIndicator_4();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_10;
			L_10 = SceneTransitionService_DoSceneTransition_mEF1A5BA808F68672D7BCC885CE0447835C98474C(L_3, L_4, L_6, L_8, L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11;
			L_11 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_10, /*hidden argument*/NULL);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_007a;
			}
		}

IL_003e:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14 = V_2;
			__this->set_U3CU3Eu__1_5(L_14);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m5B3B3D3510735BB8795C3ADD1B9CB5EFBEDA4B28((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7_m5B3B3D3510735BB8795C3ADD1B9CB5EFBEDA4B28_RuntimeMethod_var);
			goto IL_00ad;
		}

IL_005e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16 = __this->get_U3CU3Eu__1_5();
			V_2 = L_16;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_17 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_007a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_009a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ad;
	} // end catch (depth: 1)

IL_009a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_21, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDoSceneTransitionU3Ed__50_MoveNext_m5C29EF8C9FC3EA485AA12D745297A3126BC85140_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * _thisAdjusted = reinterpret_cast<U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 *>(__this + _offset);
	U3CDoSceneTransitionU3Ed__50_MoveNext_m5C29EF8C9FC3EA485AA12D745297A3126BC85140(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__50_SetStateMachine_mEEA9E138D43C51CD2BD9C577BE5E7CAE05ABE0AF (U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDoSceneTransitionU3Ed__50_SetStateMachine_mEEA9E138D43C51CD2BD9C577BE5E7CAE05ABE0AF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 * _thisAdjusted = reinterpret_cast<U3CDoSceneTransitionU3Ed__50_t1EF9F18989254EE60DEC70344DF0CE84DBEB8CD7 *>(__this + _offset);
	U3CDoSceneTransitionU3Ed__50_SetStateMachine_mEEA9E138D43C51CD2BD9C577BE5E7CAE05ABE0AF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__52_MoveNext_mCB3B13164BF1753105FB2E806519AF71ACFF9CAF (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7D3CE49DEF7BDC88D95900E58AB06872FDE59009_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD259C605C945E5BABB034B4C2221351E85AFF5F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 9> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B9_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B8_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B49_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B48_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)4))))
			{
				goto IL_0025;
			}
		}

IL_0012:
		{
			// using (DoSceneTransitionPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->get_DoSceneTransitionPerfMarker_25();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_7(L_4);
		}

IL_0025:
		{
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				switch (L_5)
				{
					case 0:
					{
						goto IL_010e;
					}
					case 1:
					{
						goto IL_0176;
					}
					case 2:
					{
						goto IL_01aa;
					}
					case 3:
					{
						goto IL_0289;
					}
					case 4:
					{
						goto IL_02f2;
					}
				}
			}

IL_0040:
			{
				// fadeOutTime = Mathf.Clamp(fadeOutTime, 0, maxFadeOutTime);
				float L_6 = __this->get_fadeOutTime_2();
				float L_7;
				L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_6, (0.0f), (30.0f), /*hidden argument*/NULL);
				__this->set_fadeOutTime_2(L_7);
				// fadeInTime = Mathf.Clamp(fadeInTime, 0, maxFadeInTime);
				float L_8 = __this->get_fadeInTime_3();
				float L_9;
				L_9 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_8, (0.0f), (30.0f), /*hidden argument*/NULL);
				__this->set_fadeInTime_3(L_9);
				// if (TransitionInProgress)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_10 = V_1;
				NullCheck(L_10);
				bool L_11;
				L_11 = SceneTransitionService_get_TransitionInProgress_mD59A09D7B95FD36F3428F03BBBB91A8BE59830C5_inline(L_10, /*hidden argument*/NULL);
				if (!L_11)
				{
					goto IL_0089;
				}
			}

IL_007e:
			{
				// throw new Exception("Attempting to do a transition while one is already in progress.");
				Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral940FB1761904743E250EFA2AF7552DF6EB59FE94)), /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoSceneTransitionU3Ed__52_MoveNext_mCB3B13164BF1753105FB2E806519AF71ACFF9CAF_RuntimeMethod_var)));
			}

IL_0089:
			{
				// TransitionInProgress = true;
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_13 = V_1;
				NullCheck(L_13);
				SceneTransitionService_set_TransitionInProgress_mDBA9DC5EFE6C8D328CD4905EAE3EC001CB6FECAC_inline(L_13, (bool)1, /*hidden argument*/NULL);
				// OnTransitionStarted?.Invoke();
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_14 = V_1;
				NullCheck(L_14);
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15;
				L_15 = SceneTransitionService_get_OnTransitionStarted_m42E106EEB2770371537627C66BD02DE809C919B8_inline(L_14, /*hidden argument*/NULL);
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = L_15;
				G_B8_0 = L_16;
				if (L_16)
				{
					G_B9_0 = L_16;
					goto IL_009c;
				}
			}

IL_0099:
			{
				goto IL_00a1;
			}

IL_009c:
			{
				NullCheck(G_B9_0);
				Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B9_0, /*hidden argument*/NULL);
			}

IL_00a1:
			{
				// if (progressIndicator == null && sceneTransitionServiceProfile.UseDefaultProgressIndicator)
				RuntimeObject* L_17 = __this->get_progressIndicator_5();
				if (L_17)
				{
					goto IL_00c8;
				}
			}

IL_00a9:
			{
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_18 = V_1;
				NullCheck(L_18);
				SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * L_19 = L_18->get_sceneTransitionServiceProfile_20();
				NullCheck(L_19);
				bool L_20;
				L_20 = SceneTransitionServiceProfile_get_UseDefaultProgressIndicator_mF7336A45DF16ACB461C9C42B2AE7361F610A2ED4_inline(L_19, /*hidden argument*/NULL);
				if (!L_20)
				{
					goto IL_00c8;
				}
			}

IL_00b6:
			{
				// CreateDefaultProgressIndicator();
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_21 = V_1;
				NullCheck(L_21);
				SceneTransitionService_CreateDefaultProgressIndicator_mB59917573AA6FA94D70BD668662921DE23D54673(L_21, /*hidden argument*/NULL);
				// progressIndicator = defaultProgressIndicator;
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_22 = V_1;
				NullCheck(L_22);
				RuntimeObject* L_23 = L_22->get_defaultProgressIndicator_22();
				__this->set_progressIndicator_5(L_23);
			}

IL_00c8:
			{
				// if (UseFadeColor)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_24 = V_1;
				NullCheck(L_24);
				bool L_25;
				L_25 = SceneTransitionService_get_UseFadeColor_mAA360ED87D8D8EAEC1D35EDBA8AF65FFAABF8E28_inline(L_24, /*hidden argument*/NULL);
				if (!L_25)
				{
					goto IL_0131;
				}
			}

IL_00d0:
			{
				// await FadeOut(fadeOutTime);
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_26 = V_1;
				float L_27 = __this->get_fadeOutTime_2();
				NullCheck(L_26);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_28;
				L_28 = SceneTransitionService_FadeOut_m30294B2042A2AF075106C3354EB227F348609AC7(L_26, L_27, /*hidden argument*/NULL);
				NullCheck(L_28);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_29;
				L_29 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_28, /*hidden argument*/NULL);
				V_3 = L_29;
				bool L_30;
				L_30 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_30)
				{
					goto IL_012a;
				}
			}

IL_00eb:
			{
				int32_t L_31 = 0;
				V_0 = L_31;
				__this->set_U3CU3E1__state_0(L_31);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_32 = V_3;
				__this->set_U3CU3Eu__1_8(L_32);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_33 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_33, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419_RuntimeMethod_var);
				IL2CPP_LEAVE(0x37F, FINALLY_032f);
			}

IL_010e:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_34 = __this->get_U3CU3Eu__1_8();
				V_3 = L_34;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_35 = __this->get_address_of_U3CU3Eu__1_8();
				il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->set_U3CU3E1__state_0(L_36);
			}

IL_012a:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			}

IL_0131:
			{
				// if (progressIndicator != null)
				RuntimeObject* L_37 = __this->get_progressIndicator_5();
				if (!L_37)
				{
					goto IL_0199;
				}
			}

IL_0139:
			{
				// await progressIndicator.OpenAsync();
				RuntimeObject* L_38 = __this->get_progressIndicator_5();
				NullCheck(L_38);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_39;
				L_39 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_38);
				NullCheck(L_39);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_40;
				L_40 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_39, /*hidden argument*/NULL);
				V_3 = L_40;
				bool L_41;
				L_41 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_41)
				{
					goto IL_0192;
				}
			}

IL_0153:
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->set_U3CU3E1__state_0(L_42);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_43 = V_3;
				__this->set_U3CU3Eu__1_8(L_43);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_44 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_44, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419_RuntimeMethod_var);
				IL2CPP_LEAVE(0x37F, FINALLY_032f);
			}

IL_0176:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_45 = __this->get_U3CU3Eu__1_8();
				V_3 = L_45;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_46 = __this->get_address_of_U3CU3Eu__1_8();
				il2cpp_codegen_initobj(L_46, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->set_U3CU3E1__state_0(L_47);
			}

IL_0192:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			}

IL_0199:
			{
				// foreach (Func<Task> sceneOperation in sceneOperations)
				RuntimeObject* L_48 = __this->get_sceneOperations_6();
				NullCheck(L_48);
				RuntimeObject* L_49;
				L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Func`1<System.Threading.Tasks.Task>>::GetEnumerator() */, IEnumerable_1_t7D3CE49DEF7BDC88D95900E58AB06872FDE59009_il2cpp_TypeInfo_var, L_48);
				__this->set_U3CU3E7__wrap2_9(L_49);
			}

IL_01aa:
			{
			}

IL_01ab:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_50 = V_0;
					if ((((int32_t)L_50) == ((int32_t)2)))
					{
						goto IL_01f3;
					}
				}

IL_01af:
				{
					goto IL_0216;
				}

IL_01b1:
				{
					// foreach (Func<Task> sceneOperation in sceneOperations)
					RuntimeObject* L_51 = __this->get_U3CU3E7__wrap2_9();
					NullCheck(L_51);
					Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_52;
					L_52 = InterfaceFuncInvoker0< Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Func`1<System.Threading.Tasks.Task>>::get_Current() */, IEnumerator_1_tD259C605C945E5BABB034B4C2221351E85AFF5F6_il2cpp_TypeInfo_var, L_51);
					// await sceneOperation();
					NullCheck(L_52);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_53;
					L_53 = Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF(L_52, /*hidden argument*/Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
					NullCheck(L_53);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_54;
					L_54 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_53, /*hidden argument*/NULL);
					V_3 = L_54;
					bool L_55;
					L_55 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
					if (L_55)
					{
						goto IL_020f;
					}
				}

IL_01d0:
				{
					int32_t L_56 = 2;
					V_0 = L_56;
					__this->set_U3CU3E1__state_0(L_56);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_57 = V_3;
					__this->set_U3CU3Eu__1_8(L_57);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_58 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_58, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419_RuntimeMethod_var);
					IL2CPP_LEAVE(0x37F, FINALLY_0225);
				}

IL_01f3:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_59 = __this->get_U3CU3Eu__1_8();
					V_3 = L_59;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_60 = __this->get_address_of_U3CU3Eu__1_8();
					il2cpp_codegen_initobj(L_60, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_61 = (-1);
					V_0 = L_61;
					__this->set_U3CU3E1__state_0(L_61);
				}

IL_020f:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				}

IL_0216:
				{
					// foreach (Func<Task> sceneOperation in sceneOperations)
					RuntimeObject* L_62 = __this->get_U3CU3E7__wrap2_9();
					NullCheck(L_62);
					bool L_63;
					L_63 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_62);
					if (L_63)
					{
						goto IL_01b1;
					}
				}

IL_0223:
				{
					IL2CPP_LEAVE(0x23D, FINALLY_0225);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0225;
			}

FINALLY_0225:
			{ // begin finally (depth: 3)
				{
					int32_t L_64 = V_0;
					if ((((int32_t)L_64) >= ((int32_t)0)))
					{
						goto IL_023c;
					}
				}

IL_0229:
				{
					RuntimeObject* L_65 = __this->get_U3CU3E7__wrap2_9();
					if (!L_65)
					{
						goto IL_023c;
					}
				}

IL_0231:
				{
					RuntimeObject* L_66 = __this->get_U3CU3E7__wrap2_9();
					NullCheck(L_66);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_66);
				}

IL_023c:
				{
					IL2CPP_END_FINALLY(549)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(549)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_END_CLEANUP(0x37F, FINALLY_032f);
				IL2CPP_JUMP_TBL(0x23D, IL_023d)
			}

IL_023d:
			{
				__this->set_U3CU3E7__wrap2_9((RuntimeObject*)NULL);
				// if (progressIndicator != null)
				RuntimeObject* L_67 = __this->get_progressIndicator_5();
				if (!L_67)
				{
					goto IL_02ac;
				}
			}

IL_024c:
			{
				// await progressIndicator.CloseAsync();
				RuntimeObject* L_68 = __this->get_progressIndicator_5();
				NullCheck(L_68);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_69;
				L_69 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_68);
				NullCheck(L_69);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_70;
				L_70 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_69, /*hidden argument*/NULL);
				V_3 = L_70;
				bool L_71;
				L_71 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_71)
				{
					goto IL_02a5;
				}
			}

IL_0266:
			{
				int32_t L_72 = 3;
				V_0 = L_72;
				__this->set_U3CU3E1__state_0(L_72);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_73 = V_3;
				__this->set_U3CU3Eu__1_8(L_73);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_74 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_74, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419_RuntimeMethod_var);
				IL2CPP_LEAVE(0x37F, FINALLY_032f);
			}

IL_0289:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_75 = __this->get_U3CU3Eu__1_8();
				V_3 = L_75;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_76 = __this->get_address_of_U3CU3Eu__1_8();
				il2cpp_codegen_initobj(L_76, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_77 = (-1);
				V_0 = L_77;
				__this->set_U3CU3E1__state_0(L_77);
			}

IL_02a5:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			}

IL_02ac:
			{
				// if (UseFadeColor)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_78 = V_1;
				NullCheck(L_78);
				bool L_79;
				L_79 = SceneTransitionService_get_UseFadeColor_mAA360ED87D8D8EAEC1D35EDBA8AF65FFAABF8E28_inline(L_78, /*hidden argument*/NULL);
				if (!L_79)
				{
					goto IL_0315;
				}
			}

IL_02b4:
			{
				// await FadeIn(fadeInTime);
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_80 = V_1;
				float L_81 = __this->get_fadeInTime_3();
				NullCheck(L_80);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_82;
				L_82 = SceneTransitionService_FadeIn_m27054E0BF676A5009D504981A64D1322CA4A34D9(L_80, L_81, /*hidden argument*/NULL);
				NullCheck(L_82);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_83;
				L_83 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_82, /*hidden argument*/NULL);
				V_3 = L_83;
				bool L_84;
				L_84 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
				if (L_84)
				{
					goto IL_030e;
				}
			}

IL_02cf:
			{
				int32_t L_85 = 4;
				V_0 = L_85;
				__this->set_U3CU3E1__state_0(L_85);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_86 = V_3;
				__this->set_U3CU3Eu__1_8(L_86);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_87 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_87, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7_mEE5DC63387831C3F88F74FBAC680B1011C22D419_RuntimeMethod_var);
				IL2CPP_LEAVE(0x37F, FINALLY_032f);
			}

IL_02f2:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_88 = __this->get_U3CU3Eu__1_8();
				V_3 = L_88;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_89 = __this->get_address_of_U3CU3Eu__1_8();
				il2cpp_codegen_initobj(L_89, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_90 = (-1);
				V_0 = L_90;
				__this->set_U3CU3E1__state_0(L_90);
			}

IL_030e:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			}

IL_0315:
			{
				// TransitionInProgress = false;
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_91 = V_1;
				NullCheck(L_91);
				SceneTransitionService_set_TransitionInProgress_mDBA9DC5EFE6C8D328CD4905EAE3EC001CB6FECAC_inline(L_91, (bool)0, /*hidden argument*/NULL);
				// OnTransitionCompleted?.Invoke();
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_92 = V_1;
				NullCheck(L_92);
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_93;
				L_93 = SceneTransitionService_get_OnTransitionCompleted_m29EB555017B7882854622EF2C9867753CE3BBE1C_inline(L_92, /*hidden argument*/NULL);
				Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_94 = L_93;
				G_B48_0 = L_94;
				if (L_94)
				{
					G_B49_0 = L_94;
					goto IL_0328;
				}
			}

IL_0325:
			{
				goto IL_032d;
			}

IL_0328:
			{
				NullCheck(G_B49_0);
				Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B49_0, /*hidden argument*/NULL);
			}

IL_032d:
			{
				// }
				IL2CPP_LEAVE(0x345, FINALLY_032f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_032f;
		}

FINALLY_032f:
		{ // begin finally (depth: 2)
			{
				int32_t L_95 = V_0;
				if ((((int32_t)L_95) >= ((int32_t)0)))
				{
					goto IL_0344;
				}
			}

IL_0333:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_96 = __this->get_address_of_U3CU3E7__wrap1_7();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_96, /*hidden argument*/NULL);
			}

IL_0344:
			{
				IL2CPP_END_FINALLY(815)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(815)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x37F, IL_037f)
			IL2CPP_JUMP_TBL(0x345, IL_0345)
		}

IL_0345:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_97 = __this->get_address_of_U3CU3E7__wrap1_7();
			il2cpp_codegen_initobj(L_97, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_036c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0353;
		}
		throw e;
	}

CATCH_0353:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_98 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_99 = V_4;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_98, L_99, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_037f;
	} // end catch (depth: 1)

IL_036c:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_100 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_100, /*hidden argument*/NULL);
	}

IL_037f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDoSceneTransitionU3Ed__52_MoveNext_mCB3B13164BF1753105FB2E806519AF71ACFF9CAF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * _thisAdjusted = reinterpret_cast<U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *>(__this + _offset);
	U3CDoSceneTransitionU3Ed__52_MoveNext_mCB3B13164BF1753105FB2E806519AF71ACFF9CAF(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<DoSceneTransition>d__52::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSceneTransitionU3Ed__52_SetStateMachine_mE54C3B6995543DA73F6A5CB7D5497B8D21388EB9 (U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDoSceneTransitionU3Ed__52_SetStateMachine_mE54C3B6995543DA73F6A5CB7D5497B8D21388EB9_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 * _thisAdjusted = reinterpret_cast<U3CDoSceneTransitionU3Ed__52_t1DD3CC1D522E10F7A0AD71235E7EBAC9FEF72FC7 *>(__this + _offset);
	U3CDoSceneTransitionU3Ed__52_SetStateMachine_mE54C3B6995543DA73F6A5CB7D5497B8D21388EB9(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__55_MoveNext_mFD5DF507B27B17DBAB6B59CC39972CD03609A988 (U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m9FE61AFAD371F84762D2CCB9A0E5B68CFB782EB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004c;
			}
		}

IL_0011:
		{
			// await FadeIn(FadeInTime);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_3 = V_1;
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_4 = V_1;
			NullCheck(L_4);
			float L_5;
			L_5 = SceneTransitionService_get_FadeInTime_m49F448CB09628E93BF35C3923125F88C017F30D1_inline(L_4, /*hidden argument*/NULL);
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = SceneTransitionService_FadeIn_m27054E0BF676A5009D504981A64D1322CA4A34D9(L_3, L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0068;
			}
		}

IL_002c:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m9FE61AFAD371F84762D2CCB9A0E5B68CFB782EB0((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2_m9FE61AFAD371F84762D2CCB9A0E5B68CFB782EB0_RuntimeMethod_var);
			goto IL_009b;
		}

IL_004c:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0068:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_0088;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_16 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009b;
	} // end catch (depth: 1)

IL_0088:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, /*hidden argument*/NULL);
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeInU3Ed__55_MoveNext_mFD5DF507B27B17DBAB6B59CC39972CD03609A988_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * _thisAdjusted = reinterpret_cast<U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 *>(__this + _offset);
	U3CFadeInU3Ed__55_MoveNext_mFD5DF507B27B17DBAB6B59CC39972CD03609A988(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__55::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__55_SetStateMachine_m42966E007BDBAE94AB51210F84DE249F264B0C3D (U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeInU3Ed__55_SetStateMachine_m42966E007BDBAE94AB51210F84DE249F264B0C3D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 * _thisAdjusted = reinterpret_cast<U3CFadeInU3Ed__55_t65AB3C0DF4EDE5DB508BC4AEC56EC6A353F0DEA2 *>(__this + _offset);
	U3CFadeInU3Ed__55_SetStateMachine_m42966E007BDBAE94AB51210F84DE249F264B0C3D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__59_MoveNext_mE27AFBC92B147C4FC67F7DD59903E5B1B508A914 (U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m7EEAAE9CBF0661D1078040B71154F2B3EAEBCECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_mDCD8A0270B772974746AEFCDAA6CE9658F9F76C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9A37D35927E80BED3DDCD4E0A2C8E638956590F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)2))))
			{
				goto IL_0025;
			}
		}

IL_0012:
		{
			// using (FadeInPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->get_FadeInPerfMarker_27();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4(L_4);
		}

IL_0025:
		{
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				switch (L_5)
				{
					case 0:
					{
						goto IL_00a2;
					}
					case 1:
					{
						goto IL_0138;
					}
					case 2:
					{
						goto IL_019e;
					}
				}
			}

IL_0038:
			{
				// CreateCameraFader();
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_6 = V_1;
				NullCheck(L_6);
				SceneTransitionService_CreateCameraFader_mE349B65791F79E9F089A616E90E553F5033E1E12(L_6, /*hidden argument*/NULL);
				// switch (cameraFader.State)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8 = L_7->get_cameraFader_23();
				NullCheck(L_8);
				int32_t L_9;
				L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::get_State() */, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var, L_8);
				V_3 = L_9;
				int32_t L_10 = V_3;
				switch (L_10)
				{
					case 0:
					{
						goto IL_00e8;
					}
					case 1:
					{
						goto IL_00d9;
					}
					case 2:
					{
						goto IL_015c;
					}
					case 3:
					{
						goto IL_00c6;
					}
				}
			}

IL_0060:
			{
				goto IL_015c;
			}

IL_0065:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_11;
				L_11 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_5 = L_11;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_12;
				L_12 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
				V_4 = L_12;
				bool L_13;
				L_13 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
				if (L_13)
				{
					goto IL_00bf;
				}
			}

IL_007e:
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->set_U3CU3E1__state_0(L_14);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_15 = V_4;
				__this->set_U3CU3Eu__1_5(L_15);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_mDCD8A0270B772974746AEFCDAA6CE9658F9F76C2((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_mDCD8A0270B772974746AEFCDAA6CE9658F9F76C2_RuntimeMethod_var);
				IL2CPP_LEAVE(0x214, FINALLY_01c4);
			}

IL_00a2:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_17 = __this->get_U3CU3Eu__1_5();
				V_4 = L_17;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_18 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_18, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
			}

IL_00bf:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			}

IL_00c6:
			{
				// while (cameraFader.State == CameraFaderState.FadingOut)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_20 = V_1;
				NullCheck(L_20);
				RuntimeObject* L_21 = L_20->get_cameraFader_23();
				NullCheck(L_21);
				int32_t L_22;
				L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::get_State() */, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var, L_21);
				if ((((int32_t)L_22) == ((int32_t)3)))
				{
					goto IL_0065;
				}
			}

IL_00d4:
			{
				// break;
				goto IL_015c;
			}

IL_00d9:
			{
				// Debug.LogWarning("Already fading in. Taking no action.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralB9A37D35927E80BED3DDCD4E0A2C8E638956590F, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x201, FINALLY_01c4);
			}

IL_00e8:
			{
				// await cameraFader.FadeOutAsync(0, FadeColor, GatherFadeTargetCameras());
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_23 = V_1;
				NullCheck(L_23);
				RuntimeObject* L_24 = L_23->get_cameraFader_23();
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_25 = V_1;
				NullCheck(L_25);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_26;
				L_26 = SceneTransitionService_get_FadeColor_mC4DC26D7D0525FF2BD8D04ACC1EC22CD86A83CF2_inline(L_25, /*hidden argument*/NULL);
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_27 = V_1;
				NullCheck(L_27);
				List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_28;
				L_28 = SceneTransitionService_GatherFadeTargetCameras_mFD79836B0AF86D79B7AFD5229F146A53BD0C26CF(L_27, /*hidden argument*/NULL);
				NullCheck(L_24);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_29;
				L_29 = InterfaceFuncInvoker3< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, float, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , RuntimeObject* >::Invoke(2 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::FadeOutAsync(System.Single,UnityEngine.Color,System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>) */, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var, L_24, (0.0f), L_26, L_28);
				NullCheck(L_29);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_30;
				L_30 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_29, /*hidden argument*/NULL);
				V_6 = L_30;
				bool L_31;
				L_31 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
				if (L_31)
				{
					goto IL_0155;
				}
			}

IL_0114:
			{
				int32_t L_32 = 1;
				V_0 = L_32;
				__this->set_U3CU3E1__state_0(L_32);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_33 = V_6;
				__this->set_U3CU3Eu__2_6(L_33);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_34 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m7EEAAE9CBF0661D1078040B71154F2B3EAEBCECA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_34, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), (U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m7EEAAE9CBF0661D1078040B71154F2B3EAEBCECA_RuntimeMethod_var);
				IL2CPP_LEAVE(0x214, FINALLY_01c4);
			}

IL_0138:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_35 = __this->get_U3CU3Eu__2_6();
				V_6 = L_35;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_36 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_36, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_37 = (-1);
				V_0 = L_37;
				__this->set_U3CU3E1__state_0(L_37);
			}

IL_0155:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
			}

IL_015c:
			{
				// await cameraFader.FadeInAsync(fadeInTime);
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_38 = V_1;
				NullCheck(L_38);
				RuntimeObject* L_39 = L_38->get_cameraFader_23();
				float L_40 = __this->get_fadeInTime_3();
				NullCheck(L_39);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_41;
				L_41 = InterfaceFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, float >::Invoke(3 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::FadeInAsync(System.Single) */, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var, L_39, L_40);
				NullCheck(L_41);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_42;
				L_42 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_41, /*hidden argument*/NULL);
				V_6 = L_42;
				bool L_43;
				L_43 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
				if (L_43)
				{
					goto IL_01bb;
				}
			}

IL_017d:
			{
				int32_t L_44 = 2;
				V_0 = L_44;
				__this->set_U3CU3E1__state_0(L_44);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_45 = V_6;
				__this->set_U3CU3Eu__2_6(L_45);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_46 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m7EEAAE9CBF0661D1078040B71154F2B3EAEBCECA((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_46, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), (U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14_m7EEAAE9CBF0661D1078040B71154F2B3EAEBCECA_RuntimeMethod_var);
				IL2CPP_LEAVE(0x214, FINALLY_01c4);
			}

IL_019e:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_47 = __this->get_U3CU3Eu__2_6();
				V_6 = L_47;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_48 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_48, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->set_U3CU3E1__state_0(L_49);
			}

IL_01bb:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x1DA, FINALLY_01c4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01c4;
		}

FINALLY_01c4:
		{ // begin finally (depth: 2)
			{
				int32_t L_50 = V_0;
				if ((((int32_t)L_50) >= ((int32_t)0)))
				{
					goto IL_01d9;
				}
			}

IL_01c8:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_51 = __this->get_address_of_U3CU3E7__wrap1_4();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_51, /*hidden argument*/NULL);
			}

IL_01d9:
			{
				IL2CPP_END_FINALLY(452)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(452)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x214, IL_0214)
			IL2CPP_JUMP_TBL(0x201, IL_0201)
			IL2CPP_JUMP_TBL(0x1DA, IL_01da)
		}

IL_01da:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_52 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_52, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0201;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e8;
		}
		throw e;
	}

CATCH_01e8:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_53 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_54 = V_7;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_53, L_54, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0214;
	} // end catch (depth: 1)

IL_0201:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_55, /*hidden argument*/NULL);
	}

IL_0214:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeInU3Ed__59_MoveNext_mE27AFBC92B147C4FC67F7DD59903E5B1B508A914_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * _thisAdjusted = reinterpret_cast<U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 *>(__this + _offset);
	U3CFadeInU3Ed__59_MoveNext_mE27AFBC92B147C4FC67F7DD59903E5B1B508A914(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeIn>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__59_SetStateMachine_m375ACFF39DF5D01AE3A71C6266F83A1A2F9AB23F (U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeInU3Ed__59_SetStateMachine_m375ACFF39DF5D01AE3A71C6266F83A1A2F9AB23F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 * _thisAdjusted = reinterpret_cast<U3CFadeInU3Ed__59_tF35F6D956AC4B375CE3873D9F99521AA16DF7D14 *>(__this + _offset);
	U3CFadeInU3Ed__59_SetStateMachine_m375ACFF39DF5D01AE3A71C6266F83A1A2F9AB23F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__54_MoveNext_m7A85160979DB1AA3793936834B23FE2A595027C7 (U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mCDF45005C4B36C3B1F46163D92AB223FF3AE0D42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004c;
			}
		}

IL_0011:
		{
			// await FadeOut(FadeOutTime);
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_3 = V_1;
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_4 = V_1;
			NullCheck(L_4);
			float L_5;
			L_5 = SceneTransitionService_get_FadeOutTime_mDCA81B63DEEE85A629214075DCDCFAAA20FAAF6F_inline(L_4, /*hidden argument*/NULL);
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
			L_6 = SceneTransitionService_FadeOut_m30294B2042A2AF075106C3354EB227F348609AC7(L_3, L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0068;
			}
		}

IL_002c:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mCDF45005C4B36C3B1F46163D92AB223FF3AE0D42((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584_mCDF45005C4B36C3B1F46163D92AB223FF3AE0D42_RuntimeMethod_var);
			goto IL_009b;
		}

IL_004c:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0068:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_0088;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_16 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009b;
	} // end catch (depth: 1)

IL_0088:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, /*hidden argument*/NULL);
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeOutU3Ed__54_MoveNext_m7A85160979DB1AA3793936834B23FE2A595027C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * _thisAdjusted = reinterpret_cast<U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 *>(__this + _offset);
	U3CFadeOutU3Ed__54_MoveNext_m7A85160979DB1AA3793936834B23FE2A595027C7(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__54::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__54_SetStateMachine_mC10E2ED358EB0D299821A940B07613C48D28FD5D (U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeOutU3Ed__54_SetStateMachine_mC10E2ED358EB0D299821A940B07613C48D28FD5D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 * _thisAdjusted = reinterpret_cast<U3CFadeOutU3Ed__54_t05F0EB11007B39A878479219648B122CE13FE584 *>(__this + _offset);
	U3CFadeOutU3Ed__54_SetStateMachine_mC10E2ED358EB0D299821A940B07613C48D28FD5D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__57_MoveNext_m778C0AA0A00AD19FD86DD9897069DB349DB1CB73 (U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m58302774903C7E146380D2FFCB465DC2C01496A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_mBFA4E478398672D97B501AA418F2AF2BD331BFE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52C2722348A269EDA43E9964574EB943B39E2844);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C57382736310A2BDC33273D5EF4504D36B34FA7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_0025;
			}
		}

IL_0012:
		{
			// using (FadeOutPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3 = ((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->get_FadeOutPerfMarker_26();
			V_2 = L_3;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_4;
			L_4 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_4(L_4);
		}

IL_0025:
		{
		}

IL_0026:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_00b5;
				}
			}

IL_002c:
			{
				int32_t L_6 = V_0;
				if ((((int32_t)L_6) == ((int32_t)1)))
				{
					goto IL_0135;
				}
			}

IL_0033:
			{
				// CreateCameraFader();
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_7 = V_1;
				NullCheck(L_7);
				SceneTransitionService_CreateCameraFader_mE349B65791F79E9F089A616E90E553F5033E1E12(L_7, /*hidden argument*/NULL);
				// switch (cameraFader.State)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_8 = V_1;
				NullCheck(L_8);
				RuntimeObject* L_9 = L_8->get_cameraFader_23();
				NullCheck(L_9);
				int32_t L_10;
				L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::get_State() */, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var, L_9);
				V_3 = L_10;
				int32_t L_11 = V_3;
				switch (L_11)
				{
					case 0:
					{
						goto IL_00e7;
					}
					case 1:
					{
						goto IL_00d9;
					}
					case 2:
					{
						goto IL_006c;
					}
					case 3:
					{
						goto IL_0060;
					}
				}
			}

IL_005b:
			{
				goto IL_00e7;
			}

IL_0060:
			{
				// Debug.LogWarning("Already fading out. Taking no action.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral6C57382736310A2BDC33273D5EF4504D36B34FA7, /*hidden argument*/NULL);
				// break;
				goto IL_00e7;
			}

IL_006c:
			{
				// Debug.LogWarning("Already faded out. Taking no action.");
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral52C2722348A269EDA43E9964574EB943B39E2844, /*hidden argument*/NULL);
				// break;
				goto IL_00e7;
			}

IL_0078:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_12;
				L_12 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_5 = L_12;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_13;
				L_13 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
				V_4 = L_13;
				bool L_14;
				L_14 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
				if (L_14)
				{
					goto IL_00d2;
				}
			}

IL_0091:
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->set_U3CU3E1__state_0(L_15);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_16 = V_4;
				__this->set_U3CU3Eu__1_5(L_16);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_mBFA4E478398672D97B501AA418F2AF2BD331BFE2((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_mBFA4E478398672D97B501AA418F2AF2BD331BFE2_RuntimeMethod_var);
				IL2CPP_LEAVE(0x1AB, FINALLY_015b);
			}

IL_00b5:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_18 = __this->get_U3CU3Eu__1_5();
				V_4 = L_18;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_19 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_19, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->set_U3CU3E1__state_0(L_20);
			}

IL_00d2:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			}

IL_00d9:
			{
				// while (cameraFader.State == CameraFaderState.FadingIn)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_21 = V_1;
				NullCheck(L_21);
				RuntimeObject* L_22 = L_21->get_cameraFader_23();
				NullCheck(L_22);
				int32_t L_23;
				L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.CameraFaderState Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::get_State() */, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var, L_22);
				if ((((int32_t)L_23) == ((int32_t)1)))
				{
					goto IL_0078;
				}
			}

IL_00e7:
			{
				// await cameraFader.FadeOutAsync(fadeOutTime, FadeColor, GatherFadeTargetCameras());
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_24 = V_1;
				NullCheck(L_24);
				RuntimeObject* L_25 = L_24->get_cameraFader_23();
				float L_26 = __this->get_fadeOutTime_3();
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_27 = V_1;
				NullCheck(L_27);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
				L_28 = SceneTransitionService_get_FadeColor_mC4DC26D7D0525FF2BD8D04ACC1EC22CD86A83CF2_inline(L_27, /*hidden argument*/NULL);
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_29 = V_1;
				NullCheck(L_29);
				List_1_t653022B4EDCE73F282430E1A396635798D309409 * L_30;
				L_30 = SceneTransitionService_GatherFadeTargetCameras_mFD79836B0AF86D79B7AFD5229F146A53BD0C26CF(L_29, /*hidden argument*/NULL);
				NullCheck(L_25);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_31;
				L_31 = InterfaceFuncInvoker3< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, float, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , RuntimeObject* >::Invoke(2 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.ICameraFader::FadeOutAsync(System.Single,UnityEngine.Color,System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>) */, ICameraFader_t0CE4EDB83295C36B339FEF692636A5201692A2EE_il2cpp_TypeInfo_var, L_25, L_26, L_28, L_30);
				NullCheck(L_31);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_32;
				L_32 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_31, /*hidden argument*/NULL);
				V_6 = L_32;
				bool L_33;
				L_33 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
				if (L_33)
				{
					goto IL_0152;
				}
			}

IL_0114:
			{
				int32_t L_34 = 1;
				V_0 = L_34;
				__this->set_U3CU3E1__state_0(L_34);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_35 = V_6;
				__this->set_U3CU3Eu__2_6(L_35);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_36 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m58302774903C7E146380D2FFCB465DC2C01496A2((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_36, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), (U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23_m58302774903C7E146380D2FFCB465DC2C01496A2_RuntimeMethod_var);
				IL2CPP_LEAVE(0x1AB, FINALLY_015b);
			}

IL_0135:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_37 = __this->get_U3CU3Eu__2_6();
				V_6 = L_37;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_38 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_38, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_39 = (-1);
				V_0 = L_39;
				__this->set_U3CU3E1__state_0(L_39);
			}

IL_0152:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x171, FINALLY_015b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_015b;
		}

FINALLY_015b:
		{ // begin finally (depth: 2)
			{
				int32_t L_40 = V_0;
				if ((((int32_t)L_40) >= ((int32_t)0)))
				{
					goto IL_0170;
				}
			}

IL_015f:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_41 = __this->get_address_of_U3CU3E7__wrap1_4();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_41, /*hidden argument*/NULL);
			}

IL_0170:
			{
				IL2CPP_END_FINALLY(347)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(347)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x1AB, IL_01ab)
			IL2CPP_JUMP_TBL(0x171, IL_0171)
		}

IL_0171:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_42 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_42, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0198;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_017f;
		}
		throw e;
	}

CATCH_017f:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_44 = V_7;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_43, L_44, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ab;
	} // end catch (depth: 1)

IL_0198:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_45, /*hidden argument*/NULL);
	}

IL_01ab:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeOutU3Ed__57_MoveNext_m778C0AA0A00AD19FD86DD9897069DB349DB1CB73_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * _thisAdjusted = reinterpret_cast<U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 *>(__this + _offset);
	U3CFadeOutU3Ed__57_MoveNext_m778C0AA0A00AD19FD86DD9897069DB349DB1CB73(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<FadeOut>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__57_SetStateMachine_m9DBD0B12CD651FE787836AFC0761C02C0521F793 (U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFadeOutU3Ed__57_SetStateMachine_m9DBD0B12CD651FE787836AFC0761C02C0521F793_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 * _thisAdjusted = reinterpret_cast<U3CFadeOutU3Ed__57_t8ACD2B877999E2E8E0768AB7213AB8A7B0EDCA23 *>(__this + _offset);
	U3CFadeOutU3Ed__57_SetStateMachine_m9DBD0B12CD651FE787836AFC0761C02C0521F793(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideProgressIndicatorU3Ed__63_MoveNext_mBFF327B69B95D6E2F647E0BE77DC5D117D0C29FC (U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m3AE4D96EE7FC6300E0DFD04D8F78860A23A6E1E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m400194C5C80E95F960A3D3BF720B26BCB72F13F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DC2BD27F33C54867CE2E685D22F354136FB41AD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * V_1 = NULL;
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 13> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)3))))
			{
				goto IL_0049;
			}
		}

IL_0012:
		{
			// if (TransitionInProgress)
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4;
			L_4 = SceneTransitionService_get_TransitionInProgress_mD59A09D7B95FD36F3428F03BBBB91A8BE59830C5_inline(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0029;
			}
		}

IL_001a:
		{
			// Debug.LogWarning("A scene transition is already in progress. This would interrupt that transition. Taking no action.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral9DC2BD27F33C54867CE2E685D22F354136FB41AD, /*hidden argument*/NULL);
			// return;
			goto IL_0278;
		}

IL_0029:
		{
			// if (defaultProgressIndicator == null)
			SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_defaultProgressIndicator_22();
			if (L_6)
			{
				goto IL_0036;
			}
		}

IL_0031:
		{
			// return;
			goto IL_0278;
		}

IL_0036:
		{
			// using (HideProgressIndicatorPerfMarker.Auto())
			IL2CPP_RUNTIME_CLASS_INIT(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var);
			ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_7 = ((SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_StaticFields*)il2cpp_codegen_static_fields_for(SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96_il2cpp_TypeInfo_var))->get_HideProgressIndicatorPerfMarker_29();
			V_2 = L_7;
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_8;
			L_8 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_2), /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3(L_8);
		}

IL_0049:
		{
		}

IL_004a:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_9 = V_0;
				switch (L_9)
				{
					case 0:
					{
						goto IL_00c9;
					}
					case 1:
					{
						goto IL_013f;
					}
					case 2:
					{
						goto IL_01a5;
					}
					case 3:
					{
						goto IL_0213;
					}
				}
			}

IL_0060:
			{
				// switch (defaultProgressIndicator.State)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_10 = V_1;
				NullCheck(L_10);
				RuntimeObject* L_11 = L_10->get_defaultProgressIndicator_22();
				NullCheck(L_11);
				int32_t L_12;
				L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_11);
				V_3 = L_12;
				int32_t L_13 = V_3;
				switch (L_13)
				{
					case 0:
					{
						goto IL_0087;
					}
					case 1:
					{
						goto IL_01c9;
					}
					case 2:
					{
						goto IL_0100;
					}
					case 3:
					{
						goto IL_00ed;
					}
				}
			}

IL_0082:
			{
				goto IL_0239;
			}

IL_0087:
			{
				// return;
				IL2CPP_LEAVE(0x278, FINALLY_023b);
			}

IL_008c:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_14;
				L_14 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_5 = L_14;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_15;
				L_15 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
				V_4 = L_15;
				bool L_16;
				L_16 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
				if (L_16)
				{
					goto IL_00e6;
				}
			}

IL_00a5:
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->set_U3CU3E1__state_0(L_17);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_18 = V_4;
				__this->set_U3CU3Eu__1_4(L_18);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m400194C5C80E95F960A3D3BF720B26BCB72F13F6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m400194C5C80E95F960A3D3BF720B26BCB72F13F6_RuntimeMethod_var);
				IL2CPP_LEAVE(0x28B, FINALLY_023b);
			}

IL_00c9:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_20 = __this->get_U3CU3Eu__1_4();
				V_4 = L_20;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_21 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_21, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->set_U3CU3E1__state_0(L_22);
			}

IL_00e6:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			}

IL_00ed:
			{
				// while (defaultProgressIndicator.State == ProgressIndicatorState.Closing)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_23 = V_1;
				NullCheck(L_23);
				RuntimeObject* L_24 = L_23->get_defaultProgressIndicator_22();
				NullCheck(L_24);
				int32_t L_25;
				L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_24);
				if ((((int32_t)L_25) == ((int32_t)3)))
				{
					goto IL_008c;
				}
			}

IL_00fb:
			{
				// return;
				IL2CPP_LEAVE(0x278, FINALLY_023b);
			}

IL_0100:
			{
				// await defaultProgressIndicator.CloseAsync();
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_26 = V_1;
				NullCheck(L_26);
				RuntimeObject* L_27 = L_26->get_defaultProgressIndicator_22();
				NullCheck(L_27);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_28;
				L_28 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_27);
				NullCheck(L_28);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_29;
				L_29 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_28, /*hidden argument*/NULL);
				V_6 = L_29;
				bool L_30;
				L_30 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
				if (L_30)
				{
					goto IL_015c;
				}
			}

IL_011b:
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->set_U3CU3E1__state_0(L_31);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_32 = V_6;
				__this->set_U3CU3Eu__2_5(L_32);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_33 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m3AE4D96EE7FC6300E0DFD04D8F78860A23A6E1E5((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_33, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), (U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m3AE4D96EE7FC6300E0DFD04D8F78860A23A6E1E5_RuntimeMethod_var);
				IL2CPP_LEAVE(0x28B, FINALLY_023b);
			}

IL_013f:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_34 = __this->get_U3CU3Eu__2_5();
				V_6 = L_34;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_35 = __this->get_address_of_U3CU3Eu__2_5();
				il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->set_U3CU3E1__state_0(L_36);
			}

IL_015c:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x278, FINALLY_023b);
			}

IL_0168:
			{
				// await Task.Yield();
				IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
				YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_37;
				L_37 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
				V_5 = L_37;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_38;
				L_38 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
				V_4 = L_38;
				bool L_39;
				L_39 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
				if (L_39)
				{
					goto IL_01c2;
				}
			}

IL_0181:
			{
				int32_t L_40 = 2;
				V_0 = L_40;
				__this->set_U3CU3E1__state_0(L_40);
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_41 = V_4;
				__this->set_U3CU3Eu__1_4(L_41);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_42 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m400194C5C80E95F960A3D3BF720B26BCB72F13F6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_42, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m400194C5C80E95F960A3D3BF720B26BCB72F13F6_RuntimeMethod_var);
				IL2CPP_LEAVE(0x28B, FINALLY_023b);
			}

IL_01a5:
			{
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_43 = __this->get_U3CU3Eu__1_4();
				V_4 = L_43;
				YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_44 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_44, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
				int32_t L_45 = (-1);
				V_0 = L_45;
				__this->set_U3CU3E1__state_0(L_45);
			}

IL_01c2:
			{
				YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			}

IL_01c9:
			{
				// while (defaultProgressIndicator.State == ProgressIndicatorState.Opening)
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_46 = V_1;
				NullCheck(L_46);
				RuntimeObject* L_47 = L_46->get_defaultProgressIndicator_22();
				NullCheck(L_47);
				int32_t L_48;
				L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_47);
				if ((((int32_t)L_48) == ((int32_t)1)))
				{
					goto IL_0168;
				}
			}

IL_01d7:
			{
				// await defaultProgressIndicator.CloseAsync();
				SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * L_49 = V_1;
				NullCheck(L_49);
				RuntimeObject* L_50 = L_49->get_defaultProgressIndicator_22();
				NullCheck(L_50);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_51;
				L_51 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_50);
				NullCheck(L_51);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_52;
				L_52 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_51, /*hidden argument*/NULL);
				V_6 = L_52;
				bool L_53;
				L_53 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
				if (L_53)
				{
					goto IL_0230;
				}
			}

IL_01f2:
			{
				int32_t L_54 = 3;
				V_0 = L_54;
				__this->set_U3CU3E1__state_0(L_54);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_55 = V_6;
				__this->set_U3CU3Eu__2_5(L_55);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_56 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m3AE4D96EE7FC6300E0DFD04D8F78860A23A6E1E5((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_56, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), (U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8_m3AE4D96EE7FC6300E0DFD04D8F78860A23A6E1E5_RuntimeMethod_var);
				IL2CPP_LEAVE(0x28B, FINALLY_023b);
			}

IL_0213:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_57 = __this->get_U3CU3Eu__2_5();
				V_6 = L_57;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_58 = __this->get_address_of_U3CU3Eu__2_5();
				il2cpp_codegen_initobj(L_58, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_59 = (-1);
				V_0 = L_59;
				__this->set_U3CU3E1__state_0(L_59);
			}

IL_0230:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_6), /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x278, FINALLY_023b);
			}

IL_0239:
			{
				// }
				IL2CPP_LEAVE(0x251, FINALLY_023b);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_023b;
		}

FINALLY_023b:
		{ // begin finally (depth: 2)
			{
				int32_t L_60 = V_0;
				if ((((int32_t)L_60) >= ((int32_t)0)))
				{
					goto IL_0250;
				}
			}

IL_023f:
			{
				AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_61 = __this->get_address_of_U3CU3E7__wrap1_3();
				AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)L_61, /*hidden argument*/NULL);
			}

IL_0250:
			{
				IL2CPP_END_FINALLY(571)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(571)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x278, IL_0278)
			IL2CPP_JUMP_TBL(0x28B, IL_028b)
			IL2CPP_JUMP_TBL(0x251, IL_0251)
		}

IL_0251:
		{
			AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * L_62 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_62, sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D ));
			goto IL_0278;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025f;
		}
		throw e;
	}

CATCH_025f:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_63 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_64 = V_7;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_63, L_64, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028b;
	} // end catch (depth: 1)

IL_0278:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_65 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_65, /*hidden argument*/NULL);
	}

IL_028b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHideProgressIndicatorU3Ed__63_MoveNext_mBFF327B69B95D6E2F647E0BE77DC5D117D0C29FC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * _thisAdjusted = reinterpret_cast<U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *>(__this + _offset);
	U3CHideProgressIndicatorU3Ed__63_MoveNext_mBFF327B69B95D6E2F647E0BE77DC5D117D0C29FC(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.SceneTransitions.SceneTransitionService/<HideProgressIndicator>d__63::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideProgressIndicatorU3Ed__63_SetStateMachine_m27FAE878FB203F573B794CF1B2B82895BC518323 (U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHideProgressIndicatorU3Ed__63_SetStateMachine_m27FAE878FB203F573B794CF1B2B82895BC518323_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 * _thisAdjusted = reinterpret_cast<U3CHideProgressIndicatorU3Ed__63_tDC75B9D9C7BB2CC33265AE7570CB9AEDFC9054A8 *>(__this + _offset);
	U3CHideProgressIndicatorU3Ed__63_SetStateMachine_m27FAE878FB203F573B794CF1B2B82895BC518323(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * SceneTransitionServiceProfile_get_CameraFaderMaterial_mA264B126539A6102131128157DCD449969DE79E0_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public Material CameraFaderMaterial => cameraFaderMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_cameraFaderMaterial_13();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 * MixedRealityToolkit_get_Instance_mD70A03BB0F9306F94C4847A0EC672C0B0F2BB3EE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityToolkit Instance => activeInstance;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627 * L_0 = ((MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkit_t60B2EC862F9B460964F7FA8747F6603FB0718627_il2cpp_TypeInfo_var))->get_activeInstance_13();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  SceneInfo_get_Empty_mCEB9889D9803A3DF1D19A10FD7C35D5063105562_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SceneInfo Empty { get { return empty; } }
		IL2CPP_RUNTIME_CLASS_INIT(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_il2cpp_TypeInfo_var);
		SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F  L_0 = ((SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_StaticFields*)il2cpp_codegen_static_fields_for(SceneInfo_tABC2F5FE976B834E23005A63C27EDEC5EB13086F_il2cpp_TypeInfo_var))->get_empty_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_mFE834D9716EBD99F3A6C2E967254C050D737D79D_inline (BaseExtensionService_t8C5EAFF8BEA1058FF0050DD7FD2916F7EDDB223A * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseFadeColor_mBFA35F1421F6379A9A0CE416E0F4A08C36BE7207_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor => useFadeColor;
		bool L_0 = __this->get_useFadeColor_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_UseFadeColor_m357AEBD1778B3C8CD6F06CB28C2B1AE17C07725D_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUseFadeColorU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionServiceProfile_get_FadeColor_mC82240C1E9464ED8422F0F7E441829596DED06CD_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public Color FadeColor => fadeColor;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_fadeColor_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeColor_m982ADC6D6A318F8C03BEC88C548B714C4B3EE366_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// public Color FadeColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_U3CFadeColorU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeInTime_mD15E5263ABC41832FE8423348D56947CFB13453D_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public float FadeInTime => fadeInTime;
		float L_0 = __this->get_fadeInTime_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeInTime_mC2A31A1246C2B2527A95DD69B3B19CE39A91E7BD_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FadeInTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFadeInTimeU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionServiceProfile_get_FadeOutTime_m942D58D06B7AE4E988DBAF52B0435FFF1E32DCC7_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime => fadeOutTime;
		float L_0 = __this->get_fadeOutTime_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeOutTime_m4F83A5687AFFF42ADB2A776E4588C86BF3688C26_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CFadeOutTimeU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneTransitionServiceProfile_get_FadeTargets_m4E74C2340AA208E02477C74E853A72E4ECA4C94C_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets => fadeTargets;
		int32_t L_0 = __this->get_fadeTargets_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_FadeTargets_m331C63893539A2239DC2F514083F6C70405B7E95_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFadeTargetsU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneTransitionService_get_FadeTargets_m1666298FE0BB1FA5A485177B6A6B746E732896F8_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderTargets FadeTargets { get; set; }
		int32_t L_0 = __this->get_U3CFadeTargetsU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SceneTransitionServiceProfile_get_DefaultProgressIndicatorPrefab_mD115DCA2DD2259424B12DABF8E948618793756C9_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public GameObject DefaultProgressIndicatorPrefab => defaultProgressIndicatorPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_defaultProgressIndicatorPrefab_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * SceneTransitionServiceProfile_get_CameraFaderType_mCB146807D62B5D2876981119914E801CD9D829B7_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public SystemType CameraFaderType => cameraFaderType;
		SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * L_0 = __this->get_cameraFaderType_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m2445AA154BE01049B725B11E92E5CB349BBE2472_inline (SystemType_t95D0BC4A45C656DB1032D27329F30650B176203A * __this, const RuntimeMethod* method)
{
	{
		// get => type;
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraFaderQuad_get_State_m942D7EBC1AD102C0401D947E0466306FDB94209D_inline (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, const RuntimeMethod* method)
{
	{
		// public CameraFaderState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraFaderQuad_set_State_m2F80338033CB8EC442E800A40C05231485F30F51_inline (CameraFaderQuad_t59644C9A20E89534B95A1A0CE19367AC30D8211B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public CameraFaderState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeOutTime_mDCA81B63DEEE85A629214075DCDCFAAA20FAAF6F_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeOutTime { get; set; }
		float L_0 = __this->get_U3CFadeOutTimeU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float SceneTransitionService_get_FadeInTime_m49F448CB09628E93BF35C3923125F88C017F30D1_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public float FadeInTime { get; set; }
		float L_0 = __this->get_U3CFadeInTimeU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionService_get_TransitionInProgress_mD59A09D7B95FD36F3428F03BBBB91A8BE59830C5_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public bool TransitionInProgress { get; set; }
		bool L_0 = __this->get_U3CTransitionInProgressU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SceneTransitionService_set_TransitionInProgress_mDBA9DC5EFE6C8D328CD4905EAE3EC001CB6FECAC_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TransitionInProgress { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CTransitionInProgressU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionStarted_m42E106EEB2770371537627C66BD02DE809C919B8_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionStarted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTransitionStartedU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionServiceProfile_get_UseDefaultProgressIndicator_mF7336A45DF16ACB461C9C42B2AE7361F610A2ED4_inline (SceneTransitionServiceProfile_t9095085E9D18F44A1C8B107AB91CF065747CCF6C * __this, const RuntimeMethod* method)
{
	{
		// public bool UseDefaultProgressIndicator => useDefaultProgressIndicator;
		bool L_0 = __this->get_useDefaultProgressIndicator_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneTransitionService_get_UseFadeColor_mAA360ED87D8D8EAEC1D35EDBA8AF65FFAABF8E28_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseFadeColor { get; set; }
		bool L_0 = __this->get_U3CUseFadeColorU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * SceneTransitionService_get_OnTransitionCompleted_m29EB555017B7882854622EF2C9867753CE3BBE1C_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTransitionCompleted { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTransitionCompletedU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SceneTransitionService_get_FadeColor_mC4DC26D7D0525FF2BD8D04ACC1EC22CD86A83CF2_inline (SceneTransitionService_t51AFEEEC5B59172A9F86C01A46FB2A4A4053FF96 * __this, const RuntimeMethod* method)
{
	{
		// public Color FadeColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_U3CFadeColorU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  Enumerator_get_Current_m61F8E0FDFAC08B99E7BFAA84E0F3DF870A386244_gshared_inline (Enumerator_tDB4D78AEE2AFE68691FFD679772D4DC25ED749D5 * __this, const RuntimeMethod* method)
{
	{
		Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2  L_0 = (Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2 )__this->get_currentValue_3();
		return (Quad_t6680ADBC56D1CDAEF22E9F9FE3C902878B8FB9E2 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
