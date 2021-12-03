#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Func`2<UnityEngine.Resolution,System.Int32>
struct Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>
struct IAsyncOperation_1_tD12D8ED3FD09605FD1A7BC101A5E87C803BFF117;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Windows.Storage.StorageFile>
struct Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46;
// System.Threading.Tasks.Task`1<Windows.Storage.StorageFolder>
struct Task_1_t7764097DF60F07A13ED66A8F554D27F99DB5F25C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture[]
struct DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture
struct DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Input.EyeTrackingTarget
struct EyeTrackingTarget_tC638599E70EEE5CDC5E0A3EAEE31E158C221C0FA;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider
struct IMixedRealityEyeSaccadeProvider_t0AE1F36BD72F35DE08BED017ECD32CC14B40D956;
// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator
struct IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF;
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct IRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
// Windows.Storage.IStorageFileStatics2
struct IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
// Windows.Storage.IStorageFolderStatics2
struct IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.InputPointerVisualizer
struct InputPointerVisualizer_tD8E56ABAAEBE550A00D7061260FF97FB4CBB107A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase
struct PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo
struct ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// Windows.Storage.StorageFile
struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF;
// Windows.Storage.StorageFolder
struct StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Type
struct Type_t;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback
struct UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/ExclusiveSynchronizationContext
struct ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9;
// MyPhotoCapture/<>c
struct U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78
struct U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TargetGroupIterator/TargetGroupEventHandler
struct TargetGroupEventHandler_tADA9DB167181E88AB2921A6D5E3F9EC0700A0D9A;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44
struct U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42
struct U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43
struct U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C739F2EBF0A6D79E33E75C4206FE5C901DD1ABC;
IL2CPP_EXTERN_C String_t* _stringLiteral29AD5A3F08771FA8BF05FD9F1B89DC9A669DA799;
IL2CPP_EXTERN_C String_t* _stringLiteral628007651272EB1016499869891794E1C06E1F19;
IL2CPP_EXTERN_C String_t* _stringLiteral8D69B906D45DB4D22636DAB2CB07DCE4C8F97F52;
IL2CPP_EXTERN_C String_t* _stringLiteral9AE3B5F4C0F79FED89F97615079E77D3D7B4303C;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF_m09270548B6580199EFD9E06B86179A850115AB92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B_m1BE6A5E787A9402F6356D758BD1F432BB2B0E4EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_mA99C00B6BB0886A783692C3975C43D2629AE1AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_m2B2D88714FF0D6BE5937E0A7098D44E0BF13AB09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D_TisU3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E_mEEAAA5E39CF4806E3252F05481BAEA779F530A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A_mDED6E975F5A79315E320E3416893F9999A1B559D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F_m08651AC34D72943A5202CDF8FD23CE85106E081C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_m2DF4353E1A21001701552DF5C7D8444B87F15CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA_mA8876BD4B59C5659EF7FC678E0B6490C647D2B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_mDB40437247E5C7364361AC7CB8D36D83D1B63CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6BDB542648A790323BB08E42C49A35F41A2597A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m835105DEBBBEF6790FBC514E43553969894E5976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m15BA772D121DD3C64FD1871A698B1E43CAD64E1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mE4F41CE31D3E252959644A6BABE45D01407ECE7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m941E3E5867D824F4ADEC5C12568144998E4E7211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE47B5307B43FF938B2621B09EADA700921D70958_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAddToCounterU3Ed__44_System_Collections_IEnumerator_Reset_mF63C30885BB8BF2D12A452E0152B216737529A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPopulateHeatmapU3Ed__42_System_Collections_IEnumerator_Reset_m7222AD3D3A78DFF63D494B95D7A11907B60AE9F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CRunSyncU3Eb__0U3Ed_MoveNext_m4D4B2A2F50874C4C173492BC496BD868518AD19E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateStatusU3Ed__43_System_Collections_IEnumerator_Reset_m0AD9A16C4686B50EC28E28CFFF3BF5F2D0D3E5A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CZoomAndStopU3Ed__78_System_Collections_IEnumerator_Reset_m0C9556653FCC60711B49BCB31FCB46DAE13556DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisIRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E_m7E056F4914642D21A3B0793D6567D722662E31D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA_m9383D8502CB13161D8B8BB0F5F1FA2748F717C83_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E;
struct IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8;
struct IStorageFolder_t582A78BB94B49B6AD89A1B8CE57B5B1B9832F9F1;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct NOVTABLE IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7373A22163C85062B4E7CB4799145DA42CDB58C8(IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mE284B394E3CF92BFA421B0C4F259545E384E89AB(IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mE9148F0A4AE311A33EFF7F958FC377E0AB7ADFCA(IRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct NOVTABLE IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m108CBA2BE6D19F6A961970FF1AC3DE4761942818(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9773816D15B923B84BCE4CB70D52BBB55D61421B(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8071D5CC72DC722A092D03B8725B40398F216758(IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>
struct NOVTABLE IAsyncOperation_1_tD12D8ED3FD09605FD1A7BC101A5E87C803BFF117 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m93433A71B4570B4B49FF69F26777C9AB6CDE35A4(IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mD93A9F8BB02A67C932CA3A54A52ED321F50879EA(IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2B763B7FC44E078032142B92A9A07898FE5DDB66(IStorageFolder_t582A78BB94B49B6AD89A1B8CE57B5B1B9832F9F1** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct NOVTABLE IRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.Storage.IStorageFileStatics
struct NOVTABLE IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_GetFileFromPathAsync_mA5DD9BB3BEE88251EA4F76F7D065EA8AA97842F0(Il2CppHString ___path0, IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped0_GetFileFromApplicationUriAsync_mA130F9405BF6DFAFE3A7A5655D0E448B565AAC25() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped1_CreateStreamedFileAsync_mC210197BD102173EEBF26FBC1B487806933E2487() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped2_ReplaceWithStreamedFileAsync_mC3906DC246F9F645E7AEE5B1B35817A006FA5A8D() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped3_CreateStreamedFileFromUriAsync_m5A19ECE1A7FC0A0519E0593D8A5CAAC590909285() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped4_ReplaceWithStreamedFileFromUriAsync_mD500AAFE3DE80D11B598BAAAB9FA704A5219C558() = 0;
};
// Windows.Storage.IStorageFileStatics2
struct NOVTABLE IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics2_U24__Stripped0_GetFileFromPathForUserAsync_m5A8E30130D34379E1839986B2C9B36B50A4A3A88() = 0;
};
// Windows.Storage.IStorageFolderStatics
struct NOVTABLE IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics_U24__Stripped0_GetFolderFromPathAsync_m23EFE828CA0A0A608D1001D6DA413353FA1A2E6F() = 0;
};
// Windows.Storage.IStorageFolderStatics2
struct NOVTABLE IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics2_U24__Stripped0_GetFolderFromPathForUserAsync_m4652AB072776181F1FE707A64521DE3877EE2C28() = 0;
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


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735  : public RuntimeObject
{
public:
	// System.Func`1<System.Threading.Tasks.Task> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0::task
	Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * ___task_0;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/ExclusiveSynchronizationContext Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0::synch
	ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9 * ___synch_1;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735, ___task_0)); }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * get_task_0() const { return ___task_0; }
	inline Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 ** get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___task_0), (void*)value);
	}

	inline static int32_t get_offset_of_synch_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735, ___synch_1)); }
	inline ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9 * get_synch_1() const { return ___synch_1; }
	inline ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9 ** get_address_of_synch_1() { return &___synch_1; }
	inline void set_synch_1(ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9 * value)
	{
		___synch_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synch_1), (void*)value);
	}
};


// MyPhotoCapture/<>c
struct U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146_StaticFields
{
public:
	// MyPhotoCapture/<>c MyPhotoCapture/<>c::<>9
	U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Resolution,System.Int32> MyPhotoCapture/<>c::<>9__8_0
	Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * ___U3CU3E9__8_0_1;
	// System.Func`2<UnityEngine.Resolution,System.Int32> MyPhotoCapture/<>c::<>9__10_0
	Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * ___U3CU3E9__10_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146_StaticFields, ___U3CU3E9__10_0_2)); }
	inline Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * get_U3CU3E9__10_0_2() const { return ___U3CU3E9__10_0_2; }
	inline Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 ** get_address_of_U3CU3E9__10_0_2() { return &___U3CU3E9__10_0_2; }
	inline void set_U3CU3E9__10_0_2(Func_2_t4B545306240B3BDEFEA30C08A7D8623B196B5894 * value)
	{
		___U3CU3E9__10_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78
struct U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::<>4__this
	PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * ___U3CU3E4__this_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::zoomIn
	bool ___zoomIn_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46, ___U3CU3E4__this_2)); }
	inline PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_zoomIn_3() { return static_cast<int32_t>(offsetof(U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46, ___zoomIn_3)); }
	inline bool get_zoomIn_3() const { return ___zoomIn_3; }
	inline bool* get_address_of_zoomIn_3() { return &___zoomIn_3; }
	inline void set_zoomIn_3(bool value)
	{
		___zoomIn_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44
struct U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44::time
	float ___time_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42
struct U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::<>4__this
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::<maxTargetingDistInMeters>5__2
	float ___U3CmaxTargetingDistInMetersU3E5__2_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::<i>5__3
	int32_t ___U3CiU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD, ___U3CU3E4__this_2)); }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmaxTargetingDistInMetersU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD, ___U3CmaxTargetingDistInMetersU3E5__2_3)); }
	inline float get_U3CmaxTargetingDistInMetersU3E5__2_3() const { return ___U3CmaxTargetingDistInMetersU3E5__2_3; }
	inline float* get_address_of_U3CmaxTargetingDistInMetersU3E5__2_3() { return &___U3CmaxTargetingDistInMetersU3E5__2_3; }
	inline void set_U3CmaxTargetingDistInMetersU3E5__2_3(float value)
	{
		___U3CmaxTargetingDistInMetersU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD, ___U3CiU3E5__3_4)); }
	inline int32_t get_U3CiU3E5__3_4() const { return ___U3CiU3E5__3_4; }
	inline int32_t* get_address_of_U3CiU3E5__3_4() { return &___U3CiU3E5__3_4; }
	inline void set_U3CiU3E5__3_4(int32_t value)
	{
		___U3CiU3E5__3_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43
struct U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::<>4__this
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::updateFrequency
	float ___updateFrequency_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14, ___U3CU3E4__this_2)); }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_updateFrequency_3() { return static_cast<int32_t>(offsetof(U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14, ___updateFrequency_3)); }
	inline float get_updateFrequency_3() const { return ___updateFrequency_3; }
	inline float* get_address_of_updateFrequency_3() { return &___updateFrequency_3; }
	inline void set_updateFrequency_3(float value)
	{
		___updateFrequency_3 = value;
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


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D, ___m_task_0)); }
	inline Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>
struct TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531, ___m_task_0)); }
	inline Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFolder>
struct TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t7764097DF60F07A13ED66A8F554D27F99DB5F25C * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D, ___m_task_0)); }
	inline Task_1_t7764097DF60F07A13ED66A8F554D27F99DB5F25C * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t7764097DF60F07A13ED66A8F554D27F99DB5F25C ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t7764097DF60F07A13ED66A8F554D27F99DB5F25C * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// UnityEngine.Resolution
struct Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
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


// Windows.Storage.StorageFile
struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF  : public Il2CppComObject
{
public:

public:
};

struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFileStatics2
	IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
	// Cached pointer to Windows.Storage.IStorageFileStatics
	IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFile"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* get_____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314()
	{
		IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* returnValue = ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* get_____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0()
	{
		IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* returnValue = ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
			}
		}
		return returnValue;
	}
};


// Windows.Storage.StorageFolder
struct StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA  : public Il2CppComObject
{
public:

public:
};

struct StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFolderStatics
	IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F* ____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
	// Cached pointer to Windows.Storage.IStorageFolderStatics2
	IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF* ____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFolder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F* get_____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F()
	{
		IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F* returnValue = ____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF* get_____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF()
	{
		IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF* returnValue = ____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
			}
		}
		return returnValue;
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

// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
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

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t5EDD2AF69A2693CD60CD846C35B0729DF0AFF9BE 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t5EDD2AF69A2693CD60CD846C35B0729DF0AFF9BE, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.Threading.SynchronizationContextProperties
struct SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A, ___value___2)); }
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


// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C  : public RuntimeObject
{
public:
	// System.String System.Globalization.TextInfo::m_listSeparator
	String_t* ___m_listSeparator_0;
	// System.Boolean System.Globalization.TextInfo::m_isReadOnly
	bool ___m_isReadOnly_1;
	// System.String System.Globalization.TextInfo::m_cultureName
	String_t* ___m_cultureName_2;
	// System.Globalization.CultureData System.Globalization.TextInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_3;
	// System.String System.Globalization.TextInfo::m_textInfoName
	String_t* ___m_textInfoName_4;
	// System.Nullable`1<System.Boolean> System.Globalization.TextInfo::m_IsAsciiCasingSameAsInvariant
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_IsAsciiCasingSameAsInvariant_5;
	// System.String System.Globalization.TextInfo::customCultureName
	String_t* ___customCultureName_7;
	// System.Int32 System.Globalization.TextInfo::m_nDataItem
	int32_t ___m_nDataItem_8;
	// System.Boolean System.Globalization.TextInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Int32 System.Globalization.TextInfo::m_win32LangID
	int32_t ___m_win32LangID_10;

public:
	inline static int32_t get_offset_of_m_listSeparator_0() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___m_listSeparator_0)); }
	inline String_t* get_m_listSeparator_0() const { return ___m_listSeparator_0; }
	inline String_t** get_address_of_m_listSeparator_0() { return &___m_listSeparator_0; }
	inline void set_m_listSeparator_0(String_t* value)
	{
		___m_listSeparator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_listSeparator_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_1() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___m_isReadOnly_1)); }
	inline bool get_m_isReadOnly_1() const { return ___m_isReadOnly_1; }
	inline bool* get_address_of_m_isReadOnly_1() { return &___m_isReadOnly_1; }
	inline void set_m_isReadOnly_1(bool value)
	{
		___m_isReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_m_cultureName_2() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___m_cultureName_2)); }
	inline String_t* get_m_cultureName_2() const { return ___m_cultureName_2; }
	inline String_t** get_address_of_m_cultureName_2() { return &___m_cultureName_2; }
	inline void set_m_cultureName_2(String_t* value)
	{
		___m_cultureName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_3() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___m_cultureData_3)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_3() const { return ___m_cultureData_3; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_3() { return &___m_cultureData_3; }
	inline void set_m_cultureData_3(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_textInfoName_4() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___m_textInfoName_4)); }
	inline String_t* get_m_textInfoName_4() const { return ___m_textInfoName_4; }
	inline String_t** get_address_of_m_textInfoName_4() { return &___m_textInfoName_4; }
	inline void set_m_textInfoName_4(String_t* value)
	{
		___m_textInfoName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfoName_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsAsciiCasingSameAsInvariant_5() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___m_IsAsciiCasingSameAsInvariant_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_IsAsciiCasingSameAsInvariant_5() const { return ___m_IsAsciiCasingSameAsInvariant_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_IsAsciiCasingSameAsInvariant_5() { return &___m_IsAsciiCasingSameAsInvariant_5; }
	inline void set_m_IsAsciiCasingSameAsInvariant_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_IsAsciiCasingSameAsInvariant_5 = value;
	}

	inline static int32_t get_offset_of_customCultureName_7() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___customCultureName_7)); }
	inline String_t* get_customCultureName_7() const { return ___customCultureName_7; }
	inline String_t** get_address_of_customCultureName_7() { return &___customCultureName_7; }
	inline void set_customCultureName_7(String_t* value)
	{
		___customCultureName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customCultureName_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_nDataItem_8() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___m_nDataItem_8)); }
	inline int32_t get_m_nDataItem_8() const { return ___m_nDataItem_8; }
	inline int32_t* get_address_of_m_nDataItem_8() { return &___m_nDataItem_8; }
	inline void set_m_nDataItem_8(int32_t value)
	{
		___m_nDataItem_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_m_win32LangID_10() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C, ___m_win32LangID_10)); }
	inline int32_t get_m_win32LangID_10() const { return ___m_win32LangID_10; }
	inline int32_t* get_address_of_m_win32LangID_10() { return &___m_win32LangID_10; }
	inline void set_m_win32LangID_10(int32_t value)
	{
		___m_win32LangID_10 = value;
	}
};

struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C_StaticFields
{
public:
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.TextInfo::s_Invariant
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___s_Invariant_6;

public:
	inline static int32_t get_offset_of_s_Invariant_6() { return static_cast<int32_t>(offsetof(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C_StaticFields, ___s_Invariant_6)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_s_Invariant_6() const { return ___s_Invariant_6; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_s_Invariant_6() { return &___s_Invariant_6; }
	inline void set_s_Invariant_6(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___s_Invariant_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Invariant_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.OnLoadStartScene/LoadOptions
struct LoadOptions_t0E00380B3415EBB24EE6B67E34840757B36957E3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.OnLoadStartScene/LoadOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadOptions_t0E00380B3415EBB24EE6B67E34840757B36957E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Targeting.OnLookAtShowHoverFeedback/HoverTransitionType
struct HoverTransitionType_tC30B4B0464111FC96783CC506CB8773832B7CABF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Targeting.OnLookAtShowHoverFeedback/HoverTransitionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HoverTransitionType_tC30B4B0464111FC96783CC506CB8773832B7CABF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<UnityEngine.Ray>
struct Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 
{
public:
	// T System.Nullable`1::value
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963, ___value_0)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_value_0() const { return ___value_0; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_40)); }
	inline bool get_m_result_40() const { return ___m_result_40; }
	inline bool* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(bool value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
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

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
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

// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14
struct U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14::indicator
	RuntimeObject* ___indicator_2;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14::<>4__this
	ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_indicator_2() { return static_cast<int32_t>(offsetof(U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F, ___indicator_2)); }
	inline RuntimeObject* get_indicator_2() const { return ___indicator_2; }
	inline RuntimeObject** get_address_of_indicator_2() { return &___indicator_2; }
	inline void set_indicator_2(RuntimeObject* value)
	{
		___indicator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indicator_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F, ___U3CU3E4__this_3)); }
	inline ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17
struct U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::indicator
	RuntimeObject* ___indicator_2;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::<>4__this
	ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * ___U3CU3E4__this_3;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::<timeStarted>5__2
	float ___U3CtimeStartedU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::<>u__2
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_indicator_2() { return static_cast<int32_t>(offsetof(U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D, ___indicator_2)); }
	inline RuntimeObject* get_indicator_2() const { return ___indicator_2; }
	inline RuntimeObject** get_address_of_indicator_2() { return &___indicator_2; }
	inline void set_indicator_2(RuntimeObject* value)
	{
		___indicator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indicator_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D, ___U3CU3E4__this_3)); }
	inline ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeStartedU3E5__2_4() { return static_cast<int32_t>(offsetof(U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D, ___U3CtimeStartedU3E5__2_4)); }
	inline float get_U3CtimeStartedU3E5__2_4() const { return ___U3CtimeStartedU3E5__2_4; }
	inline float* get_address_of_U3CtimeStartedU3E5__2_4() { return &___U3CtimeStartedU3E5__2_4; }
	inline void set_U3CtimeStartedU3E5__2_4(float value)
	{
		___U3CtimeStartedU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D, ___U3CU3Eu__2_6)); }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  value)
	{
		___U3CU3Eu__2_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21
struct U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21::<>4__this
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21::<>u__1
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A, ___U3CU3E4__this_2)); }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14
struct U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::<>4__this
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::dir
	String_t* ___dir_3;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::filename
	String_t* ___filename_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFolder> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::<>u__1
	TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::<>u__2
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086, ___U3CU3E4__this_2)); }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_dir_3() { return static_cast<int32_t>(offsetof(U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086, ___dir_3)); }
	inline String_t* get_dir_3() const { return ___dir_3; }
	inline String_t** get_address_of_dir_3() { return &___dir_3; }
	inline void set_dir_3(String_t* value)
	{
		___dir_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dir_3), (void*)value);
	}

	inline static int32_t get_offset_of_filename_4() { return static_cast<int32_t>(offsetof(U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086, ___filename_4)); }
	inline String_t* get_filename_4() const { return ___filename_4; }
	inline String_t** get_address_of_filename_4() { return &___filename_4; }
	inline void set_filename_4(String_t* value)
	{
		___filename_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12
struct U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12::<>4__this
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12::<>u__1
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B, ___U3CU3E4__this_2)); }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13
struct U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13::<>4__this
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13::<>u__1
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF, ___U3CU3E4__this_2)); }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15
struct U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// Windows.Storage.StorageFile Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15::logfile
	StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * ___logfile_2;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15::<>4__this
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15::<>u__1
	TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_logfile_2() { return static_cast<int32_t>(offsetof(U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E, ___logfile_2)); }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * get_logfile_2() const { return ___logfile_2; }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF ** get_address_of_logfile_2() { return &___logfile_2; }
	inline void set_logfile_2(StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * value)
	{
		___logfile_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logfile_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E, ___U3CU3E4__this_3)); }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d
struct U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d::<>4__this
	U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/ExclusiveSynchronizationContext
struct ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9  : public SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/ExclusiveSynchronizationContext::done
	bool ___done_6;
	// System.Exception Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/ExclusiveSynchronizationContext::<InnerException>k__BackingField
	Exception_t * ___U3CInnerExceptionU3Ek__BackingField_7;
	// System.Threading.AutoResetEvent Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/ExclusiveSynchronizationContext::workItemsWaiting
	AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * ___workItemsWaiting_8;
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/ExclusiveSynchronizationContext::items
	Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * ___items_9;

public:
	inline static int32_t get_offset_of_done_6() { return static_cast<int32_t>(offsetof(ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9, ___done_6)); }
	inline bool get_done_6() const { return ___done_6; }
	inline bool* get_address_of_done_6() { return &___done_6; }
	inline void set_done_6(bool value)
	{
		___done_6 = value;
	}

	inline static int32_t get_offset_of_U3CInnerExceptionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9, ___U3CInnerExceptionU3Ek__BackingField_7)); }
	inline Exception_t * get_U3CInnerExceptionU3Ek__BackingField_7() const { return ___U3CInnerExceptionU3Ek__BackingField_7; }
	inline Exception_t ** get_address_of_U3CInnerExceptionU3Ek__BackingField_7() { return &___U3CInnerExceptionU3Ek__BackingField_7; }
	inline void set_U3CInnerExceptionU3Ek__BackingField_7(Exception_t * value)
	{
		___U3CInnerExceptionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInnerExceptionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_workItemsWaiting_8() { return static_cast<int32_t>(offsetof(ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9, ___workItemsWaiting_8)); }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * get_workItemsWaiting_8() const { return ___workItemsWaiting_8; }
	inline AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D ** get_address_of_workItemsWaiting_8() { return &___workItemsWaiting_8; }
	inline void set_workItemsWaiting_8(AutoResetEvent_t3B012223F0DE760BF0D282C5F7B9084C6D3AF53D * value)
	{
		___workItemsWaiting_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workItemsWaiting_8), (void*)value);
	}

	inline static int32_t get_offset_of_items_9() { return static_cast<int32_t>(offsetof(ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9, ___items_9)); }
	inline Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * get_items_9() const { return ___items_9; }
	inline Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B ** get_address_of_items_9() { return &___items_9; }
	inline void set_items_9(Queue_1_tD74A8CFECEA29D0B24E5BE4009A62A2A668C748B * value)
	{
		___items_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TargetGroupIterator/TargetGroupEventHandler
struct TargetGroupEventHandler_tADA9DB167181E88AB2921A6D5E3F9EC0700A0D9A  : public MulticastDelegate_t
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


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture
struct DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::HeatmapLookUpTable
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___HeatmapLookUpTable_4;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::drawBrushSize
	float ___drawBrushSize_5;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::drawIntensity
	float ___drawIntensity_6;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::minThreshDeltaHeatMap
	float ___minThreshDeltaHeatMap_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::UseLiveInputStream
	bool ___UseLiveInputStream_8;
	// UnityEngine.Texture2D Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::myDrawTex
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___myDrawTex_9;
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::myRenderer
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___myRenderer_10;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::HeatmapOverlayMaterialTemplate
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___HeatmapOverlayMaterialTemplate_11;
	// Microsoft.MixedReality.Toolkit.Input.EyeTrackingTarget Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::eyeTarget
	EyeTrackingTarget_tC638599E70EEE5CDC5E0A3EAEE31E158C221C0FA * ___eyeTarget_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::neverDrawnOn
	bool ___neverDrawnOn_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::prevPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___prevPos_14;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::dynamicRadius
	float ___dynamicRadius_15;

public:
	inline static int32_t get_offset_of_HeatmapLookUpTable_4() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___HeatmapLookUpTable_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_HeatmapLookUpTable_4() const { return ___HeatmapLookUpTable_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_HeatmapLookUpTable_4() { return &___HeatmapLookUpTable_4; }
	inline void set_HeatmapLookUpTable_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___HeatmapLookUpTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeatmapLookUpTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_drawBrushSize_5() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___drawBrushSize_5)); }
	inline float get_drawBrushSize_5() const { return ___drawBrushSize_5; }
	inline float* get_address_of_drawBrushSize_5() { return &___drawBrushSize_5; }
	inline void set_drawBrushSize_5(float value)
	{
		___drawBrushSize_5 = value;
	}

	inline static int32_t get_offset_of_drawIntensity_6() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___drawIntensity_6)); }
	inline float get_drawIntensity_6() const { return ___drawIntensity_6; }
	inline float* get_address_of_drawIntensity_6() { return &___drawIntensity_6; }
	inline void set_drawIntensity_6(float value)
	{
		___drawIntensity_6 = value;
	}

	inline static int32_t get_offset_of_minThreshDeltaHeatMap_7() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___minThreshDeltaHeatMap_7)); }
	inline float get_minThreshDeltaHeatMap_7() const { return ___minThreshDeltaHeatMap_7; }
	inline float* get_address_of_minThreshDeltaHeatMap_7() { return &___minThreshDeltaHeatMap_7; }
	inline void set_minThreshDeltaHeatMap_7(float value)
	{
		___minThreshDeltaHeatMap_7 = value;
	}

	inline static int32_t get_offset_of_UseLiveInputStream_8() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___UseLiveInputStream_8)); }
	inline bool get_UseLiveInputStream_8() const { return ___UseLiveInputStream_8; }
	inline bool* get_address_of_UseLiveInputStream_8() { return &___UseLiveInputStream_8; }
	inline void set_UseLiveInputStream_8(bool value)
	{
		___UseLiveInputStream_8 = value;
	}

	inline static int32_t get_offset_of_myDrawTex_9() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___myDrawTex_9)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_myDrawTex_9() const { return ___myDrawTex_9; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_myDrawTex_9() { return &___myDrawTex_9; }
	inline void set_myDrawTex_9(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___myDrawTex_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myDrawTex_9), (void*)value);
	}

	inline static int32_t get_offset_of_myRenderer_10() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___myRenderer_10)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_myRenderer_10() const { return ___myRenderer_10; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_myRenderer_10() { return &___myRenderer_10; }
	inline void set_myRenderer_10(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___myRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRenderer_10), (void*)value);
	}

	inline static int32_t get_offset_of_HeatmapOverlayMaterialTemplate_11() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___HeatmapOverlayMaterialTemplate_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_HeatmapOverlayMaterialTemplate_11() const { return ___HeatmapOverlayMaterialTemplate_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_HeatmapOverlayMaterialTemplate_11() { return &___HeatmapOverlayMaterialTemplate_11; }
	inline void set_HeatmapOverlayMaterialTemplate_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___HeatmapOverlayMaterialTemplate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeatmapOverlayMaterialTemplate_11), (void*)value);
	}

	inline static int32_t get_offset_of_eyeTarget_12() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___eyeTarget_12)); }
	inline EyeTrackingTarget_tC638599E70EEE5CDC5E0A3EAEE31E158C221C0FA * get_eyeTarget_12() const { return ___eyeTarget_12; }
	inline EyeTrackingTarget_tC638599E70EEE5CDC5E0A3EAEE31E158C221C0FA ** get_address_of_eyeTarget_12() { return &___eyeTarget_12; }
	inline void set_eyeTarget_12(EyeTrackingTarget_tC638599E70EEE5CDC5E0A3EAEE31E158C221C0FA * value)
	{
		___eyeTarget_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eyeTarget_12), (void*)value);
	}

	inline static int32_t get_offset_of_neverDrawnOn_13() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___neverDrawnOn_13)); }
	inline bool get_neverDrawnOn_13() const { return ___neverDrawnOn_13; }
	inline bool* get_address_of_neverDrawnOn_13() { return &___neverDrawnOn_13; }
	inline void set_neverDrawnOn_13(bool value)
	{
		___neverDrawnOn_13 = value;
	}

	inline static int32_t get_offset_of_prevPos_14() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___prevPos_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_prevPos_14() const { return ___prevPos_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_prevPos_14() { return &___prevPos_14; }
	inline void set_prevPos_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___prevPos_14 = value;
	}

	inline static int32_t get_offset_of_dynamicRadius_15() { return static_cast<int32_t>(offsetof(DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57, ___dynamicRadius_15)); }
	inline float get_dynamicRadius_15() const { return ___dynamicRadius_15; }
	inline float* get_address_of_dynamicRadius_15() { return &___dynamicRadius_15; }
	inline void set_dynamicRadius_15(float value)
	{
		___dynamicRadius_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase
struct PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::autoGazePanIsActive
	bool ___autoGazePanIsActive_4;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::panSpeedLeftRight
	float ___panSpeedLeftRight_5;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::panSpeedUpDown
	float ___panSpeedUpDown_6;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::minDistFromCenterForAutoPan
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___minDistFromCenterForAutoPan_7;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::ZoomAcceleration
	float ___ZoomAcceleration_8;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::ZoomSpeedMax
	float ___ZoomSpeedMax_9;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::ZoomMinScale
	float ___ZoomMinScale_10;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::ZoomMaxScale
	float ___ZoomMaxScale_11;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::customColliderSizeOnLookAt
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___customColliderSizeOnLookAt_12;
	// System.Nullable`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::origColliderSize
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___origColliderSize_13;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::timeInSecondsToZoom
	float ___timeInSecondsToZoom_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::useSkimProof
	bool ___useSkimProof_15;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::skimproof_UpdateSpeedFromUser
	float ___skimproof_UpdateSpeedFromUser_16;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::cursorPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPos_17;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::scale
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scale_18;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offset_19;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::offsetRate_Zoom
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offsetRate_Zoom_20;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::offsetRate_Pan
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offsetRate_Pan_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::limitPanning
	bool ___limitPanning_22;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::skimproof_normFixator
	float ___skimproof_normFixator_23;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::skimproof_UpdateSpeed
	float ___skimproof_UpdateSpeed_24;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::myCollider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___myCollider_25;
	// Microsoft.MixedReality.Toolkit.Input.EyeTrackingTarget Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::myEyeTarget
	EyeTrackingTarget_tC638599E70EEE5CDC5E0A3EAEE31E158C221C0FA * ___myEyeTarget_26;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::zoomSpeed
	float ___zoomSpeed_27;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::zoomDir
	float ___zoomDir_28;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::dynaZoomInvert
	int32_t ___dynaZoomInvert_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::wasLookedAtBefore
	bool ___wasLookedAtBefore_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::isNavigating
	bool ___isNavigating_31;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::navPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___navPos_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::isFocused
	bool ___isFocused_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::isZooming
	bool ___isZooming_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::ZoomGestureEnabledOnStartup
	bool ___ZoomGestureEnabledOnStartup_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::handZoomEnabled
	bool ___handZoomEnabled_36;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::originalRatio
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originalRatio_37;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::originalPivot
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originalPivot_38;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::originalScale
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originalScale_39;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::originalOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originalOffset_40;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::eyeSaccadeProvider
	RuntimeObject* ___eyeSaccadeProvider_41;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::zoomUsingHandsActive
	bool ___zoomUsingHandsActive_42;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::initialPalmPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPalmPos_43;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::handUsedToZoom
	uint8_t ___handUsedToZoom_44;

public:
	inline static int32_t get_offset_of_autoGazePanIsActive_4() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___autoGazePanIsActive_4)); }
	inline bool get_autoGazePanIsActive_4() const { return ___autoGazePanIsActive_4; }
	inline bool* get_address_of_autoGazePanIsActive_4() { return &___autoGazePanIsActive_4; }
	inline void set_autoGazePanIsActive_4(bool value)
	{
		___autoGazePanIsActive_4 = value;
	}

	inline static int32_t get_offset_of_panSpeedLeftRight_5() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___panSpeedLeftRight_5)); }
	inline float get_panSpeedLeftRight_5() const { return ___panSpeedLeftRight_5; }
	inline float* get_address_of_panSpeedLeftRight_5() { return &___panSpeedLeftRight_5; }
	inline void set_panSpeedLeftRight_5(float value)
	{
		___panSpeedLeftRight_5 = value;
	}

	inline static int32_t get_offset_of_panSpeedUpDown_6() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___panSpeedUpDown_6)); }
	inline float get_panSpeedUpDown_6() const { return ___panSpeedUpDown_6; }
	inline float* get_address_of_panSpeedUpDown_6() { return &___panSpeedUpDown_6; }
	inline void set_panSpeedUpDown_6(float value)
	{
		___panSpeedUpDown_6 = value;
	}

	inline static int32_t get_offset_of_minDistFromCenterForAutoPan_7() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___minDistFromCenterForAutoPan_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_minDistFromCenterForAutoPan_7() const { return ___minDistFromCenterForAutoPan_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_minDistFromCenterForAutoPan_7() { return &___minDistFromCenterForAutoPan_7; }
	inline void set_minDistFromCenterForAutoPan_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___minDistFromCenterForAutoPan_7 = value;
	}

	inline static int32_t get_offset_of_ZoomAcceleration_8() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___ZoomAcceleration_8)); }
	inline float get_ZoomAcceleration_8() const { return ___ZoomAcceleration_8; }
	inline float* get_address_of_ZoomAcceleration_8() { return &___ZoomAcceleration_8; }
	inline void set_ZoomAcceleration_8(float value)
	{
		___ZoomAcceleration_8 = value;
	}

	inline static int32_t get_offset_of_ZoomSpeedMax_9() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___ZoomSpeedMax_9)); }
	inline float get_ZoomSpeedMax_9() const { return ___ZoomSpeedMax_9; }
	inline float* get_address_of_ZoomSpeedMax_9() { return &___ZoomSpeedMax_9; }
	inline void set_ZoomSpeedMax_9(float value)
	{
		___ZoomSpeedMax_9 = value;
	}

	inline static int32_t get_offset_of_ZoomMinScale_10() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___ZoomMinScale_10)); }
	inline float get_ZoomMinScale_10() const { return ___ZoomMinScale_10; }
	inline float* get_address_of_ZoomMinScale_10() { return &___ZoomMinScale_10; }
	inline void set_ZoomMinScale_10(float value)
	{
		___ZoomMinScale_10 = value;
	}

	inline static int32_t get_offset_of_ZoomMaxScale_11() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___ZoomMaxScale_11)); }
	inline float get_ZoomMaxScale_11() const { return ___ZoomMaxScale_11; }
	inline float* get_address_of_ZoomMaxScale_11() { return &___ZoomMaxScale_11; }
	inline void set_ZoomMaxScale_11(float value)
	{
		___ZoomMaxScale_11 = value;
	}

	inline static int32_t get_offset_of_customColliderSizeOnLookAt_12() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___customColliderSizeOnLookAt_12)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_customColliderSizeOnLookAt_12() const { return ___customColliderSizeOnLookAt_12; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_customColliderSizeOnLookAt_12() { return &___customColliderSizeOnLookAt_12; }
	inline void set_customColliderSizeOnLookAt_12(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___customColliderSizeOnLookAt_12 = value;
	}

	inline static int32_t get_offset_of_origColliderSize_13() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___origColliderSize_13)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_origColliderSize_13() const { return ___origColliderSize_13; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_origColliderSize_13() { return &___origColliderSize_13; }
	inline void set_origColliderSize_13(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___origColliderSize_13 = value;
	}

	inline static int32_t get_offset_of_timeInSecondsToZoom_14() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___timeInSecondsToZoom_14)); }
	inline float get_timeInSecondsToZoom_14() const { return ___timeInSecondsToZoom_14; }
	inline float* get_address_of_timeInSecondsToZoom_14() { return &___timeInSecondsToZoom_14; }
	inline void set_timeInSecondsToZoom_14(float value)
	{
		___timeInSecondsToZoom_14 = value;
	}

	inline static int32_t get_offset_of_useSkimProof_15() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___useSkimProof_15)); }
	inline bool get_useSkimProof_15() const { return ___useSkimProof_15; }
	inline bool* get_address_of_useSkimProof_15() { return &___useSkimProof_15; }
	inline void set_useSkimProof_15(bool value)
	{
		___useSkimProof_15 = value;
	}

	inline static int32_t get_offset_of_skimproof_UpdateSpeedFromUser_16() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___skimproof_UpdateSpeedFromUser_16)); }
	inline float get_skimproof_UpdateSpeedFromUser_16() const { return ___skimproof_UpdateSpeedFromUser_16; }
	inline float* get_address_of_skimproof_UpdateSpeedFromUser_16() { return &___skimproof_UpdateSpeedFromUser_16; }
	inline void set_skimproof_UpdateSpeedFromUser_16(float value)
	{
		___skimproof_UpdateSpeedFromUser_16 = value;
	}

	inline static int32_t get_offset_of_cursorPos_17() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___cursorPos_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_cursorPos_17() const { return ___cursorPos_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_cursorPos_17() { return &___cursorPos_17; }
	inline void set_cursorPos_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___cursorPos_17 = value;
	}

	inline static int32_t get_offset_of_scale_18() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___scale_18)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_scale_18() const { return ___scale_18; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_scale_18() { return &___scale_18; }
	inline void set_scale_18(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___scale_18 = value;
	}

	inline static int32_t get_offset_of_offset_19() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___offset_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_offset_19() const { return ___offset_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_offset_19() { return &___offset_19; }
	inline void set_offset_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___offset_19 = value;
	}

	inline static int32_t get_offset_of_offsetRate_Zoom_20() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___offsetRate_Zoom_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_offsetRate_Zoom_20() const { return ___offsetRate_Zoom_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_offsetRate_Zoom_20() { return &___offsetRate_Zoom_20; }
	inline void set_offsetRate_Zoom_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___offsetRate_Zoom_20 = value;
	}

	inline static int32_t get_offset_of_offsetRate_Pan_21() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___offsetRate_Pan_21)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_offsetRate_Pan_21() const { return ___offsetRate_Pan_21; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_offsetRate_Pan_21() { return &___offsetRate_Pan_21; }
	inline void set_offsetRate_Pan_21(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___offsetRate_Pan_21 = value;
	}

	inline static int32_t get_offset_of_limitPanning_22() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___limitPanning_22)); }
	inline bool get_limitPanning_22() const { return ___limitPanning_22; }
	inline bool* get_address_of_limitPanning_22() { return &___limitPanning_22; }
	inline void set_limitPanning_22(bool value)
	{
		___limitPanning_22 = value;
	}

	inline static int32_t get_offset_of_skimproof_normFixator_23() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___skimproof_normFixator_23)); }
	inline float get_skimproof_normFixator_23() const { return ___skimproof_normFixator_23; }
	inline float* get_address_of_skimproof_normFixator_23() { return &___skimproof_normFixator_23; }
	inline void set_skimproof_normFixator_23(float value)
	{
		___skimproof_normFixator_23 = value;
	}

	inline static int32_t get_offset_of_skimproof_UpdateSpeed_24() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___skimproof_UpdateSpeed_24)); }
	inline float get_skimproof_UpdateSpeed_24() const { return ___skimproof_UpdateSpeed_24; }
	inline float* get_address_of_skimproof_UpdateSpeed_24() { return &___skimproof_UpdateSpeed_24; }
	inline void set_skimproof_UpdateSpeed_24(float value)
	{
		___skimproof_UpdateSpeed_24 = value;
	}

	inline static int32_t get_offset_of_myCollider_25() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___myCollider_25)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_myCollider_25() const { return ___myCollider_25; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_myCollider_25() { return &___myCollider_25; }
	inline void set_myCollider_25(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___myCollider_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myCollider_25), (void*)value);
	}

	inline static int32_t get_offset_of_myEyeTarget_26() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___myEyeTarget_26)); }
	inline EyeTrackingTarget_tC638599E70EEE5CDC5E0A3EAEE31E158C221C0FA * get_myEyeTarget_26() const { return ___myEyeTarget_26; }
	inline EyeTrackingTarget_tC638599E70EEE5CDC5E0A3EAEE31E158C221C0FA ** get_address_of_myEyeTarget_26() { return &___myEyeTarget_26; }
	inline void set_myEyeTarget_26(EyeTrackingTarget_tC638599E70EEE5CDC5E0A3EAEE31E158C221C0FA * value)
	{
		___myEyeTarget_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myEyeTarget_26), (void*)value);
	}

	inline static int32_t get_offset_of_zoomSpeed_27() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___zoomSpeed_27)); }
	inline float get_zoomSpeed_27() const { return ___zoomSpeed_27; }
	inline float* get_address_of_zoomSpeed_27() { return &___zoomSpeed_27; }
	inline void set_zoomSpeed_27(float value)
	{
		___zoomSpeed_27 = value;
	}

	inline static int32_t get_offset_of_zoomDir_28() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___zoomDir_28)); }
	inline float get_zoomDir_28() const { return ___zoomDir_28; }
	inline float* get_address_of_zoomDir_28() { return &___zoomDir_28; }
	inline void set_zoomDir_28(float value)
	{
		___zoomDir_28 = value;
	}

	inline static int32_t get_offset_of_dynaZoomInvert_29() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___dynaZoomInvert_29)); }
	inline int32_t get_dynaZoomInvert_29() const { return ___dynaZoomInvert_29; }
	inline int32_t* get_address_of_dynaZoomInvert_29() { return &___dynaZoomInvert_29; }
	inline void set_dynaZoomInvert_29(int32_t value)
	{
		___dynaZoomInvert_29 = value;
	}

	inline static int32_t get_offset_of_wasLookedAtBefore_30() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___wasLookedAtBefore_30)); }
	inline bool get_wasLookedAtBefore_30() const { return ___wasLookedAtBefore_30; }
	inline bool* get_address_of_wasLookedAtBefore_30() { return &___wasLookedAtBefore_30; }
	inline void set_wasLookedAtBefore_30(bool value)
	{
		___wasLookedAtBefore_30 = value;
	}

	inline static int32_t get_offset_of_isNavigating_31() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___isNavigating_31)); }
	inline bool get_isNavigating_31() const { return ___isNavigating_31; }
	inline bool* get_address_of_isNavigating_31() { return &___isNavigating_31; }
	inline void set_isNavigating_31(bool value)
	{
		___isNavigating_31 = value;
	}

	inline static int32_t get_offset_of_navPos_32() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___navPos_32)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_navPos_32() const { return ___navPos_32; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_navPos_32() { return &___navPos_32; }
	inline void set_navPos_32(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___navPos_32 = value;
	}

	inline static int32_t get_offset_of_isFocused_33() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___isFocused_33)); }
	inline bool get_isFocused_33() const { return ___isFocused_33; }
	inline bool* get_address_of_isFocused_33() { return &___isFocused_33; }
	inline void set_isFocused_33(bool value)
	{
		___isFocused_33 = value;
	}

	inline static int32_t get_offset_of_isZooming_34() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___isZooming_34)); }
	inline bool get_isZooming_34() const { return ___isZooming_34; }
	inline bool* get_address_of_isZooming_34() { return &___isZooming_34; }
	inline void set_isZooming_34(bool value)
	{
		___isZooming_34 = value;
	}

	inline static int32_t get_offset_of_ZoomGestureEnabledOnStartup_35() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___ZoomGestureEnabledOnStartup_35)); }
	inline bool get_ZoomGestureEnabledOnStartup_35() const { return ___ZoomGestureEnabledOnStartup_35; }
	inline bool* get_address_of_ZoomGestureEnabledOnStartup_35() { return &___ZoomGestureEnabledOnStartup_35; }
	inline void set_ZoomGestureEnabledOnStartup_35(bool value)
	{
		___ZoomGestureEnabledOnStartup_35 = value;
	}

	inline static int32_t get_offset_of_handZoomEnabled_36() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___handZoomEnabled_36)); }
	inline bool get_handZoomEnabled_36() const { return ___handZoomEnabled_36; }
	inline bool* get_address_of_handZoomEnabled_36() { return &___handZoomEnabled_36; }
	inline void set_handZoomEnabled_36(bool value)
	{
		___handZoomEnabled_36 = value;
	}

	inline static int32_t get_offset_of_originalRatio_37() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___originalRatio_37)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originalRatio_37() const { return ___originalRatio_37; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originalRatio_37() { return &___originalRatio_37; }
	inline void set_originalRatio_37(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originalRatio_37 = value;
	}

	inline static int32_t get_offset_of_originalPivot_38() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___originalPivot_38)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_originalPivot_38() const { return ___originalPivot_38; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_originalPivot_38() { return &___originalPivot_38; }
	inline void set_originalPivot_38(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___originalPivot_38 = value;
	}

	inline static int32_t get_offset_of_originalScale_39() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___originalScale_39)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_originalScale_39() const { return ___originalScale_39; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_originalScale_39() { return &___originalScale_39; }
	inline void set_originalScale_39(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___originalScale_39 = value;
	}

	inline static int32_t get_offset_of_originalOffset_40() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___originalOffset_40)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_originalOffset_40() const { return ___originalOffset_40; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_originalOffset_40() { return &___originalOffset_40; }
	inline void set_originalOffset_40(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___originalOffset_40 = value;
	}

	inline static int32_t get_offset_of_eyeSaccadeProvider_41() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___eyeSaccadeProvider_41)); }
	inline RuntimeObject* get_eyeSaccadeProvider_41() const { return ___eyeSaccadeProvider_41; }
	inline RuntimeObject** get_address_of_eyeSaccadeProvider_41() { return &___eyeSaccadeProvider_41; }
	inline void set_eyeSaccadeProvider_41(RuntimeObject* value)
	{
		___eyeSaccadeProvider_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eyeSaccadeProvider_41), (void*)value);
	}

	inline static int32_t get_offset_of_zoomUsingHandsActive_42() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___zoomUsingHandsActive_42)); }
	inline bool get_zoomUsingHandsActive_42() const { return ___zoomUsingHandsActive_42; }
	inline bool* get_address_of_zoomUsingHandsActive_42() { return &___zoomUsingHandsActive_42; }
	inline void set_zoomUsingHandsActive_42(bool value)
	{
		___zoomUsingHandsActive_42 = value;
	}

	inline static int32_t get_offset_of_initialPalmPos_43() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___initialPalmPos_43)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPalmPos_43() const { return ___initialPalmPos_43; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPalmPos_43() { return &___initialPalmPos_43; }
	inline void set_initialPalmPos_43(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPalmPos_43 = value;
	}

	inline static int32_t get_offset_of_handUsedToZoom_44() { return static_cast<int32_t>(offsetof(PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862, ___handUsedToZoom_44)); }
	inline uint8_t get_handUsedToZoom_44() const { return ___handUsedToZoom_44; }
	inline uint8_t* get_address_of_handUsedToZoom_44() { return &___handUsedToZoom_44; }
	inline void set_handUsedToZoom_44(uint8_t value)
	{
		___handUsedToZoom_44 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo
struct ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::progressIndicatorLoadingBarGo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___progressIndicatorLoadingBarGo_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::progressIndicatorRotatingObjectGo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___progressIndicatorRotatingObjectGo_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::progressIndicatorRotatingOrbsGo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___progressIndicatorRotatingOrbsGo_6;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::toggleBarKey
	int32_t ___toggleBarKey_7;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::toggleRotatingKey
	int32_t ___toggleRotatingKey_8;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::toggleOrbsKey
	int32_t ___toggleOrbsKey_9;
	// System.String[] Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::loadingMessages
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___loadingMessages_10;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::loadingTime
	float ___loadingTime_11;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::progressIndicatorLoadingBar
	RuntimeObject* ___progressIndicatorLoadingBar_12;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::progressIndicatorRotatingObject
	RuntimeObject* ___progressIndicatorRotatingObject_13;
	// Microsoft.MixedReality.Toolkit.UI.IProgressIndicator Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::progressIndicatorRotatingOrbs
	RuntimeObject* ___progressIndicatorRotatingOrbs_14;

public:
	inline static int32_t get_offset_of_progressIndicatorLoadingBarGo_4() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___progressIndicatorLoadingBarGo_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_progressIndicatorLoadingBarGo_4() const { return ___progressIndicatorLoadingBarGo_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_progressIndicatorLoadingBarGo_4() { return &___progressIndicatorLoadingBarGo_4; }
	inline void set_progressIndicatorLoadingBarGo_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___progressIndicatorLoadingBarGo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicatorLoadingBarGo_4), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicatorRotatingObjectGo_5() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___progressIndicatorRotatingObjectGo_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_progressIndicatorRotatingObjectGo_5() const { return ___progressIndicatorRotatingObjectGo_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_progressIndicatorRotatingObjectGo_5() { return &___progressIndicatorRotatingObjectGo_5; }
	inline void set_progressIndicatorRotatingObjectGo_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___progressIndicatorRotatingObjectGo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicatorRotatingObjectGo_5), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicatorRotatingOrbsGo_6() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___progressIndicatorRotatingOrbsGo_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_progressIndicatorRotatingOrbsGo_6() const { return ___progressIndicatorRotatingOrbsGo_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_progressIndicatorRotatingOrbsGo_6() { return &___progressIndicatorRotatingOrbsGo_6; }
	inline void set_progressIndicatorRotatingOrbsGo_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___progressIndicatorRotatingOrbsGo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicatorRotatingOrbsGo_6), (void*)value);
	}

	inline static int32_t get_offset_of_toggleBarKey_7() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___toggleBarKey_7)); }
	inline int32_t get_toggleBarKey_7() const { return ___toggleBarKey_7; }
	inline int32_t* get_address_of_toggleBarKey_7() { return &___toggleBarKey_7; }
	inline void set_toggleBarKey_7(int32_t value)
	{
		___toggleBarKey_7 = value;
	}

	inline static int32_t get_offset_of_toggleRotatingKey_8() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___toggleRotatingKey_8)); }
	inline int32_t get_toggleRotatingKey_8() const { return ___toggleRotatingKey_8; }
	inline int32_t* get_address_of_toggleRotatingKey_8() { return &___toggleRotatingKey_8; }
	inline void set_toggleRotatingKey_8(int32_t value)
	{
		___toggleRotatingKey_8 = value;
	}

	inline static int32_t get_offset_of_toggleOrbsKey_9() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___toggleOrbsKey_9)); }
	inline int32_t get_toggleOrbsKey_9() const { return ___toggleOrbsKey_9; }
	inline int32_t* get_address_of_toggleOrbsKey_9() { return &___toggleOrbsKey_9; }
	inline void set_toggleOrbsKey_9(int32_t value)
	{
		___toggleOrbsKey_9 = value;
	}

	inline static int32_t get_offset_of_loadingMessages_10() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___loadingMessages_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_loadingMessages_10() const { return ___loadingMessages_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_loadingMessages_10() { return &___loadingMessages_10; }
	inline void set_loadingMessages_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___loadingMessages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingMessages_10), (void*)value);
	}

	inline static int32_t get_offset_of_loadingTime_11() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___loadingTime_11)); }
	inline float get_loadingTime_11() const { return ___loadingTime_11; }
	inline float* get_address_of_loadingTime_11() { return &___loadingTime_11; }
	inline void set_loadingTime_11(float value)
	{
		___loadingTime_11 = value;
	}

	inline static int32_t get_offset_of_progressIndicatorLoadingBar_12() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___progressIndicatorLoadingBar_12)); }
	inline RuntimeObject* get_progressIndicatorLoadingBar_12() const { return ___progressIndicatorLoadingBar_12; }
	inline RuntimeObject** get_address_of_progressIndicatorLoadingBar_12() { return &___progressIndicatorLoadingBar_12; }
	inline void set_progressIndicatorLoadingBar_12(RuntimeObject* value)
	{
		___progressIndicatorLoadingBar_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicatorLoadingBar_12), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicatorRotatingObject_13() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___progressIndicatorRotatingObject_13)); }
	inline RuntimeObject* get_progressIndicatorRotatingObject_13() const { return ___progressIndicatorRotatingObject_13; }
	inline RuntimeObject** get_address_of_progressIndicatorRotatingObject_13() { return &___progressIndicatorRotatingObject_13; }
	inline void set_progressIndicatorRotatingObject_13(RuntimeObject* value)
	{
		___progressIndicatorRotatingObject_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicatorRotatingObject_13), (void*)value);
	}

	inline static int32_t get_offset_of_progressIndicatorRotatingOrbs_14() { return static_cast<int32_t>(offsetof(ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A, ___progressIndicatorRotatingOrbs_14)); }
	inline RuntimeObject* get_progressIndicatorRotatingOrbs_14() const { return ___progressIndicatorRotatingOrbs_14; }
	inline RuntimeObject** get_address_of_progressIndicatorRotatingOrbs_14() { return &___progressIndicatorRotatingOrbs_14; }
	inline void set_progressIndicatorRotatingOrbs_14(RuntimeObject* value)
	{
		___progressIndicatorRotatingOrbs_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressIndicatorRotatingOrbs_14), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback
struct UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::customFilename
	String_t* ___customFilename_4;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.InputPointerVisualizer Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::_EyeGazeVisualizer
	InputPointerVisualizer_tD8E56ABAAEBE550A00D7061260FF97FB4CBB107A * ____EyeGazeVisualizer_5;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.InputPointerVisualizer Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::_HeadGazeVisualizer
	InputPointerVisualizer_tD8E56ABAAEBE550A00D7061260FF97FB4CBB107A * ____HeadGazeVisualizer_6;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture[] Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::heatmapRefs
	DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371* ___heatmapRefs_7;
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::loggedLines
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___loggedLines_8;
	// Windows.Storage.StorageFolder Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::uwpRootFolder
	StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * ___uwpRootFolder_9;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::uwpSubFolderName
	String_t* ___uwpSubFolderName_10;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::uwpFileName
	String_t* ___uwpFileName_11;
	// Windows.Storage.StorageFolder Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::uwpLogSessionFolder
	StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * ___uwpLogSessionFolder_12;
	// Windows.Storage.StorageFile Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::uwpLogFile
	StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * ___uwpLogFile_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_14;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::txt_LoadingUpdate
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___txt_LoadingUpdate_15;
	// System.DateTime Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::lastUpdatedTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastUpdatedTime_17;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::deltaTimeToUpdateInMs
	float ___deltaTimeToUpdateInMs_18;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::lastTimestampInMs
	float ___lastTimestampInMs_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::replayIndex
	int32_t ___replayIndex_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::replayNotStartedYet
	bool ___replayNotStartedYet_21;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::nrOfSamples
	int32_t ___nrOfSamples_22;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::replaySpeed
	float ___replaySpeed_23;

public:
	inline static int32_t get_offset_of_customFilename_4() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___customFilename_4)); }
	inline String_t* get_customFilename_4() const { return ___customFilename_4; }
	inline String_t** get_address_of_customFilename_4() { return &___customFilename_4; }
	inline void set_customFilename_4(String_t* value)
	{
		___customFilename_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customFilename_4), (void*)value);
	}

	inline static int32_t get_offset_of__EyeGazeVisualizer_5() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ____EyeGazeVisualizer_5)); }
	inline InputPointerVisualizer_tD8E56ABAAEBE550A00D7061260FF97FB4CBB107A * get__EyeGazeVisualizer_5() const { return ____EyeGazeVisualizer_5; }
	inline InputPointerVisualizer_tD8E56ABAAEBE550A00D7061260FF97FB4CBB107A ** get_address_of__EyeGazeVisualizer_5() { return &____EyeGazeVisualizer_5; }
	inline void set__EyeGazeVisualizer_5(InputPointerVisualizer_tD8E56ABAAEBE550A00D7061260FF97FB4CBB107A * value)
	{
		____EyeGazeVisualizer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____EyeGazeVisualizer_5), (void*)value);
	}

	inline static int32_t get_offset_of__HeadGazeVisualizer_6() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ____HeadGazeVisualizer_6)); }
	inline InputPointerVisualizer_tD8E56ABAAEBE550A00D7061260FF97FB4CBB107A * get__HeadGazeVisualizer_6() const { return ____HeadGazeVisualizer_6; }
	inline InputPointerVisualizer_tD8E56ABAAEBE550A00D7061260FF97FB4CBB107A ** get_address_of__HeadGazeVisualizer_6() { return &____HeadGazeVisualizer_6; }
	inline void set__HeadGazeVisualizer_6(InputPointerVisualizer_tD8E56ABAAEBE550A00D7061260FF97FB4CBB107A * value)
	{
		____HeadGazeVisualizer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____HeadGazeVisualizer_6), (void*)value);
	}

	inline static int32_t get_offset_of_heatmapRefs_7() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___heatmapRefs_7)); }
	inline DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371* get_heatmapRefs_7() const { return ___heatmapRefs_7; }
	inline DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371** get_address_of_heatmapRefs_7() { return &___heatmapRefs_7; }
	inline void set_heatmapRefs_7(DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371* value)
	{
		___heatmapRefs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heatmapRefs_7), (void*)value);
	}

	inline static int32_t get_offset_of_loggedLines_8() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___loggedLines_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_loggedLines_8() const { return ___loggedLines_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_loggedLines_8() { return &___loggedLines_8; }
	inline void set_loggedLines_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___loggedLines_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loggedLines_8), (void*)value);
	}

	inline static int32_t get_offset_of_uwpRootFolder_9() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___uwpRootFolder_9)); }
	inline StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * get_uwpRootFolder_9() const { return ___uwpRootFolder_9; }
	inline StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA ** get_address_of_uwpRootFolder_9() { return &___uwpRootFolder_9; }
	inline void set_uwpRootFolder_9(StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * value)
	{
		___uwpRootFolder_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uwpRootFolder_9), (void*)value);
	}

	inline static int32_t get_offset_of_uwpSubFolderName_10() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___uwpSubFolderName_10)); }
	inline String_t* get_uwpSubFolderName_10() const { return ___uwpSubFolderName_10; }
	inline String_t** get_address_of_uwpSubFolderName_10() { return &___uwpSubFolderName_10; }
	inline void set_uwpSubFolderName_10(String_t* value)
	{
		___uwpSubFolderName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uwpSubFolderName_10), (void*)value);
	}

	inline static int32_t get_offset_of_uwpFileName_11() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___uwpFileName_11)); }
	inline String_t* get_uwpFileName_11() const { return ___uwpFileName_11; }
	inline String_t** get_address_of_uwpFileName_11() { return &___uwpFileName_11; }
	inline void set_uwpFileName_11(String_t* value)
	{
		___uwpFileName_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uwpFileName_11), (void*)value);
	}

	inline static int32_t get_offset_of_uwpLogSessionFolder_12() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___uwpLogSessionFolder_12)); }
	inline StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * get_uwpLogSessionFolder_12() const { return ___uwpLogSessionFolder_12; }
	inline StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA ** get_address_of_uwpLogSessionFolder_12() { return &___uwpLogSessionFolder_12; }
	inline void set_uwpLogSessionFolder_12(StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * value)
	{
		___uwpLogSessionFolder_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uwpLogSessionFolder_12), (void*)value);
	}

	inline static int32_t get_offset_of_uwpLogFile_13() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___uwpLogFile_13)); }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * get_uwpLogFile_13() const { return ___uwpLogFile_13; }
	inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF ** get_address_of_uwpLogFile_13() { return &___uwpLogFile_13; }
	inline void set_uwpLogFile_13(StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * value)
	{
		___uwpLogFile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uwpLogFile_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPlayingU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___U3CIsPlayingU3Ek__BackingField_14)); }
	inline bool get_U3CIsPlayingU3Ek__BackingField_14() const { return ___U3CIsPlayingU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsPlayingU3Ek__BackingField_14() { return &___U3CIsPlayingU3Ek__BackingField_14; }
	inline void set_U3CIsPlayingU3Ek__BackingField_14(bool value)
	{
		___U3CIsPlayingU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_txt_LoadingUpdate_15() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___txt_LoadingUpdate_15)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_txt_LoadingUpdate_15() const { return ___txt_LoadingUpdate_15; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_txt_LoadingUpdate_15() { return &___txt_LoadingUpdate_15; }
	inline void set_txt_LoadingUpdate_15(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___txt_LoadingUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___txt_LoadingUpdate_15), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdatedTime_17() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___lastUpdatedTime_17)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_lastUpdatedTime_17() const { return ___lastUpdatedTime_17; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_lastUpdatedTime_17() { return &___lastUpdatedTime_17; }
	inline void set_lastUpdatedTime_17(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___lastUpdatedTime_17 = value;
	}

	inline static int32_t get_offset_of_deltaTimeToUpdateInMs_18() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___deltaTimeToUpdateInMs_18)); }
	inline float get_deltaTimeToUpdateInMs_18() const { return ___deltaTimeToUpdateInMs_18; }
	inline float* get_address_of_deltaTimeToUpdateInMs_18() { return &___deltaTimeToUpdateInMs_18; }
	inline void set_deltaTimeToUpdateInMs_18(float value)
	{
		___deltaTimeToUpdateInMs_18 = value;
	}

	inline static int32_t get_offset_of_lastTimestampInMs_19() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___lastTimestampInMs_19)); }
	inline float get_lastTimestampInMs_19() const { return ___lastTimestampInMs_19; }
	inline float* get_address_of_lastTimestampInMs_19() { return &___lastTimestampInMs_19; }
	inline void set_lastTimestampInMs_19(float value)
	{
		___lastTimestampInMs_19 = value;
	}

	inline static int32_t get_offset_of_replayIndex_20() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___replayIndex_20)); }
	inline int32_t get_replayIndex_20() const { return ___replayIndex_20; }
	inline int32_t* get_address_of_replayIndex_20() { return &___replayIndex_20; }
	inline void set_replayIndex_20(int32_t value)
	{
		___replayIndex_20 = value;
	}

	inline static int32_t get_offset_of_replayNotStartedYet_21() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___replayNotStartedYet_21)); }
	inline bool get_replayNotStartedYet_21() const { return ___replayNotStartedYet_21; }
	inline bool* get_address_of_replayNotStartedYet_21() { return &___replayNotStartedYet_21; }
	inline void set_replayNotStartedYet_21(bool value)
	{
		___replayNotStartedYet_21 = value;
	}

	inline static int32_t get_offset_of_nrOfSamples_22() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___nrOfSamples_22)); }
	inline int32_t get_nrOfSamples_22() const { return ___nrOfSamples_22; }
	inline int32_t* get_address_of_nrOfSamples_22() { return &___nrOfSamples_22; }
	inline void set_nrOfSamples_22(int32_t value)
	{
		___nrOfSamples_22 = value;
	}

	inline static int32_t get_offset_of_replaySpeed_23() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D, ___replaySpeed_23)); }
	inline float get_replaySpeed_23() const { return ___replaySpeed_23; }
	inline float* get_address_of_replaySpeed_23() { return &___replaySpeed_23; }
	inline void set_replaySpeed_23(float value)
	{
		___replaySpeed_23 = value;
	}
};

struct UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::counter
	int32_t ___counter_16;

public:
	inline static int32_t get_offset_of_counter_16() { return static_cast<int32_t>(offsetof(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_StaticFields, ___counter_16)); }
	inline int32_t get_counter_16() const { return ___counter_16; }
	inline int32_t* get_address_of_counter_16() { return &___counter_16; }
	inline void set_counter_16(int32_t value)
	{
		___counter_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture[]
struct DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 * m_Items[1];

public:
	inline DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F_m08651AC34D72943A5202CDF8FD23CE85106E081C_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_m2DF4353E1A21001701552DF5C7D8444B87F15CBC_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_mDB40437247E5C7364361AC7CB8D36D83D1B63CF0_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_gshared (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A_mDED6E975F5A79315E320E3416893F9999A1B559D_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Ray>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6BDB542648A790323BB08E42C49A35F41A2597A4_gshared_inline (Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Ray>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Nullable_1_get_Value_m835105DEBBBEF6790FBC514E43553969894E5976_gshared (Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_m98FEB3E74D0FE09ADDC61CA67F40A332BED52E22_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B_m1BE6A5E787A9402F6356D758BD1F432BB2B0E4EA_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF_m09270548B6580199EFD9E06B86179A850115AB92_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E_m8ABEE9F22F651C9190A5772BC502E191B93FA529_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA_mA8876BD4B59C5659EF7FC678E0B6490C647D2B59_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA * ___stateMachine1, const RuntimeMethod* method);

// System.Void MyPhotoCapture/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE160E2584777F5A3A8090931F1012DA1E8972B08 (U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065 (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27 (Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::ZoomInStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoomBase_ZoomInStart_m59DB8482763052590B41D1C71063FDE5CE469857 (PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::ZoomOutStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoomBase_ZoomOutStart_m8E0E25B9B8296E8C703CD6E775D30834F2522314 (PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase::ZoomStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanZoomBase_ZoomStop_m62575FEDCC8B7F8C1FC5ACB5714F46702ACAC3B8 (PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F_m08651AC34D72943A5202CDF8FD23CE85106E081C (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F_m08651AC34D72943A5202CDF8FD23CE85106E081C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo::OpenProgressIndicator(Microsoft.MixedReality.Toolkit.UI.IProgressIndicator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressIndicatorDemo_OpenProgressIndicator_m122F956461418195BB6F48AD0905E046A765844F (ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * __this, RuntimeObject* ___indicator0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleButtonClickU3Ed__14_MoveNext_mF720161ECDEF41103FA127C6530AD8437E8EA6A6 (U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleButtonClickU3Ed__14_SetStateMachine_m5B82CD99AA2F16295DDEC5460785119016DA29FD (U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_m2DF4353E1A21001701552DF5C7D8444B87F15CBC (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_m2DF4353E1A21001701552DF5C7D8444B87F15CBC_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B (const RuntimeMethod* method);
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8 (YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_mDB40437247E5C7364361AC7CB8D36D83D1B63CF0 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * ___awaiter0, U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *, U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_mDB40437247E5C7364361AC7CB8D36D83D1B63CF0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenProgressIndicatorU3Ed__17_MoveNext_m1BD23385324B99F28EA5A32496561FA695B5F61A (U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenProgressIndicatorU3Ed__17_SetStateMachine_mA9B346FEC4EADA24B0E0784703212DFFD1215ACF (U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserInputPlayback_get_FileName_m8D74BE21E7A22F5B0E1FD238B85BA9B173209F1B (UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::UWP_Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * UserInputPlayback_UWP_Load_m2B55367B83F51DF8C569F21506D151C0E80973C0 (UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041 (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, const RuntimeMethod*))Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1 (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A_mDED6E975F5A79315E320E3416893F9999A1B559D (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A_mDED6E975F5A79315E320E3416893F9999A1B559D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadInUWPU3Ed__21_MoveNext_m43043EEB6C1601ECF81ABB1FD6933A79D82F134B (U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadInUWPU3Ed__21_SetStateMachine_m7F5529D96FD69AE974D6B8E3417740D88B06C266 (U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB (const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::GetEyeRay(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  UserInputPlayback_GetEyeRay_m8B68E9E5EBE2F05410292AAF1B6623B36A6013AD (UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___split0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Ray>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6BDB542648A790323BB08E42C49A35F41A2597A4_inline (Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 *, const RuntimeMethod*))Nullable_1_get_HasValue_m6BDB542648A790323BB08E42C49A35F41A2597A4_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Ray>::get_Value()
inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Nullable_1_get_Value_m835105DEBBBEF6790FBC514E43553969894E5976 (Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 * __this, const RuntimeMethod* method)
{
	return ((  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  (*) (Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 *, const RuntimeMethod*))Nullable_1_get_Value_m835105DEBBBEF6790FBC514E43553969894E5976_gshared)(__this, method);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4 (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.DrawOnTexture::DrawAtThisHitPos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawOnTexture_DrawAtThisHitPos_m047A7C6A53B8D4ECEE1DEDCC8F3DA70212912A1C (DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hitPosition0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder> Windows.Storage.StorageFolder::GetFolderAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StorageFolder_GetFolderAsync_m7A9CFAC70B3EBA59BBA3C3A315708F2E0B6BDFF6 (StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Storage.StorageFolder>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D  WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA_m9383D8502CB13161D8B8BB0F5F1FA2748F717C83 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFolder>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE47B5307B43FF938B2621B09EADA700921D70958 (TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFolder>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_mA99C00B6BB0886A783692C3975C43D2629AE1AB3 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D * ___awaiter0, U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D *, U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_m98FEB3E74D0FE09ADDC61CA67F40A332BED52E22_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFolder>::GetResult()
inline StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * TaskAwaiter_1_GetResult_mE4F41CE31D3E252959644A6BABE45D01407ECE7E (TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D * __this, const RuntimeMethod* method)
{
	return ((  StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * (*) (TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile> Windows.Storage.StorageFolder::GetFileAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StorageFolder_GetFileAsync_m715BC760BBF9EC190D04B972D4A18E81015AE1B2 (StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Storage.StorageFile>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_m2B2D88714FF0D6BE5937E0A7098D44E0BF13AB09 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * ___awaiter0, U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_m98FEB3E74D0FE09ADDC61CA67F40A332BED52E22_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>::GetResult()
inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * __this, const RuntimeMethod* method)
{
	return ((  StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * (*) (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared)(__this, ___result0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_FileExistsU3Ed__14_MoveNext_m45168326C1D3F26DA0853F2BB2770F5A2175DA0C (U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_FileExistsU3Ed__14_SetStateMachine_m0E7C98FD2BBBB9620A93E4779B89C2437C450B25 (U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::UWP_LoadNewFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * UserInputPlayback_UWP_LoadNewFile_m7796B983149F6B8E3AEBFFC316F60F8395AA65F7 (UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B_m1BE6A5E787A9402F6356D758BD1F432BB2B0E4EA (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B_m1BE6A5E787A9402F6356D758BD1F432BB2B0E4EA_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_LoadU3Ed__12_MoveNext_mF50633445CA445C15EB96BCBFEE6B0D0EAE5750B (U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_LoadU3Ed__12_SetStateMachine_m591DA891C7D71B6BE2A2BEF8B43C3085CA166AD0 (U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::ResetCurrentStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputPlayback_ResetCurrentStream_mBD6BAE2CF723C8C32AABD93EF19BE24D7DA2B52D (UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::UWP_FileExists(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * UserInputPlayback_UWP_FileExists_mB5CAD0835C681AC363FE9A4B5330CDC6121B8BAB (UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * __this, String_t* ___dir0, String_t* ___filename1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF_m09270548B6580199EFD9E06B86179A850115AB92 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * ___awaiter0, U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *, U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF_m09270548B6580199EFD9E06B86179A850115AB92_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::UWP_ReadData(Windows.Storage.StorageFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * UserInputPlayback_UWP_ReadData_mB31485383089D9766D0B24E497A9B9F37E3E5E35 (UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * __this, StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * ___logfile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_LoadNewFileU3Ed__13_MoveNext_mB09A0EF138A0B6388ACD97A9551D04E6A72180F2 (U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_LoadNewFileU3Ed__13_SetStateMachine_m0662CBA1196DF3F7A847D11CC714071670225D45 (U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType> Windows.Storage.StorageFile::OpenReadAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StorageFile_OpenReadAsync_m6B32192BEA546DE0FEDC6868639DE71DA4E3C7D6 (StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Storage.Streams.IRandomAccessStreamWithContentType>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D  WindowsRuntimeSystemExtensions_GetAwaiter_TisIRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E_m7E056F4914642D21A3B0793D6567D722662E31D2 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m941E3E5867D824F4ADEC5C12568144998E4E7211 (TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D_TisU3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E_mEEAAA5E39CF4806E3252F05481BAEA779F530A6B (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D * ___awaiter0, U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D *, U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E_m8ABEE9F22F651C9190A5772BC502E191B93FA529_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_m15BA772D121DD3C64FD1871A698B1E43CAD64E1B (TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForRead(Windows.Storage.Streams.IInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WindowsRuntimeStreamExtensions_AsStreamForRead_mBA8F061F0579EB69C41FB9499C4F4D2FD6C357E4 (RuntimeObject* ___windowsRuntimeStream0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905 (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_ReadDataU3Ed__15_MoveNext_mC1061B1A4D9E4ECF16413DCB85C41EC0C215C381 (U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_ReadDataU3Ed__15_SetStateMachine_m254C3E9028A12B79C84A1945BE7B7D5A04D7B183 (U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::UpdateLoadingStatus(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputPlayback_UpdateLoadingStatus_m78A0F2B88C23D5545FE0BFDC8416542F523EBF13 (UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * __this, int32_t ___now0, int32_t ___total1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback::LoadingStatus_Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInputPlayback_LoadingStatus_Hide_m757A84635080D2B7A78B6B4174F9E561DD4BE108 (UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Threading.Tasks.Task>::Invoke()
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * __this, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA_mA8876BD4B59C5659EF7FC678E0B6490C647D2B59 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA_mA8876BD4B59C5659EF7FC678E0B6490C647D2B59_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/ExclusiveSynchronizationContext::set_InnerException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExclusiveSynchronizationContext_set_InnerException_mBDAC674E7236860DE7EE3A2B36A9CFFCD21E5680_inline (ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9 * __this, Exception_t * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/ExclusiveSynchronizationContext::EndMessageLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExclusiveSynchronizationContext_EndMessageLoop_mDBA1461B9A1A176909AB4849C1D5F2AEE21F3F8A (ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunSyncU3Eb__0U3Ed_MoveNext_m4D4B2A2F50874C4C173492BC496BD868518AD19E (U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunSyncU3Eb__0U3Ed_SetStateMachine_m0B908A49592D587220B0D4F5EDF8DC82DCCC2431 (U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MyPhotoCapture/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5E058B39A32940F96E3A5ABE32B14765CB019B81 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 * L_0 = (U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 *)il2cpp_codegen_object_new(U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE160E2584777F5A3A8090931F1012DA1E8972B08(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MyPhotoCapture/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE160E2584777F5A3A8090931F1012DA1E8972B08 (U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 MyPhotoCapture/<>c::<OnPhotoCaptureCreated>b__8_0(UnityEngine.Resolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3COnPhotoCaptureCreatedU3Eb__8_0_mF43AEE2A9E9FF4187430814FE319460AB804D83B (U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 * __this, Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  ___res0, const RuntimeMethod* method)
{
	{
		// Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).Last();
		int32_t L_0;
		L_0 = Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___res0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___res0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
	}
}
// System.Int32 MyPhotoCapture/<>c::<OnCapturedPhotoToMemory>b__10_0(UnityEngine.Resolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3COnCapturedPhotoToMemoryU3Eb__10_0_mED1B3F0F725080B24623544073CE999F7A4FABCB (U3CU3Ec_tC12AF32DD501BED2EDEFBC62509B3D4238461146 * __this, Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767  ___res0, const RuntimeMethod* method)
{
	{
		// Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).Last();
		int32_t L_0;
		L_0 = Resolution_get_width_mDD9DCC89D65057B64C413AF15BEE2E37E9892065((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___res0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Resolution_get_height_mB90F24337D7B96A288F8BE1D0F2F3599B785AD27((Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 *)(&___res0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomAndStopU3Ed__78__ctor_m30C53A8A39CC3FBAE8A279C57EC3FDC2C55706B7 (U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomAndStopU3Ed__78_System_IDisposable_Dispose_mBAEE47B4402D4A15A9019E8BE21DF0E709776BBE (U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CZoomAndStopU3Ed__78_MoveNext_mABBEFDB098EC2BC20D7F0A2C666A9E54C58CF892 (U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0055;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isZooming = true;
		PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_isZooming_34((bool)1);
		// if (zoomIn)
		bool L_5 = __this->get_zoomIn_3();
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// ZoomInStart();
		PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * L_6 = V_1;
		NullCheck(L_6);
		PanZoomBase_ZoomInStart_m59DB8482763052590B41D1C71063FDE5CE469857(L_6, /*hidden argument*/NULL);
		// }
		goto IL_003b;
	}

IL_0035:
	{
		// ZoomOutStart();
		PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * L_7 = V_1;
		NullCheck(L_7);
		PanZoomBase_ZoomOutStart_m8E0E25B9B8296E8C703CD6E775D30834F2522314(L_7, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// yield return new WaitForSeconds(timeInSecondsToZoom);
		PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->get_timeInSecondsToZoom_14();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0055:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ZoomStop();
		PanZoomBase_tE5C63210E4422DD4068E1E368EA76B1EA669D862 * L_11 = V_1;
		NullCheck(L_11);
		PanZoomBase_ZoomStop_m62575FEDCC8B7F8C1FC5ACB5714F46702ACAC3B8(L_11, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CZoomAndStopU3Ed__78_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9C5C426516CF1CC7EF5EF725543F34C316B3137F (U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CZoomAndStopU3Ed__78_System_Collections_IEnumerator_Reset_m0C9556653FCC60711B49BCB31FCB46DAE13556DD (U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CZoomAndStopU3Ed__78_System_Collections_IEnumerator_Reset_m0C9556653FCC60711B49BCB31FCB46DAE13556DD_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.PanZoomBase/<ZoomAndStop>d__78::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CZoomAndStopU3Ed__78_System_Collections_IEnumerator_get_Current_mBD9E41C773B5305A57FE6361E5A74B5AFFAF3137 (U3CZoomAndStopU3Ed__78_tF10C60D7664334D535E469E525B0491EFF12BD46 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleButtonClickU3Ed__14_MoveNext_mF720161ECDEF41103FA127C6530AD8437E8EA6A6 (U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F_m08651AC34D72943A5202CDF8FD23CE85106E081C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0055;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00d5;
			}
		}

IL_0018:
		{
			// await indicator.AwaitTransitionAsync();
			RuntimeObject* L_4 = __this->get_indicator_2();
			NullCheck(L_4);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(5 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::AwaitTransitionAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_4);
			NullCheck(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0071;
			}
		}

IL_0032:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
			__this->set_U3CU3Eu__1_4(L_9);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F_m08651AC34D72943A5202CDF8FD23CE85106E081C((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F_m08651AC34D72943A5202CDF8FD23CE85106E081C_RuntimeMethod_var);
			goto IL_0126;
		}

IL_0055:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_4();
			V_2 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0071:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// switch (indicator.State)
			RuntimeObject* L_14 = __this->get_indicator_2();
			NullCheck(L_14);
			int32_t L_15;
			L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_14);
			V_3 = L_15;
			int32_t L_16 = V_3;
			if (!L_16)
			{
				goto IL_008d;
			}
		}

IL_0087:
		{
			int32_t L_17 = V_3;
			if ((((int32_t)L_17) == ((int32_t)2)))
			{
				goto IL_009b;
			}
		}

IL_008b:
		{
			goto IL_00f8;
		}

IL_008d:
		{
			// OpenProgressIndicator(indicator);
			ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * L_18 = V_1;
			RuntimeObject* L_19 = __this->get_indicator_2();
			NullCheck(L_18);
			ProgressIndicatorDemo_OpenProgressIndicator_m122F956461418195BB6F48AD0905E046A765844F(L_18, L_19, /*hidden argument*/NULL);
			// break;
			goto IL_00f8;
		}

IL_009b:
		{
			// await indicator.CloseAsync();
			RuntimeObject* L_20 = __this->get_indicator_2();
			NullCheck(L_20);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_21;
			L_21 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_20);
			NullCheck(L_21);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_22;
			L_22 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_21, /*hidden argument*/NULL);
			V_2 = L_22;
			bool L_23;
			L_23 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_23)
			{
				goto IL_00f1;
			}
		}

IL_00b5:
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->set_U3CU3E1__state_0(L_24);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_25 = V_2;
			__this->set_U3CU3Eu__1_4(L_25);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F_m08651AC34D72943A5202CDF8FD23CE85106E081C((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_26, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F_m08651AC34D72943A5202CDF8FD23CE85106E081C_RuntimeMethod_var);
			goto IL_0126;
		}

IL_00d5:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_27 = __this->get_U3CU3Eu__1_4();
			V_2 = L_27;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_28 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->set_U3CU3E1__state_0(L_29);
		}

IL_00f1:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		}

IL_00f8:
		{
			// break;
			goto IL_0113;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fa;
		}
		throw e;
	}

CATCH_00fa:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_31 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_30, L_31, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0126;
	} // end catch (depth: 1)

IL_0113:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_32, /*hidden argument*/NULL);
	}

IL_0126:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleButtonClickU3Ed__14_MoveNext_mF720161ECDEF41103FA127C6530AD8437E8EA6A6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F * _thisAdjusted = reinterpret_cast<U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F *>(__this + _offset);
	U3CHandleButtonClickU3Ed__14_MoveNext_mF720161ECDEF41103FA127C6530AD8437E8EA6A6(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<HandleButtonClick>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHandleButtonClickU3Ed__14_SetStateMachine_m5B82CD99AA2F16295DDEC5460785119016DA29FD (U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CHandleButtonClickU3Ed__14_SetStateMachine_m5B82CD99AA2F16295DDEC5460785119016DA29FD_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F * _thisAdjusted = reinterpret_cast<U3CHandleButtonClickU3Ed__14_t15C5DD8FFCEE0C15E7268EEF8FC4B8D3BD3D376F *>(__this + _offset);
	U3CHandleButtonClickU3Ed__14_SetStateMachine_m5B82CD99AA2F16295DDEC5460785119016DA29FD(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenProgressIndicatorU3Ed__17_MoveNext_m1BD23385324B99F28EA5A32496561FA695B5F61A (U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_m2DF4353E1A21001701552DF5C7D8444B87F15CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_mDB40437247E5C7364361AC7CB8D36D83D1B63CF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_005d;
				}
				case 1:
				{
					goto IL_0114;
				}
				case 2:
				{
					goto IL_019c;
				}
			}
		}

IL_0020:
		{
			// await indicator.OpenAsync();
			RuntimeObject* L_3 = __this->get_indicator_2();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
			L_4 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(4 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::OpenAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_3);
			NullCheck(L_4);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_5;
			L_5 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0079;
			}
		}

IL_003a:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = V_2;
			__this->set_U3CU3Eu__1_5(L_8);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_m2DF4353E1A21001701552DF5C7D8444B87F15CBC((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_9, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_m2DF4353E1A21001701552DF5C7D8444B87F15CBC_RuntimeMethod_var);
			goto IL_01ed;
		}

IL_005d:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = __this->get_U3CU3Eu__1_5();
			V_2 = L_10;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_11 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0079:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// float timeStarted = Time.time;
			float L_13;
			L_13 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
			__this->set_U3CtimeStartedU3E5__2_4(L_13);
			goto IL_014b;
		}

IL_0090:
		{
			// float normalizedProgress = Mathf.Clamp01((Time.time - timeStarted) / loadingTime);
			float L_14;
			L_14 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
			float L_15 = __this->get_U3CtimeStartedU3E5__2_4();
			ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * L_16 = V_1;
			NullCheck(L_16);
			float L_17 = L_16->get_loadingTime_11();
			float L_18;
			L_18 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_15))/(float)L_17)), /*hidden argument*/NULL);
			V_3 = L_18;
			// indicator.Progress = normalizedProgress;
			RuntimeObject* L_19 = __this->get_indicator_2();
			float L_20 = V_3;
			NullCheck(L_19);
			InterfaceActionInvoker1< float >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Progress(System.Single) */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_19, L_20);
			// indicator.Message = loadingMessages[Mathf.FloorToInt(normalizedProgress * loadingMessages.Length)];
			RuntimeObject* L_21 = __this->get_indicator_2();
			ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * L_22 = V_1;
			NullCheck(L_22);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22->get_loadingMessages_10();
			float L_24 = V_3;
			ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * L_25 = V_1;
			NullCheck(L_25);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25->get_loadingMessages_10();
			NullCheck(L_26);
			int32_t L_27;
			L_27 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)L_24, (float)((float)((float)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))), /*hidden argument*/NULL);
			NullCheck(L_23);
			int32_t L_28 = L_27;
			String_t* L_29 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			NullCheck(L_21);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::set_Message(System.String) */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_21, L_29);
			// await Task.Yield();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA  L_30;
			L_30 = Task_Yield_m1E79F65972D82906B8BBE9980C57E29538D3E94B(/*hidden argument*/NULL);
			V_5 = L_30;
			YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_31;
			L_31 = YieldAwaitable_GetAwaiter_m8AA7D8DCF790EB9BDBDD5F0D8BBA0404C6F7DCD8((YieldAwaitable_t95CCA9EB9730CADF5A3BEF9845E12FF467F594FA *)(&V_5), /*hidden argument*/NULL);
			V_4 = L_31;
			bool L_32;
			L_32 = YieldAwaiter_get_IsCompleted_mAB52777C6F31F3FBAD7E6A7CD90EDF40F220CBBC((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			if (L_32)
			{
				goto IL_0131;
			}
		}

IL_00f0:
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->set_U3CU3E1__state_0(L_33);
			YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_34 = V_4;
			__this->set_U3CU3Eu__2_6(L_34);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_mDB40437247E5C7364361AC7CB8D36D83D1B63CF0((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_35, (YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), (U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_mDB40437247E5C7364361AC7CB8D36D83D1B63CF0_RuntimeMethod_var);
			goto IL_01ed;
		}

IL_0114:
		{
			YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE  L_36 = __this->get_U3CU3Eu__2_6();
			V_4 = L_36;
			YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE * L_37 = __this->get_address_of_U3CU3Eu__2_6();
			il2cpp_codegen_initobj(L_37, sizeof(YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE ));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->set_U3CU3E1__state_0(L_38);
		}

IL_0131:
		{
			YieldAwaiter_GetResult_mE9F670767330EAF32ED76882EB8B152FF62CCDBD((YieldAwaiter_t32B66444215FB828BBC8DF4984069FBDA1DC12FE *)(&V_4), /*hidden argument*/NULL);
			// switch (indicator.State)
			RuntimeObject* L_39 = __this->get_indicator_2();
			NullCheck(L_39);
			int32_t L_40;
			L_40 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.UI.ProgressIndicatorState Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::get_State() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_39);
			if ((((int32_t)L_40) == ((int32_t)2)))
			{
				goto IL_014b;
			}
		}

IL_0146:
		{
			// return;
			goto IL_01da;
		}

IL_014b:
		{
			// while (Time.time < timeStarted + loadingTime)
			float L_41;
			L_41 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
			float L_42 = __this->get_U3CtimeStartedU3E5__2_4();
			ProgressIndicatorDemo_t5B2BC1D2B599A00AC24FDF7011F90B997679919A * L_43 = V_1;
			NullCheck(L_43);
			float L_44 = L_43->get_loadingTime_11();
			if ((((float)L_41) < ((float)((float)il2cpp_codegen_add((float)L_42, (float)L_44)))))
			{
				goto IL_0090;
			}
		}

IL_0162:
		{
			// await indicator.CloseAsync();
			RuntimeObject* L_45 = __this->get_indicator_2();
			NullCheck(L_45);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_46;
			L_46 = InterfaceFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(6 /* System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.UI.IProgressIndicator::CloseAsync() */, IProgressIndicator_t1BE57319C65BF0FBB3A5490A09E6B7E527F2ADBF_il2cpp_TypeInfo_var, L_45);
			NullCheck(L_46);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_47;
			L_47 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_46, /*hidden argument*/NULL);
			V_2 = L_47;
			bool L_48;
			L_48 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_48)
			{
				goto IL_01b8;
			}
		}

IL_017c:
		{
			int32_t L_49 = 2;
			V_0 = L_49;
			__this->set_U3CU3E1__state_0(L_49);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_50 = V_2;
			__this->set_U3CU3Eu__1_5(L_50);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_51 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_m2DF4353E1A21001701552DF5C7D8444B87F15CBC((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_51, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D_m2DF4353E1A21001701552DF5C7D8444B87F15CBC_RuntimeMethod_var);
			goto IL_01ed;
		}

IL_019c:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_52 = __this->get_U3CU3Eu__1_5();
			V_2 = L_52;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_53 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_53, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->set_U3CU3E1__state_0(L_54);
		}

IL_01b8:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_01da;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c1;
		}
		throw e;
	}

CATCH_01c1:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_56 = V_6;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_55, L_56, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ed;
	} // end catch (depth: 1)

IL_01da:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_57 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_57, /*hidden argument*/NULL);
	}

IL_01ed:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenProgressIndicatorU3Ed__17_MoveNext_m1BD23385324B99F28EA5A32496561FA695B5F61A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * _thisAdjusted = reinterpret_cast<U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D *>(__this + _offset);
	U3COpenProgressIndicatorU3Ed__17_MoveNext_m1BD23385324B99F28EA5A32496561FA695B5F61A(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ProgressIndicatorDemo/<OpenProgressIndicator>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenProgressIndicatorU3Ed__17_SetStateMachine_mA9B346FEC4EADA24B0E0784703212DFFD1215ACF (U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenProgressIndicatorU3Ed__17_SetStateMachine_mA9B346FEC4EADA24B0E0784703212DFFD1215ACF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D * _thisAdjusted = reinterpret_cast<U3COpenProgressIndicatorU3Ed__17_tD43B79F32B34FD73453C53FE90848473167FD11D *>(__this + _offset);
	U3COpenProgressIndicatorU3Ed__17_SetStateMachine_mA9B346FEC4EADA24B0E0784703212DFFD1215ACF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TargetGroupEventHandler_tADA9DB167181E88AB2921A6D5E3F9EC0700A0D9A (TargetGroupEventHandler_tADA9DB167181E88AB2921A6D5E3F9EC0700A0D9A * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TargetGroupIterator/TargetGroupEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGroupEventHandler__ctor_m997C89086AD15A00E869AB6E434D653AF34D993E (TargetGroupEventHandler_tADA9DB167181E88AB2921A6D5E3F9EC0700A0D9A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TargetGroupIterator/TargetGroupEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGroupEventHandler_Invoke_mBEB04FD68BFAE54AA1D98E5277F2B9EB9DF0096A (TargetGroupEventHandler_tADA9DB167181E88AB2921A6D5E3F9EC0700A0D9A * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TargetGroupIterator/TargetGroupEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetGroupEventHandler_BeginInvoke_m46C2DAF130C84AB4AA790519A6CAA0E64051AFE1 (TargetGroupEventHandler_tADA9DB167181E88AB2921A6D5E3F9EC0700A0D9A * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TargetGroupIterator/TargetGroupEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetGroupEventHandler_EndInvoke_m7164986017E581F23F4E12B26827CED82D85D441 (TargetGroupEventHandler_tADA9DB167181E88AB2921A6D5E3F9EC0700A0D9A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddToCounterU3Ed__44__ctor_mC4B3BCCCF949C0BAF5F66E437C38954E177E500E (U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddToCounterU3Ed__44_System_IDisposable_Dispose_mD3303648584768F0BE84E38A10E6D2358B72D511 (U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAddToCounterU3Ed__44_MoveNext_m453A54E1D482866BDDF7602492A710C1F2D31256 (U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0046;
	}

IL_0019:
	{
		// yield return new WaitForSeconds(time);
		float L_3 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0033:
	{
		__this->set_U3CU3E1__state_0((-1));
		// counter++;
		IL2CPP_RUNTIME_CLASS_INIT(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var);
		int32_t L_5 = ((UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_StaticFields*)il2cpp_codegen_static_fields_for(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var))->get_counter_16();
		((UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_StaticFields*)il2cpp_codegen_static_fields_for(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var))->set_counter_16(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_0046:
	{
		// while (counter < 100)
		IL2CPP_RUNTIME_CLASS_INIT(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var);
		int32_t L_6 = ((UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_StaticFields*)il2cpp_codegen_static_fields_for(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var))->get_counter_16();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)100))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAddToCounterU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7EC981668509CD31D32AB48230F40F16415C6C34 (U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddToCounterU3Ed__44_System_Collections_IEnumerator_Reset_mF63C30885BB8BF2D12A452E0152B216737529A33 (U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAddToCounterU3Ed__44_System_Collections_IEnumerator_Reset_mF63C30885BB8BF2D12A452E0152B216737529A33_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<AddToCounter>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAddToCounterU3Ed__44_System_Collections_IEnumerator_get_Current_mE233AE8D42A08801E4AC5CCD7721E66B1C2BCC1C (U3CAddToCounterU3Ed__44_tE240E69CB4FF5F373BAEF629C455073184729490 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadInUWPU3Ed__21_MoveNext_m43043EEB6C1601ECF81ABB1FD6933A79D82F134B (U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A_mDED6E975F5A79315E320E3416893F9999A1B559D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29AD5A3F08771FA8BF05FD9F1B89DC9A669DA799);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * V_1 = NULL;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0061;
			}
		}

IL_0011:
		{
			// txt_LoadingUpdate.text = "[Load.1] " + FileName;
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_3 = V_1;
			NullCheck(L_3);
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_4 = L_3->get_txt_LoadingUpdate_15();
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_5 = V_1;
			NullCheck(L_5);
			String_t* L_6;
			L_6 = UserInputPlayback_get_FileName_m8D74BE21E7A22F5B0E1FD238B85BA9B173209F1B(L_5, /*hidden argument*/NULL);
			String_t* L_7;
			L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral29AD5A3F08771FA8BF05FD9F1B89DC9A669DA799, L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_4, L_7, /*hidden argument*/NULL);
			// await UWP_Load();
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_8 = V_1;
			NullCheck(L_8);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_9;
			L_9 = UserInputPlayback_UWP_Load_m2B55367B83F51DF8C569F21506D151C0E80973C0(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_10;
			L_10 = Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041(L_9, /*hidden argument*/Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_007d;
			}
		}

IL_0041:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_13 = V_2;
			__this->set_U3CU3Eu__1_3(L_13);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A_mDED6E975F5A79315E320E3416893F9999A1B559D((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_14, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_2), (U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A_mDED6E975F5A79315E320E3416893F9999A1B559D_RuntimeMethod_var);
			goto IL_00b1;
		}

IL_0061:
		{
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_15 = __this->get_U3CU3Eu__1_3();
			V_2 = L_15;
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_16 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_007d:
		{
			bool L_18;
			L_18 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0087;
		}
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b1;
	} // end catch (depth: 1)

IL_009e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadInUWPU3Ed__21_MoveNext_m43043EEB6C1601ECF81ABB1FD6933A79D82F134B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A * _thisAdjusted = reinterpret_cast<U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A *>(__this + _offset);
	U3CLoadInUWPU3Ed__21_MoveNext_m43043EEB6C1601ECF81ABB1FD6933A79D82F134B(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<LoadInUWP>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadInUWPU3Ed__21_SetStateMachine_m7F5529D96FD69AE974D6B8E3417740D88B06C266 (U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadInUWPU3Ed__21_SetStateMachine_m7F5529D96FD69AE974D6B8E3417740D88B06C266_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A * _thisAdjusted = reinterpret_cast<U3CLoadInUWPU3Ed__21_t0C5A8DA3F3C24251B22AB7745680A2723BB11E1A *>(__this + _offset);
	U3CLoadInUWPU3Ed__21_SetStateMachine_m7F5529D96FD69AE974D6B8E3417740D88B06C266(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPopulateHeatmapU3Ed__42__ctor_mD7F558F041990420DF91A544D2EC0E4A12569DF7 (U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPopulateHeatmapU3Ed__42_System_IDisposable_Dispose_m968703DCCF8F30F6E5AB40CA817BD294700AE49C (U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPopulateHeatmapU3Ed__42_MoveNext_m5A43B1C0A8D1E446A94BB3B299D35C562E9580B2 (U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6BDB542648A790323BB08E42C49A35F41A2597A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m835105DEBBBEF6790FBC514E43553969894E5976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * V_1 = NULL;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00f3;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float maxTargetingDistInMeters = 10f;
		__this->set_U3CmaxTargetingDistInMetersU3E5__2_3((10.0f));
		// for (int i = 0; i < loggedLines.Count; i++)
		__this->set_U3CiU3E5__3_4(0);
		goto IL_010c;
	}

IL_0038:
	{
		// Ray? currentPointingRay = GetEyeRay(loggedLines[i].Split(System.Globalization.CultureInfo.CurrentCulture.TextInfo.ListSeparator.ToCharArray()));
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_4 = V_1;
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_5 = V_1;
		NullCheck(L_5);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = L_5->get_loggedLines_8();
		int32_t L_7 = __this->get_U3CiU3E5__3_4();
		NullCheck(L_6);
		String_t* L_8;
		L_8 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_9;
		L_9 = CultureInfo_get_CurrentCulture_m99E5F5BD20445F2A73F7EA0014A4E783DF3840BB(/*hidden argument*/NULL);
		NullCheck(L_9);
		TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * L_10;
		L_10 = VirtFuncInvoker0< TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * >::Invoke(10 /* System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo() */, L_9);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Globalization.TextInfo::get_ListSeparator() */, L_10);
		NullCheck(L_11);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12;
		L_12 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13;
		L_13 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_4);
		Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  L_14;
		L_14 = UserInputPlayback_GetEyeRay_m8B68E9E5EBE2F05410292AAF1B6623B36A6013AD(L_4, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// if (currentPointingRay.HasValue)
		bool L_15;
		L_15 = Nullable_1_get_HasValue_m6BDB542648A790323BB08E42C49A35F41A2597A4_inline((Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m6BDB542648A790323BB08E42C49A35F41A2597A4_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_00fa;
		}
	}
	{
		// if (UnityEngine.Physics.Raycast(currentPointingRay.Value, out hit, maxTargetingDistInMeters))
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_16;
		L_16 = Nullable_1_get_Value_m835105DEBBBEF6790FBC514E43553969894E5976((Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_m835105DEBBBEF6790FBC514E43553969894E5976_RuntimeMethod_var);
		float L_17 = __this->get_U3CmaxTargetingDistInMetersU3E5__2_3();
		bool L_18;
		L_18 = Physics_Raycast_mA64F8C30681E3A6A8F2B7EDE592FE7BBC0D354F4(L_16, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00d8;
		}
	}
	{
		// for (int hi = 0; hi < heatmapRefs.Length; hi++)
		V_4 = 0;
		goto IL_00cc;
	}

IL_0090:
	{
		// if (heatmapRefs[hi].gameObject == hit.collider.gameObject)
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_19 = V_1;
		NullCheck(L_19);
		DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371* L_20 = L_19->get_heatmapRefs_7();
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_25;
		L_25 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_24, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00c6;
		}
	}
	{
		// heatmapRefs[hi].DrawAtThisHitPos(hit.point);
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_28 = V_1;
		NullCheck(L_28);
		DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371* L_29 = L_28->get_heatmapRefs_7();
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		DrawOnTexture_tCB7DA0CD8699346B55FD0C804BCFC40E440A1B57 * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_32);
		DrawOnTexture_DrawAtThisHitPos_m047A7C6A53B8D4ECEE1DEDCC8F3DA70212912A1C(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// for (int hi = 0; hi < heatmapRefs.Length; hi++)
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00cc:
	{
		// for (int hi = 0; hi < heatmapRefs.Length; hi++)
		int32_t L_35 = V_4;
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_36 = V_1;
		NullCheck(L_36);
		DrawOnTextureU5BU5D_t47CD4BC85B84A2A12BD3ED8A684FAD5759629371* L_37 = L_36->get_heatmapRefs_7();
		NullCheck(L_37);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_0090;
		}
	}

IL_00d8:
	{
		// counter = i;
		int32_t L_38 = __this->get_U3CiU3E5__3_4();
		IL2CPP_RUNTIME_CLASS_INIT(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var);
		((UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_StaticFields*)il2cpp_codegen_static_fields_for(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var))->set_counter_16(L_38);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f3:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00fa:
	{
		// for (int i = 0; i < loggedLines.Count; i++)
		int32_t L_39 = __this->get_U3CiU3E5__3_4();
		V_5 = L_39;
		int32_t L_40 = V_5;
		__this->set_U3CiU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)));
	}

IL_010c:
	{
		// for (int i = 0; i < loggedLines.Count; i++)
		int32_t L_41 = __this->get_U3CiU3E5__3_4();
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_42 = V_1;
		NullCheck(L_42);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_43 = L_42->get_loggedLines_8();
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_43, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_41) < ((int32_t)L_44)))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPopulateHeatmapU3Ed__42_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEBA75C228FBBCD232FA4C0E03AE58697C7893E34 (U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPopulateHeatmapU3Ed__42_System_Collections_IEnumerator_Reset_m7222AD3D3A78DFF63D494B95D7A11907B60AE9F4 (U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPopulateHeatmapU3Ed__42_System_Collections_IEnumerator_Reset_m7222AD3D3A78DFF63D494B95D7A11907B60AE9F4_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<PopulateHeatmap>d__42::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPopulateHeatmapU3Ed__42_System_Collections_IEnumerator_get_Current_m3D1E82CFFE98A8F15C08C42151C37B3270E0FB93 (U3CPopulateHeatmapU3Ed__42_tA4185B327544CDB60CB38E3D13E31BF7152BA4BD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_FileExistsU3Ed__14_MoveNext_m45168326C1D3F26DA0853F2BB2770F5A2175DA0C (U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_mA99C00B6BB0886A783692C3975C43D2629AE1AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_m2B2D88714FF0D6BE5937E0A7098D44E0BF13AB09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mE4F41CE31D3E252959644A6BABE45D01407ECE7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE47B5307B43FF938B2621B09EADA700921D70958_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA_m9383D8502CB13161D8B8BB0F5F1FA2748F717C83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * V_1 = NULL;
	bool V_2 = false;
	StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * V_3 = NULL;
	TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * V_5 = NULL;
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0013:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0062;
				}
			}

IL_0016:
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_00d0;
				}
			}

IL_001d:
			{
				// uwpLogSessionFolder = await uwpRootFolder.GetFolderAsync(dir);
				UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_5 = V_1;
				NullCheck(L_5);
				StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * L_6 = L_5->get_uwpRootFolder_9();
				String_t* L_7 = __this->get_dir_3();
				NullCheck(L_6);
				RuntimeObject* L_8;
				L_8 = StorageFolder_GetFolderAsync_m7A9CFAC70B3EBA59BBA3C3A315708F2E0B6BDFF6(L_6, L_7, /*hidden argument*/NULL);
				TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D  L_9;
				L_9 = WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA_m9383D8502CB13161D8B8BB0F5F1FA2748F717C83(L_8, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA_m9383D8502CB13161D8B8BB0F5F1FA2748F717C83_RuntimeMethod_var);
				V_4 = L_9;
				bool L_10;
				L_10 = TaskAwaiter_1_get_IsCompleted_mE47B5307B43FF938B2621B09EADA700921D70958((TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mE47B5307B43FF938B2621B09EADA700921D70958_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_007f;
				}
			}

IL_003e:
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->set_U3CU3E1__state_0(L_11);
				TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D  L_12 = V_4;
				__this->set_U3CU3Eu__1_5(L_12);
				AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_mA99C00B6BB0886A783692C3975C43D2629AE1AB3((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_13, (TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D *)(&V_4), (U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_mA99C00B6BB0886A783692C3975C43D2629AE1AB3_RuntimeMethod_var);
				goto IL_0146;
			}

IL_0062:
			{
				TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D  L_14 = __this->get_U3CU3Eu__1_5();
				V_4 = L_14;
				TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D * L_15 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D ));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
			}

IL_007f:
			{
				StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * L_17;
				L_17 = TaskAwaiter_1_GetResult_mE4F41CE31D3E252959644A6BABE45D01407ECE7E((TaskAwaiter_1_tA5AE3F7A9DC283518CE336A25167964375351F0D *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_mE4F41CE31D3E252959644A6BABE45D01407ECE7E_RuntimeMethod_var);
				V_3 = L_17;
				UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_18 = V_1;
				StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * L_19 = V_3;
				NullCheck(L_18);
				L_18->set_uwpLogSessionFolder_12(L_19);
				// uwpLogFile = await uwpLogSessionFolder.GetFileAsync(filename);
				UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_20 = V_1;
				NullCheck(L_20);
				StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * L_21 = L_20->get_uwpLogSessionFolder_12();
				String_t* L_22 = __this->get_filename_4();
				NullCheck(L_21);
				RuntimeObject* L_23;
				L_23 = StorageFolder_GetFileAsync_m715BC760BBF9EC190D04B972D4A18E81015AE1B2(L_21, L_22, /*hidden argument*/NULL);
				TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_24;
				L_24 = WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65(L_23, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
				V_6 = L_24;
				bool L_25;
				L_25 = TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_6), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_00ed;
				}
			}

IL_00af:
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->set_U3CU3E1__state_0(L_26);
				TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_27 = V_6;
				__this->set_U3CU3Eu__2_6(L_27);
				AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_m2B2D88714FF0D6BE5937E0A7098D44E0BF13AB09((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_28, (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_6), (U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086_m2B2D88714FF0D6BE5937E0A7098D44E0BF13AB09_RuntimeMethod_var);
				goto IL_0146;
			}

IL_00d0:
			{
				TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_29 = __this->get_U3CU3Eu__2_6();
				V_6 = L_29;
				TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * L_30 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 ));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->set_U3CU3E1__state_0(L_31);
			}

IL_00ed:
			{
				StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_32;
				L_32 = TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_6), /*hidden argument*/TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
				V_5 = L_32;
				UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_33 = V_1;
				StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_34 = V_5;
				NullCheck(L_33);
				L_33->set_uwpLogFile_13(L_34);
				// return true;
				V_2 = (bool)1;
				goto IL_0132;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0102;
			}
			throw e;
		}

CATCH_0102:
		{ // begin catch(System.Object)
			// catch
			// txt_LoadingUpdate.text = "Error: File could not be found.";
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_35 = V_1;
			NullCheck(L_35);
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_36 = L_35->get_txt_LoadingUpdate_15();
			NullCheck(L_36);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AE3B5F4C0F79FED89F97615079E77D3D7B4303C)), /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0115;
		} // end catch (depth: 2)

IL_0115:
		{
			// return false;
			V_2 = (bool)0;
			goto IL_0132;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_37 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_38 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_37, L_38, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0146;
	} // end catch (depth: 1)

IL_0132:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_39 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_40 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_39, L_40, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_0146:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUWP_FileExistsU3Ed__14_MoveNext_m45168326C1D3F26DA0853F2BB2770F5A2175DA0C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 * _thisAdjusted = reinterpret_cast<U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 *>(__this + _offset);
	U3CUWP_FileExistsU3Ed__14_MoveNext_m45168326C1D3F26DA0853F2BB2770F5A2175DA0C(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_FileExists>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_FileExistsU3Ed__14_SetStateMachine_m0E7C98FD2BBBB9620A93E4779B89C2437C450B25 (U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUWP_FileExistsU3Ed__14_SetStateMachine_m0E7C98FD2BBBB9620A93E4779B89C2437C450B25_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 * _thisAdjusted = reinterpret_cast<U3CUWP_FileExistsU3Ed__14_tDF269D19F0CF90409048A6DA2B85482220D8E086 *>(__this + _offset);
	U3CUWP_FileExistsU3Ed__14_SetStateMachine_m0E7C98FD2BBBB9620A93E4779B89C2437C450B25(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_LoadU3Ed__12_MoveNext_mF50633445CA445C15EB96BCBFEE6B0D0EAE5750B (U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B_m1BE6A5E787A9402F6356D758BD1F432BB2B0E4EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * V_1 = NULL;
	bool V_2 = false;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_1 = __this->get_U3CU3E4__this_2();
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
			// return await UWP_LoadNewFile(FileName);
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_3 = V_1;
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = UserInputPlayback_get_FileName_m8D74BE21E7A22F5B0E1FD238B85BA9B173209F1B(L_4, /*hidden argument*/NULL);
			NullCheck(L_3);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_6;
			L_6 = UserInputPlayback_UWP_LoadNewFile_m7796B983149F6B8E3AEBFFC316F60F8395AA65F7(L_3, L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_7;
			L_7 = Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041(L_6, /*hidden argument*/Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
			V_3 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
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
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_10 = V_3;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B_m1BE6A5E787A9402F6356D758BD1F432BB2B0E4EA((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_11, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B_m1BE6A5E787A9402F6356D758BD1F432BB2B0E4EA_RuntimeMethod_var);
			goto IL_009f;
		}

IL_004c:
		{
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_12 = __this->get_U3CU3Eu__1_3();
			V_3 = L_12;
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0068:
		{
			bool L_15;
			L_15 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
			V_2 = L_15;
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0072;
		}
		throw e;
	}

CATCH_0072:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_16, L_17, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009f;
	} // end catch (depth: 1)

IL_008b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_19 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_18, L_19, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_009f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUWP_LoadU3Ed__12_MoveNext_mF50633445CA445C15EB96BCBFEE6B0D0EAE5750B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B * _thisAdjusted = reinterpret_cast<U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B *>(__this + _offset);
	U3CUWP_LoadU3Ed__12_MoveNext_mF50633445CA445C15EB96BCBFEE6B0D0EAE5750B(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_Load>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_LoadU3Ed__12_SetStateMachine_m591DA891C7D71B6BE2A2BEF8B43C3085CA166AD0 (U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUWP_LoadU3Ed__12_SetStateMachine_m591DA891C7D71B6BE2A2BEF8B43C3085CA166AD0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B * _thisAdjusted = reinterpret_cast<U3CUWP_LoadU3Ed__12_tC64653DBC2D3B233EC5106511C1D4FEA9681F82B *>(__this + _offset);
	U3CUWP_LoadU3Ed__12_SetStateMachine_m591DA891C7D71B6BE2A2BEF8B43C3085CA166AD0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_LoadNewFileU3Ed__13_MoveNext_mB09A0EF138A0B6388ACD97A9551D04E6A72180F2 (U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF_m09270548B6580199EFD9E06B86179A850115AB92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral628007651272EB1016499869891794E1C06E1F19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D69B906D45DB4D22636DAB2CB07DCE4C8F97F52);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * V_1 = NULL;
	bool V_2 = false;
	TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0062;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00dd;
			}
		}

IL_0018:
		{
			// ResetCurrentStream();
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_4 = V_1;
			NullCheck(L_4);
			UserInputPlayback_ResetCurrentStream_mBD6BAE2CF723C8C32AABD93EF19BE24D7DA2B52D(L_4, /*hidden argument*/NULL);
			// bool fileExists = await UWP_FileExists(uwpSubFolderName, uwpFileName);
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_5 = V_1;
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7 = L_6->get_uwpSubFolderName_10();
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = L_8->get_uwpFileName_11();
			NullCheck(L_5);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_10;
			L_10 = UserInputPlayback_UWP_FileExists_mB5CAD0835C681AC363FE9A4B5330CDC6121B8BAB(L_5, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_11;
			L_11 = Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041(L_10, /*hidden argument*/Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
			V_3 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_007e;
			}
		}

IL_003f:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_14 = V_3;
			__this->set_U3CU3Eu__1_3(L_14);
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF_m09270548B6580199EFD9E06B86179A850115AB92((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_15, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF_m09270548B6580199EFD9E06B86179A850115AB92_RuntimeMethod_var);
			goto IL_0153;
		}

IL_0062:
		{
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_16 = __this->get_U3CU3Eu__1_3();
			V_3 = L_16;
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_17 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_007e:
		{
			bool L_19;
			L_19 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
			// if (fileExists)
			if (!L_19)
			{
				goto IL_0103;
			}
		}

IL_0087:
		{
			// txt_LoadingUpdate.text = "File exists: " + uwpFileName;
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_20 = V_1;
			NullCheck(L_20);
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_21 = L_20->get_txt_LoadingUpdate_15();
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_22 = V_1;
			NullCheck(L_22);
			String_t* L_23 = L_22->get_uwpFileName_11();
			String_t* L_24;
			L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral628007651272EB1016499869891794E1C06E1F19, L_23, /*hidden argument*/NULL);
			NullCheck(L_21);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_21, L_24, /*hidden argument*/NULL);
			// await UWP_ReadData(uwpLogFile);
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_25 = V_1;
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_26 = V_1;
			NullCheck(L_26);
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_27 = L_26->get_uwpLogFile_13();
			NullCheck(L_25);
			Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_28;
			L_28 = UserInputPlayback_UWP_ReadData_mB31485383089D9766D0B24E497A9B9F37E3E5E35(L_25, L_27, /*hidden argument*/NULL);
			NullCheck(L_28);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_29;
			L_29 = Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041(L_28, /*hidden argument*/Task_1_GetAwaiter_mA945C31B85664599610D79372896FAA63ABC4041_RuntimeMethod_var);
			V_3 = L_29;
			bool L_30;
			L_30 = TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3BF8395A9A848CE3DB5F44124578B6F930217EB1_RuntimeMethod_var);
			if (L_30)
			{
				goto IL_00f9;
			}
		}

IL_00bd:
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			__this->set_U3CU3E1__state_0(L_31);
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_32 = V_3;
			__this->set_U3CU3Eu__1_3(L_32);
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_33 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF_m09270548B6580199EFD9E06B86179A850115AB92((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_33, (TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), (U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C_TisU3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF_m09270548B6580199EFD9E06B86179A850115AB92_RuntimeMethod_var);
			goto IL_0153;
		}

IL_00dd:
		{
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C  L_34 = __this->get_U3CU3Eu__1_3();
			V_3 = L_34;
			TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C * L_35 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_35, sizeof(TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C ));
			int32_t L_36 = (-1);
			V_0 = L_36;
			__this->set_U3CU3E1__state_0(L_36);
		}

IL_00f9:
		{
			bool L_37;
			L_37 = TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE((TaskAwaiter_1_t98B8214BA5C5BD14FD8D98B71C67E11FFE8B684C *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m3694F573A6701524D11B729BB9430EEADD64F6DE_RuntimeMethod_var);
			// }
			goto IL_0122;
		}

IL_0103:
		{
			// txt_LoadingUpdate.text = "Error: File does not exist! " + uwpFileName;
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_38 = V_1;
			NullCheck(L_38);
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_39 = L_38->get_txt_LoadingUpdate_15();
			UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_40 = V_1;
			NullCheck(L_40);
			String_t* L_41 = L_40->get_uwpFileName_11();
			String_t* L_42;
			L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8D69B906D45DB4D22636DAB2CB07DCE4C8F97F52, L_41, /*hidden argument*/NULL);
			NullCheck(L_39);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_39, L_42, /*hidden argument*/NULL);
			// return false;
			V_2 = (bool)0;
			goto IL_013f;
		}

IL_0122:
		{
			// return true;
			V_2 = (bool)1;
			goto IL_013f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0126;
		}
		throw e;
	}

CATCH_0126:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_44 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_43, L_44, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0153;
	} // end catch (depth: 1)

IL_013f:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_46 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_45, L_46, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_0153:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUWP_LoadNewFileU3Ed__13_MoveNext_mB09A0EF138A0B6388ACD97A9551D04E6A72180F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF * _thisAdjusted = reinterpret_cast<U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF *>(__this + _offset);
	U3CUWP_LoadNewFileU3Ed__13_MoveNext_mB09A0EF138A0B6388ACD97A9551D04E6A72180F2(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_LoadNewFile>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_LoadNewFileU3Ed__13_SetStateMachine_m0662CBA1196DF3F7A847D11CC714071670225D45 (U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUWP_LoadNewFileU3Ed__13_SetStateMachine_m0662CBA1196DF3F7A847D11CC714071670225D45_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF * _thisAdjusted = reinterpret_cast<U3CUWP_LoadNewFileU3Ed__13_tC78F528EC88C7826CC5C1EDD7AE5B66E4F6EEBBF *>(__this + _offset);
	U3CUWP_LoadNewFileU3Ed__13_SetStateMachine_m0662CBA1196DF3F7A847D11CC714071670225D45(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_ReadDataU3Ed__15_MoveNext_mC1061B1A4D9E4ECF16413DCB85C41EC0C215C381 (U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D_TisU3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E_mEEAAA5E39CF4806E3252F05481BAEA779F530A6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m15BA772D121DD3C64FD1871A698B1E43CAD64E1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m941E3E5867D824F4ADEC5C12568144998E4E7211_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisIRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E_m7E056F4914642D21A3B0793D6567D722662E31D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C739F2EBF0A6D79E33E75C4206FE5C901DD1ABC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_5 = NULL;
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// using (var inputStream = await logfile.OpenReadAsync())
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_3 = __this->get_logfile_2();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = StorageFile_OpenReadAsync_m6B32192BEA546DE0FEDC6868639DE71DA4E3C7D6(L_3, /*hidden argument*/NULL);
			TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D  L_5;
			L_5 = WindowsRuntimeSystemExtensions_GetAwaiter_TisIRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E_m7E056F4914642D21A3B0793D6567D722662E31D2(L_4, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisIRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E_m7E056F4914642D21A3B0793D6567D722662E31D2_RuntimeMethod_var);
			V_4 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_1_get_IsCompleted_m941E3E5867D824F4ADEC5C12568144998E4E7211((TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m941E3E5867D824F4ADEC5C12568144998E4E7211_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_006d;
			}
		}

IL_002c:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D  L_8 = V_4;
			__this->set_U3CU3Eu__1_4(L_8);
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D_TisU3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E_mEEAAA5E39CF4806E3252F05481BAEA779F530A6B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_9, (TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D *)(&V_4), (U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D_TisU3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E_mEEAAA5E39CF4806E3252F05481BAEA779F530A6B_RuntimeMethod_var);
			goto IL_012c;
		}

IL_0050:
		{
			TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D  L_10 = __this->get_U3CU3Eu__1_4();
			V_4 = L_10;
			TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D * L_11 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_006d:
		{
			RuntimeObject* L_13;
			L_13 = TaskAwaiter_1_GetResult_m15BA772D121DD3C64FD1871A698B1E43CAD64E1B((TaskAwaiter_1_tE653183DA810CBA942819B1D9E01DD633E43240D *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m15BA772D121DD3C64FD1871A698B1E43CAD64E1B_RuntimeMethod_var);
			V_3 = L_13;
		}

IL_0075:
		try
		{ // begin try (depth: 2)
			{
				// using (var classicStream = inputStream.AsStreamForRead())
				RuntimeObject* L_14 = V_3;
				IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_15;
				L_15 = WindowsRuntimeStreamExtensions_AsStreamForRead_mBA8F061F0579EB69C41FB9499C4F4D2FD6C357E4(L_14, /*hidden argument*/NULL);
				V_5 = L_15;
			}

IL_007d:
			try
			{ // begin try (depth: 3)
				{
					// using (var streamReader = new StreamReader(classicStream))
					Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_16 = V_5;
					StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_17 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
					StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905(L_17, L_16, /*hidden argument*/NULL);
					V_6 = L_17;
				}

IL_0086:
				try
				{ // begin try (depth: 4)
					{
						goto IL_009a;
					}

IL_0088:
					{
						// loggedLines.Add(streamReader.ReadLine());
						UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_18 = V_1;
						NullCheck(L_18);
						List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_19 = L_18->get_loggedLines_8();
						StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_20 = V_6;
						NullCheck(L_20);
						String_t* L_21;
						L_21 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_20);
						NullCheck(L_19);
						List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_19, L_21, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
					}

IL_009a:
					{
						// while (streamReader.Peek() >= 0)
						StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_22 = V_6;
						NullCheck(L_22);
						int32_t L_23;
						L_23 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_22);
						if ((((int32_t)L_23) >= ((int32_t)0)))
						{
							goto IL_0088;
						}
					}

IL_00a4:
					{
						// txt_LoadingUpdate.text = "Finished loading log file. Lines: " + loggedLines.Count;
						UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_24 = V_1;
						NullCheck(L_24);
						TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_25 = L_24->get_txt_LoadingUpdate_15();
						UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_26 = V_1;
						NullCheck(L_26);
						List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_27 = L_26->get_loggedLines_8();
						NullCheck(L_27);
						int32_t L_28;
						L_28 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_27, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
						V_7 = L_28;
						String_t* L_29;
						L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_7), /*hidden argument*/NULL);
						String_t* L_30;
						L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0C739F2EBF0A6D79E33E75C4206FE5C901DD1ABC, L_29, /*hidden argument*/NULL);
						NullCheck(L_25);
						TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_25, L_30, /*hidden argument*/NULL);
						// return true;
						V_2 = (bool)1;
						IL2CPP_LEAVE(0x118, FINALLY_00d1);
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_00d1;
				}

FINALLY_00d1:
				{ // begin finally (depth: 4)
					{
						int32_t L_31 = V_0;
						if ((((int32_t)L_31) >= ((int32_t)0)))
						{
							goto IL_00e0;
						}
					}

IL_00d5:
					{
						StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_32 = V_6;
						if (!L_32)
						{
							goto IL_00e0;
						}
					}

IL_00d9:
					{
						StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_33 = V_6;
						NullCheck(L_33);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_33);
					}

IL_00e0:
					{
						IL2CPP_END_FINALLY(209)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(209)
				{
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
					IL2CPP_END_CLEANUP(0x118, FINALLY_00e1);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_00e1;
			}

FINALLY_00e1:
			{ // begin finally (depth: 3)
				{
					int32_t L_34 = V_0;
					if ((((int32_t)L_34) >= ((int32_t)0)))
					{
						goto IL_00f0;
					}
				}

IL_00e5:
				{
					Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_35 = V_5;
					if (!L_35)
					{
						goto IL_00f0;
					}
				}

IL_00e9:
				{
					Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_36 = V_5;
					NullCheck(L_36);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_36);
				}

IL_00f0:
				{
					IL2CPP_END_FINALLY(225)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(225)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_END_CLEANUP(0x118, FINALLY_00f1);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00f1;
		}

FINALLY_00f1:
		{ // begin finally (depth: 2)
			{
				int32_t L_37 = V_0;
				if ((((int32_t)L_37) >= ((int32_t)0)))
				{
					goto IL_00fe;
				}
			}

IL_00f5:
			{
				RuntimeObject* L_38 = V_3;
				if (!L_38)
				{
					goto IL_00fe;
				}
			}

IL_00f8:
			{
				RuntimeObject* L_39 = V_3;
				NullCheck(L_39);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_39);
			}

IL_00fe:
			{
				IL2CPP_END_FINALLY(241)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(241)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x118, IL_0118)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ff;
		}
		throw e;
	}

CATCH_00ff:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_41 = V_8;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_40, L_41, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_012c;
	} // end catch (depth: 1)

IL_0118:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_42 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_43 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_42, L_43, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_012c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUWP_ReadDataU3Ed__15_MoveNext_mC1061B1A4D9E4ECF16413DCB85C41EC0C215C381_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E * _thisAdjusted = reinterpret_cast<U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E *>(__this + _offset);
	U3CUWP_ReadDataU3Ed__15_MoveNext_mC1061B1A4D9E4ECF16413DCB85C41EC0C215C381(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UWP_ReadData>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUWP_ReadDataU3Ed__15_SetStateMachine_m254C3E9028A12B79C84A1945BE7B7D5A04D7B183 (U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUWP_ReadDataU3Ed__15_SetStateMachine_m254C3E9028A12B79C84A1945BE7B7D5A04D7B183_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E * _thisAdjusted = reinterpret_cast<U3CUWP_ReadDataU3Ed__15_tF7E7FAE17EF4829ECF8BCC1B2CC2738D32CCD57E *>(__this + _offset);
	U3CUWP_ReadDataU3Ed__15_SetStateMachine_m254C3E9028A12B79C84A1945BE7B7D5A04D7B183(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateStatusU3Ed__43__ctor_mE161EBBFEF609B0F65CD0CE15945C1D1EC6FC4AF (U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateStatusU3Ed__43_System_IDisposable_Dispose_m52E11C9DDCEC6F3629A428A7ADB9CAE81F1470BB (U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateStatusU3Ed__43_MoveNext_m5B4572E9557830322F0748570F651C40F42400FB (U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0057;
	}

IL_0020:
	{
		// UpdateLoadingStatus(counter, loggedLines.Count);
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var);
		int32_t L_5 = ((UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_StaticFields*)il2cpp_codegen_static_fields_for(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var))->get_counter_16();
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_6 = V_1;
		NullCheck(L_6);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = L_6->get_loggedLines_8();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_7, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		NullCheck(L_4);
		UserInputPlayback_UpdateLoadingStatus_m78A0F2B88C23D5545FE0BFDC8416542F523EBF13(L_4, L_5, L_8, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(updateFrequency);
		float L_9 = __this->get_updateFrequency_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0050:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0057:
	{
		// while (counter < loggedLines.Count - 1)
		IL2CPP_RUNTIME_CLASS_INIT(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var);
		int32_t L_11 = ((UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_StaticFields*)il2cpp_codegen_static_fields_for(UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D_il2cpp_TypeInfo_var))->get_counter_16();
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_12 = V_1;
		NullCheck(L_12);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = L_12->get_loggedLines_8();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_13, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))))
		{
			goto IL_0020;
		}
	}
	{
		// LoadingStatus_Hide();
		UserInputPlayback_tF4BBF9C7A3DA1C361FDE5792631B4762FE1A5C7D * L_15 = V_1;
		NullCheck(L_15);
		UserInputPlayback_LoadingStatus_Hide_m757A84635080D2B7A78B6B4174F9E561DD4BE108(L_15, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateStatusU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8074B2EB191D1B18FBBB93DD55185C12E4317327 (U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateStatusU3Ed__43_System_Collections_IEnumerator_Reset_m0AD9A16C4686B50EC28E28CFFF3BF5F2D0D3E5A0 (U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateStatusU3Ed__43_System_Collections_IEnumerator_Reset_m0AD9A16C4686B50EC28E28CFFF3BF5F2D0D3E5A0_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.UserInputPlayback/<UpdateStatus>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateStatusU3Ed__43_System_Collections_IEnumerator_get_Current_mAAE632C13CA80355BC2F8C7B0F9E61C892EFFE1D (U3CUpdateStatusU3Ed__43_tF11588DA081053250CD13FEA45410DCEC1718A14 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunSyncU3Eb__0U3Ed_MoveNext_m4D4B2A2F50874C4C173492BC496BD868518AD19E (U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA_mA8876BD4B59C5659EF7FC678E0B6490C647D2B59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				{
					int32_t L_3 = V_0;
					if (!L_3)
					{
						goto IL_004e;
					}
				}

IL_0014:
				{
					// await task();
					U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735 * L_4 = V_1;
					NullCheck(L_4);
					Func_1_t7BA5B7AB7B38C094BD66F55E720F04C39CAF4AA3 * L_5 = L_4->get_task_0();
					NullCheck(L_5);
					Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
					L_6 = Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF(L_5, /*hidden argument*/Func_1_Invoke_m3B5AC943F23CE7225ACF20C2B4B5E2D3FF1EBDDF_RuntimeMethod_var);
					NullCheck(L_6);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
					L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
					V_2 = L_7;
					bool L_8;
					L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
					if (L_8)
					{
						goto IL_006a;
					}
				}

IL_002e:
				{
					int32_t L_9 = 0;
					V_0 = L_9;
					__this->set_U3CU3E1__state_0(L_9);
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
					__this->set_U3CU3Eu__1_3(L_10);
					AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA_mA8876BD4B59C5659EF7FC678E0B6490C647D2B59((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA_mA8876BD4B59C5659EF7FC678E0B6490C647D2B59_RuntimeMethod_var);
					IL2CPP_LEAVE(0xC2, FINALLY_0084);
				}

IL_004e:
				{
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
					V_2 = L_12;
					TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
					il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
					int32_t L_14 = (-1);
					V_0 = L_14;
					__this->set_U3CU3E1__state_0(L_14);
				}

IL_006a:
				{
					TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
					// }
					goto IL_0082;
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0073;
				}
				throw e;
			}

CATCH_0073:
			{ // begin catch(System.Exception)
				// catch (Exception e)
				V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				// synch.InnerException = e;
				U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735 * L_15 = V_1;
				NullCheck(L_15);
				ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9 * L_16 = L_15->get_synch_1();
				Exception_t * L_17 = V_3;
				NullCheck(L_16);
				ExclusiveSynchronizationContext_set_InnerException_mBDAC674E7236860DE7EE3A2B36A9CFFCD21E5680_inline(L_16, L_17, /*hidden argument*/NULL);
				// throw;
				IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CRunSyncU3Eb__0U3Ed_MoveNext_m4D4B2A2F50874C4C173492BC496BD868518AD19E_RuntimeMethod_var)));
			} // end catch (depth: 3)

IL_0082:
			{
				IL2CPP_LEAVE(0x94, FINALLY_0084);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0084;
		}

FINALLY_0084:
		{ // begin finally (depth: 2)
			{
				int32_t L_18 = V_0;
				if ((((int32_t)L_18) >= ((int32_t)0)))
				{
					goto IL_0093;
				}
			}

IL_0088:
			{
				// synch.EndMessageLoop();
				U3CU3Ec__DisplayClass0_0_t9DE9AA6ED65C16AFD9D57ECB1D2CDE4C56D8C735 * L_19 = V_1;
				NullCheck(L_19);
				ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9 * L_20 = L_19->get_synch_1();
				NullCheck(L_20);
				ExclusiveSynchronizationContext_EndMessageLoop_mDBA1461B9A1A176909AB4849C1D5F2AEE21F3F8A(L_20, /*hidden argument*/NULL);
			}

IL_0093:
			{
				IL2CPP_END_FINALLY(132)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(132)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xC2, IL_00c2)
			IL2CPP_JUMP_TBL(0x94, IL_0094)
		}

IL_0094:
		{
			goto IL_00af;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0096;
		}
		throw e;
	}

CATCH_0096:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_22 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, L_22, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00af:
	{
		// }, null);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_23, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CRunSyncU3Eb__0U3Ed_MoveNext_m4D4B2A2F50874C4C173492BC496BD868518AD19E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA * _thisAdjusted = reinterpret_cast<U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA *>(__this + _offset);
	U3CU3CRunSyncU3Eb__0U3Ed_MoveNext_m4D4B2A2F50874C4C173492BC496BD868518AD19E(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.Logging.AsyncHelpers/<>c__DisplayClass0_0/<<RunSync>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CRunSyncU3Eb__0U3Ed_SetStateMachine_m0B908A49592D587220B0D4F5EDF8DC82DCCC2431 (U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CRunSyncU3Eb__0U3Ed_SetStateMachine_m0B908A49592D587220B0D4F5EDF8DC82DCCC2431_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA * _thisAdjusted = reinterpret_cast<U3CU3CRunSyncU3Eb__0U3Ed_t7A550DC3DC73DA0ED84D0141504672A70FD3CECA *>(__this + _offset);
	U3CU3CRunSyncU3Eb__0U3Ed_SetStateMachine_m0B908A49592D587220B0D4F5EDF8DC82DCCC2431(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExclusiveSynchronizationContext_set_InnerException_mBDAC674E7236860DE7EE3A2B36A9CFFCD21E5680_inline (ExclusiveSynchronizationContext_t23D74B17258269397A6F589558D4B404EF0471D9 * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Exception InnerException { get; set; }
		Exception_t * L_0 = ___value0;
		__this->set_U3CInnerExceptionU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6BDB542648A790323BB08E42C49A35F41A2597A4_gshared_inline (Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
